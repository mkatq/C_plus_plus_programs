#include<iostream>
using namespace std;
int main()
{
 int arr[10];
 int sum1 = 0, sum2=0, i;
 for(i=0;i<10;i++)
 {
 	cout << "Enter number " <<  "(" << i+1 << ") "; cin >> arr[i];
 	
 	if(arr[i]>0)
	 {
	 	sum1++;
	 } 
	 else if (arr[i]<0)
	 {
	 	sum2++;
	 }
 }
 
 cout <<"Number of positive: " << sum1 << endl;
 cout << "Number of negative: " << sum2;
}
