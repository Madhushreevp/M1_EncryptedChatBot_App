#include<stdio.h>

long int findGCD(long int e,long int fn)
 {
  long int c=e,d=fn,r;
  while(d!=0) {
    r=c%d;
    c=d;
    d=r;
  }
  return c;
}
