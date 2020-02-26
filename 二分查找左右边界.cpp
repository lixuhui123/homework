//#include <iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int leftfind(vector<int>& nums, int target)
//	{
//		
//		int length = nums.size();
//		if (length==0)
//		{
//			return -1;
//		}
//		int left = 0;
//		int right = length;
//
//		while (left < right)//会引起left=right的时候跳出，left位没有被检测
//		{
//			int mid = (left + right) / 2;
//
//			if (nums[mid] == target)
//			{
//				right = mid;
//
//			}
//			else if (nums[mid] > target)
//			{
//				right = mid;
//			}
//			else if (nums[mid] < target)
//			{
//				left = mid + 1;
//			}
//		}
//		if (left==0)
//		{
//			return -1;
//		}
//		return nums[left] == target ? left : -1;
//		
//	}
//	int rightfind(vector<int>& nums, int target)
//	{
//		int length = nums.size();
//		if (length == 0)
//		{
//			return -1;
//		}
//		int left = 0;
//		int right = length;
//
//		while (left < right)//左开右闭
//		{
//			int mid = (left + right) / 2;
//
//			if (nums[mid] == target)
//			{
//				left = mid + 1;//往右边赶
//			}
//			else if (nums[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else if (nums[mid] > target)
//			{
//				right = mid;
//			}
//
//		}
//
//		if (left == 0)
//		{
//			return -1;
//		}
//		return nums[left - 1] == target ? left - 1 : -1;
//	}
//	vector<int> searchRange(vector<int>& nums, int target)
//	{
//		//二分查找，寻找左边界
//		int left = leftfind(nums, target);
//		int right = rightfind(nums, target);
//		vector<int> ret;
//		if ((left==-1) ||(right==-1))
//		{
//			ret.push_back(-1);
//			ret.push_back(-1);
//
//		}
//		else
//		{
//			ret.push_back(left);
//			ret.push_back(right);
//		}
//		return ret;
//
//	}
//};
//
//
//int main()
//{
//	Solution test;
//	vector<int> v{5, 7, 7, 8, 8, 10};
//	vector<int> tmp;
//	tmp = test.searchRange(v, 6);
//
//	for (auto & e:tmp)
//	{
//		cout << e << " ";
//	}
//	system("pause");
//	return 0;
//}