#include<iostream>
using namespace std;
int main()
{
	int i , b;
 string mesh = "welldone";
 
 mesh.length()/2;
 
 for(i=0;i<mesh.length()/2;i++)
 {
 	cout << mesh.at(i);
 }
 cout << endl;
 
 
 b = mesh.length()/2;
 for(b;b< mesh.length();b++)
 {
 	cout << mesh.at(b);
 }
 
 return 0;
 
 
}
