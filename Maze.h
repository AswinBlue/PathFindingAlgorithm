#ifndef __MAZE_H__
#define __MAZE_H__

#include <iostream>

class Maze {
// 시작점이 1,1이고, 종료지점이 x-1,y-1 위치인 2 by 2 array
public:
  Maze(int x, int y) {
    this.x = x;
    this.y = y;
    map = new int[x+2][y+2];
  }

~Maze() {
  delete map;
}

void print() {
  for (int i = 0; i <x; i++) {
    for (int j = 0; j <y; y++){
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void createRandomMap() {
  
}

private:
  int x;
  int y;
  int **map;


} 
#endif