//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<ctime>
//
//using namespace std;
////���������㷨
///*
//sort				//��������Ԫ�ؽ�������
//random_shuffle		//ϴ�� ָ����Χ�ڵ�Ԫ�������������
//merge				//����Ԫ�غϲ������洢����һ����
//reverse				//��תָ����Χ��Ԫ��
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
//	//1.1��sortĬ������
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//	//1.2��sort��Ϊ����
//	sort(v.begin(), v.end(), Dec());
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//	//2��random_shuffle		//ϴ�� ָ����Χ�ڵ�Ԫ�������������
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//	//3��merge				//����Ԫ�غϲ������洢����һ��������Ҫԭ����Ϊ���������У�����ͬ��ͬ��,����ᱼ��
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
//	//4��reverse				//��תָ����Χ��Ԫ��
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