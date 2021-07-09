//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<ctime>
//
//using namespace std;
////常用排序算法
///*
//sort				//对容器内元素进行排序
//random_shuffle		//洗牌 指定范围内的元素随机调整次序
//merge				//容器元素合并，并存储到另一容器
//reverse				//反转指定范围的元素
//*/
//void print1(int a)
//{
//	cout << a << " ";
//}
//class Dec
//{
//public:
//	bool operator()(int a, int b)
//	{
//		return a > b;
//	}
//};
//void test01()
//{
//	vector<int >v;
//	v.push_back(5);
//	v.push_back(25);
//	v.push_back(15);
//	v.push_back(-5);
//	v.push_back(4);
//	//1.1、sort默认升序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//	//1.2、sort改为降序
//	sort(v.begin(), v.end(), Dec());
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//	//2、random_shuffle		//洗牌 指定范围内的元素随机调整次序
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//	//3、merge				//容器元素合并，并存储到另一容器，需要原容器为俩有序序列，并且同升同降,否则会奔溃
//	vector<int >v1;
//	vector<int>v2;
//	vector<int>vT;
//	for (size_t i = 0; i < 6; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+1);
//	}
//	vT.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vT.begin());
//	for_each(vT.begin(), vT.end(), print1);
//	cout << endl;
//	//4、reverse				//反转指定范围的元素
//	reverse(vT.begin(),vT.end());
//	for_each(vT.begin(), vT.end(), print1);
//	cout << endl;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	test01();
//	return 0;
//
//}