/*
0 -> Left
1 -> Right
*/
#define DIRECTION 0

#if DIRECTION == 0
  #include "Left.hpp"
#elif DIRECTION == 1
  #include "Right.hpp"
#else
  #error Must be either 0 (left) or 1 (right)
#endif
