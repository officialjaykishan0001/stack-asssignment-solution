//problem : given a vector print the index of next smaller element for every element
//in the vector the next smaller element for an element x is the first smaller element
//on the right side of x in the vector element . for which no next smaller element exist 
//consider smaller element as -1.
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int smallestElement(vector<int> v,int i,int n)
{
    int min = v[i];
    for(int j = i;j<n;j++)
    {
        if(v[j]<min)
        {
            min = j;
            break;
        }
    }
    if(min==v[i])
    {
        return -1;
    }
    return min ;
}
vector<int> nextSmallerElement(vector<int> v)
{
    int n = v.size();
    
    vector<int> res;

    for(int i=0;i<n;i++)
    {
        int ele = smallestElement(v,i,n);
        res.push_back(ele);
    }


    return res;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    while(n--)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<endl;

    vector<int> output=  nextSmallerElement(v);


    cout<<endl<<"The Final answer is : "<<endl;

    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }
cout<<endl;
    return 0;
}
/*jai jai Jai Bajarangbali..
this program coded by jay kishan kharwar
at
time : 2:13
date : 4-07-2023*/