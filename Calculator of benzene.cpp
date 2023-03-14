#include <iostream>
#include<iomanip>
using namespace std;
int main()

{
	int type ;
	float liters;
    float bill ; 
    
cout << "{Please select the type of BENZENE to calcualte}" << endl;
cout << "If you want type 91 click (1) or type 95 click (2): " ; cin >> type;


   if (type == 1)
    
       {
	     	cout << "Enter the liters: "; cin >> liters ;
		
	        bill = (liters * 1.81);
	
	        cout << " The cost is " << fixed << setprecision(2) << bill << " SAR";
	
       }
    
    
else if (type == 2) 
       {
    	
   	        cout << "Enter the liters: "; cin >> liters ;
   		
        	bill = (liters * 1.95);
	
	        cout << " The cost is " << fixed << setprecision(2) <<  bill << " SAR";
   	
	    }   
   
return 0;
	
}
