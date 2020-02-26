//#include <iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k)
//	{
//		/*int length = nums.size();
//		int index = length - k;
//		if (index < 0)
//		{
//			index = k % length;
//		}
//
//		vector<int>::iterator it;
//		vector<int> ret(nums.begin() + index, nums.end());
//		for (int i = 0; i < index; ++i)
//		{
//			ret.push_back(nums[i]);
//		}
//
//		nums = ret;*/
//		 
//
//		int* a = new int[nums.size()];
//		for (int i = 0; i < nums.size(); i++) {
//			a[(i + k) % nums.size()] = nums[i];
//		}
//		for (int i = 0; i < nums.size(); i++) {
//			nums[i] = a[i];
//		}
//
//		 
//
//		for (auto & e : nums)
//		{
//			cout << e << " ";
//		}
//
//	}
//
//};
//
//int main()
//{
//	vector<int> m_v{ 1, 2};
//	Solution test;
//	test.rotate(m_v, 3);
//	system("pause");
//	return 0;
//}
