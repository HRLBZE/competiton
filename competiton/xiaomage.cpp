//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int der = 0;
//	struct flower1
//	{
//		int grade = 1000;
//		string name = { 0 };
//	};
//	flower1 flower[100];
//	int grade = 0;
//	for (int i = 0; i < n; i++)
//	{
//		der = 0;
//		string a;
//		cin >> a;
//		for (int j = 0; j < i; j++)
//		{
//			if (flower[j].name == a)
//			{
//				cin >> grade;
//				flower[j].grade += grade;
//				der = 1;
//			}
//			if (der == 1)
//				break;
//		}
//		if (der == 1)
//			continue;
//		flower[i].name = a;
//		getchar();
//		cin >> grade;
//		flower[i].grade += grade;
//	}
//	int out = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (flower[out].grade > flower[i].grade)
//			out = i;
//	}
//	cout << flower[out].name << endl;
//	cout << flower[out].grade;
//}