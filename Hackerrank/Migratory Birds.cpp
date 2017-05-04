#include<bits/stdc++.h>

#define MAX_VALUE 9

using namespace std;

int main(){

    int counts[MAX_VALUE+1] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n,max= 0,key=0;
    cin >> n;

    for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            if (b <= MAX_VALUE) {
                counts[b]++;

         }
    }
    for (int j = 0; j <= MAX_VALUE; j++) {
        if(counts[j] > max){
            max = counts[j];
            key = j;
        }
    }

    cout << key << endl;
    return 0;
}
