#include <iostream>
#include  <vector>
using namespace std;
int main()
{
 
    vector<int> sam;
    long long int n,k;
    int score, count = 0;
    cin>>n>>k;
 
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        sam.push_back(temp);
    }
 
    score = sam[k-1];
 
    for(int i=0; i<n; i++){
        if(sam[i] >= score && sam[i] > 0){
            count++;
        }
        else
        break;
    }
    cout << count;
    return 0;
}
