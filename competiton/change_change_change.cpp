//#include<string.h>
//#include<iostream>
//#include<map>
//#include<vector>
//
//using namespace std;
//int main()
//{
//	long long N, M, T;
//	int i = 0;
//	cin >> N >> M >> T;
//	map<string, int> buttle;
//	vector<string> str;
//
//	for (i = 0; i < N; i++)
//	{
//		string a;
//		cin >> a;
//		buttle.insert(pair<string, int>(a, i + 1));
//		str.push_back(a);
//	}
//	for (i = 0; i < T; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		string str1 = str[a - 1];
//		string str2 = str[b - 1];
//		int c = buttle[str1];
//		buttle[str1] = buttle[str2];
//		buttle[str2] = c;
//		string str3 = str1;
//		str[a - 1] = str2;
//		str[b - 1] = str3;
//
//	}
//	for (i = 0; i < M; i++)
//	{
//		string str1;
//		cin >> str1;
//		cout << buttle[str1] << endl;
//
//	}
//	return 0;
//}