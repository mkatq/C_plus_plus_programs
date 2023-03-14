#include<iostream>
#include<string>
using namespace std;
int main()
{
int i , c =0;
string a;

cout << "Enter a string: ";
getline(cin,a);

for(i=0;i<a.length();i++)
{
 switch(a.at(i))
 {
 	case 'A':
 	case 'a':
 	case 'E':
 	case 'e':
 	case 'U':
 	case 'u':
 	case 'I':
 	case 'i':
 	case 'O':
 	case 'o':
 	c++;
 	break;
		
 }	
}

   cout << "There are " << c << " vowels in an input string.";
   
return 0;
}
