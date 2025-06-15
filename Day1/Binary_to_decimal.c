#include <stdio.h>
int main()
{
  int binary_number = 11011;
  int value=1;
  int sum=0;
 
  while (binary_number>0){
      if (binary_number%10==1){
          sum+=value;
      }
      value*=2;
      binary_number=binary_number/10;
      
  }
  printf("%d",sum);
  return 0;
}
