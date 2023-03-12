#include<iostream>
using namespace std;
int main()

{
	
int num , Riyal , Nus , Rubo , Qirish , Halala;
float dec_num;

cout << "Enter a number to check: "; cin >> dec_num;
 
 
num = 100*dec_num; 

Riyal =(num/100);

Nus =(num % 100/50);

Rubo =(num % 50/25);

Qirish =(num % 25/5);

Halala =(num % 5/1);

cout << Riyal <<" Riyal" << endl;
cout << Nus <<" Nus Riyal" << endl;
cout << Rubo <<" Rubo Riyal" << endl;
cout << Qirish <<" Qirish" << endl;
cout << Halala <<" Halala" << endl;


return 0;	
	
}



