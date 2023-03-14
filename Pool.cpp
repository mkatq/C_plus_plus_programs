#include<iostream>
using namespace std;
int main()

{
int x1,x2,x3,y1,y2,y3;
int LSH , RHS;

cout << "Enter the location of the cue ball: "; cin >> x1; cin >> y1 ;	
cout << "Enter the location of the ball to hit: "; cin >> x2 ; cin >> y2 ;		
cout << "Enter the location of the person: "; cin >> x3 ; cin >> y3 ;	

LSH =(y2-y1) * (x2-x1);
RHS =(y3-y1) * (x3-x1);

  if (LSH == RHS) 
    {
     cout << "\nWatch out, Spike! You're going to hit somebody!"; 
    }
    
  else
    {
     cout << "\nGo ahead, Spike. It looks clear.";
    }
  
return 0;

}
