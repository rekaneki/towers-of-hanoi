#pragma once

#include <vector>
#include "Stack.h"

class Game
{
public:
	Game();
	void solve(unsigned solution);

	void solve_first();
	void _legalMove(unsigned position_a, unsigned position_b);
	void _move(unsigned position_a, unsigned postition_b);

	void solve_second();
	void _move(unsigned start, unsigned end, Stack &source, Stack &target, Stack &spare);
	void _moveCube(Stack &stack_one, Stack &stack_two);

	friend std::ostream &operator<<(std::ostream &os, const Game &game);

private:
	std::vector<Stack> _stacks;
};