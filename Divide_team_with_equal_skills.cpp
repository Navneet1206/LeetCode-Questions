#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int sum = 0, chem = 0, ele = 1, part = 0;
    cout << "Enter the number of the elements : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements : \n";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        sum = sum + v[i];
    }
    cout<<" Sum = "<<sum<<"\n";
    sort(v.begin(), v.end());
    if (n % 2 != 0)
    {
        cout << "-1";
    }
    else
    {
        if (sum % 6 == 0)
        {
            part = sum / 6;
            cout<<part<<"- Part\n";
        }
        else
        {
            part = sum / 2;
            cout<<part<<"- Part\n";
        }
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size() - 1; j++)
            {
                if (v[i] + v[j] == part)
                {
                    chem = i + j;
                    ele = ele * chem;
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
        cout << "Chemistry = " << ele;
    }
    return 0;
}