#include <iostream>
#include<vector>
using namespace std;
void differenc(int arr1[],int arr2[],int x1,int x2)
{
    vector<int>v1;
    for(int i=0; i<x1; i++)
    {
        int c=0;
        for(int j=0; j<x2; j++)
        {
            if (arr1[i]!=arr2[j])
            {
                c++;
            }
            else if(arr1[i]==arr2[j])
            {
                c=0;
                break;
            }
        }
        if(c>0)
        {
            v1.push_back(arr1[i]);
        }
    }
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }

}
void symmetric_difference(int arr1[],int arr2[],int x1,int x2)
{
    differenc(arr1,arr2,x1,x2);differenc(arr2,arr1,x2,x1);
}
void intersection(int arr1[],int arr2[],int x1,int x2)
{
    vector<int>v1;
    for(int i=0; i<x1; i++)
    {
        for(int j=0; j<x2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                v1.push_back(arr1[i]);
            }
        }
    }
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
}
void union_fun(int arr1[],int arr2[],int x1,int x2)
{
    vector<int>v1;
    for(int i=0; i<x1; i++)
    {
        int c=0;
        for(int j=0; j<x2; j++)
        {
            if (arr1[i]!=arr2[j])
            {
                c++;
            }
            else if(arr1[i]==arr2[j])
            {
                c=0;
                break;
            }
        }
        if(c>0)
        {
            v1.push_back(arr1[i]);
        }
    }
    for(int i=0; i<x2; i++)
    {
        v1.push_back(arr2[i]);
    }
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }

}
int main()
{
    int x1,x2;
    cin>>x1>>x2;
    int arr1[x1],arr2[x2];
    for(int i=0; i<x1; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<x2; i++)
    {
        cin>>arr2[i];
    }
    union_fun(arr1,arr2,x1,x2);
    cout<<endl;
    intersection(arr1,arr2,x1,x2);
    cout<<endl;
    differenc(arr1,arr2,x1,x2);
    cout<<endl;
    symmetric_difference(arr2,arr1,x2,x1);
}
