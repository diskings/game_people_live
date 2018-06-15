#include "_commodity.h"

class BACKPACK
{
private:
    vector <COMMODITY*> backB;
public:
    void pushBack(COMMODITY com);
    void deleteBack();
};