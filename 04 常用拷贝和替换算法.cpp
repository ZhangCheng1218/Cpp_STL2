//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
////�����滻
///*
//copy				//������ָ����Χ��Ԫ�ؿ�������һ������
//replace				//��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if			//������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//swap				//��������������Ԫ��
//*/
//void print1(int a) 
//{
//	cout << a << "  ";
//}
//class Con 
//{
//public:
//	bool operator()(int a) 
//	{
//		return a > 4;
//	}
//};
//void test01() 
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (size_t i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//	}
//	//1��copy
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v1.begin(), v1.end(), print1);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), print1);
//	cout << endl;
//	//2��replace ��������������Ԫ�ؾ��滻
//	replace(v1.begin(), v1.end(), 8, 88);
//	for_each(v1.begin(), v1.end(), print1);
//	cout << endl;
//	//3��replace_if
//	replace_if(v1.begin(), v1.end(),Con(),888);
//	for_each(v1.begin(), v1.end(), print1);
//	cout << endl;
//	//4��swap
//	
//}
//int main() 
//{
//	test01();
//	return 0;
//}