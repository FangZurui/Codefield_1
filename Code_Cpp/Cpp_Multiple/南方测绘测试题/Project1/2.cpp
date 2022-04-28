#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	string str;
	cin >> str;
	vector<string>arr;
	vector<string>unique;
	//store
	arr.push_back(str);
	//calculate
	for (int i = 0; i <= arr.size(); i++)
	{
		unique[i] = arr[i];
		for (int j = 0; j <= unique.size(); j++)
		{
			if (unique[j] == arr[i])
				continue;
		}
	}
	return int(unique.size()-1);
}