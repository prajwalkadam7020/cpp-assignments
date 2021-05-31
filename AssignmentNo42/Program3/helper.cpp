//Write generic program to accept N values from user and return addition of that values. 
#include<iostream>
using namespace std;

template<class T> 
T AddN(T *arr, int iSize) 
{ 
 T sum=0;  
 for(int i = 0;i<iSize;i++) 
 { 
 sum = sum + arr[i]; 
 } 
 return sum; 
} 
int main() 
{ 
    int iRet=0;
 int arr[] = {10,20,30,40,50}; 
 float brr[] = {10.0,3.7,9.8,8.7}; 

 iRet = AddN(arr,5); 
 printf("%d\n",iRet);

float fSum = AddN(brr,4); 
 printf("%f\n",fSum); 
 return 0; 
}