//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
////二元谓词
///*
//返回bool类型的仿函数称为谓词
//如果operator()接受一个参数，那么叫做一元谓词
//如果operator()接受俩个参数，那么叫做二元谓词
//*/
//class MMM
//{
//public:
//	bool operator()(int a,int b)
//	{
//		return a > b;
//	}
//};
//
//void test01()
//{
//	vector<int >v;
//	v.push_back(15);
//	v.push_back(4);
//	v.push_back(6);
//	v.push_back(2);
//	v.push_back(25);
//	sort(v.begin(),v.end());
//	for (vector<int>::iterator it=v.begin();it!=v.end();++it)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//	cout << "--------------------------------------------------" << endl;
//	sort(v.begin(), v.end(),MMM());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//
//}
