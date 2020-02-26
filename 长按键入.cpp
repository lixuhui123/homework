//#include <iostream>
//#include<string>
//#include <unordered_set>
//using namespace std;
//
//class Solution {
//public:
//	bool isLongPressedName(string name, string typed) {
//		//剔除连续的字符只保留一个
//
//		string tmp;
//		unordered_set<char> s;
//		for (auto & e : typed)
//		{
//			s.insert(e);
//		}
//
//		for (auto & e : s)
//		{
//			tmp += e;
//		}
//
//		int ret = strcmp(name.c_str(), tmp.c_str());
//		if (ret == false)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//		return true;
//
//
//
//	}
//};
//
//
//int main()
//{
//	string s1("alex");
//	string s2("aaleex");
//	Solution test;
//	cout<<test.isLongPressedName(s1, s2);
//
//	 	system("pause");
//	return 0;
//}
// 
// 