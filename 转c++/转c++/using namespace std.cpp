#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>     //.h��׺ȥ��ǰ���c
#include<string>
#include<vector>
#include<set>

using namespace std;

//int main()
//{
	//int n;
	//cin >> n;     //����
	//cout << "hello world\n" << ++n << endl;

	//for (int i = 0; i < 3; i++)         //c++����forѭ���ڶ������
	//{
	//	cout << "yep\n" << endl;
	//}

	//c����flase and true����ʾ c++����bool����������� ���㼴Ϊ��

	/*bool flag = true;
	bool flag2 = -1;
	bool flag3 = 0;

	cout << flag <<" " << flag2 <<" "<< flag3 << endl;*/

	/*const int MAX = 150;

	cout << MAX << endl;

	return 0;*/
	
//}




//string �ࣺ

//int main()
//{
//	//string s = "hello";
//	//string s2 = " world!";
//	//string s3 = s + s2;          //�ַ������Ϳ���ֱ�����
//
//	///*cin >> s*/;  //cinֻ������һ������,���������м���пո�ľ���
//	//getline(cin, s); //getline��������һ�����Ӳ�����
//
//	string s = "hello world!";
//	cout << s << endl;
//	string s_sub = s.substr(6,6);  //���㿪ʼ�ӵ�һ���ַ���ʼȡ�����ַ�   1,2��ʾ��e��ʼȡ��el�����ַ�  substr(6)��ʾ�ӵ�������ʼȫ���������Ӵ���
//
//	/*cout << s.length() << endl;*/       //s�Ƕ���,����.�ӷ�������
//	cout << s_sub << endl;
//
//	return 0;
//}




//�ṹ��:

//struct stu
//{
//	string name;
//	int age;
//}stu1;
//
//
//int main()
//{
//	/*stu stu1;*/   //�����ýṹ����������ֱ�Ӷ������
//	stu1.age = 12;
//	stu1.name = "xinyuan zhao";
//
//	cout << stu1.age << stu1.name << endl;
//
//	return 0;
//}



//����&�ʹ�ֵ int &a and int a

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
//	c(a);          //���ÿ��Ըı�main�����������ֵ
//
//	cout << a << endl;
//
//	return 0;
//}




//STLƪ��

//vector(�ɱ�����,����)

//int main()
//{
//	//string s;
//	//s.length();
//
//	//vector<int>a(10, 2);
//	//a.size();           //vector�Ĵ�С
//
//	//���ִ���vector�ķ�ʽ
//
//	//1:vector<int>v; 
//	/*vector<int>v;
//	cout << v.size() << endl;*/  //��������СΪ�� ��ʱ���������塣
//	//vector<int>v;
//
//	//v.resize(10);  // ������v������10����С�Ŀռ� �����ȫ��0
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	v[i] = i;
//	//}
//
//	//v.push_back(11);  //�ں���׷��һ��Ԫ��
//
//	//for (int i = 0; i < 11; i++)
//	//{
//	//	cout << v[i] << endl;     //��10���ռ丳ֵ0-9�ɹ�
//	//}
//	//2.vector<int>v(10,2)
//	//vector<int>v(10, 2);     //��v���������10���ռ� ÿ���ռ䶼��ʼ��Ϊ2
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << v[i] << endl;
//	//}
//	//3.vector<int>v(10) //����10���ռ� ȫ����0
//
//	return 0;
//}



//������:

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
//		cout << *p << " ";                          //������ �����ұ߽��Զ����������һ��
//
//	}
//
//
//	return 0;
//}



//set(���ϣ��������Ԫ�ظ�����ͬ����Ԫ�ػᰴ�մ�С��������)

int main()
{
	set<int>s;   //��vector��ͬ��set����s��������κ����ݣ���Ϊ����Ԫ�ػ���
	//���룺
	s.insert(1);
	s.insert(2);
	s.insert(3);
	//������
	for (auto p = s.begin(); p != s.end(); p++)      //s.end�����һ��Ԫ�ص���һ��λ�� '\0'
	{
		cout << *p << "   ";
	}
	//���ң�
	cout << (s.find(2) != s.end()) << endl;  //s.find�Ƿ����s.end
	cout << (s.find(4) != s.end()) << endl;  //��ȷ���0 ����ȷ���1 �൱��boolֵ

	//ɾ����
	s.erase(1);   //��1��ɾ����
	cout << (s.find(1) != s.end()) << endl;  //��ɾ������1������bool����0
	return 0;
}

