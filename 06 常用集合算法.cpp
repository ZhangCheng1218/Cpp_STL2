#include<iostream>
#include<string>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std;
//�����㷨
/*
set_intersection		//�������󽻼�
set_union				//�������󲢼�
set_difference			//��������
*/
void print1(int a)
{
	cout << a << " ";
}
void test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int>v;

	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+2);
	}
	//1��set_intersection		//�������󽻼������ص��ǵ�������Ϊ����Ԫ�ص����һ��λ��,�������������У�Ŀ�������ڴ�ȡ��Сֵ
	v.resize(min(v1.size(),v2.max_size()));
	vector<int>::iterator it= set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	for_each(v.begin(), it, print1);
	cout << endl;
	//2��set_union				//�������󲢼�
	v.resize(v1.size()+v2.size());
	it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	for_each(v.begin(), it, print1);
	cout << endl;
	//3��set_difference			//��������
	v.resize(max(v1.size(),v2.size()));
	it = set_difference(v1.begin(),v1.end(), v2.begin(), v2.end(), v.begin());
	for_each(v.begin(), it, print1);
	cout << endl;

	v.resize(max(v1.size(), v2.size()));
	it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v.begin());
	for_each(v.begin(), it, print1);
	cout << endl;
}
int main()
{
	test01();
	return 0;
}