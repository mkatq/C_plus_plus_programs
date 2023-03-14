#include<iostream>
#include<iostream>
using namespace std;
int main()
{
 int i;
 string a;
 cin >> a;
 
 int b = a.length();
 
 for(i=0;i<b;i++)
 {
 	char w = a.at(i);
 	
 	switch(w)
 	{
 		case '0':
 		cout << "\ngood";
 		break;
 		
 		case '9':
 			cout << "\ngood";
 		break;
 		
	 }
 }
 

	
	return 0;
}

