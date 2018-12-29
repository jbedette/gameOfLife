#include "head.h"

matrix::matrix(int x, int y){
  x = x;
  y = y;
  grid = new int*[x];
  for (int i = 0; i < x; ++i){
    grid[i] = new int[y];
    for (int ii = 0; ii < y; ++ii){
      grid[i][ii] = 0;
      std::cout << grid[i][ii] << ' ';
    }
    std::cout << '\n';
  }
  std::cout << x << ' ' << y;
}

matrix::~matrix(){
  for(int i = 0; i < x; ++i){
    delete grid[i];
  }
  delete grid;
}
void matrix::disp(){
  for (int i = 0; i < x; ++i){
    for (int ii = 0; ii < y; ++ii){
      std::cout << grid[i][ii] << ' ';
    }
    std::cout << '\n';
  }
}
