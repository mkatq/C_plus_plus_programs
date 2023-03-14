#include<iostream>
using namespace std;
int main()
{
bool flag;	
int num , i , sum;	
int a[b] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};	

cout << "Enter key to serch in Array: "; cin >> num;

for(i=0;i<a[b];i++)
{
	
 if(num==a[i])	
 {
 	sum = i;
 	flag = 1;
 }
}

if(flag==1)
{
	cout << "Key is found at index: " << sum;
}
else
{
	cout << "Key not found!";
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
