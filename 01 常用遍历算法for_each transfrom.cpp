//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<functional>
//using namespace std;
///*
//-�㷨��Ҫ��ͷ�ļ� algorithm  functional  numeric
//-algorithm������STLͷ�ļ�������һ������Χ�漰���Ƚϡ����������ҡ��������������ơ��޸ĵ�
//-numeric�����С��ֻ��������������������м򵥽�ѧ�����ģ�庯��
//-functional������һЩģ���࣬����������������
//*/
///*���ñ����㷨
//for_each		//��������
//transform		//������������һ��������
//*/
//
//void print1(int a ) 
//{
//	cout << a << " ";
//}
//
//class Print2 
//{
//public:
//	void operator()(int a) 
//	{
//		cout << a << " ";
//	}
//};
//class trans 
//{
//public:
//	int operator()(int a) 
//	{
//		return a ;
//	}
//};
//void test01() 
//{
//	vector<int> v;
//	for (size_t i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	//�������
//	for_each(v.begin(), v.end(),print1);
//	cout << endl;
//	for_each(v.begin(), v.end(), Print2());
//
//	vector<int>v2;
//	v2.resize(v.size());
//	//���˱���
//	transform(v.begin(), v.end(), v2.begin(), trans());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), Print2());
//}
//int main()
//{
//	test01();
//	return 0;
//}