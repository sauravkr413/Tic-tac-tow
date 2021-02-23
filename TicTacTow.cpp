#include <iostream>
#include<cstring>
using namespace std;

void board(int t);
bool win(string s);
int main()
{
  int turn=1,count=0,t;
  string p1,p2;
  cout<<"Welcome to Tic-Tac-Tow Game.\n\n";
  cout<<"Player1 please enter your name:";
  cin>>p1;
  cout<<"Player2 please enter your name:";
  cin>>p2;
  while(count<9 || !win(p1) || !win(p2))
  {
     if(turn%2==0)
     {
       cout<<p1<<" your Turn:\n";
       cin>>t;
       board(t);
     }
     else
     {
       cout<<p2<<" your Turn:\n";
       cin>>t;
       board(t);
     }
     turn++;
     count++;
  }

  board(0);
  return 0;
}

//Defining the bord function to display board.
void board(int t){
cout<<"\n\n|-----|-----|-----|\n";
cout<<"|  1  |  2  |  3  |\n";
cout<<"|-----|-----|-----|\n";
cout<<"|  4  |  5  |  6  |\n";
cout<<"|-----|-----|-----|\n";
cout<<"|  7  |  8  |  9  |\n";
cout<<"|-----|-----|-----|\n";
}

bool win(string s){
return 1;
}
