Problem Title: Shopkeeper Ramesh’s Profit Tracker 💰
🧩 Story:

Ramesh owns a small grocery shop in his town.
He keeps a record of his daily profit or loss for a week in an array.

If the value is positive, it means he made a profit that day.

If the value is negative, it means he had a loss that day.

At the end of the week, Ramesh wants to know:

His total profit (sum of all positive values)

His total loss (sum of all negative values, as a positive number)

His net balance (profit + loss, considering signs)

Help Ramesh write a program to calculate these values.

Problem Statement:

Given an array records[] of size n, where each element represents the daily profit or loss,
find and print the total profit, total loss, and net balance.

Input Format:

The first line contains an integer n — number of days.

The second line contains n space-separated integers representing profit or loss on each day.

Output Format:

Print three lines:

Total Profit: X
Total Loss: Y
Net Balance: Z


Where:

X → sum of all positive numbers

Y → sum of all negative numbers converted to positive value

Z → X − Y

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

    
    

