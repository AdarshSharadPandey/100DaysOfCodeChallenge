int isPossible(int n, int m, string s)
{
    int i=0,x=0,y=0,minx=0,miny=0,maxx=0,maxy=0;
    for(char curr:s)
    {
        switch (curr)
        {
            case 'R': x++; break;
            case 'L': x--; break;
            case 'D': y++; break;
            case 'U': y--; break;
            
        }
        minx=min(minx,x);
        miny=min(miny,y);
        maxx=max(maxx,x);
        maxy=max(maxy,y);
    }
    if((maxx-minx<m)&&(maxy-miny<n)) return 1;
    return 0;
}