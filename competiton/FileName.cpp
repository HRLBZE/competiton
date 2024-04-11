//#include <iostream>
//using namespace std;
//
////确定是否可以拆，以及拆了行不行
//int derm_chai(int number)
//{
//	if (number < 10)
//		return 0;
//	else
//	{
//		int ten = number / 10;
//		int bit = number % 10;
//		if (ten > bit)
//			return 0;
//		else
//			return 1;
//	}
//}
//
//void chai(int* ten, int* bit, int number)
//{
//	*ten = number / 10;
//	*bit = number % 10;
//}
//
//int compare(int front, int behind, int nnn)
//{
//	int front_ten = 0;
//	int front_bit = 0;
//	int behind_ten = 0;
//	int behind_bit = 0;
//	int derm = 1;
//	int cfderm = 0;
//	int chderm = 0;
//	if (front > behind)
//	{
//		if (cfderm = derm_chai(front))
//		{
//			chai(&front_ten, &front_bit, front);
//		}
//		if (chderm = derm_chai(behind))
//		{
//			chai(&behind_ten, &behind_bit, behind);
//		}
//		else
//			behind_ten = behind;
//		if (front_bit >= behind_ten || cfderm == 0)
//		{
//			if (nnn == 0 && cfderm)
//			{
//				if (front_bit <= behind)
//					return 1;
//			}
//			derm = 0;
//		}
//		else
//		{
//			derm = 1;
//		}
//	}
//	return derm;
//}
//
//int main()
//{
//	int num = 0;
//	cin >> num;
//	int n = 0;
//	for (int i = 0; i < num; i++)
//	{
//		int derm = 1;
//		cin >> n;
//		int* p;
//		p = new int[n + 1];
//		for (int j = 0; j < n; j++)
//		{
//			cin >> p[j];
//		}
//		for (int j = 0; j < n - 1; j++)
//		{
//			derm = compare(p[j], p[j + 1], j);
//			if (derm == 0)
//				break;
//		}
//		delete[] p;
//		if (derm == 1)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//}