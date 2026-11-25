#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

int comp(pair<string, int> a, pair<string, int> b){
    return a.second>b.second;
}

int main() 
{         //key - value
    vector<pair<string, int>> m;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string city;
        int count;
        cin>>city>>count;
        bool is=false;
        for(auto& j: m){
            if(j.first==city){
                j.second+=count;
                is=true;
            }
        }
        if(is){
            continue;
        }
        else{
            pair<string, int> p = {city, count};
            m.push_back(p);
        }
    }

    sort(m.begin(), m.end(), comp);

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

//5
//Almaty 30
//Astana 20
//Alamty 10
//Karaganda 40
//Astana 10
