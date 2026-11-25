#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;



int main() 
{
    vector<int> v;

    string s;
    getline(cin, s);

    stringstream a(s);

    int x;

//1
    while(a>>x){
        v.push_back(x);
    }
//2
/*    while(cin>>x){
        v.push_back(x);
    }
    */


    for(int i: v){
        cout<<i<<" ";
    }
}

//4 6 7 4 2 6 2 8
