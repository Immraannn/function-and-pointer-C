#include<stdio.h>
int main(){
int a=5;
int* x=&a;
printf("%p\n",&a);// %p se address print hota hai
printf("%p\n",x);    
printf("%d\n",*x);    
return 0;    
}
// OUTPUT-
// 0061FF18
// 0061FF18
// 5