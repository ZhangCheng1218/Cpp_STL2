//#include<iostream>
//#include<string>
//#include<numeric>
//#include<vector>
//#include<algorithm>
//using namespace std;
////算术生成算法
////属于小型算法 头文件 numeric
///*
//accumulate		//计算容器元素累计总和
//fill			//向容器中添加元素
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
//	//1、accumulate 第三个参数表示计算累计值之前的初始值
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << total << endl;
//	//2、fill
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