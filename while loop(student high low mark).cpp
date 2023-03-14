#include<iostream>
using namespace std;
int main()
{
	int x=1, num , n,comh=0 , coml= 999; double average , sum=0;
	
	cout << "How many student do you want: "; cin >> n; 
	cout <<"________________________________";
	while(x<=n)
	{
	  cout << "\nEnter the grades for student number " << "("<< x <<"): "; cin >> num;
	  if(num >= 0 && num <= 100)
	{
	  sum+=num;
	  x++;	
	  
	  if(num > comh)
	  {
	  	comh=num;
	  }
	  
	  if(num < coml)
	  {
	  	coml=num;
	  }
	  
    }
       else
	   {
		cout << "\nTHE NUMBER MUST 0-100" << endl;
	   }
    } 
	  
	average= sum/n;
	
	cout << "\nThe total grade: " << sum;
	cout << "\nThe average: " << average;
	cout << "\nThe highest grade is: " << comh;
	cout << "\nThe lowest grade is: " << coml;
	
	return 0;
}

