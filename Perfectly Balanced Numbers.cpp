#include<iostream>
using namespace std;
int main()

{
	int n1 , n2 , n3;
	 
	 cout <<"Please enter three integer values: ";
	 cin >> n1 >> n2 >> n3;
	 
	 if ((n1>=1 && n1 <=100)&&(n2>=1 && n2 <=100)&&(n3>=1 && n3 <=100))
	    {
	 
	       if(n1<n2 && n2<n3)
	          {
	         	cout << "Yes";
	          }
	      else
	          {
	   	       cout << "No";
	          }
        }
     
     else 
     {
     	cout << "\nTry again the numbers should (1 >= n <= 100)";
	 }
	
	
	return 0;
	
}
