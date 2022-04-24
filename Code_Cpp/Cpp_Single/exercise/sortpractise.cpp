#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    vector<string>numList;
    string str=NULL;
    ifstream file;
    file.open("E:\\CodeField1\\Code_Python\\Python_Single\\weather.csv");
    while (getline(file,str))
    {
        cout<<str<<endl;
        numList.push_back(str);
    }
    file.close();
}
