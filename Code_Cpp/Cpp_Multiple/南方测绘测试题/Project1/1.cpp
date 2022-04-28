#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compareSize(string str1, string str2)
{
	if (int(str1.length()) - int(str2.length()) >= 0)
		return int(str1.length()) + 1;
	else
		return int(str2.length()) + 1;
}
int main()
{
	string str1,str2;
	cin >> str1;
	cin >> str2;
	vector<int>numList1;
	vector<int>numList2;
	vector<int>numList3;
	int num = 0;
	int size = compareSize(str1, str2);
	//write in array
	for (int i = size; i >= 0; i--)
	{
		if (str1[i])
			numList1[size-i] = 0;
		if (!str2[i])
			numList2[size - i] = 0;
		numList1[i] = str1[i];
		numList2[i] = str2[i];
	}
	//calculate
	for (int i = size; i >= 0; i--)
	{
		numList3[i] = (numList1[i] + numList2[i] + num) % 10;
		if (numList1[i] + numList2[i] - 10 > 0)
			num = 1;
		else
			num = 0;
	}
	for (int i = 0; i <= numList3.size(); i++)
	{
		cout << numList3[i];
	}
	return 0;
}