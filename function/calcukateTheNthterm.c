#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if(n ==1){
      return a;
  }
  if( n ==2){
      return b;
  }
  if(n ==3){
      return c;
  }
  return find_nth_term(n-1, a, b, c)+ find_nth_term(n-2, a, b , c)+ find_nth_term(n-3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}