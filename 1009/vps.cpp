#include<iostream>
#include<string>
using namespace std;

string solve(string s)
{
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
			cnt++;
		else
			cnt--;
		if (cnt < 0)
			return "NO";
	}
	if (cnt == 0)
		return "YES";
	else
		return "NO";
}

int main(void) {

	int T;
	cin >> T;
	string s;

	while (T--)
	{
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}
