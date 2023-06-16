#include<stdio.h>
#include<math.h>

int main(){

int a1,a2,a3,a4;
float p1,p2,p3,p4;
scanf("%d %d", &a1, &a2);

a3= a1 + a2;
a4= a1 - a2;

scanf("%f %f", &p1, &p2);

p3= p1 + p2;
p4= p1 - p2;

printf("%d %d \n", a3, a4);
printf("%.1f %.1f", p3, p4);
return 0;

}

