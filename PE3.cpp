#include<bits/stdc++.h>
using namespace std;

vector<long long> solve (int N, int Q, vector<int> A, vector<vector<int> > query) {
    int sum1=0;
    vector<long long int>g;
    if (query[0]==0){
        for (int j=query[1][0];j<query[1][1];j++){
            int sum=0;
            for (int i=j;i<query[1][1];i++){
                sum+=vA[i];
            }
            sum1+=(vA[j-1]*sum);         
        }
    }
    else{
        vA[query[1][0]-1]=query[1][1];
    }
    g.push_back(sum1);
    
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int Q;
    cin >> Q;
    vector<int> A(N);
    for(int i_A = 0; i_A < N; i_A++)
    {
    	cin >> A[i_A];
    }
    vector<vector<int> > query(Q, vector<int>(3));
    for (int i_query = 0; i_query < Q; i_query++)
    {
    	for(int j_query = 0; j_query < 3; j_query++)
    	{
    		cin >> query[i_query][j_query];
    	}
    }

    vector<long long> out_;
    out_ = solve(N, Q, A, query);
    for(int i_out_ = 0; i_out_ < out_.size(); i_out_++)
    {
    	cout << out_[i_out_] << endl;
    }
}