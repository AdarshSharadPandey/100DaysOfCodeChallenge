int isWinner(vector<int>& player1, vector<int>& player2) 
{
    long long one=player1[0];
    if(player1[0]==10 && player1.size()>1) one+=player1[1]*2;
    else if(player1.size()>1) one+=player1[1];
    for(int i=2;i<player1.size();i++)
    {
        if(player1[i-1]==10 || player1[i-2]==10) 
            one+=2*player1[i];
        else
            one+=player1[i];
    }
    long long two=player2[0];
    if(player2[0]==10 && player2.size()>1) two+=player2[1]*2;
    else if (player1.size()>1) two+=player2[1];
    for(int i=2;i<player2.size();i++)
    {
        if(player2[i-1]==10 || player2[i-2]==10) 
            two+=2*player2[i];
        else
            two+=player2[i];
    }
    if(one==two) return 0;
    if(one<two) return 2;
    return 1;
}