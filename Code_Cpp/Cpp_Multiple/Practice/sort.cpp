#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    vector<vector<string>>List2D;
    vector<string>List1D;
    string lineStr;
    ifstream file;
    file.open("E:\\CodeField1\\for-test.csv");
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
            List1D.push_back(str);
        }
        List2D.push_back(list);
    }
    file.close();
    return 0;
}
