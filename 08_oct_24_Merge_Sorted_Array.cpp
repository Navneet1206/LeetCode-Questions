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
    int k = 0;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element : ";
        
        cin>>v[i];
    }

    sort(v.begin(),v.end());

   
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            copy[k++]=v[i];
        }

    }
     cout<<"Output is with zero  : \n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Output is without zero  : \n";
    for(int i=0;i<k;i++)
    {
        cout<<copy[i]<<" ";
    }
    
    return 0;
}