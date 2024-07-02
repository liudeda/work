#include "boss.h"
#include "Worker.h"
class Boss : public Worker
{
public:
    Boss(void);
    ~Boss(void);
    void showInfo(void);
};
