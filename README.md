# Towers of hanoi
Towers of Hanoi implementation in C++

## Description
For the game description you can visit [Tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi) page of wikipedia

## Algorithms
### Pattern alogrithm
First algorithms is using a patterm-based solution as we move the cubes with respect to their appropriate lengths,
according to the pattern
(rod[0] <--> rod[1])
(rod[0] <--> rod[2])
(rod[1] <--> rod[2])

### Recursive algorithm
Second algorithm is using a divide-and-conqure approach to divide the problem into smaller ones, till reaching the base case which consists of just one cube to move freely to the appropriate avaliable spots.
