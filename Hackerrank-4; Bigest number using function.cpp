#include <stdio.h>

int max (int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max (int a, int b, int c, int d){
  int big;
  if ((a>b)&&(a>c)&&(a>d)) {
    big=a;
  }
  else if ((b>a)&&(b>c)&&(b>d)) {
    big=b;
  }
  else if ((c>a)&&(c>b)&&(c>d)) {
    big=c;
  }
  else if ((d>a)&&(d>b)&&(d>c)) {
    big=d;
  }
    return big;   
}