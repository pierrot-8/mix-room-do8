#include <iostream>
using namespace std;

int main()
{
	int year;

	//������L�[���͂���B
	cout<<"����=";
	cin>>year;

	//���邤�N���ǂ������肷��B
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
	cout<<"���邤�N�ł��I\n";
	}
	else
	{
	cout<<"���邤�N�ł͂���܂���!\n";
	}
	return 0;
}
