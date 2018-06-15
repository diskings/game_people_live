#include "_commodity.h"

int main()
{
    srand((unsigned)time(0));  
    COMMODITY c1("aaa",1000);
    int t=0;
    while(1)
    {
        int rr=rand()%10+1;cout<<rr<<" ";
        if(rr<=3)c1.changePrice(rr,1);
        else if(rr>7)c1.changePrice((rr-7),-1);
        else c1.changePrice(rr,0);
        cout<<c1.getPrice()<<endl;
        t++;
        if(t>10)break;
    }
    return 0;
}