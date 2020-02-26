//#include <iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	int myAtoi(string str) 
//	{
//		int i = 0;//位置
//		long long res = 0;//输出结果
//		int bol = 1;//符号
//		while (i < str.size() && str[i] == ' ')
//			++i;//找到第一个非空格的字符
//		if (i == str.size())
//			return 0;
//		if (str[i] == '-') 
//		{ 
//			bol = -1; 
//			++i; 
//		}//运算符正负号
//		else if (str[i] == '+') 
//		{
//			bol = 1; 
//			++i;
//		}
//		while (i < str.size() && str[i] >= '0' && str[i] <= '9') 
//		{
//			res = res * 10 + (str[i++] - '0');//使用的很好的地方
//			if (res >= 2147483648) 
//			{
//				if (bol == 1)
//					return INT_MAX;
//				else 
//					return INT_MIN;
//			}
//		}
//		return res * bol;
//	}
//};
//
//
//class lxh {
//public:
//	int myAtoi(string str) {
//		int flag = 0, ans = 0;
//		for (int i = 0; i < str.size(); i++)
//		{
//			char s = str[i];
//			if (s >= '0' && s <= '9')
//			{
//				if (flag == 0) flag = 1; //没有符号直接遇到数字，默认为正
//				int tmp = (s - '0') * flag;
//				if (ans > 214748364 || (ans == 214748364 && tmp > 7))
//					return 2147483647;
//				if (ans < -214748364 || (ans == -214748364 && tmp < -8))
//					return -2147483648;
//				ans = ans * 10 + tmp;
//			}
//			else if (s == '+' || s == '-')
//			{
//				if (flag != 0) break;
//				flag = s == 45 ? -1 : 1;
//			}
//			else if (s == ' ')
//			{
//				if (flag != 0) break;
//			}
//			else break; //遇到非数字直接跳出
//		}
//		return ans;
//	}
//};
//
//
//int main()
//{
//	
//	system("pause"); 
//	return 0;
//}