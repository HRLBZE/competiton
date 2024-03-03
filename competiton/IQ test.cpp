//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int der = 0;
//	int nn = 0;
//	int n = 0;
//	int str[100] = { '0' };
//	cin >> nn;
//	int out_num = 0;
//	int evenness1 = 0; int evenness2 = 0;
//	for (int i = 0; i < nn; i++)
//		cin >> str[i];
//	evenness1 = str[n] % 2;
//	n++;
//	while (str[n])
//	{
//		if (der == 1 && str[n] % 2 != evenness1)
//		{
//			out_num = n + 1;
//		}
//		if (der == 2)
//		{
//			if (str[n] % 2 == evenness1)
//				out_num = 2;
//			else
//				out_num = 1;
//		}
//		if (der == 0)
//		{
//			if (str[n] % 2 == evenness1)
//			{
//				der = 1;
//				continue;
//			}
//			else
//			{
//				evenness2 = str[n] % 2;
//				der = 2;
//			}
//		}
//		n++;
//	}
//	cout << out_num;
//	return 0;
//}





//int main()
//{
//	int num = 0;
//	int str[100] = { '0' };
//	int n, n1, n2, der;
//	n = n1 = n2 = der = 0;
//	cin >> n;
//	int out_num = 0;
//	for (int i = 0; i < n; i++)
//		cin >> str[i];
//	n1 = str[num + 1] - str[num]; //num==0
//	num++;
//	while (str[num])
//	{
//		if (str[num] + n1 == str[num + 1])
//			der = 1;
//		else
//		{
//			der = 2;
//			n2 = str[num + 1] = str[num];
//		}	if (str[num] + n1 != str[num + 1] && der == 1)
//			{
//				out_num = num + 2;
//				break;
//			}
//			if (str[num] + n1 != str[num + 1] && der == 2)
//			{
//				if(str[num])
//			}
//
//		num++;
//	}
//	cout << out_num;
//	return 0;
//}