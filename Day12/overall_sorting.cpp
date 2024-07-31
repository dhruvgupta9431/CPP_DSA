#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr1[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}

void selectionsort(int arr1[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr1[j]<arr1[index])
            {
                index=j;
            }
    int temp=arr1[i];
    arr1[i]=arr1[index];
    arr1[index]=temp;
        }
    }
}

void insertion_sort(int arr[], int n)
{
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
}

int main()
{
    char ch;
    int choice;
    while(true)
    {
    cout<<"1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n5. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            int n;
            cout<<"Enter the Number of Elements:";
            cin>>n;
            int arr[n];
            cout<<"Enter Elements:";
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                arr[i]=x;
            }
            bubblesort(arr,n);
            cout<<"After Bubble Sort: "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }

        case 2:
        {
            int n;
            cout<<"Enter the Number of Elements:";
            cin>>n;
            int arr[n];
            cout<<"Enter Elements:";
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                arr[i]=x;
            }
            selectionsort(arr,n);
            cout<<"After Selection Sort: "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }

        case 3:
        {
            int n;
            cout<<"Enter the Number of Elements:";
            cin>>n;
            int arr[n];
            cout<<"Enter Elements:";
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                arr[i]=x;
            }
            insertion_sort(arr,n);
            cout<<"After Insertion Sort: "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }

        case 4:
        {
            int n;
            cout<<"Enter the Number of Elements:";
            cin>>n;
            vector<int> arr;
            cout<<"Enter Elements:";
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                arr.push_back(x);
            }
            stable_sort(arr.begin(),arr.end());
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }

        case 5:
        {
            exit(0);
        }

        default:
        {
            cout<<"Invalid Choice....\n";
        }
    }
    cout<<"Do you want to check sorting: (Y/N)\n";
    cin>>ch;
    if(ch!='Y'&&ch!='y')
    {
        break;
    }
    }
}

