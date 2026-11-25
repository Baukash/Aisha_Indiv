#include <iostream>
#include <cmath>
#include <vector>
using namespace std;



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

    for(int i=0; i<n; i++) {
        if(i%2==0){
            cout<<v[i]<<" ";
        }
    }

    cout<<endl;

    for(int i: v){
        cout<<i<<" ";
    }
    
}

//5
//4 6 7 4 2
//
