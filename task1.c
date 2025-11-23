#include <stdio.h>
int climbstairs(int n);
int main(){
    int n;
    printf("Enter number of steps: ");
    scanf("%d", &n);
    
    int ways = climbstairs(n);
    printf("Number of ways: %d\n", ways);

    return 0;
}
int climbstairs(int n){
    if(n==0||n==1){
        return 1;
    }
    int a=1; // f(0)
    int b=1; // f(1)
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
