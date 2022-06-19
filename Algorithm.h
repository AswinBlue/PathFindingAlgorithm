#ifndef __ALGORITHM_H__
#define __ALGORITHM_H__

// template of path finding algorithms
class Algorithm {
public:
  virtual run(int start_x, int start_y, int end_x, int end_y);
}

#endif