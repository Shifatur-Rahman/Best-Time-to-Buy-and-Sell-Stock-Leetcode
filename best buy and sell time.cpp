#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){

    vector<int> prices={7,6,4,3,1};
    int i, j, n;
    n = prices.size();
    int min_price = prices[0];
    int profit, max_profit = 0;

    for(i=0; i<n; i++){
        min_price = min(min_price, prices[i]);
        profit = prices[i] - min_price;
        max_profit = max(max_profit, profit);
    }
  cout<<max_profit<<endl;
}
