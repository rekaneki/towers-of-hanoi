#include <iostream>
#include "Game.h"

using namespace uni;

using std::cout;
using std::endl;

Game::Game()
{
    // Initializing the game
    for (int i = 0; i < 3; i++)
    {
        Stack stackOfCubes;
        _stacks.push_back(stackOfCubes);
    }

    Cube blue(4, "blue");
    Cube orange(3, "orange");
    Cube purple(2, "purple");
    Cube yellow(1, "yellow");

    _stacks[0].push_back(blue);
    _stacks[0].push_back(orange);
    _stacks[0].push_back(purple);
    _stacks[0].push_back(yellow);
}

void Game::solve(unsigned solution)
{
    switch (solution)
    {
    case 1:
        Game::solve_first();
        break;

    case 2:
        Game::solve_second();
        break;
    }
}

// Solution one
void Game::solve_first()
{
    // TODO -- implemet solving first algorithm
    while (_stacks[2].size() != 4)
    {
        _legalMove(0, 1);
        _legalMove(0, 2);
        _legalMove(1, 2);
    }
}

void Game::_legalMove(unsigned position_a, unsigned position_b)
{
    if (_stacks[position_a].size() == 0 && _stacks[position_b].size() > 0)
    {
        _move(position_b, position_a);
    }
    else if (_stacks[position_a].size() > 0 && _stacks[position_b].size() == 0)
    {
        _move(position_a, position_b);
    }
    else if (_stacks[position_a].size() > 0 && _stacks[position_b].size() > 0)
    {
        if (_stacks[position_a].peekTop().getLength() < _stacks[position_b].peekTop().getLength())
        {
            _move(position_a, position_b);
        }
        else
        {
            _move(position_b, position_a);
        }
    }
}

void Game::_move(unsigned position_a, unsigned position_b)
{
    _moveCube(_stacks[position_a], _stacks[position_b]);
}

// Solution two
void Game::solve_second()
{
    _move(0, _stacks[0].size() - 1, _stacks[0], _stacks[2], _stacks[1]);
}

void Game::_move(unsigned start, unsigned end, Stack &source, Stack &target, Stack &spare)
{
    if (start == end)
    {
        _moveCube(source, target);
        cout << *this << endl;
    }
    else
    {
        _move(start + 1, end, source, spare, target);
        _move(start, start, source, target, spare);
        _move(start + 1, end, spare, target, source);
    }
}

void Game::_moveCube(Stack &stack_one, Stack &stack_two)
{
    Cube cube = stack_one.removeTop();
    stack_two.push_back(cube);
}

std::ostream &
operator<<(std::ostream &os, const Game &game)
{
    for (unsigned i = 0; i < game._stacks.size(); i++)
    {
        os << "Stack[" << i << "]: " << game._stacks[i];
    }

    return os;
}