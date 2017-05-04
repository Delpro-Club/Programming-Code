#include<bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin >> num;
    std::vector<string> vec(num);
    for(int i = 0; i < num; ++i)
        {
        cin >> vec[i];
    }

    for(int i = 0; i < num; ++i)
    {
        string str = vec[i];    // one input at a time
        string temp = "";
        long long a;
        bool found = false;
        for(int j = 0; j < str.length()-1 ; ++j)
        {
            temp.push_back(str[j]);
            stringstream ss;
            string res = temp;
            ss << temp;
            ss >> a;
            long long ans = a;
            while(res.length() < str.length())
            {

                string next = (string)(++a);
                res.append(next);
            }
            if(res == str){
                found = true;
                cout << "YES " << ans << endl;
                break;
            }
        }
        if(!found)
            cout << "NO " << endl;

    }
    return 0;
}
