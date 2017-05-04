#include<bits/stdc++.h>

using namespace std;

int counts=0;
void findCommon(string s1,string s2,string s3,int pjg1,int pjg2,int pjg3){

    int i=0,j=0, k =0;

    while(i < pjg1 && j < pjg2 && k < pjg3)
    {
        if(s1[i] == s2[j] && s2[j]==s3[k])
        {
            counts++;
            i++;
            j++;
            k++;
        }
        else if (s1[i] < s2[j])
            i++;
        else if (s2[j] < s3[k])
            j++;
        else
            k++;
    }
}

int main(){

    string s1 = "";
    string s2 = "";
    string s3 = "";

    cin >> s1;
    cin >> s2;
    cin >> s3;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());

    int pjg1 = s1.length();
    int pjg2 = s2.length();
    int pjg3 = s3.length();

    findCommon(s1,s2,s3,pjg1,pjg2,pjg3);

    cout << counts << endl;
    return 0;
}
