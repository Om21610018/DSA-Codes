#include<bits/stdc++.h>
using namespace std;
/*




*/
    bool check( vector<int>&time,int mid,  long long totalTrips)
    {
        long long cnt=0;
        for(int i=0;i<time.size();i++)
        {
            cnt+=mid/time[i];
        }
        if(cnt>=totalTrips)return true;
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long max=LONG_LONG_MIN;
        
        for(int i=0;i<time.size();i++)
        {
            if(time[i]>max)
            max=time[i];
        }
        long long l=1;
        long long h=(max*totalTrips)/time.size();
        long long ans=-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(check(time,m,totalTrips))
            {
                ans=m;
                h=m-1;
            }
            else h=m+1;
        }
        return ans;
    }
int main()
{

}