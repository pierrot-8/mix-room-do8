#include <iostream>
using namespace std;

int main()
{
	int year;

	//西暦をキー入力する。
	cout<<"西暦=";
	cin>>year;

	//うるう年かどうか判定する。
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
	cout<<"うるう年です！\n";
	}
	else
	{
	cout<<"うるう年ではありません!\n";
	}
	return 0;
}
