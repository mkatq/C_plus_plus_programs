#include<iostream>
using namespace std;
int main()
{
	
int num = 1;

cout<< "If you are done click 0" << endl;
cout << "_________________________" << endl;

while(num != 0)
{
 cout << "\nEnter a number to check: "; cin >> num;
 
    if(num > 0)
      {
       cout << "\nThe number is POSITIVE\n";
      }	
 
    else if (num < 0)
       {
        cout << "\nThe number is NEGETIVE\n";	
       }

    else
       {
        cout << "\nThank you ^_^ ";	
       }

cout <<"\n........................."<< endl;

}	
	
return 0;		
}
