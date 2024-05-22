//#include<iostream>
//using namespace std;
////Ã¶¾Ù·¨
//
//struct obj
//{
//	int body;
//	int wor;
//};
//
//obj object[1001];
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//
//int recursion(int behind, int body)
//{
//	if (behind < 0 && body >= 0)
//		return 0;
//	else if (behind < 0 && body < 0)
//		return -object[behind + 1].wor;
//	else if (body < 0)
//		return -object[behind + 1].wor;
//	else
//		return max(recursion(behind - 1, body - object[behind].body) + object[behind].wor, recursion(behind - 1, body));
//}
//
//
//int main()
//{
//	int i, n, v;
//	cin >> n >> v;
//	for (i = 0; i < n; i++)
//		cin >> object[i].body >> object[i].wor;
//	int max = recursion(n - 1, v);
//	cout << max << endl;
//	return 0;
//}