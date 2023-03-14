#include <iostream>
using namespace std;
int main()

{
int timework;	
cout << "Please enter time spent to finsh a job: ";
cin >> timework;

   if (timework >= 1 && timework <= 3)
    {
	cout << " You belong to category 1\n";
	cout << " highly efficient";
    }
    
   else if (timework >= 4 && timework <= 5)
    {
	cout << " You belong to category 2\n";
	cout << " improve speed";
    }
    
   else if (timework >= 6 && timework <= 8)
    {
	cout << " You belong to category 3\n";
	cout << " training is recommended";
    }
    
    else 
    {
	cout << " You belong to category 4\n";
	cout << " is better to leave the company";
    }

return 0;

}
