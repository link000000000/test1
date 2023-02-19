#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>     //.h后缀去掉前面加c
#include<string>
#include<vector>
#include<set>

using namespace std;

//int main()
//{
	//int n;
	//cin >> n;     //输入
	//cout << "hello world\n" << ++n << endl;

	//for (int i = 0; i < 3; i++)         //c++接受for循环内定义变量
	//{
	//	cout << "yep\n" << endl;
	//}

	//c里面flase and true来表示 c++存在bool函数可以替代 非零即为真

	/*bool flag = true;
	bool flag2 = -1;
	bool flag3 = 0;

	cout << flag <<" " << flag2 <<" "<< flag3 << endl;*/

	/*const int MAX = 150;

	cout << MAX << endl;

	return 0;*/
	
//}




//string 类：

//int main()
//{
//	//string s = "hello";
//	//string s2 = " world!";
//	//string s3 = s + s2;          //字符串类型可以直接相加
//
//	///*cin >> s*/;  //cin只能输入一个单词,不能输入中间带有空格的句子
//	//getline(cin, s); //getline可以输入一个句子并保存
//
//	string s = "hello world!";
//	cout << s << endl;
//	string s_sub = s.substr(6,6);  //从零开始从第一个字符开始取两个字符   1,2表示从e开始取出el两个字符  substr(6)表示从第六个开始全部拷贝到子串中
//
//	/*cout << s.length() << endl;*/       //s是对象,变量.加方法构成
//	cout << s_sub << endl;
//
//	return 0;
//}




//结构体:

//struct stu
//{
//	string name;
//	int age;
//}stu1;
//
//
//int main()
//{
//	/*stu stu1;*/   //可以用结构体后面的名称直接定义变量
//	stu1.age = 12;
//	stu1.name = "xinyuan zhao";
//
//	cout << stu1.age << stu1.name << endl;
//
//	return 0;
//}



//引用&和传值 int &a and int a

//void c(int& a)
//{
//	a += 1;
//}
//
//
//int main()
//{
//	int a = 4;
//
//	c(a);          //引用可以改变main函数里面的数值
//
//	cout << a << endl;
//
//	return 0;
//}




//STL篇章

//vector(可变数组,向量)

//int main()
//{
//	//string s;
//	//s.length();
//
//	//vector<int>a(10, 2);
//	//a.size();           //vector的大小
//
//	//三种创建vector的方式
//
//	//1:vector<int>v; 
//	/*vector<int>v;
//	cout << v.size() << endl;*/  //求得数组大小为零 此时数组无意义。
//	//vector<int>v;
//
//	//v.resize(10);  // 给数组v分配了10个大小的空间 分配的全是0
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	v[i] = i;
//	//}
//
//	//v.push_back(11);  //在后面追加一个元素
//
//	//for (int i = 0; i < 11; i++)
//	//{
//	//	cout << v[i] << endl;     //给10个空间赋值0-9成功
//	//}
//	//2.vector<int>v(10,2)
//	//vector<int>v(10, 2);     //给v数组分配了10个空间 每个空间都初始化为2
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << v[i] << endl;
//	//}
//	//3.vector<int>v(10) //分配10个空间 全部补0
//
//	return 0;
//}



//迭代器:

//int main()
//{
//	vector<int>v;
//
//	v.resize(10);
//
//	v.push_back(11);
//
//	for (auto p = v.begin(); p != v.end(); p++)
//	{
//		cout << *p << " ";                          //迭代器 不用找边界自动将数组遍历一遍
//
//	}
//
//
//	return 0;
//}



//set(集合，他里面的元素各不相同，且元素会按照从小到大排序)

int main()
{
	set<int>s;   //跟vector不同，set后面s不能添加任何内容，因为集合元素互异
	//插入：
	s.insert(1);
	s.insert(2);
	s.insert(3);
	//遍历：
	for (auto p = s.begin(); p != s.end(); p++)      //s.end是最后一个元素的下一个位置 '\0'
	{
		cout << *p << "   ";
	}
	//查找：
	cout << (s.find(2) != s.end()) << endl;  //s.find是否等于s.end
	cout << (s.find(4) != s.end()) << endl;  //相等返回0 不相等返回1 相当于bool值

	//删除：
	s.erase(1);   //将1给删除掉
	cout << (s.find(1) != s.end()) << endl;  //被删除掉后1不存在bool返回0
	return 0;
}

