#include<bits/stdc++.h>

using namespace std;

string findCommon(const string str1, const string str2){
    string a="";

    for(int i=0;i < str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                a += str1[i];
            }
        }
    }

    return a;
}

string findUnique(const string str){
    string s="";

    for(int i=0;i<str.length();i++){
        if(str[i] != str[i+1]){
            s += str[i];
        }
    }

    return s;
}

int countGemElement(const string str){
     return str.length();
}

int main(){

    int n;
    vector<string> vs;
    string s;
    string res = "";

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;

        sort(s.begin(),s.end());
        //s = findUnique(s);
        vs.push_back(s);
    }

    if(n == 1){
            res = findUnique(vs[0]);
           cout << res.length() << endl;
    }
    else if(n == 2){
        res = findCommon(vs[0],vs[1]);
        res = findUnique(res);
        cout << res.length() << endl;
    }
    else {
            res = findCommon(vs[0],vs[1]);
            for(int i=2;i<n;i++){
              res = findCommon(res,vs[i]);
            }
            res = findUnique(res);
            cout << res.length() << endl;
    }

    return 0;
}
