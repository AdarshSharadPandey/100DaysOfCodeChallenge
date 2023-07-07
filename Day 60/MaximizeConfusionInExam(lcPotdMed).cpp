int maxConsecutiveAnswers(string answerKey, int k) 
{
    int start=0, window=0, T=0,F=0;
    for(int i=0;i<answerKey.size();++i)
    {
       if(answerKey[i]=='F') F++;
       else T++;
       while(min(F,T)>k)
       {   
           if(answerKey[start]=='T')T--;
           else F--;
           start++;
       }  
            window=max(window,i-start+1);
    } 
    return window;
}