//#include<iostream>
//#include<string>
//#include<numeric>
//#include<vector>
//#include<algorithm>
//using namespace std;
////���������㷨
////����С���㷨 ͷ�ļ� numeric
///*
//accumulate		//��������Ԫ���ۼ��ܺ�
//fill			//�����������Ԫ��
//*/
//void print1(int a)
//{
//	cout << a << " ";
//}
//void test01()
//{
//	vector<int> v;
//	for (size_t i = 0; i <= 100; ++i)
//	{
//		v.push_back(i);
//	}
//
//	//1��accumulate ������������ʾ�����ۼ�ֵ֮ǰ�ĳ�ʼֵ
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << total << endl;
//	//2��fill
//	vector<int> v1;
//	for (size_t i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//	}
//	v1.resize(v1.size()+10);
//	fill(v1.end() - 10, v1.end(), 6666);
//	for_each(v1.begin(), v1.end(), print1);
//}
//int main()
//{
//	test01();
//	return 0;
//}