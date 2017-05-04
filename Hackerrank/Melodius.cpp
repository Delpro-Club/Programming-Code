#include<bits/stdc++.h>

using namespace std;

static void permute(const std::string &base, int count)
{
    if (!count) {
        string s = base;
        if(s != "y") cout << base << endl;
    } else {
        for (char l = 'a'; l <= 'z'; ++l) {
            permute(base + l, count - 1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    permute("", n);
    return 0;
}
