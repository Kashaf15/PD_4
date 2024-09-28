#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void movePlayer(int x, int y);
int main()
{	int x=4,y=4;
	system("cls");
	printMaze();
	while(true)
{
	movePlayer(x,y);
	y=y+1;
	if(y==17)
	{
		y=4;
	}
}
}
void movePlayer(int x, int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	gotoxy(x,y);
	cout<<" ";
}
void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printMaze()
{
cout<<"#######################################"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#                                     #"<<endl;
cout<<"#######################################"<<endl;
	
}
