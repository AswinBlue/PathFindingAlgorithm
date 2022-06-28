#ifndef __MAZE_H__
#define __MAZE_H__

#include <iostream>
#include <chrono>
#include "Algorithm.h"

class Maze {
// 시작점이 1,0이고, 종료지점이 x-1,y+1 위치인 2 by 2 maze
public:
  Maze(int x, int y) {
    this.x = x;
    this.y = y;
    map = new int*[x+2]
    for (int i = 0; i < x+2; i++) {
      map[i] = new int[y+2];
    }
  }

~Maze() {
  freeMap();
}

void freeMap() {
  for (int i = 0; i < x+2; i++) {
      delete[] map[i];
  }
  delete[] map;
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

void setAlgorithm(Algorithm* alg) {
  this.alg = alg;
  this.alg.start_x = 1;
  this.alg.start_y = 0;
  this.alg.end_x = x-1;
  this.alg.end_y = y+1;
}

void findPath() {
  std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
  if (alg.check()) {
    alg.run(this.map);
    print();
  }
  std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

  std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
}

void createRandomMap() {
  freeMap();
  map = new int*[x+2];
  for (int i = 0; i < x+2; i++) {
    map[i] = new int[y+2];
  }
  
}

private:
  int x;
  int y;
  int **map;
  Algorithm *alg;

} 
#endif