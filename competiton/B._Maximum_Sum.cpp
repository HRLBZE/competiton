////�����������
//#include<cmath>
//#include<iostream>
//using namespace std;
//
//int str[200001];
//
//int main()
//{
//	int n_number, i;
//	cin >> n_number;
//	for (i = 0; i < n_number; i++)
//	{
//		long long operator_num, total_n;
//		cin >> total_n >> operator_num;
//		//��������
//		long long kk = 0;
//		for (int j = 0; j < total_n; j++)
//		{
//			cin >> str[j];
//			kk += str[j];
//		}
//		kk %= 1000000007;
//		//�ҵ����������������
//		long long max, b = 0;
//		max = 0;
//		for (int j = 0; j < total_n; j++)
//		{
//			if (b >= 0)
//				b += str[j];
//			else
//				b = str[j];
//			if (max < b)
//				max = b;
//		}
//		//�Ѿ��ҵ����������
//		long long max1 = (max) % 1000000007;
//		for (int i = 0; i < operator_num; i++)
//		{
//			max = (max * 2) % 1000000007;
//		}
//		max -= max1;
//		long long sum = (max + kk)%1000000007;
//		if (sum < 0)
//			sum += 1000000007;
//		cout << sum << endl;
//	}
//	return 0;
//}
