#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<vector<int>> arr;
    int n,q,q1,q2;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        int k,num;
        cin>>k;
        vector<int> temp;
        for(int l=0;l<k;l++)
        {
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }
    for(int i=0;i<q;i++)
    {
        cin>>q1>>q2;
        cout<<arr[q1][q2]<<endl;
    }
    return 0;
}
