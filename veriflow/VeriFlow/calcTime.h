#ifndef CALCTIME_H_
#define CALCTIME_H_
using ll = long long;
using namespace std;

class calcTime
{
private:
    ll updateTime;
    ll packetClassSearchTime;
    ll graphBuildTime;
    ll queryTime;
    int totalCnt;

public:
    void update(double upd, double pcs, double gb, double query);
    void printAvg();
};


#endif /* CALCTIME_H_ */
