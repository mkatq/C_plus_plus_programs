#include <iostream>
using namespace std;
int main()

{
int side1 , side2 , side3;

cout << "Enter Length of Three Sides of a Triangle separated by a space: \n";
cin >> side1 >> side2 >> side3;

   if(side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
     {
	  cout << "It is a Valid Triangle\n";
     }
  else 
     {
      cout << "It is an invalid Triangle\n";
     }
    
return 0;

}
