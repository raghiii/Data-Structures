//
//  main.cpp
//  Reversing_Array_Approach_2
//
//  Created by Raghav Walia on 22/09/18.
//  Copyright © 2018 Raghav Walia. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr;
    arr= new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[n-1-i];
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
