#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void add_arrays(int[] , int[] , int );

int main()
{
int arr1[10] , arr2[10] , i;

cout << "Enter values for arrays 1" << endl;
for(i=0;i<10;i++)
{
 cout << "value number " << "(" << i+1 << ") : "; cin >> arr1[i];
}

cout << "\nEnter values for arrays 2" << endl;
for(i=0;i<10;i++)
{
 cout << "value number " << "(" << i+1 << ") : "; cin >> arr2[i];
}

cout << "\nThe result" << endl;
add_arrays(arr1 , arr2 , 10);
 
return 0;
}

void add_arrays(int num1[] , int num2[] , int b)
{
  int i; 
  
  for(i=0;i<b;i++)
 {
  cout << "value number " << "(" << i+1 << ") : " << num1[i] + num2[i] << endl;	
 } 
	
}



