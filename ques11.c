#include <stdio.h>
int main() {
   int a,b,c,d;
   printf("Enter the number\n");
   scanf("%d",&a);
   b=a*10;
   printf("enter the number which want to append at unit place\n");
   scanf("%d",&d);
   c=b+d;
   printf("%d",c);
   return 0;
}
