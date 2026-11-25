#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() 
{         //key - value
    map<string, int> m;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string city;
        int count;
        cin>>city>>count;
        m[city]+=count;
    }

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
