#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int max,min;
    int countHigh = 0;
    int countLowest = 0;
    vector<long> arr(n);
    for(int i=0;i < arr.size();i++){
        cin >> arr[i];
    }
    max = arr[0];
    min  = arr[0];
    for(int i=1;i < arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
            countHigh++;
            //cout << max << endl;
        }
    }

    for(int i=1;i < arr.size();i++){
        if(arr[i] < min){
            min = arr[i];
            countLowest++;
            //cout << min << endl;
        }
    }
    cout << countHigh <<" "<<countLowest<<endl;


    return 0;
}
