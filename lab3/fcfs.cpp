#include <iostream>
using namespace std;

float findAvgWaitTime(int arr[], int burst[], int n){
    int wt[n];
    int st[n];
    st[0] = 0;
    wt[0] = 0;
    for(int i=1;i<n;i++){
        st[i] = st[i-1] + burst[i-1];
        wt[i] = st[i] - arr[i];

        if (wt[i] < 0)
            wt[i] = 0;
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=wt[i];
    }

    return sum/n;
}

int main(){
    int n;
    cout<<"Enter the number of processes: ";
    cin>>n;
    int arrival[n];
    int burst[n];
    cout<<"Enter the arrival time and burst time of the processes: \n";
    int a,w;
    for(int i=0;i<n;i++){
        cin>>arrival[i]>>burst[i];
    }

    cout<<"Average waiting time for the processes is :"<<findAvgWaitTime(arrival,burst,n)<<endl;
}