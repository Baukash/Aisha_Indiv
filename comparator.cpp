#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int comp(int a, int b){
    if(a%2==0 and b%2==1){
        return true;
    }
    else if(a%2==0 and b%2==0){
        return a>b;
    }
    else if(a%2==1 and b%2==1){
        return a<b;
    }
    return false;
}

int main() 
{         
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end(), comp);
    for(int i: v){
        cout<<i<<" ";
    }
}

//14 8 6 4 3 5 7
