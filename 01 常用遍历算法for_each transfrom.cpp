//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<functional>
//using namespace std;
///*
//-算法主要由头文件 algorithm  functional  numeric
//-algorithm是所有STL头文件中最大的一个，范围涉及到比较、交换、查找、遍历操作、复制、修改等
//-numeric体积很小，只包括几个在序列上面进行简单教学运算的模板函数
//-functional定义了一些模板类，用以声明函数对象
//*/
///*常用遍历算法
//for_each		//遍历容器
//transform		//搬运容器到另一个容器中
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
//	//遍历输出
//	for_each(v.begin(), v.end(),print1);
//	cout << endl;
//	for_each(v.begin(), v.end(), Print2());
//
//	vector<int>v2;
//	v2.resize(v.size());
//	//搬运本身
//	transform(v.begin(), v.end(), v2.begin(), trans());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), Print2());
//}
//int main()
//{
//	test01();
//	return 0;
//}