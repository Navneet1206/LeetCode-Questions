#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v(n);
    vector<int> copy(n);
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element : ";
        
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    cout<<"Output is  : \n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}