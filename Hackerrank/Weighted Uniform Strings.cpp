#include<bits/stdc++.h>

using namespace std;

int n;
string s;
int x;
vector<int> vi;

int main(){

    cin >> s;

    cin >> n;
    int count = 1;
    for(int i=0;i<s.length();i++){
        int val = (int)s[i] - 96;
        if(s[i] != s[i+1]){

            vi.push_back(val*count);
            count = 1;
        }
        else if(s[i] == s[i+1]){
            vi.push_back(val*count);
            count++;
        }
    }

    sort(vi.begin(),vi.end());

    for(int i=0;i<n;i++){
        cin >> x;

        if(binary_search(vi.begin(),vi.end(),x)){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }

    return 0;
}
