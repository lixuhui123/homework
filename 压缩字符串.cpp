//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int _compress(vector<char>& chars)
//	{
//		int len = 0;
//		for (int i = 0, cnt = 1; i < chars.size(); i++, cnt++)
//		{
//			if (i + 1 == chars.size() || chars[i] != chars[i + 1])
//			{
//				chars[len] = chars[i];
//				len++;
//				if (cnt > 1)
//				{
//					for (char ch : to_string(cnt))
//					{
//						chars[len] = ch;
//						len++;
//					}
//				}
//				cnt = 0;
//			}
//		}
//		return len;
//	}
//
//
//	int compress(vector<char>& chars)
//	{
//		//双指针一个标记读的位置一个标记写的位置
//		int read = 0;
//		int write = 0;
//		int len = 1;
//		int length = chars.size();
//		//int ret = 0;
//		for (read == 0; read < length; ++read)
//		{
//			char tmp = chars[read];
//			while (read < length - 1 && tmp == chars[read + 1])
//			{
//				len++;
//				read++;
//				 
//			}
//		 
//			chars[write++] = tmp;
//			if (len > 1)
//			{
//				for (char ok : to_string(len))
//				{
//					chars[write++] = ok;
//				}
//				len = 1;
//			}
//			len = 1;
//
//		}
//		return write ;
//	}
//};
//
//int main()
//{
//	Solution test;
//	string s("aabbccc");
//	vector<char> v(s.begin(),s.end());
//	cout<<test.compress(v);
//
//	system("pause");
//	return 0;
//}