//#include<bits/stdc++.h>
//using namespace std;
//int sst[1000001];
//int main()
//{
//	int nst;
//	cin >> nst;
//	for (int i = 0; i < nst; i++)
//		cin >> sst[i];
//	sort(sst, sst + nst);
//	int nday;
//	cin >> nday;
//	for (int i = 0; i < nday; i++)
//	{
//		int use = 0;
//		cin >> use;
//		cout << upper_bound(sst, sst + nst, use) - sst << endl;
//	}
//	return 0;
//}


//upper_bound 和 lower_bound的使用方法
//eg. upper_bound( 数组，数组长度，要比较的值)-数组名/数组头 
//得到第一个小于等于要比较的值的位置   即 n<=x     返回n的位置
//lower_bound则是第一个大于等于要比较的值的位置    即x<=n,return n