//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////һԪν��
///*
//����bool���͵ķº�����Ϊν��
//���operator()����һ����������ô����һԪν��
//���operator()����������������ô������Ԫν��
//*/
//class MMM
//{
//public:
//	bool operator()(int a) 
//	{
//		return a > 8;
//	}
//};
//
//void test01()
//{
//	vector<int >v;
//	for (size_t i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it= find_if(v.begin(),v.end(),MMM());
//	if (it!=v.end())
//	{
//		cout << "Find it! num=" << (*it) << endl;
//	}
//	else
//	{
//		cout << "NO!" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//
//}
