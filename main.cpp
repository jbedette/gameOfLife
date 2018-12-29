#include "head.h"

int main(){
  matrix * a = new matrix(5,5);
  ++a->grid[2][2];
  ++a->grid[1][2];
  ++a->grid[3][2];
  a->disp();
  matrix * b = a;
  for(int i = 3; i > 0; --i){
    a = new matrix(5,5);
    iterator(a,b);
    a->disp();
    delete b;
    b = a;
  } 
  delete a;
  return 0;
}

int iterator(matrix * & current, matrix * prev){
  int count = 0;
  int x = current->x;
  int y = current->y;
  for (int i = 0; i < x; ++i){
    for (int ii = 0; i < y; ++i){
      int hp = 0;
      if(i != 0 && prev->grid[i-1][ii]){
        ++hp;
      }
      if(i < x && prev->grid[i+1][ii]){
        ++hp;
      }
      if(ii !=0 && prev->grid[i][ii-1]){
        ++hp;
      }
      if(ii < y && prev->grid[i][ii+1]){
        ++hp;
      }
      if(hp > 1 && hp < 4){
        ++current->grid[i][ii];
        ++count;
      }
    }
  }
  return count;
}
