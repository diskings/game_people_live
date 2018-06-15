#include "_head.h"

class COMMODITY
{
private:
    string commodityName;//商品名称
    double initialPrice;//初始价格
    double currentPrice;//当前价格
public: 
    COMMODITY(string n,double ip){commodityName=n,initialPrice=ip,currentPrice=ip;}
    double getPrice();
    string getName();
    void changePrice(int,int);
};
double COMMODITY::getPrice()
{
    return currentPrice;
}
string COMMODITY::getName()
{
    return commodityName;
}
void COMMODITY::changePrice(int mut,int vec)
{  
    if(vec>0)
    {
        currentPrice=mut*currentPrice;
    }
    else if(vec<0)
    {
        currentPrice=(10-mut)*currentPrice/10;
    }
    else
    {
        int r=rand()%30+1;
        if(currentPrice<0.7*initialPrice){currentPrice=(1+(double)(r/100))*currentPrice;}
        else if(currentPrice>1.3*initialPrice){currentPrice=(1-(double)(r/100))*currentPrice;}
        else 
        {
            if(r>12){currentPrice=(1+(double)(r/100))*currentPrice;}
            else {currentPrice=(1-(double)(r/100))*currentPrice;}
        }
    }
}
