bool lemonadeChange(int N, vector<int> &bills) 
{
    int five=0,ten=0;
    for(auto it: bills)
    {
        if(it==5) five++;
        else if(it==10) five--, ten++;
        else if(it==20)
        {
            if(ten>0) ten--, five--;
            else five-=3;
        }
        if(five <0 || ten<0) return false;
    } 
    
    return true;
}