#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
  
#define pb push_back
#define td typedef
#define baca(data) scanf("%d",(data))
  
td vector<int> vi;
typedef vector<string> vs;
 
int r,c,besar=0;
vs data;
void jatuh(int x, int y){
    int bawah = besar;
    int atas=-1;
    for(int i = besar; i < r; i++){
        if(data[i][y] == '0')
            bawah = i;
         
        else break;
        }
    for(int i = besar; i>= 0; i--)
        if(data[i][y] == '1'){
            data[i][y] = '0';
            data[bawah][y] = '1';
            bawah--;
        }
}
  
void runtuhkan(){
    for(int i=0; i<c;i++)jatuh(besar,i);
} 
int main(){
    char nilai[15];
    scanf("%d %d",&r,&c);
    string cari="";
    string set ="";
    int run = 1;
    for(int i=0; i<c; i++){
        cari+="1";
        set+="0";
    }
    for(int i=0;i<r;i++){
        scanf("%s",nilai);
        string isi = nilai;
        if(isi == cari){
            run =1;
            isi = set;
            if(i > besar) besar = i;
             
        }
        data.pb(isi);
    }
    int stat= 0;
    int atas;
    while(run){
        atas=-1;
        for(int i=0;i<r-1;i++){
            if(data[i] != cari && data[i] != set){
                atas=i;
            }
        }
        if(data[r-1] == set && atas!=-1){
            stat = 1;
            besar = r-1;
        }
        runtuhkan();
        stat=0;
        besar=0;
        for(int i=0;i<r;i++){
            if(data[i] == cari){
                stat=1;
                data[i] = set;
                if(i>besar){
                    besar=i;
                    break;
                }
            }
        }
        if(data[r-1] == set && atas!=-1){
            stat = 1;
            besar = r-1;
        }
        if(stat !=1)       run=0;
         
    }     
    for(int i=0; i <r;i++){
        printf("%s\n",data[i].c_str());
    }
}
