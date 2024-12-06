#include<stdio.h>
int main(){
int a;
printf("Enter the num a:\n");
scanf("%d",&a);    
int b;
printf("Enter the num b:\n");
scanf("%d",&b);
int temp;
temp=a;
a=b;
b=temp;
printf("The value of a is %d\n",a);    
printf("The value of b is %d\n",b);
return 0;    
}
// OUTPUT-
// Enter the num a:
// 5
// Enter the num b:
// 9
// The value of a is 9
// The value of b is 5