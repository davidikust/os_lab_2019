#include "find_min_max.h"

#include <limits.h>
#include <stdio.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = INT_MAX;
  min_max.max = INT_MIN;

  unsigned int i = 0;

  while(i < end)
  {
      if(min_max.min>array[i])
      {min_max.min=array[i];}

      if(min_max.max<array[i])
      {min_max.max=array[i];}
      i = i + 1;
  }
  
  return min_max;
}
