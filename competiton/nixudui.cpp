//#include<iostream>
//#include<string>
//using namespace std;
//
//int record[50003] = { 0 };
//int main()
//{
//	int length = 0;
//	int i = 0;
//	cout << "请输入交易记录" << endl;
//	do
//	{
//		cin >> record[i];
//		i++;
//		length++;
//	} while (cin.get() != '\n');
//
//	for (i = 0; i < length; i++)
//	{
//		for (int j = i + 1; j < length; j++)
//			if (record[i] > record[j])
//			{
//				cout << '(' << record[i] << ',' << record[j] << ')' << endl;
//			}
//	}
//	return 0;
//}