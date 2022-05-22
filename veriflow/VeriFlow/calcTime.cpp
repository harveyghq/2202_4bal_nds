#include <unistd.h>
#include <cstdio>
#include <sstream>
#include "calcTime.h"
using ll = long long;
using namespace std;

void calcTime::update(double upd, double pcs, double gb, double query)
{
    this->updateTime += (int)upd;
    this->packetClassSearchTime += (int)pcs;
    this->graphBuildTime += (int)gb;
    this->queryTime += (int)query;
    this->totalCnt += 1;
}

void calcTime::printAvg()
{
    fprintf(stdout, "updateTime = %.2fus packetClassSearchTime = %.2fus graphBuildTime = %.2fus queryTime = %.2fus\n",
            1.0 * this->updateTime / this->totalCnt,
            1.0 * this->packetClassSearchTime / this->totalCnt,
            1.0 * this->graphBuildTime / this->totalCnt,
            1.0 * this->queryTime / this->totalCnt);
}
