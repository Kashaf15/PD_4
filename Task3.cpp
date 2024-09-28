#include<iostream>
using namespace std;
void discount(string country, int price);
int main()
{
	string country;
	int price;
	while(true)
{
	cout<<"Enter your country name(Pakistan/Ireland/India/England/Canada): ";
	cin>>country;
	cout<<"Enter your ticket price: "<<"$";
	cin>>price;
	discount(country, price);
}
}
void discount(string country, int price)
{
	int payableamount;
	if(country == "Pakistan")
	{
		payableamount=(5*price)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "Ireland")
	{
		payableamount=(10*price)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "India")
	{
		payableamount=(20*price)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "England")
	{
		int payableamount;
		payableamount=(30*price)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "Canada")
	{
		payableamount=(45*price)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
}
	
	