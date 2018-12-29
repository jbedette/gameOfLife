#include <iostream>

/*
 * arr of arrs,
 * two instances
 *
    iterator(a);

    at each step in time:
    Any live cell with fewer than two
    live neighbours dies (referred to 
    as underpopulation or exposure[1]).

    Any live cell with more than three
    live neighbours dies (referred
    to as overpopulation or overcrowding).

    Any live cell with two or three live
    neighbours lives, unchanged, to the 
    next generation.

    Any dead cell with exactly three live
    neighbours will come
    to life
 */

struct matrix{
  matrix(int x, int y);
  ~matrix();
  void disp();
  int ** grid, x, y;
};

int iterator(matrix * & current, matrix * prev);
