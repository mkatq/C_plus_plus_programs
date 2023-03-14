#include<iostream>
using namespace std;
int main()

{
char oprator_char;
int n1 , n2 , resultnum;

cout << "Enter an oprator character(+ , - . * , / ) : ";
cin >> oprator_char;

switch(oprator_char)
{
    case '+':
        cout << "Enter two numbers: ";
        cin >> n1 >> n2; 
    	resultnum = n1 + n2;
    	cout << "= " << resultnum;
        break;
        
	case '-':
        cout << "Enter two numbers: ";
        cin >> n1 >> n2; 
    	resultnum = n1 - n2;
    	cout << "= " << resultnum;	
    	break;
    	
    case '*':
        cout << "Enter two numbers: ";
        cin >> n1 >> n2; 
    	resultnum = n1 * n2;
    	cout << "= " << resultnum;	
    	break;
    	
    case '/':
        cout << "Enter two numbers: ";
        cin >> n1 >> n2; 
    	resultnum = n1 / n2;
    	cout << "= " << resultnum;	
    	break;
}

return 0;		
}
