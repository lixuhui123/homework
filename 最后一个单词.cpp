//#include <iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int lengthOfLastWord(string s) {
//		/*char str[100] = {0};
//		vector<string> v;
//		for (int i = 0; i < s.size(); ++i)
//		{
//			str[i] = s[i];
//		}
//
//		char * pch;
//		pch = strtok(str, " ");
//		while (pch != NULL)
//		{
//			int i = 0;
//			for (i = 0; pch[i] != '\0'; ++i);
//			string tmp(pch, pch + i);
//			v.push_back(tmp);
//			pch = strtok(nullptr, " ");
//		}
//		if (v.size()==0)
//		{
//			return 0;
//		}
//		else
//		{
//			return v[v.size() - 1].size();
//
//		}*/
//
//		int wordLength = 0;
//		int index = 0;
//
//		//�ȶ�λ���ַ���β��
//		while (s[index]) {
//			index++;
//		}
//		index--;
//
//		//�Ӻ���ǰ��
//		//���˿ո�
//		while (index >= 0 && s[index] == ' ') {
//			index--;
//		}
//
//		//��ȡ����
//		while (index >= 0 && s[index] != ' ') {
//			index--;
//			wordLength++;
//		}
//
//		return wordLength;
//
//	}
//};
//
//int main()
//{
//	Solution test;
//	string s("     a");
//	cout<<test.lengthOfLastWord(s);
//	system("pause");
//	return 0;
//}