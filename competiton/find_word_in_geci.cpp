//#include<iostream>
//#include<string>
//
//using namespace std;
//string str[10000];
//int vct[26][10000] = { 0 };
//
//int main()
//{
//	int a;
//	int ge_qu[26] = { 0 };
//	cin >> a;
//	for (int i = 0; i < a; i++)
//		cin >> str[i];
//	string c;
//	cin >> c;
//
//	int len = c.length();
//	//计算字符串各字符的位置以及数量
//	for (int i = 0; i < len; i++)
//	{
//		vct[c[i] - 'a'][ge_qu[c[i] - 'a']] = i;
//		ge_qu[c[i] - 'a']++;
//	}
//
//	for (int i = 0; i < a; i++)
//	{
//		int derm = 1;
//		int len_ = str[i].length();
//		int tes = -1;
//		int hccc[26] = { 0 };
//		for (int j = 0; j < len_; j++)
//		{
//			int tmp = str[i][j] - 'a';
//			while (1)
//			{
//				if (tes < vct[tmp][hccc[tmp]])
//				{
//					tes = vct[tmp][hccc[tmp]];
//					break;
//				}
//				else
//				{
//					hccc[tmp]++;
//				}
//				if (vct[tmp][hccc[tmp]] == 0 && hccc[tmp] != 0)
//				{
//					derm = 0;
//					cout << "NO" << endl;
//					break;
//				}
//
//			}
//			if (derm == 0)
//				break;
//		}
//		if (derm == 1)
//			cout << "YES" << endl;
//	}
//	return 0;
//}