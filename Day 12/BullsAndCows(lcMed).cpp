string getHint(string secret, string guess) 
{
    int n=secret.size(),bull=0,cow=0;
    string ans= "";
    for(int i=0;i<n;i++ )
    {
      if(secret[i]==guess[i])  
        { 
            bull++;
            guess[i]=-1;
            secret[i]=-1;
        }   
    }
    
    for(int i=0;i<n;i++)
    {
        if(secret.find(guess[i])!=-1 && guess[i]!=-1)  
        {
            cow++;
            secret[secret.find(guess[i])]=-1;
        }
    }
    ans=to_string(bull)+"A"+to_string(cow)+"B";
    return ans;
}