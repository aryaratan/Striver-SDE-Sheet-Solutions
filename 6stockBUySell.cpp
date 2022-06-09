
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

int maxProfit(vector<int>& prices) {
        


    int n = prices.size();
    if(n==0||n==1) {
        return 0;
    }
    int buy = 0;// buy at first day
    //cout << n << " size" << endl;
    int sell = 1;       // sell at second day

    int mp = 0;     // profit is 0 initially
    int p;      // curr profit
            
    for(int i=1; i<n-1; i++) {  // from 2nd to last day
   // cout << "index " << i << endl;
        if(buy<sell) {  // if 
            p = prices[sell] - prices[buy];     // profit is sell price -- buy price
        }
        if(p> mp) {

            mp = p;     // if current profit is greater than update max profit
    
        }
//cout << "price index " << prices[i] << " price buy " <<prices[buy] << endl;
        
        if(prices[i] < prices[buy]) {       

            buy = i;

        }
        //cout << "price index " << prices[i+1] << " price sell " <<prices[sell] << endl; 
        
        if(buy > sell){
        
          sell = buy +1;
        }
        if(prices[i+1] >= prices[sell]) {

            sell = i+1;

        }
        //cout << "buy " << buy << " sell " << sell << endl;    
    }



    if(buy<sell)
        p = prices[sell] - prices[buy];
   // cout << p << endl;
    if(p> mp) {
        mp = p;
    }
    

    return mp;




    }