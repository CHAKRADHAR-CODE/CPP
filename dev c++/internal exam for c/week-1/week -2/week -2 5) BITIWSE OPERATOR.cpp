/*Bitwise Operators Objective: 
Learn how to work with bits (0,1) and bitwise operators.*/
#include <stdio.h>
void calculate_the_maximum(int n, int k) {
  int a=0,o=0,x=0;
  for(int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if((i&j)<k && (i&j)>a)
             a=i&j;
          if((i|j)<k && (i|j)>o)
             o=i|j;
          if((i^j)<k && (i^j)>x)
             x=i^j;
          printf("%d %d %d\n",a,o,x);
      }
  }
   printf("%d\n%d\n%d",a,o,x);  
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
/*Sample Input:
5 4

Sample Output:
2
3
3 */