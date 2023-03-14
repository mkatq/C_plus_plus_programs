#include<iostream>

using namespace std;
int main()
{
	int i , a=0 , b=9 , d=9 ,t=0 , h  ; string m = "*";
  cout << "Grade distribution:" << endl;
  cout << "Enter how many students get" << endl;
  int num[11];
  for(i=0;i<11;i++)
  {
  	if(b==109)
  	{
   	 b = b-9;
	}

  	cout << a  << " - " << b << ": "; cin >> num[i]; 
  	a+=10; 
  	b+=10;
  }
  
  for(i=0;i<11;i++)
  {
  	if(d==109)
  	{
   	 d = d-9;
	}
	
	cout << t  << " - " << d << ": ";
	
	for(h=0;h<num[i];h++)
	{
  	cout << "*"; 
    }
     cout << endl;
     
  	t+=10; 
  	d+=10;
  }
 	
	return 0;
}

