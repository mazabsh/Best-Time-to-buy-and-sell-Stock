#include<iostream> 
#include<vector> 
#include<cmath> 
#include<algorithm> 

using namespace std; 

int maxProfit(vector<int>& prices){

  int left = 0; 
  int right =1; 
  int m=prices.size(); 
  int maxProfit =0; 
  while(right<m){
    if(prices[left]<prices[right]) {
      maxProfit = max(maxProfit, prices[right]-prices[left]);
    }
    else{
      left = right; 
    }
    right++; 
  }

  return maxProfit; 
}
int main(){
  vector<int> prices = {7,1,5,3,6,4}; 
  int ans = maxProfit(prices); 
  cout << "Maximum profit is: " << ans << endl; 

  return 0; 
}
