#include<iostream>
using namespace std;
void checkSpeed(int speed);
int main()
{	
	int speed;
	cout<<"Enter the value of speed: ";
	cin>>speed;
	checkSpeed(speed);
}
void checkSpeed(int speed)
{
	if(speed > 100)
	{
		cout<<"Halt..... YOU WILL BE CHALLANNED";
	}
	else
	{
		cout<<"Perfect! you're going good";
	}
}