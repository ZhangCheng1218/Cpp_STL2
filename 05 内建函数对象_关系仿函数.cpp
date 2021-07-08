//#include<iostream>
//#include<string>
//#include<functional>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////关系仿函数
////实现关系对比
///*
//template<class T> bool equal_to<T>				//	=
//template<class T> bool not_equal_to<T>			//	!=
//template<class T> bool greater<T>				//	>
//template<class T> bool greater_equal<T>			//	>=
//template<class T> bool less<T>					//	<
//template<class T> bool less_equal<T>			//	<=
//
//*/
//void test01()
//{
//	vector<int> v;
//	v.push_back(12);
//	v.push_back(2);
//	v.push_back(32);
//	v.push_back(7);
//	v.push_back(8);
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	sort(v.begin(), v.end(), greater<>());//利用提供的仿函数降序
//	cout << "------------------------------------" << endl;;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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
