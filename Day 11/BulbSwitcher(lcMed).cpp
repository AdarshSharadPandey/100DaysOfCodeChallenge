int flipLights(int n, int presses) 
{
    if(presses == 0) return 1;
    else if(n == 1) return 2;
    else if(n == 2 && presses == 1) return 3;
    else if(n == 2 || presses == 1) return 4;
    else if(presses == 2) return 7;
    else return 8;
}