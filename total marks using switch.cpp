#include<iostream>
using namespace std;
int main()
{
   int n , numf , total;
   
   cout <<"Please select your class \n[1] First Class \n[2] Second Class \n[3] Third Class" << endl;
   cout << "Enter a class:"; cin >> n; 
   
   cout << "\nEnter the number of failed subjects: "; cin >> numf;
   
  
 switch(n)
 {
  
  case 1:
  {	
    if(numf > 5)
    {
     cout << "No bonus mark awarded";
    }
    else if (numf <= 5)
    {
      cout <<"You got 5 bonus mark per subject";
      
      total = numf * 5;
      cout << "\nTotal bonus mark: " << total;
	}
  }
  break;
  
  
  case 2:
  	{
  	   	 if(numf > 4)
    {
     cout << "No bonus mark awarded";
    }
    else if (numf <= 4)
    {
      cout <<"You got 4 bonus mark per subject";
      
      total = numf * 4;
      cout << "\nTotal bonus mark: " << total;
	}		
	}
	break;
  
  
  case 3:
  	
  	{
  		if(numf > 3)
    {
     cout << "No bonus mark awarded";
    }
    else if (numf <= 3)
    {
      cout <<"bonus is of 3 marks per subject.t";
      
      total = numf * 3;
      cout << "\nTotal bonus mark: " << total;
	}
	}
	break;
  
  
  default:
  	
  	cout << "Error";
  		
 }



	return 0;
}
