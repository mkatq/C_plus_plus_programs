#include<iostream>
using namespace std;
int main()
{
	int i;
	int arr[10];
	
	cout << "Enter the Element:" << endl;
	
	for(i=0;i<10;i++)
	{
	  cin >> arr[i];	
	}
	
	cout << "\nThe original array is:" << endl;
	
	for(i=0;i<10;i++)
	{
	  cout << arr[i] << " ";	
	}
	  cout << endl;
	cout << "\nThe Reverse of Given Array is:" << endl;
	
	for(i=9;0<=i;i--)
	{
		if(arr[i]<-1)
		{
			arr[i] = arr[i]*-1;
		}
	  cout << arr[i] << " ";	
	}
	
	return 0;
}
