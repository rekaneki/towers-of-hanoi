#include "Stack.h"

#include <exception>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;
using uni::Cube;

void Stack::push_back(const Cube &cube)
{
    // Ensure that we do not push a cube on top of a smaller cube:
    if (size() > 0 && cube.getLength() > peekTop().getLength())
    {
        cerr << "A smaller cube cannot be placed on top of a larger cube." << endl;
        cerr << "  Tried to add Cube(length=" << cube.getLength() << ")" << endl;
        cerr << "  Current stack: " << *this << endl;

        throw std::runtime_error("A smaller cube cannot be placed on top of a larger cube.");
    }
    _cubes.push_back(cube);
}

Cube Stack::removeTop()
{
    Cube cube = peekTop();
    _cubes.pop_back();
    return cube;
}

Cube &Stack::peekTop()
{
    return _cubes[_cubes.size() - 1];
}

unsigned Stack::size() const
{
    return _cubes.size();
}

std::ostream &operator<<(std::ostream &os, const Stack &stack)
{
    for (unsigned i = 0; i < stack.size(); i++)
    {
        os << stack._cubes[i].getLength() << " ";
    }
    os << endl;
    return os;
}