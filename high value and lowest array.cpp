#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i , max = 0 ; long int min = 1929203334;
	
	for(i=0;i<5;i++)
	{
	 cout << "Enter value number" << i+1 <<": "; cin >> arr[i];
	 
	 if(arr[i]>max)
	 {
	 	max = arr[i];
	 }
	 
	 if(arr[i]<min)
	 {
	 	min = arr[i];
	 }
	}
	
	cout << "The highest value: " << max << endl;
	cout << "The lowest value: " << min;
	
	
}
