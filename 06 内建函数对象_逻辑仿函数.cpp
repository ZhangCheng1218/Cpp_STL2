//#include<iostream>
//#include<string>
//#include<functional>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////逻辑仿函数
////实现逻辑运算
///*
//template<class T> bool logical_and<T>				//	逻辑与
//template<class T> bool logical_or<T>				//	逻辑或
//template<class T> bool logical_not<T>				//	逻辑非
//
//
//*/
//void test01()
//{
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);	
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "------------------------------------" << endl;;
//	vector<bool> v2;
//	v2.resize(v.size());//必须要开辟一下空间
//	transform(v.begin(), v.end(), v2.begin(), logical_not<>());
//
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//
//}
