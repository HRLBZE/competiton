//#include<iostream>
//using namespace std;
//int main()
//{
//	int group_num[4] = { 0 };
//	int n;
//	int tmp = 0;
//	int out = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tmp;
//		group_num[tmp - 1]++;
//	}
//	out += group_num[3];
//	out += group_num[1] / 2;
//	group_num[1] %= 2;
//	if (group_num[0] >= group_num[2])
//	{
//		out += group_num[2];
//		group_num[0] -= group_num[2];
//		out += (group_num[1] * 2 + group_num[0]) / 4;
//		if ((group_num[1] * 2 + group_num[0]) % 4)
//			out++;
//	}
//	else
//	{
//		out += group_num[0];
//		group_num[2] -= group_num[0];
//		out += group_num[2] + group_num[1];
//	}
//	cout << out;
//}