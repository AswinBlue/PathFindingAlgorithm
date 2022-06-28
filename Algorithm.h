#ifndef __ALGORITHM_H__
#define __ALGORITHM_H__

// template of path finding algorithms
class Algorithm {
public:
  int start_x, start_y, end_x, end_y;
  // do one cycle calculation
  virtual void run(int** map);
  // check whether repeat more or stop
  virtual bool check();
}

#endif