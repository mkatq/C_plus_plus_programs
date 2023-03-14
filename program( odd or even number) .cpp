#include<iostream>
using namespace std;
int main()

{
	
 int num;
 
 cout <<"Please enter a number to check if (even or odd): ";
 cin >> num;
 
 if(num >=1)
  {
     switch(num%2)
    {
     case 0:
     cout << "is an even number";
     break;
 
     default:
     cout << "is an odd number";	
    } 
  }
 
 else 
     {
      cout << "\nEroor! it should be an integer positve number";
     }
     
     
 return 0;
	
}
