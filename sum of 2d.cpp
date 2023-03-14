#include<iostream>
using namespace std;
int main()
{
	int row , column , i ,j ; bool flag;
	
	cout << "matrex 1" << endl;
		
	cout << "\nHow many rows: " ; cin >> row; 
	cout << "How many column: "; cin >> column;
	
	int arr1[row][column] = {0};
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		  cout << "Enter matrex" << "[" << i << "]" << "[" << j << "] : "; cin >> arr1[i][j];	
		}
	}
	
		cout << "\nmatrex 2" << endl;

	cout << "\nHow many rows: " ; cin >> row; 
	cout << "How many column: "; cin >> column;
	
	int arr2[row][column] = {0};
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		  cout << "Enter matrex" << "[" << i << "]" << "[" << j << "] : "; cin >> arr2[i][j];	
		}
		
	}
	
	cout << "\nThe addition of two matrex is: " << endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		  if( arr2[i][j] == arr1[i][j])
		  {
		  	flag = 1;
		  }
		  else
		  {
		  	flag = 0;
		  }
		}
	
	}
	
	if(flag==1)
	{
		cout << "yes";
	}
	
	else
	{
		cout << "no";
	}
	

	return 0;
}
