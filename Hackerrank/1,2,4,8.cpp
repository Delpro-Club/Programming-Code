#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > getAllSubsets(vector<int> set)
{
    vector< vector<int> > subset;
    vector<int> empty;
    subset.push_back(empty);

    for (int i = 0; i < set.size(); i++)
    {
        vector< vector<int> > subsetTemp = subset;

        for (int j = 0; j < subsetTemp.size(); j++)
            subsetTemp[j].push_back( set[i] );

        for (int j = 0; j < subsetTemp.size(); j++)
            subset.push_back( subsetTemp[j] );
    }
    return subset;
}

int main() {
	vector< vector<int> > subsets;
	vector<int> set;
	int n;
	int result;

	cin >> n;

	int m,p;
	for(int a=0;a<n;a++){
	cin >> m;
        for(int b=0;b<m;b++){
            cin >> p;
            set.push_back(p);
        }
           //cout<<"hello"<<endl;
           subsets=getAllSubsets(set);
            //cout<<subsets.size()<<endl;
            //cout<<subsets[2][0]<<endl;
            for(int i=0;i<subsets.size();i++)
            {
                vector<int> x=subsets[i];
                if(x.size()>1){
                    for(int j=0;j<(x.size()-1);j++)
                    {

                        result = x[j] & x[j+1];
                        cout << result << " ";
                    }
                    cout << endl;
                }
            }

    }
	return 0;
}
