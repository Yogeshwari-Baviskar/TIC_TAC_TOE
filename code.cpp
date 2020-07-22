#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Board{
  protected:
	char board[9];
  public:
	void intialise();
	void display();
	int boardempty();
	void setboard(int ,char );
	int checkwin();
	int checkcross();
	int checkO();
	void lastchoice();
};
class UserComp:public Board{
	char choice;
  public:
	void user();
	void comp();
	void comp1();
};
//Computer has mark 'X' and user has mark 'O'

class Player:public Board{
	int player;
	string player_name[2];
  public:
  	char mark;
  	int choice;
  	void initplayer();
  	void playername();
  	int getplayer();
  	void setplayer(int a);
  	string getname();
  	void play();
  	
};
void Board::intialise(){
	int i;
	char intialise[]={'0','1','2','3','4','5','6','7','8'};
	for(i=0;i<9;i++){
		board[i]=intialise[i];
	}
}
void Board::display(){
	system("cls");
    cout<<"\n\n"; 	 
   	cout<<"\t\t\t  "<<board[0]<<" | "<<board[1]<<"  | "<<board[2]<<endl; 
   	cout<<"\t\t\t--------------\n"; 
   	cout<<"\t\t\t  "<<board[3]<<" | "<<board[4]<<"  | "<<board[5]<<endl; 
   	cout<<"\t\t\t--------------\n"; 
   	cout<<"\t\t\t  "<<board[6]<<" | "<<board[7]<<"  | "<<board[8]<<endl; 
}
int Board::boardempty(){
	for (int i=0; i<9; i++) 
    	{ 
          	if(board[i]== 'X'||board[i]=='O'){
            		return 0;
			}
		}	
		return 1;
}
void Board::setboard(int a,char b){
	board[a]=b;
}
int Board::checkwin(){
	if(board[0]==board[1]&&board[1]==board[2])
			return 1;
	else if(board[3]==board[4]&&board[4]==board[5])
			return 1;
	else if(board[6]==board[7]&&board[7]==board[8])
			return 1;
	else if(board[0]==board[4]&&board[4]==board[8])
			return 1;
	else if(board[2]==board[4]&&board[4]==board[6])
			return 1;
	else if(board[0]==board[3]&&board[3]==board[6])
			return 1;
	else if(board[1]==board[4]&&board[4]==board[7])
			return 1;
	else if(board[2]==board[5]&&board[5]==board[8])
			return 1;
	else if(board[1] !='1'&& board[2]!='2'&& board[3]!='3'&& board[4]!='4'&& board[5]!='5'&& board[6]!='6'&& board[7]!='7'&& board[8]!='8'&& board[0]!='0')
			return 0;
	else
			return -1;
}
int Board::checkcross(){
	if(board[0]=='X'&&board[3]=='X'){
		if(board[6]=='6'){
			board[6]='X';
			return 1;
		}
	}
	if(board[0]=='X'&&board[6]=='X'){
		if(board[3]=='3'){
			board[3]='X';
			return 1;
		}
	}
	if(board[3]=='X'&&board[6]=='X'){
		if(board[0]=='0'){
			board[0]='X';
			return 1;
		}
	}
	if(board[1]=='X'&&board[4]=='X'){
		if(board[7]=='7'){
			board[7]='X';
			return 1;
		}
	}
	if(board[1]=='X'&&board[7]=='X'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='X'&&board[7]=='X'){
		if(board[1]=='1'){
			board[1]='X';
			return 1;
		}
	}
	if(board[2]=='X'&&board[5]=='X'){
		if(board[8]=='8'){
			board[8]='X';
			return 1;
		}
	}
	if(board[2]=='X'&&board[8]=='X'){
		if(board[5]=='5'){
			board[5]='X';
			return 1;
		}
	}
	if(board[5]=='X'&&board[8]=='X'){
		if(board[2]=='2'){
			board[2]='X';
			return 1;
		}
	}
	if(board[0]=='X'&&board[4]=='X'){
		if(board[8]=='8'){
			board[8]='X';
			return 1;
		}
	}
	if(board[0]=='X'&&board[8]=='X'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='X'&&board[8]=='X'){
		if(board[0]=='0'){
			board[0]='X';
			return 1;
		}
	}
	if(board[2]=='X'&&board[4]=='X'){
		if(board[6]=='6'){
			board[6]='X';
			return 1;
		}
	}
	if(board[2]=='X'&&board[6]=='X'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='X'&&board[6]=='X'){
		if(board[2]=='2'){
			board[2]='X';
			return 1;
		}
	}
	if(board[0]=='X'&&board[1]=='X'){
		if(board[2]=='2'){
			board[2]='X';
			return 1;
		}
	}
	if(board[0]=='X'&&board[2]=='X'){
		if(board[1]=='1'){
			board[1]='X';
			return 1;
		}
	}
	if(board[1]=='X'&&board[2]=='X'){
		if(board[0]=='0'){
			board[0]='X';
			return 1;
		}
	}
	if(board[3]=='X'&&board[4]=='X'){
		if(board[5]=='5'){
			board[5]='X';
			return 1;
		}
	}
	if(board[3]=='X'&&board[5]=='X'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='X'&&board[5]=='X'){
		if(board[3]=='3'){
			board[3]='X';
			return 1;
		}
	}
	if(board[6]=='X'&&board[7]=='X'){
		if(board[8]=='8'){
			board[8]='X';
			return 1;
		}
	}
	if(board[6]=='X'&&board[8]=='X'){
		if(board[7]=='7'){
			board[7]='X';
			return 1;
		}
	}
	if(board[7]=='X'&&board[8]=='X'){
		if(board[6]=='6'){
			board[6]='X';
			return 1;
		}
	}
	if(1){
		return 0;
	}
}
//for blocking user
int Board::checkO(){
	if(board[0]=='O'&&board[3]=='O'){
		if(board[6]=='6'){
			board[6]='X';
			return 1;
		}
	}
	if(board[0]=='O'&&board[6]=='O'){
		if(board[3]=='3'){
			board[3]='X';
			return 1;
		}
	}
	if(board[3]=='O'&&board[6]=='O'){
		if(board[0]=='0'){
			board[0]='X';
			return 1;
		}
	}
	if(board[1]=='O'&&board[4]=='O'){
		if(board[7]=='7'){
			board[7]='X';
			return 1;
		}
	}
	if(board[1]=='O'&&board[7]=='O'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='O'&&board[7]=='O'){
		if(board[1]=='1'){
			board[1]='X';
			return 1;
		}
	}
	if(board[2]=='O'&&board[5]=='O'){
		if(board[8]=='8'){
			board[8]='X';
			return 1;
		}
	}
	if(board[2]=='O'&&board[8]=='O'){
		if(board[5]=='5'){
			board[5]='X';
			return 1;
		}
	}
	if(board[5]=='O'&&board[8]=='O'){
		if(board[2]=='2'){
			board[2]='X';
			return 1;
		}
	}
	if(board[0]=='O'&&board[4]=='O'){
		if(board[8]=='8'){
			board[8]='X';
			return 1;
		}
	}
	if(board[0]=='O'&&board[8]=='O'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='O'&&board[8]=='O'){
		if(board[0]=='0'){
			board[0]='X';
			return 1;
		}
	}
	if(board[2]=='O'&&board[4]=='O'){
		if(board[6]=='6'){
			board[6]='X';
			return 1;
		}
	}
	if(board[2]=='O'&&board[6]=='O'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='O'&&board[6]=='O'){
		if(board[2]=='2'){
			board[2]='X';
			return 1;
		}
	}
	if(board[0]=='O'&&board[1]=='O'){
		if(board[2]=='2'){
			board[2]='X';
			return 1;
		}
	}
	if(board[0]=='O'&&board[2]=='O'){
		if(board[1]=='1'){
			board[1]='X';
			return 1;
		}
	}
	if(board[1]=='O'&&board[2]=='O'){
		if(board[0]=='0'){
			board[0]='X';
			return 1;
		}
	}
	if(board[3]=='O'&&board[4]=='O'){
		if(board[5]=='5'){
			board[5]='X';
			return 1;
		}
	}
	if(board[3]=='O'&&board[5]=='O'){
		if(board[4]=='4'){
			board[4]='X';
			return 1;
		}
	}
	if(board[4]=='O'&&board[5]=='O'){
		if(board[3]=='3'){
			board[3]='X';
			return 1;
		}
	}
	if(board[6]=='O'&&board[7]=='O'){
		if(board[8]=='8'){
			board[8]='X';
			return 1;
		}
	}
	if(board[6]=='O'&&board[8]=='O'){
		if(board[7]=='7'){
			board[7]='X';
			return 1;
		}
	}
	if(board[7]=='O'&&board[8]=='O'){
		if(board[6]=='6'){
			board[6]='X';
			return 1;
		}
	}
	if(1){
		return 0;
	}
}
void Board::lastchoice(){
	int count=0;int i,j;char check[]={'0','1','2','3','4','5','6','7','8'};
	for(i=0;i<9;i++){
		if(board[i]==check[i]){
			count=count+1;
			j=i;
		}
	}
	if(count==1){
		board[j]='X';
	}
}
void UserComp::user(){
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	for(int i=0;i<9;i++){
		if(choice==board[i]){
			board[i]='O';
				
		}
	}
	display();
}
void UserComp::comp(){
		switch(choice){
			case '0':
				cout<<"Computer's turn:";
				if(board[6]=='6'){
					board[6]='X';
					return;
				}
				break;
			case '1':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[4]!='O'&& board[7]!='O')&&board[3]!='O'){
						if(board[6]=='6'){
							board[6]='X';
							return;
						}else{
							if(board[8]=='8'){
								board[8]='X';
							}
						}
					}
					if(checkO()){
						return ;
					}
					lastchoice();
				}
				break;
			case '2':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[4]!='O'&& board[6]!='O')&&( board[5]!='O'&&board[8]!='O')&&(board[0]!='O'&&board[1]!='O')){
						if(board[6]=='6'){
							board[6]='X';
							return;
						}
						
					}
					
					if(checkO()){
						return ;
					}
					if(board[7]=='7'){
						board[7]='X';
						return;
					}
					lastchoice();
				}
				break;
			case '3':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[0]!='O'&& board[6]!='O')&&( board[4]!='O'&& board[5]!='O')){
						if(board[6]=='X'){
							if(board[8]=='8'){
								board[8]='X';
								return;
							}
						}	
					}
					
					if(checkO()){
						return ;
					}
					if(board[2]=='2'){
						board[2]='X';
						return;
					}
					lastchoice();
				}
				break;
			case '4':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[1]!='O'&&board[7]!='O')&&(board[3]!='O'&& board[5]!='O')&&(board[6]!='O'&&board[2]!='O')){
						if(board[6]=='6'){
							board[6]='X';
							return;
						}
					}
					/*if(board[6]=='X'&&board[8]=='X'){
						if(board[7]='7'){
							board[7]='X';
							return;
						}
					}*/
					
					if(checkO()){
						return ;
					}
					lastchoice();
				}
				break;
			case '5':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[3]!='O'&&board[4]!='O')&&(board[2]!='O'&&board[8]!='O')){
						if(board[4]=='4'){
							board[4]='X';
							return;
						}else{
							if(board[7]=='7'){
								board[7]='X';
								return;
							}
						}
					}
					
					if(checkO()){
						return ;
					}
					lastchoice();
				}
				break;
			case '6':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[1]!='O'&&board[3]!='O')&&(board[7]!='O'&& board[8]!='O')){
						if(board[2]=='2'){
							board[2]='X';
						}
					}
					
					if(checkO()){
						return ;
					}
					lastchoice();
				}
				break;
			case '7':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[6]!='O'&& board[8]!='O')&&(board[1]!='O'&&board[4]!='O')){
						if(board[4]=='4'){
							board[4]='X';
							return;
						}
					}
					
					if(checkO()){
						return ;
					}
					lastchoice();
				}
				break;
			case '8':
				cout<<"Computer's turn:";
				if(checkcross()!=1){
					if((board[2]!='O'&& board[5]!='O')&&(board[6]!='O'&& board[7]!='O')&&(board[0]!='O'&&board[4]!='O')){
						if(board[6]=='6'){
							board[6]='X';
							return;
						}
					}
					
					
					if(checkO()){
						return ;
					}
					lastchoice();
				}
				break;
		}
}
void UserComp::comp1(){
	switch(choice){
		case '0':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[4]=='O'){
				if(board[8]=='8'){
					board[8]='X';
					return;
				}
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[3]=='3'){
				board[3]='X';
				return;
			}
			if(board[6]=='6'){
				board[6]='X';
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]==2){
				board[2]='X';
				return;
			}
			break;
		case '1':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[0]=='O'||board[2]=='O'||board[6]=='O'||board[8]=='O'){
				if(board[3]=='3'){
					board[3]='X';
					return;
				}
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[6]=='6'){
				board[6]='X';
				return;
			}
			if(board[8]=='8'){
				board[8]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]=='2'){
				board[2]='X';
				return;
			}
			break;
		case '2':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[4]=='O'){
				if(board[0]=='0'){
					board[0]='X';
					return;
				}
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[3]=='3'){
				board[3]='X';
				return;
			}
			if(board[8]=='8'){
				board[8]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			break;
		case '3':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[6]=='6'){
				board[6]='X';
				return;
			}
			if(board[8]=='8'){
				board[8]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]=='2'){
				board[2]='X';
				return;
			}
			break;
		case '4':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[6]=='6'){
				board[6]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[3]=='3'){
				board[3]='X';
				return;
			}
			if(board[8]=='8'){
				board[8]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]=='2'){
				board[2]='X';
				return;
			}
			break;
		case '5':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[0]=='O'||board[2]=='O'||board[6]=='O'||board[8]=='O'){
				if(board[3]=='3'){
					board[3]='X';
					return;
				}
			}
			if(board[8]=='8'){
				board[8]='X';
				return;
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[6]=='6'){
				board[6]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]=='2'){
				board[2]='X';
				return;
			}
			break;
		case '6':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[3]=='3'){
				board[3]='X';
				return;
			}
			if(board[8]=='8'){
				board[8]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]=='2'){
				board[2]='X';
				return;
			}
			break;
		case '7':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[0]=='O'||board[2]=='O'||board[6]=='O'||board[8]=='O'){
				if(board[3]=='3'){
					board[3]='X';
					return;
				}
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[6]=='6'){
				board[6]='X';
				return;
			}
			if(board[8]=='8'){
				board[8]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]=='2'){
				board[2]='X';
				return;
			}
			break;
		case '8':
			if(checkcross()){
				return;
			}
			if(checkO()){
				return;
			}
			if(board[4]=='O'){
				if(board[0]=='0'){
					board[0]='X';
					return;
				}
			}
			if(board[4]=='4'){
				board[4]='X';
				return;
			}
			if(board[3]=='3'){
				board[3]='X';
				return;
			}
			if(board[6]=='6'){
				board[6]='X';
				return;
			}
			if(board[0]=='0'){
				board[0]='X';
				return;
			}
			if(board[2]=='2'){
				board[2]='X';
				return;
			}
			break;
	}
}
void Player::initplayer(){
	intialise();
	player=1;
}
void Player::playername(){
	string name;
	cout<<"\nPlayer 1 : Enter your name : ";
	cin>>name;
	player_name[0]=name;
	cout<<"\nPlayer 2 : Enter your name : ";
	cin>>name;
	player_name[1]=name;
}
int Player::getplayer(){
	return player;
}
string Player::getname(){
	return player_name[player];
}
void Player::setplayer(int a){
	player=a;
}
void Player::play(){
	if(choice ==1 && board[1] =='1'){
		board[1]=mark;
		return;
	}
	if(choice ==2 && board[2] =='2'){
		board[2]=mark;
		return;
	}
	if(choice ==3 && board[3] =='3'){
		board[3]=mark;
		return;
	}
	if(choice ==4 && board[4] =='4'){
		board[4]=mark;
		return;
	}
	if(choice ==5 && board[5] =='5'){
		board[5]=mark;
		return;
	}
	if(choice ==6 && board[6] =='6'){
		board[6]=mark;
		return;
	}
	if(choice ==7 && board[7] =='7'){
		board[7]=mark;
		return;	
	}
	if(choice ==8 && board[8] =='8'){
		board[8]=mark;
		return;
	}
	if(choice ==0 && board[0] =='0'){
		board[0]=mark;
		return;
	}
	if(1){
		cout<<"Invlide Move ";
		player--;
	}
}

int main(){
	UserComp B;
	Player P;
	int opt,cont,flag;
	int playernum;
	char sign;
	while(1){
		system("cls");
		cout<<"\n\t\tGAME MODE \n\t\t1.One Player \n\t\t2.Two Players \n\t\t3.Exit"<<endl;
		cin>>opt;
		switch(opt){
			case 1:
				flag=0;
	 		    cont=1;
	 			while(cont==1){
	 				if(flag==0){
	 					B.intialise();
			 			cout<<"Computer's turn:";
						//board[0]='X';
						B.setboard(0,'X');
						B.display();
						while(B.checkwin()!=1 && B.checkwin()!=0){
							B.user();	
							B.comp();
							B.display();
	               		}
	               		if(B.checkwin()==1){
	               			cout<<"\n\t\t\tYou lose"<<endl;
						}
						if(B.checkwin()==0){
	               			cout<<" \n\t\t\tGame draw"<<endl;
	               			flag=1;
						}
						cout<<"\n\n\n\n";
						cout<<"\n\t\t\t1.Continue \n\t\t\t2.Exit"<<endl;
						cin>>cont;
	                }
					if(cont==1){
						if(flag==1){
						    B.intialise();
						    system("cls");
							while(B.checkwin()!=1 && B.checkwin()!=0){
								B.user();
								if(B.checkwin()==1){
									cout<<"\n\t\t\tYou Win"<<endl;
									break;
								}	
								B.comp1();
								if(B.checkwin()==1){
	                		   		cout<<"\n\t\t\tYou lose"<<endl;
								}
								B.display();
	               			}
	                		if(B.checkwin()==0){
	                			cout<<" \n\t\t\tGame draw"<<endl;
	                		}	
							cout<<"\n\t\t\t1.Continue \n\t\t\t2.Exit"<<endl;
							cin>>cont;	
						}
						if(B.checkwin()==0){
							flag=0;
						}
					}
				}
				break;
			case 2:
				P.initplayer();
				P.playername();
				P.display();
				while(P.checkwin()!=1 && P.checkwin()!=0){
					playernum=(P.getplayer()%2)?1:0 ;
					P.setplayer(playernum);
					cout<<"Player "<<P.getname()<<" ,enter a number : ";
					cin>>P.choice;
					P.mark=(P.getplayer()==1)?'X':'O';
					P.play();
					playernum=playernum+1;
					P.setplayer(playernum);
					P.display();
				}
				if(P.checkwin()==1){
					P.setplayer(--playernum);
					cout<<"\n\t\t\t"<<P.getname()<<" Win"<<endl;
				}
				if(P.checkwin()==0){
					cout<<"\n\t\t\tGame draw";
				}
				cout<<"\n\t\t\t1.Continue \n\t\t\t2.Exit"<<endl;
				cin>>cont;	
				
				break;
			case 3:
				exit (0);
		}
	}
}
