#include<iostream>
using namespace std;
void possibleBonus(int number_1, int number_2);
int main()
{	
	int number_1,number_2;
	cout<<"Enter your position of the tile: ";
	cin>>number_1;
	cout<<"Enter your friend's position on the tile: ";
	cin>>number_2;
	possibleBonus(number_1, number_2);
}
void possibleBonus(int number_1, int number_2)
{
	if(number_1-number_2 <= 6)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}