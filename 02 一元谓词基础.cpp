//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////一元谓词
///*
//返回bool类型的仿函数称为谓词
//如果operator()接受一个参数，那么叫做一元谓词
//如果operator()接受俩个参数，那么叫做二元谓词
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
