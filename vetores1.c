#include <stdio.h>
int main()
{
  int v[5];
  float m;
  v[0]=20;
  v[1]=40;
  v[2]=30;
  v[3]=50;
  v[4]=10;
  m = (v[0] + v[1] + v[2] + v[3] + v[4])/5;
  printf("A média é: %.0f", m);
}
