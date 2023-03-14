#include<iostream>
using namespace std;

void mesh (int , char);

int main()
{
	int num;
	char sym;
	cout << "Enter the numbers of row:";
	cin >> num;
	
	cout << "Enter the shape that you want:";
	cin >> sym;
	
	mesh(num,sym);
	 
 
}

void mesh(int numm , char symm)
{
int i , j;
 for(i=1;i<=numm;numm--)
 {
 	for(j=1;j<=numm;j++)
 	{
 		cout << symm << " ";
	}
 	
 	cout << "\n";
 }		
	
}
