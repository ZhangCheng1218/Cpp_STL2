//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<functional>
//using namespace std;
////常用查找算法
///*
//find				//查找元素，返回迭代器
//find_if				//按条件查找元素
//adjacent_find		//查找相邻重复元素
//binary_search		//二分查找法，返回为bool
//count				//统计元素个数
//count_if			//按条件统计元素个数
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
//	//find查找自定义数据类型时候，必须重载==，因为find解引用出来的迭代器不清楚怎么对比
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
//	//1、find 查找
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//	if (it != v.end())
//	{
//		cout << "Find It!\n 姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//	else
//	{
//		cout << "没找到！" << endl;
//	}
//	//2、find_if
//	cout << "****************************************************************" << endl;
//	it = find_if(v.begin(), v.end(), Greater30());
//	if (it != v.end())
//	{
//		cout << "找到大于30岁的人：\n姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
//	}
//	//3、adjacent_find
//	cout << "****************************************************************" << endl;
//	it = adjacent_find(v.begin(), v.end());
//	if (it != v.end())
//	{
//		cout << "找到重复相邻的人：\n姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
//	}
//	//4、binary_search		//二分查找法，返回为bool，效率很高！	
//	//容器必须是有序的，无序的，结果会未知！
//	cout << "****************************************************************" << endl;
//	bool res = binary_search(v1.begin(), v1.end(), 5);
//	if (res)
//	{
//		cout << "找到了！" << endl;
//	}
//	else
//	{
//		cout << "木得！" << endl;
//	}
//	//5、count				//统计元素个数,需要重载==号
//	cout << "****************************************************************" << endl;
//
//	int num= count(v.begin(), v.end(), pp);
//	if (num>0)
//	{
//		cout << "找到了！重复"<<num <<"个人！" << endl;
//	}
//	else
//	{
//		cout << "木得！" << endl;
//	}
//	//5、count_if			//按条件统计元素个数
//	cout << "****************************************************************" << endl;
//	 num = count_if(v.begin(),v.end(),Greater30());
//	cout << "年龄大于30岁的人数： " << num << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}