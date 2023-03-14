#include<iostream>
using namespace std;
int main()
{
	int num , sum , i ,a;
	cout << "Enter number: ";
	cin >> num;
	
	
	for(i=1;i<=num/2;i++)
	{
		a= num % i;
		if(a==0)
		{
			sum = sum + i;
		}
	}	
	
		
		if(sum==num)
		{
			cout << "N is a perfect number";
		}
		else
		{
		 cout << "N is not a perfect number";	
		}
	
	return 0;
}


