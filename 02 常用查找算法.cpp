//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<functional>
//using namespace std;
////���ò����㷨
///*
//find				//����Ԫ�أ����ص�����
//find_if				//����������Ԫ��
//adjacent_find		//���������ظ�Ԫ��
//binary_search		//���ֲ��ҷ�������Ϊbool
//count				//ͳ��Ԫ�ظ���
//count_if			//������ͳ��Ԫ�ظ���
//*/
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	//find�����Զ�����������ʱ�򣬱�������==����Ϊfind�����ó����ĵ������������ô�Ա�
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	string m_Name;
//	int m_Age;
//};
//class Greater30
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 30;
//	}
//};
//void test01()
//{
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("sss", 20);
//	Person p3("ddd", 30);
//	Person p4("fff", 40);
//	Person p5("ggg", 10);
//	Person p6("ggg", 10);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	Person pp("fff", 40);
//
//	vector <int >v1;
//	for (size_t i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//1��find ����
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//	if (it != v.end())
//	{
//		cout << "Find It!\n ������" << it->m_Name << " ���䣺" << it->m_Age << endl;
//	}
//	else
//	{
//		cout << "û�ҵ���" << endl;
//	}
//	//2��find_if
//	cout << "****************************************************************" << endl;
//	it = find_if(v.begin(), v.end(), Greater30());
//	if (it != v.end())
//	{
//		cout << "�ҵ�����30����ˣ�\n������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
//	}
//	//3��adjacent_find
//	cout << "****************************************************************" << endl;
//	it = adjacent_find(v.begin(), v.end());
//	if (it != v.end())
//	{
//		cout << "�ҵ��ظ����ڵ��ˣ�\n������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
//	}
//	//4��binary_search		//���ֲ��ҷ�������Ϊbool��Ч�ʺܸߣ�	
//	//��������������ģ�����ģ������δ֪��
//	cout << "****************************************************************" << endl;
//	bool res = binary_search(v1.begin(), v1.end(), 5);
//	if (res)
//	{
//		cout << "�ҵ��ˣ�" << endl;
//	}
//	else
//	{
//		cout << "ľ�ã�" << endl;
//	}
//	//5��count				//ͳ��Ԫ�ظ���,��Ҫ����==��
//	cout << "****************************************************************" << endl;
//
//	int num= count(v.begin(), v.end(), pp);
//	if (num>0)
//	{
//		cout << "�ҵ��ˣ��ظ�"<<num <<"���ˣ�" << endl;
//	}
//	else
//	{
//		cout << "ľ�ã�" << endl;
//	}
//	//5��count_if			//������ͳ��Ԫ�ظ���
//	cout << "****************************************************************" << endl;
//	 num = count_if(v.begin(),v.end(),Greater30());
//	cout << "�������30��������� " << num << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}