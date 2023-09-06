#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
//problem : you have given a n digit vector . your task is to generate maximum 
//possible k digit number . and also the order of the digits is same as inside the 
//vector .

vector<int> maximum_possible_no(vector<int> &v,int k)
{
   stack<int> temp;
    vector<int> output;
    temp.push(v[0]);
    int index = -1;
   while(k--)
   {
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>temp.top())
        {
            temp.pop();
            temp.push(v[i]);
            index = i;

        }

    }
        output.push_back(temp.top());
        temp.pop();
        temp.push(v[0]);
        v.erase(v.begin()+index);

   }
    reverse(output.begin(),output.end());
   return output;
}
int main()
{
    int n;
    cin>>n;
    cout<<endl;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int k;
    cout<<endl;
    cin>>k;

    vector<int> output = maximum_possible_no(v,k);

    cout<<"final answer : "<<endl;

    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }


    return 0;
}
/*Jai Jai Jai Bajarangbali..
this program coded by jay kishan kharwar
at
time : 5:37
date : 05-07-2023*/