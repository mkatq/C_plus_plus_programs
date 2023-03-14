#include<iostream>

using namespace std;

int main()
{
int x1,x2,x3,y1,y2,y3;
float p1 , p2;

cout << "{Please enter x1 space y1 like (1 1) and so on}" << endl;

cout << "\nEnter frist point (x1,y1): " ; cin >> x1; cin >> y1 ;	
cout <<  "\nEnter second point (x2,y2): " ; cin >> x2 ; cin >> y2 ;		
cout << "\nEnter third point (x3,y3): " ; cin >> x3 ; cin >> y3 ;	

p1=(y2-y1) / (x2-x1);
p2=(y3-y1) / (x3-x1);

cout << (p1==p2? "on stight line" : "isn't on stight line" );

return 0;
}
