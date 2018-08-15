#include<iostream>
#include<cstring>
#include<stdlib.h>

char check[10] = {'/0','a','b','c','d','e','f','g','h','i'};
int inputNumber=0, playMore;
using namespace std;


class ticTacToe{

public:
    string player1, player2, player; int len1, len2;
    char key;

    void welcomeScreen();
    void playersInfo();
    int interface();
    int input();
    int winner();

};

//welcome screen
void ticTacToe::welcomeScreen(){

    cout<<"\t"<<char(201)<<string(20,char(205))<<char(187)<<endl;
    cout<<"\t"<<char(186)<<"\t\t     "<<char(186)<<endl;
    cout<<"\t"<<char(186)<<"   TIC - TAC -TOE   "<<char(186)<<endl;
    cout<<"\t"<<char(186)<<"\t\t     "<<char(186)<<endl;
    cout<<"\t"<<char(200)<<string(20,char(205))<<char(188)<<endl;

}

//Layout of the game
    int ticTacToe::interface(){
cout<<"\t     "<<char(219)<<"\t   "<<char(219)<< endl;
cout<<"\t  " << check[1] << "  "<<char(219)<<"  " << check[2] << "  "<<char(219)<<"  " << check[3] << endl;
cout<<"\t"<<string(5,char(220))<<char(219)<<string(5,char(220))<<char(219)<<string(5,char(220))<< endl;
cout<<"\t     "<<char(219)<<"\t   "<<char(219)<<"\t" << endl;
cout<<"\t  " << check[4] << "  "<<char(219)<<"  " << check[5] << "  "<<char(219)<<"  " << check[6] << endl;
cout<<"\t"<<string(5,char(220))<<char(219)<<string(5,char(220))<<char(219)<<string(5,char(220)) << endl;
cout<<"\t     "<<char(219)<<"     "<<char(219)<<"     " << endl;
cout<<"\t  " << check[7] << "  "<<char(219)<<"  " << check[8] << "  "<<char(219)<<"  " << check[9] << endl;
cout<<"\t     "<<char(219)<<"\t   "<<char(219)<<"\t" << endl << endl;
return 0;
}


//Players name

void ticTacToe::playersInfo(){


cout<<"   Enter the name of 1st player: "; getline(cin, player1);
cout<<"   Enter the name of 2nd player: "; getline(cin, player2);
cout<<endl<<endl;
len1=player1.length();
len2=player2.length();
cout<<"\t";
for(int j=0; j<len1; j++){
    player1[j]=toupper(player1[j]);
    cout<<player1[j];
    }
    cout<<"(X)  V/S  ";

for(int j=0; j<len2; j++)
{
  player2[j]=toupper(player2[j]);
  cout<<player2[j];
}
cout<<"(O)";
cout<<endl<<endl;

}



//Running the game
int ticTacToe::input(){

        //changing the name while the players move

     position1: if(inputNumber%2==0){
    player=player1;
    cout<<"\t   "<<player<<"'s Move:";
    cin>>key;

     switch(key){
case 'a':
    if(check[1]!='O' && check[1]!='X')       //checks if you are entering the same values
    check[1]='X';
    else
        goto def1;
    break;
case 'b':
    if(check[2]!='O' && check[2]!='X')
    check[2]='X';
    else
        goto def1;
    break;
case 'c':
    if(check[3]!='O' && check[3]!='X')
        check[3]='X';
        else
        goto def1;
break;
case 'd':
    if(check[4]!='O' && check[4]!='X')
        check[4]='X';
        else
        goto def1;
break;
case 'e':
    if(check[7]!='O' && check[5]!='X')
        check[5]='X';
        else
        goto def1;
break;
case 'f':
    if(check[8]!='O' && check[6]!='X')
        check[6]='X';
        else
        goto def1;
break;
case 'g':
    if(check[7]!='O' && check[7]!='X')
        check[7]='X';
        else
        goto def1;
break;
case 'h':
    if(check[8]!='O' && check[8]!='X')
        check[8]='X';
        else
        goto def1;
break;
case 'i':
    if(check[9]!='O' && check[9]!='X')
        check[9]='X';
        else
        goto def1;
break;
def1: default:
    cout<<"\t   INVALID MOVE."<<endl;
    goto position1;
     }
      }
      else position2: if(inputNumber%2==1){
    player=player2;
    cout<<"\t   "<<player<<"'s Move:";
    cin>>key;

    switch(key){
case 'a':
    if(check[1]!='O' && check[1]!='X')
        check[1]='O';
        else
        goto def2;
break;
case 'b':
    if(check[2]!='O' && check[2]!='X')
        check[2]='O';
        else
        goto def2;
break;
case 'c':
    if(check[3]!='O' && check[3]!='X')
        check[3]='O';
        else
        goto def2;
break;
case 'd':
    if(check[4]!='O' && check[4]!='X')
        check[4]='O';
        else
        goto def2;
break;
case 'e':
    if(check[5]!='O' && check[5]!='X')
        check[5]='O';
        else
        goto def2;
break;
case 'f':
    if(check[6]!='O' && check[6]!='X')
        check[6]='O';
        else
        goto def2;
break;
case 'g':
    if(check[7]!='O' && check[7]!='X')
        check[7]='O';
    else
        goto def2;
break;
case 'h':
    if(check[8]!='O' && check[8]!='X')
        check[8]='O';
    else
        goto def2;
break;
case 'i':
    if(check[9]!='O' && check[9]!='X')
        check[9]='O';
    else
        goto def2;
break;
def2: default:
    cout<<"\t   INVALID MOVE"<<endl;
    goto position2;
    }
      }

return 0;
}

//Deciding the winner of the game
int ticTacToe::winner(){

    if((check[1]==check[2] && check[1]==check[3] && check[2]==check[3]) ||    //check rows
        (check[4]==check[5] && check[4]==check[6] && check[5]==check[6])||
        (check[7]==check[8] && check[7]==check[9] && check[8]==check[9])||

        (check[1]==check[4] && check[1]==check[7] && check[4]==check[7])||  //check columns
        (check[2]==check[5] && check[2]==check[8] && check[5]==check[8])||
        (check[3]==check[6] && check[3]==check[9] && check[6]==check[9])||

        (check[1]==check[5] && check[1]==check[9] && check[5]==check[9])||   //check diagonals
        (check[3]==check[5] && check[3]==check[7] && check[5]==check[7])){
        return 1;
        }

    else if (check[1] != 'a' && check[2] != 'b' && check[3] != 'c' && check[4] != 'd' && check[5] != 'e' && check[6] != 'f' && check[7] != 'g' && check[8] != 'h' && check[9] != 'i')
        return -1;
    else
        return 0;
}

int main(){
    int w;
ticTacToe obj;
obj.welcomeScreen();
obj.playersInfo();

    do{

        obj.interface();
do {
    obj.input();
    obj.interface();
    obj.winner();
    w = obj.winner();
    inputNumber++;

 }while(w==0);   //looping input if noone wins


        if(w==1){         //checking the winner
            if(inputNumber%2==1){
            cout<<"\t   "<<obj.player1<<" Wins!"<<endl;}
        else if(inputNumber%2==0){
            cout<<"\t   "<<obj.player2<<" Wins!"<<endl;}
        }else if(w==-1){
        cout<<"\t   The Game is a Draw."<<endl;
        }

    for(int i=1; i<10; i++)           //reseting the values if players want to play again
            check[i]=char(96+i);
        inputNumber=0;

    cout<<"Press 1 to play again and 2 to exit the game: "; cin>>playMore; cout<<endl<<endl;
    }while(playMore==1);


if(playMore==2)
     cout<<"\t   Goodbye!! Have a cheerful day."<<endl;
    else
        cout<<"\t   INVALID CHOICE"<<endl;

return 0;
}
