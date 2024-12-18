class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        if(prices.size()<=500&&prices.size()>=1)
        {
          
            for(int i = 0;i<prices.size()-1;i++)
            {   
                if(prices[i]>=1&&prices[i]<=1000)
                {
                    for(int j=i+1;j<prices.size();j++)
                    {
                        if(prices[j]<=prices[i])
                        {
                            prices[i]-=prices[j];
                            break;
                        }
                    }
                }
            }

            return prices;
        }
        return prices;
    }
};
