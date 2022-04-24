#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    vector<vector<string>>numList;
    string lineStr;
    ifstream file;
    file.open("E:\\CodeField1\\Code_Python\\Python_Single\\weather.csv");
    if (!file)
    {
        return false;
    }
    while (getline(file, lineStr))
    {
        cout << lineStr << endl;
        stringstream line(lineStr);
        string str;
        vector<string>list;
        while (getline(line, str,','))
        {
            list.push_back(str);
        }
        numList.push_back(list);
    }
    file.close();
    return 0;
}
