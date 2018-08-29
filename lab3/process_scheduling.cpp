#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct job{
    int pid;
    int arrival_time;
    int burst_time;
};

class ProcessScheduler{
    vector<job> jobs;
    private:
        static bool sjcomparator(job a, job b){
            return a.arrival_time < b.arrival_time && a.burst_time<b.burst_time;
        }
    public:
        ProcessScheduler(vector<job> j){
            jobs = j;
        }
        float fcfs(){
            int n = jobs.size();
            int wt[n], st[n], sum=0;
            st[0] = 0,wt[0] = 0;
            for(int i=1;i<n;i++){
                st[i] = st[i-1] + jobs[i-1].burst_time;
                wt[i] = st[i] - jobs[i].arrival_time;
                if (wt[i] < 0)wt[i] = 0;
                sum+=wt[i];
            }
            return sum/n;
        }
        float sjf(){
            int n = jobs.size();
            vector<job> sorted_jobs(jobs);
            sort(sorted_jobs.begin(),sorted_jobs.end(),sjcomparator);
            int st[n], wt[n], sum=0;
            st[0] = 0, wt[0];
            for(int i=1;i<n;i++){
                st[i] = st[i-1] + sorted_jobs[i-1].burst_time;
                wt[i] = st[i] - jobs[i].arrival_time;
                if (wt[i] < 0)wt[i] = 0;
                sum+=wt[i];
            }
            return sum/n;
        }
};

int main(){
    int n;
    cout<<"Enter the number of processes: ";
    cin>>n;
    vector<job> jobs(n);
    cout<<"Enter the arrival time and burst time of the processes: \n";
    int a,w;
    for(int i=0;i<n;i++){
        cin>>jobs[i].arrival_time>>jobs[i].burst_time;
    }

    ProcessScheduler scheduler(jobs);
    cout<<"Average waiting time for the processes is :\n";
    cout<<"FCFS :"<<scheduler.fcfs()<<endl;
    cout<<"SJF :"<<scheduler.sjf()<<endl;
}