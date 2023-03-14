#include<iostream>
using namespace std;
int main()

{
int n1 , n2 , n3 , goal_sum;
	
   cout << "Enter 3 positive integer number: ";
   cin >> n1 >> n2 >> n3 ;
  
   cout << "Enter the goal sum: ";
   cin >> goal_sum;
   
   
  
  if(n1 != n2 && n1 != n3 && n2 != n3 && n1+n2+n3==goal_sum)
  {
    cout << "Proper triplet";
  }

 else
  {
   cout << "Not a good triplet";	  	
  }
  
return 0;	
	
}
