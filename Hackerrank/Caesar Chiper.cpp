#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    cin.ignore();

    string s = "";
    string  k = "";

    cin >> s;
    cin.ignore();

    int m;
    cin >> m;
    cin.ignore();

    int pjg = s.length();
    for(int i=0;i<pjg;i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] = 'a' + (s[i]+m - 'a')%26;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'A' + (s[i]+m-'A')%26;
    }

    cout << s << endl;

    return 0;
}
