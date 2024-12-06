#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
int a,b;
printf("Enter the 1st num");
scanf("%d",&a);    
printf("Enter the 2nd num");
scanf("%d",&b);
int sum=add(a,b);
printf("%d",sum);    
    return 0;
}
// OUTPUT-
// Enter the 1st num3
// Enter the 2nd num7
// 10
//    *************************************************************
//               #include<math.h>
//SQRT FUNCTION->sqrt(a); int root=sqrt(a);
//POWER function ->int p=pow(3,3)