#include <iostream>
using namespace std;
int main()
{

int num1 , num2 , max;

cout << "Enter two positive integers:";
cin >> num1 >> num2 ;
 
max = (num1 >num2 ) ? num1 : num2 ; 

while(1) 
{
    if(max % num1== 0 && max % num2 == 0 )
     { 
       cout << "LCM of " << num1 << " and " << num2 << " is " << max;
       break;
     }
       ++max;
}

return 0;

}
