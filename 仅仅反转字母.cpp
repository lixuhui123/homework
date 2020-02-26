//#include <iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string reverseOnlyLetters(string S) {
//		string tmp;
//		for (int i = S.size() - 1; i >= 0; --i)
//		{
//			if ((S[i] >= 'a'&& S[i] <= 'z') || (S[i] >= 'A'&& S[i] <= 'Z'))
//			{
//				tmp += S[i];
//
//			}
//
//		}
//		for (int i = 0; i < S.size(); ++i)
//		{
//			if ((S[i] >= 'a'&& S[i] <= 'z') || (S[i] >= 'A'&& S[i] <= 'Z'))
//			{
//				;
//			}
//			else
//			{
//				string::iterator it = tmp.begin();
//				tmp.insert(it+i,S[i]);
//			}
//		}
//		return tmp;
//	}
//};
//
// 
//int main()
//{
//	string s("a-bC-dEf-ghIj");
//	Solution test;
//	test.reverseOnlyLetters(s);
//	system("pause"); 
//	return 0;
//}