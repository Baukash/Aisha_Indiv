#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() 
{
    set<int> s;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    for(int i: s){
        cout<<i<<" ";
    }
    cout<<endl<<s.count(9);
}
