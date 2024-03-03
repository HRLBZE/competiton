//#include<iostream>
//using namespace std;
//int main()
//{
//	int j, i;
//	j = i = 0;
//	char str[105] = { '0' };
//	char str1[210] = { '0' };
//	cin >> str;
//	while (str[i])
//	{
//		if (str[i] == 'A' || str[i] == 'a' || str[i] == 'O' || str[i] == 'o' || str[i] == 'Y' || str[i] == 'y' || str[i] == 'E' || str[i] == 'e' || str[i] == 'U' || str[i] == 'u' || str[i] == 'I' || str[i] == 'i')
//			i++;
//		else if (i == 0)
//		{
//			str1[0] = '.';
//			++j;
//			str1[j] = tolower(str[i]);
//			i++;
//			j++;
//		}
//		else
//		{
//			str1[j] = '.';
//			++j;
//			str1[j] = tolower(str[i]);
//			j++;
//			i++;
//		}
//	}
//	cout << str1;
//}