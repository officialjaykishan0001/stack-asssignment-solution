//problem : your are given two non empty non negatives integers. the most signifiacant digit comes first and 
//each of their nodes contains a single digits add the two numbers and return the sum as a linkedList


#include<iostream>
#include<stack>
#include<list>
using namespace std;

list<int> solution(list<int> a,list<int> b)
{
    stack<int> x;
    stack<int> y;

    for(auto e : a)
    {
        x.push(e);
    }

    for(auto i : b)
    {
        y.push(i);
    }

    list<int> res;

    while(!x.empty() && !y.empty())
    {
        int temp1 = x.top();
        int temp2 = y.top();
        res.push_front(temp1+temp2);
        x.pop();
        y.pop();
    }

    while(!x.empty())
    {
        res.push_front(x.top());
        x.pop();
    }
    while(!y.empty())
    {
        res.push_front(y.top());
        y.pop();
    }

    return res;

}
int main()
{
    list<int> a;
    list<int> b;

    int n;
    cin>>n;
    cout<<endl;
    while(n--)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }

    cout<<endl;
    int m;
    cin>>m;
    cout<<endl;
    while(m--)
    {
        int ele;
        cin>>ele;
        b.push_back(ele);
    }

    list<int> result = solution(a,b);

    list<int>::iterator i;
    for(i=result.begin();i!=result.end();i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    return 0;
}
/*Jai Jai Jai Bajarangbali..
this program coed by jay kishan kharwar
at 
time : 1:18
date : 4-07-2023*/