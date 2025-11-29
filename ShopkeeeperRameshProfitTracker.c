#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,x=0,y=0;
    printf{"enter the line= "};
    scanf{"%d" ,&n};
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the values= ");
        scanf{"%d" ,&arr[i]};
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
         x=x+arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            y=y+arr[i];
            y=-y;
        }
    }
    int z=x-y;
    printf("total profit=%d\n",x);
    printf("total loss=%d\n",y);
    printf("net balance=%d",z);
    return 0;
}

    
    
