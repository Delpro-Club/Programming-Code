#include<bits/stdc++.h>

using namespace std;

int main(){

    string s = "";
    string k = "";
    int counts = 0;
    getline(cin,s);
    int pjg = s.length();

    for(int i=0;i<pjg;){

        if(s[i]==s[i+1] && i > -1) {
            s.erase(i,2);
            i--;
        }
        else i++;
    }

    if(!s.empty()) cout << s << endl;
    else cout << "Empty String" << endl;

    return 0;
}
