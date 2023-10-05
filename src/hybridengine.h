#ifndef HYBRIDENGINE_H
#define HYBRIDENGINE_H

#include "electricengine.h"
#include "gasolineengine.h"

class HybridEngine: public ElectricEngine, public GasolineEngine {
public:
    HybridEngine();
    HybridEngine(int battariesQuantity, double engineVolume, char *engineModel);
    HybridEngine(const HybridEngine &engine);
    HybridEngine(HybridEngine &&engine);
    virtual ~HybridEngine();

private:
    int m_battariesQuantity;
    double m_engineVolume;
    char *m_engineModel;
};

#endif