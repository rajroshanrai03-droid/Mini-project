#include<stdio.h>
int main(){
    int n, i, total = 0;
    float average;
    scanf("%d" , &n);
    int marks [n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }
    average = total / n;
    printf("Total Marks = %d\n" , total);
    printf("Average Marks = %f\n" , average);
    return 0;
}