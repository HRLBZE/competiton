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


//upper_bound �� lower_bound��ʹ�÷���
//eg. upper_bound( ���飬���鳤�ȣ�Ҫ�Ƚϵ�ֵ)-������/����ͷ 
//�õ���һ��С�ڵ���Ҫ�Ƚϵ�ֵ��λ��   �� n<=x     ����n��λ��
//lower_bound���ǵ�һ�����ڵ���Ҫ�Ƚϵ�ֵ��λ��    ��x<=n,return n