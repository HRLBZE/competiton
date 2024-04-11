//#include<iostream>
//#include <iomanip>
//#include "stdlib.h"
//using namespace std;
//struct Account
//{
//	double money;
//	double cop = 0;
//}account;
//
//int main()
//{
//	double sum = 0.0;
//	int n, m, i;
//	cin >> n >> m;
//	Account* accoun = new Account[n];
//	for (i = 0; i < n; i++)
//		cin >> accoun[i].money;
//	for (i = 0; i < m; i++)
//	{
//		int x, y, tmp1;
//		double z, tmp2;
//		cin >> x >> y >> z;
//		tmp1 = z;   //转账金额向下取整
//		tmp2 = z - tmp1;  //盗取的转账金额
//		if (accoun[x - 1].money - z < 0)
//			break;
//		else
//			accoun[x - 1].money -= z;
//
//		accoun[y - 1].money += tmp1;
//		accoun[y - 1].cop += tmp2;
//		sum += tmp2;
//		if (accoun[y - 1].cop > 1)
//			break;
//	}
//	cout << setiosflags(ios::fixed) << setprecision(2);
//	cout << sum << endl;
//	return 0;
//}
//
