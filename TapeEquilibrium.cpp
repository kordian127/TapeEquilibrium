#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
int A[]={3,1,2,4,3};
int sum=0,sum2=0,diff=0,diff2=0;
vector<int> data;

for(int x=0;x<sizeof(A)/sizeof(A[0]);x++){
    sum2+=A[x];
}
for(int i=0;i<sizeof(A)/sizeof(A[0])-1;i++){
        sum=0;
    for (int j=0;j<=i;j++){
        sum+=A[j];
    }
    diff=sum2-sum;
    diff2=diff-sum;
    data.push_back(abs(diff2));
    sort(data.begin(),data.end());
    cout<<"smallest diffrence " << data.front()<<endl;
}
return 0;
}
