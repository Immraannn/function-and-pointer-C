#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
int n;
printf("Enter n:");
scanf("%d",&n); 
int r;   
printf("Enter r:");
scanf("%d",&r);
int nfact=factorial(n);
int rfact=factorial(r);
int nrfact=factorial(n-r);
int ncr=nfact/rfact*(nrfact);
//int ncr=
printf("%d",ncr);
return 0;}