#include<stdio.h>
int main (){
    int n;
    int a=0;
    printf("enter the number = ");
    scanf("%d",&n);
    if(n==1){
        printf("not prime");
        return 0;
    }
    for (int i=2; i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("number is prime\n");
    }
    else{
        printf("number is not prime\n");
    }
    if (n%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    return 0;
}