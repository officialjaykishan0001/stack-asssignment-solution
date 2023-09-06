#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;
//problem : you have given an array to n integers representing the heights of buildings
//in an area. mario can jump from one building of height arr[i] to another building of height arr[j] . i<=j.
//if the height of the second building is strictly greater than the height of first building i.e. arr[j]>arr[i].
//each day mario makes a jump . today he is little busy so he want to make jump of (j-i) as small as 
//possible .help him ot find the from where he make  a jump and to where .
/*
input 
5
1 10 3 2 4
output : 0 1
*/

vector<int> minimumJumpDistance(vector<int> height)
{
    
    int n = height.size();

    // if(n<3)return {-1,-1};

    stack<int> temp;
    temp.push(0);
    temp.push(1);
    int distance = 0;
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if((j-i)<distance)
            {
                temp.pop();
                temp.pop();
                temp.push(i);
                temp.push(j);
                distance = j-i;
            }
        }
    }

    vector<int> output;
    output.push_back(temp.top());
    temp.pop();
    output.push_back(temp.top());
    temp.pop();

    return output;
}

int main()
{
    int n;
    cin>>n;

    cout<<endl;

    vector<int > height;

    for(int i = 0;i<n;i++)
    {
        cin>>height[i];
    }

    vector<int > v = minimumJumpDistance(height);

    cout<<v[0]<<" "<<v[1]<<endl;



    return 0;
}