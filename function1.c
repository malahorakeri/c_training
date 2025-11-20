// write a c function which will accept an array arr its size an n , returns the difference between the first and lost element
#include <stdio.h>
#include<stdlib.h>

int subarr(int arr[],int n)
{
    int sub = arr[0]-arr[n-1];
    return abs(sub);

}
void main()
{
int arr[3]={45,67,98};
int n=3;
printf("%d",subarr(arr,n));
}
