#include <iostream>
#include "classes/Game.h"

using namespace uni;

using std::cout;
using std::endl;

int main()
{
	Game g;

	cout << "Initial game state: " << endl;
	cout << g << endl;

	cout << "--------------" << endl;

	g.solve(2);

	cout << "--------------" << endl;

	cout << "Final game state: " << endl;
	cout << g << endl;

	return 0;
}