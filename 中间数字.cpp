//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int pivotIndex(vector<int>& nums) {
//		vector<int>::iterator it;
//		long long sum=0;
//		for (auto & e:nums)
//		{
//			sum += e;
//		}
//		for (it = nums.begin(); it != nums.end(); ++it)
//		{
//			int left = subleft(nums.begin(), it);
//			//int right = subright(it, nums.end());
//			int right = sum - left;
//			if (left == right)
//			{
//				return it - nums.begin();
//			}
//
//		}
//		return -1;
//
//
//	}
//
//	int subleft(vector<int>::iterator str, vector<int>::iterator end)
//	{
//		int num = end - str;
//		int add = 0;
//		for (int i = 0; i < num; ++i)
//		{
//			add += *(str + i);
//		}
//		return add;
//	}
//	int subright(vector<int>::iterator str, vector<int>::iterator end)
//	{
//		int num = end - str;
//		int add = 0;
//		for (int i = 1; i < num; ++i)
//		{
//			add += *(str + i);
//		}
//		return add;
//	}
//
//
//};
//
//int main()
//{
//	vector<int> v{ 1,7,3,6,5,6 };
//	Solution test;
//	cout<<test.pivotIndex(v);
//	system("pause");
//	return 0;
//}