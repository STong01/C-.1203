#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int test(string s1, string s2)
{
	vector<vector<int>> p;
	for (int i = 0; i < s1.size(); i++)
	{
		p[i][0] = i;
	}
	for (int j = 0; j < s2.size(); j++)
	{
		p[0][j] = j;
	}


}

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;



	system("pause");
	return 0;
}