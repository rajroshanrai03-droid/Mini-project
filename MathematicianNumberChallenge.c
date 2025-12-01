Question 1: The Mathematician’s Number Challenge

Problem Story:
Riya, a young mathematician, loves playing with numbers. One day, she picks a number and wants to check two things:

Whether the number is prime or not.

Whether it is even or odd.
She wants your help to write a program that tells her both answers.
Task:
Write a program that takes an integer as input and:

Checks if it is a prime number or not.

Checks whether it is even or odd.

Input Format:
The first line contains one integer — the number to check.

Output Format:
Print two lines:
First line: "Prime Number" or "Not Prime"
Second line: "Even Number" or "Odd Number"


Example 1:
Input: 7
Output:
Prime Number
Odd Number

Example 2:
Input: 10
Output:
Not Prime
Even Number
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
