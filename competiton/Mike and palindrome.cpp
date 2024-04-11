//#include<iostream>
//using namespace std;
//int main()
//{
//	char str1[16] = { '0' };
//	int n1, n2;
//	n1 = 0;
//	int der = 0;
//	cin >> str1;
//	while (str1[n1])
//	{
//		n1++;
//	}
//	n2 = n1 - 1;
//	for (int i = 0; i < n1; i++)
//	{
//		if (str1[i] != str1[n2])
//			der++;
//		n2--;
//	}
//	if (n1 % 2)
//	{
//		if (der == 2 || der == 0)
//			cout << "YES";
//		else
//			cout << "NO";
//	}
//	if (!(n1 % 2))
//	{
//		if (der == 2)
//			cout << "YES";
//		else
//			cout << "NO";
//	}
//	return 0;
//}