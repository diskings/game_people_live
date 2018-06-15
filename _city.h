#include "_head.h"

class CITY
{
private:
    string cityName;//城市名称
public:
    string getCityName();
};

string CITY::getCityName()
{
    return cityName;
}