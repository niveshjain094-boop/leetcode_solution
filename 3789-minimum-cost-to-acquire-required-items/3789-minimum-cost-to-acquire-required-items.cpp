class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long tmp=0;
       if(need1==0 && need2==0)return 0;
       if(cost1+cost2<=costBoth){
        tmp = ((long long) cost1*need1 )+((long long)cost2*need2);
        return tmp;
       }
       
       int both = min(need1,need2);
       long long total= (long long) both*costBoth;

       need1-=both;
       need2-=both;

       if(need1>0){
        total += (long long)need1* min(costBoth,cost1);
       }
       else if(need2>0){
         total += (long long) need2* min(costBoth,cost2);
       }
       return total;
    }
};