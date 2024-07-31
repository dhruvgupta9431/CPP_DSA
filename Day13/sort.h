#include<bits/stdc++.h>
#include<vector>
using namespace std;
class sorting{
public:
    vector<int> arr;
    sorting (vector<int>& arr){
        this->arr=arr;
    }
    void bubblesort()
    {
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<"After Bubble Sort: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void selectionsort()
    {
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            int index=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[index])
                {
                    index=j;
                }
                int temp=arr[i];
                arr[i]=arr[index];
                arr[index]=temp;
            }
        }

        cout<<"After Selection Sort: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void insertion_sort()
    {
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        cout<<"After insertion Sort: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void merge_sort()
    {
        int n=arr.size();
        stable_sort(arr.begin(),arr.end());
        cout<<"After Merge Sort: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
