//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int tmp;
//		long long sub = 0;
//		vector<int> v;
//		for (auto & e : digits)
//		{
//			tmp = e;
//			sub = sub * 10 + tmp;
//
//		}
//
//		long long ret = sub + 1;
//		int wei;
//		for (long long i = ret; i; i /= 10)
//		{
//			wei = i % 10;
//			v.push_back(wei);
//		}
//		reverse(v.begin(), v.end());
//		return v;
//.
//	}
//};
//
//int main()
//{
//	vector<int>v{ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	Solution test;
//	test.plusOne(v);
//	system("pause");
//	return 0;
//}
// 