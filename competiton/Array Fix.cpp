//#include<bits/stdc++.h>
//using namespace std;
//int a[100] = { 0 };
//int n;
//int  solve()
//{
//    int x = a[n];
//    for (int i = n - 1; i >= 1; i--)
//    {
//        if (a[i] <= x)
//        {
//            x = a[i];
//            continue;
//        }
//        if (a[i] < 10) return 0;
//        if (a[i] / 10 > a[i] % 10) return 0;
//        if (a[i] % 10 > x) return 0;
//        x = a[i] / 10;
//    }
//    return 1;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        cin >> n;
//        for (int i = 1; i <= n; i++)
//        {
//            cin >> a[i];
//        }
//
//        if (solve()) puts("YES");
//        else puts("NO");
//    }
//    return 0;
//}











//#include<iostream>
//
//
//#define ok 1
//#define fall 0
//
//struct num
//{
//	int one;
//	int ten;
//	int depart = fall;
//	int n;
//};
//
//void chai(num* a)
//{
//	a->one = a->n % 10;
//	a->ten = a->n / 10;
//	a->depart = ok;
//}
//
//int compare_one(num a, num b)
//{
//	if (a.one > b.n)
//		return fall;
//	else
//		return ok;
//	
//}
//
//int compare_ten(num a, num b)
//{
//	if (a.depart == fall)
//	{
//		if(a.n)
//	}
//}
//
//int compare_n(num* c,num* a,num* b)
//{
//	int derm = ok;
//	if (a->n <= b->n)
//		return derm;
//	else
//	{
//		chai(a);
//		if (a->ten > a->one)
//			return fall;
//		derm = compare_one(*a, *b);
//		if (derm != ok)
//			return derm;
//		else
//			derm = compare_ten(*c, *a);
//		return derm;
//	}
//}
//
//
//int main()
//{
//
//}
//
////#include<iostream>
////using namespace std;
////
////struct number
////{
////	int one;
////	int ten;
////	int der = 0;//der代表没有分
////	int inter;
////}numb;
////
////int chai()
////{
////	;
////}
////
////int compare(int* arr1, int* arr2, int local)
////{
////	if (*arr1 <= *arr2)
////		return 1;
////	else
////	{
////		int one = *arr1 % 10;
////		int ten = *arr1 / 10;
////		if (ten > one)
////			return 0;
////		if (local == 0)
////		{
////			if (one <= *arr2)
////				return 1;
////			else
////			{
////				int one2 = *arr2 % 10;
////				int ten2 = *arr2 / 10;
////				if (ten2 > one2)
////					return 0;
////				else if (one > ten2)
////					return 0;
////				*arr2 = one2;
////			}
////		}
////
////	}
////}
////
////int main()
////{
////	int total;
////	cin >> total;
////	int i;
////	for (i = 0; i < total; i++)
////	{
////		int ni;
////		int derm;
////		cin >> ni;
////		int* arr;
////		arr = new int[ni + 1];
////		int j;
////		//input elements
////		for (j = 0; j < ni; j++)
////			cin >> arr[j];
////
////		for (j = 0; j < ni - 1; j++)
////		{
////			derm = compare(&arr[j], &arr[j - 1], j);
////			if (derm == 0)
////				break;
////		}
////
////
////		if (derm == 1)
////			cout << "YES" << endl;
////		else
////			cout << "NO" << endl;
////
////		delete[]arr;
////	}
////}
//
////#include<iostream>
////using namespace std;
////
////struct str
////{
////	int n;
////	int shi;
////	int ge;
////	int der = 0;
////};
////
////void chai(str* arr, int i)
////{
////	arr->shi = arr->n / 10;
////	arr->ge = arr->n % 10;
////	arr->der = 1;
////}
////
////int compare(str arr[], int n)
////{
////	for (int i = 0; i < n - 1; i++)
////	{
////		if (arr[i].n <= arr[i + 1].n)
////			continue;
////		else
////		{
////			chai(&arr[i], i);
////			if (arr[i].shi > arr[i].ge)
////				return -1;
////			else
////			{
////				if (i == 0)
////				{
////					if (arr[i].ge > arr[i + 1].n)
////						return -1;
////				}
////				else
////				{
////					if (arr[i].ge > arr[i + 1].n)
////						return -1;
////					else if (arr[i].shi < arr[i - 1].n && arr[i - 1].der == 0)
////						return -1;
////					else if (arr[i].shi < arr[i - 1].ge && arr[i - 1].der == 1)
////						return -1;
////				}
////			}
////		}
////	}
////	return 1;
////}
////
////
////
////
////
////
////int main()
////{
////	int sum;
////	int derm = 1;
////	cin >> sum;
////	for (int i = 0; i < sum; i++)
////	{
////		int number = 0;
////		cin >> number;
////		str* arr = new str[number + 1];
////		for (int j = 0; j < number; j++)
////		{
////			cin >> arr[j].n;
////		}
////		derm = compare(arr, number);
////
////		delete[] arr;
////		if (derm == 1)
////			cout << "YES" << endl;
////		else
////			cout << "NO" << endl;
////	}
////	return 0;
////}
////
////
////
//////void chai(int arr, int* ge, int* shi)
//////{
//////	*ge = arr % 10;
//////	*shi = arr / 10;
//////}
//////
//////
//////int compare(int arr[], int n)
//////{
//////	for (int j = 0; j < n - 1; j++)
//////	{
//////		if (arr[j] <= arr[j + 1])
//////			continue;
//////		else
//////		{
//////			int ge, shi;
//////			chai(arr[j], &ge, &shi);
//////			if (ge < shi)
//////				return -1;
//////			else
//////			{
//////				if (j == 0)
//////				{
//////					if (ge > arr[j + 1])
//////						return -1;
//////				}
//////				else
//////				{
//////					if (shi < arr[j - 1])
//////						return -1;
//////					else if (ge > arr[j + 1])
//////						return -1;
//////				}
//////
//////			}
//////		}
//////	}
//////	return 1;
//////}
//////
//////
//////int main()
//////{
//////	int num, n;
//////
//////	cin >> num;
//////	for (int i = 0; i < num; i++)
//////	{
//////		cin >> n;
//////		int derm = 1;
//////		str* arr = new str[n + 1];
//////		for (int j = 0; j < n; j++)
//////			cin >> arr[j].n;
//////		derm = compare(arr, n);
//////
//////		if (derm == 1)
//////			cout << "YES" << endl;
//////		else
//////			cout << "NO" << endl;
//////
//////		delete[]arr;
//////	}
//////	return 0;
//////}
////
