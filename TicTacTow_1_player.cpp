#include <iostream>
#include<cstring>
#include<stdlib.h>
#include<ctime>
using namespace std;

char B[9]={'1','2','3','4','5','6','7','8','9'};
void board(int t,char a);
bool win(char c);
int main()
{
  int turn=0,count=0,t;
  string p1,p2="Computer";
  cout<<"Welcome to Tic-Tac-Tow Game.\n\n";
  cout<<"Player1 please enter your name:";
  cin>>p1;
//  cout<<"Player2 please enter your name:";
//  cin>>p2;
  system("clear");
  board(0,'1');
  while(count<9)
  {
     count++;
     if(turn%2==0)
     {
       cout<<"\n"<<p1<<" your Turn:";
       cin>>t;
       while(B[t-1]=='O' || B[t-1]=='X' || t>9 || t<1){
         cout<<"Please Enter a valid choice:";
         cin>>t;
       }
       system("clear");
       board(t-1,'O');
       if(win('O')==1)
       {
         cout<<"congratulations "<<p1<<" you win.\n";
           return 0;
       }

     }
     else
     {
       //cout<<p2<<" your Turn:\n";
       srand((unsigned) time(0));
       t=rand()%10;
       while(B[t-1]=='O' || B[t-1]=='X' || t>9 || t<1){
//         cout<<"Please Enter a valid choice:";
           t=rand()%10;
       }
       system("clear");
       board(t-1,'X');
       if(win('X')==1)
       {
         cout<<p2<<" win.\n";
           return 0;
       }
     }
     turn++;
  }
  cout<<"The game is draw.\n";
  return 0;
}

//Defining the bord function to display board.
void board(int t,char a){
B[t]=a;
cout<<"\n\n|-----|-----|-----|\n";
printf("|  %c  |  %c  |  %c  |\n",B[0],B[1],B[2]);
cout<<"|-----|-----|-----|\n";
printf("|  %c  |  %c  |  %c  |\n",B[3],B[4],B[5]);
cout<<"|-----|-----|-----|\n";
printf("|  %c  |  %c  |  %c  |\n",B[6],B[7],B[8]);
cout<<"|-----|-----|-----|\n";
}

bool win(char c){
//cout<<"win";
if((B[0]==B[1] && B[1]==B[2] && B[2]==c ) || (B[3]==B[4] && B[4]==B[5] && B[5]==c) || (B[6]==B[7] && B[7]==B[8] && B[8]==c))
  return 1;
else if((B[0]==B[3] && B[3]==B[6] && B[6]==c) || (B[1]==B[4] && B[4]==B[7] && B[7]==c) || (B[2]==B[5] && B[5]==B[8] && B[8]==c))
  return 1;
else if((B[0]==B[4] && B[4]==B[8] && B[8]==c) || (B[2]==B[4] && B[4]==B[6] && B[6]==c))
  return 1;
else
  return 0;
}
