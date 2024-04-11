//#include<iostream>
//using namespace std;
//
//struct datea
//{
//	int a;
//	int point;
//}daya[10000];
//
//struct dateb
//{
//	int b;
//	int point;
//}dayb[10000];
//
//struct datec
//{
//	int c;
//	int point;
//}dayc[10000];
//
//
//struct twp
//{
//	int posi;
//	int value;
//}tmp;
//
////a>b 返回b的负数，a的正数
//int reab(int n1, int n2, datea daya[], dateb dayb[], int n11, int n22)
//{
//	if (daya[n2].a < dayb[n2].b)
//		return -1;
//	if (daya[n2].a > dayb[n2].b)
//		return 1;
//	if (daya[n1 - 1].a == dayb[n2 - 1].b)
//		return reab(n1 - 1, n2 - 1, daya, dayb, n11, n22);
//	if (n1 == n2 && n1 == 0)
//		return 1;
//}
//
////a>c 返回c的负数 a的正数
//int reac(int n1, int n2, datea daya[], datec dayc[], int n11, int n22)
//{
//	if (daya[n2].a < dayc[n2].c)
//		return -1;
//	if (daya[n2].a > dayc[n2].c)
//		return 1;
//	if (daya[n1 - 1].a == dayc[n2 - 1].c)
//		return reac(n1 - 1, n2 - 1, daya, dayc, n11, n22);
//	if (n1 == n2 && n1 == 0)
//		return 1;
//}
//
////b大于c，返回c的负数，b的正数
//int rebc(int n1, int n2, dateb dayb[], datec dayc[], int n11, int n22)
//{
//	if (dayb[n2].b < dayc[n2].c)
//		return -1;
//	if (dayb[n2].b > dayc[n2].c)
//		return 1;
//	if (dayb[n1 - 1].b == dayc[n2 - 1].c)
//		return rebc(n1 - 1, n2 - 1, dayb, dayc, n11, n22);
//	if (n1 == n2 && n1 == 0)
//		return 1;
//}
//
//int main()
//{
//	int out = 0;
//	int test;
//	cin >> test;
//	for (int test1 = 0; test1 < test; test1++)
//	{
//		//input the data
//		int dates;
//		cin >> dates;
//		for (int i = 0; i < dates; i++)
//		{
//			cin >> daya[i].a;
//			daya[i].point = i;
//		}
//		for (int i = 0; i < dates; i++)
//		{
//			cin >> dayb[i].b;
//			dayb[i].point = i;
//		}
//		for (int i = 0; i < dates; i++)
//		{
//			cin >> dayc[i].c;
//			dayc[i].point = i;
//		}
//
//
//		//重排a
//		tmp.value = daya[0].a;
//		tmp.posi = 0;
//		for (int i2 = 0; i2 < dates - 1; i2++)
//		{
//			for (int i3 = 0; i3 < dates - 1 - i2; i3++)
//			{
//				if (daya[i3].a > daya[i3 + 1].a)
//				{
//					tmp.value = daya[i3].a;
//					tmp.posi = daya[i3].point;
//					daya[i3].a = daya[i3 + 1].a;
//					daya[i3].point = daya[i3 + 1].point;
//					daya[i3 + 1].point = tmp.posi;
//					daya[i3 + 1].a = tmp.value;
//
//				}
//			}
//		}
//		tmp.value = dayb[0].b;
//		tmp.posi = 0;
//		for (int i2 = 0; i2 < dates - 1; i2++)
//		{
//			for (int i3 = 0; i3 < dates - 1 - i2; i3++)
//			{
//				if (dayb[i3].b > dayb[i3 + 1].b)
//				{
//					tmp.value = dayb[i3].b;
//					tmp.posi = dayb[i3].point;
//					dayb[i3].b = dayb[i3 + 1].b;
//					dayb[i3].point = dayb[i3 + 1].point;
//					dayb[i3 + 1].point = tmp.posi;
//					dayb[i3 + 1].b = tmp.value;
//
//				}
//			}
//		}
//		tmp.value = dayc[0].c;
//		tmp.posi = 0;
//		for (int i2 = 0; i2 < dates - 1; i2++)
//		{
//			for (int i3 = 0; i3 < dates - 1 - i2; i3++)
//			{
//				if (dayc[i3].c > dayc[i3 + 1].c)
//				{
//					tmp.value = dayc[i3].c;
//					tmp.posi = dayc[i3].point;
//					dayc[i3].c = dayc[i3 + 1].c;
//					dayc[i3].point = dayc[i3 + 1].point;
//					dayc[i3 + 1].point = tmp.posi;
//					dayc[i3 + 1].c = tmp.value;
//
//				}
//			}
//		}
//		int i1, i2, i3;
//		i1 = i2 = i3 = dates - 1;
//		while (i1 && i2 && i3)
//		{
//			if (dayb[i2].point == daya[i1].point)
//			{
//				int h = reab(i1, i2, daya, dayb, i1, i2);
//				if (h > 0)
//				{
//					h = 1;
//					i2 -= h;
//				}
//				if (h < 0)
//				{
//					h = -1;
//					i1 += h;
//				}
//			}
//			if (dayc[i3].point == daya[i1].point)
//			{
//				int h = reac(i1, i3, daya, dayc, i1, i3);
//				if (h > 0)
//				{
//					h = 1;
//					i3 -= h;
//				}
//				if (h < 0)
//				{
//					h = -1;
//					i1 += h;
//				}
//			}
//			if (dayc[i3].point == dayb[i2].point)
//			{
//				int h = rebc(i2, i3, dayb, dayc, i2, i3);
//				if (h > 0)
//				{
//					h = 1;
//					i3 -= h;
//				}
//				if (h < 0)
//				{
//					h = -1;
//					i2 += h;
//				}
//			}
//
//			if (daya[i1].point != dayb[i2].point && daya[i1].point != dayc[i3].point && dayb[i2].point != dayc[i3].point)
//				break;
//		}
//		out = daya[i1].a + dayb[i2].b + dayc[i3].c;
//		cout << out << endl;
//	}
//}
//
//
//
////struct dat
////{
////	int a;
////	int b;
////	int c;
////};
////
////struct Max
////{
////	int value;
////	int point;
////}abc[3];
////dat date[10000];
////
////int main()
////{
////	int test;
////	int day;
////	cin >> test;
////	for (int i = 0; i < test; i++)
////	{
////		cin >> day;
////		int max = 0;
////		int max_abc=0;
////		int sum = 0;
////		int max_num[3][3];
////		for (int j = 0; j < day; j++)
////			cin >> date[j].a;
////		for (int j = 0; j < day; j++)
////			cin >> date[j].b;
////		for (int j = 0; j < day; j++)
////			cin >> date[j].c;
////		max_num[0][0] = 0;
////		max_num[1][0] = 0;
////		max_num[2][0] = 0;
////		
////		for (int num_kkk = 0; num_kkk < day; num_kkk++)
////		{
////			max_abc = 0;
////			if (date[day].a >= max_abc)
////			{
////				max_abc = date[day].a;
////			}
////		}
////	
////		cout << max << endl;
////	}
////	return 0;
////}
//
//
////#include<iostream>
////#include<string>
////using namespace std;
////int main()
////{
////	int test;
////	int n;
////	cin >> test;
////
////	for (int k_ = 0; k_ < test; k_++)
////	{
////		cin >> n;
////		int str[10000][3] = { '0' };
////		int MAX = 0;
////		for (int i = 0; i < 3; i++)
////			for (int j = 0; j < n; j++)
////				cin >> str[j][i];
////
////		for (int i = 0; i < n; i++)
////			for (int j = 0; j < n; j++)
////				for (int k = 0; k < n; k++)
////				{
////					if (i == j || i == k || j == k)
////						continue;
////					int cnm = str[i][0] + str[j][1] + str[k][2];
////					if (cnm > MAX)
////						MAX = cnm;
////				}
////		cout << MAX << endl;
////	}
////	return 0;
////}