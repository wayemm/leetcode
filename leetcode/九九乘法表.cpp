#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i+1; j++)   //��Ϊi����ĳ�ʼֵΪ1��������ֵ��j<i(1<1������ѭ��)���������˴�Ҫ��j<i+1;
		{
			cout << j<< "*" << i <<"=" << i * j << "\t";  //�˴���j��i,ԭ��ÿ�ν����ڲ�ѭ��j��1��ʼ��
		}
		cout << endl;
	}
	return 0;
}