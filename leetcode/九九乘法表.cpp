#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i+1; j++)   //因为i进入的初始值为1，经过赋值后j<i(1<1会跳出循环)不成立，此处要用j<i+1;
		{
			cout << j<< "*" << i <<"=" << i * j << "\t";  //此处先j在i,原因：每次进入内层循环j从1开始。
		}
		cout << endl;
	}
	return 0;
}