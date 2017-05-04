#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> h(26);
    vector<char> a = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int max=0;
    int pjg = word.length();

    for(int i=0;i<pjg;i++){
        for(int j=0;j<pjg;j++){
            if(word[i]==a[i]){
                if(h[i]>max) max = h[i];
            }
        }
    }

    cout << max*pjg << endl;
    return 0;

}
