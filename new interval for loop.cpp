#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	cout << "years"<< "\tamount on deposit" << endl;
 
 float a; int i ;
 for(i=1;i<=10;i++)
 {
 	 a= 1000 * pow(1+0.05,i);
 	cout << i << setw(15) << fixed << setprecision(2) << a << endl;
 
 	                     
 }
 	
 
	return 0;
}

