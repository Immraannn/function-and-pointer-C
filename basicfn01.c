#include<stdio.h>
void greet(){
    printf("Good morning\n");
    printf("How are you?\n");
    return;
}
int main(){
greet();
greet();
greet();
return 0;    
}
// OUTPUT-
// Good morning
// How are you?
// Good morning
// How are you?
// Good morning
// How are you?