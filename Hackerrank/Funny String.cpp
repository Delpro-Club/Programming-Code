#include<bits/stdc++.h>

using namespace std;

bool isFunny(const string& str)
{
	for (int i = 0, size = str.size(); i < size - 1; i++)
		if (abs(str[i + 1] - str[i]) != abs(str[size - i - 2] - str[size - i - 1]))
			return false;

	return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        cout << (isFunny(str) ? "Funny" : "Not Funny") << endl;
    }

    return 0;
}
