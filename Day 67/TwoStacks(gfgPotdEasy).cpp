class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
    public:
    twoStacks(int n=100)
    {
        size = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = size;
    }
    void push1(int x)
    {
        top1 += 1;
        arr[top1] = x;
    }
    void push2(int x)
    {
       top2 -= 1;
       arr[top2] = x;
    }
    int pop1()
    {
        if(top1==-1)return -1;
        return arr[top1--];
    }
    int pop2()
    {
       if(top2==size)return -1;
       return arr[top2++];
    }
};