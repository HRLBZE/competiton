//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct cards
//{
//	long long zheng;
//	long long fang;
//	long long sum;
//};
//
//cards card[500001];
//
//void swap1(cards* card)
//{
//	long long tmp;
//	if (card->zheng > card->fang)
//		;
//	else
//	{
//		tmp = card->fang;
//		card->fang = card->zheng;
//		card->zheng = tmp;
//	}
//	card->sum = card->fang + card->zheng;
//	return;
//}
//
//bool compa(cards a, cards b)
//{
//	return a.sum  <  b.sum;
//}
//
//int main()
//{
//	long long  n, i;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> card[i].zheng >> card[i].fang;
//		swap1(&card[i]);
//	}
//	sort(card, card + n, compa);
//	long long sum = 0;
//	for (i = 0; i < n / 2; i++)
//	{
//		sum += card[i].fang;
//	}
//	for (i = n / 2; i < n; i++)
//		sum -= card[i].zheng;
//	cout << sum;
//	return 0;
//}