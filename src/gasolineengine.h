#ifndef GASOLINEENGINE_H
#define GASOLINEENGINE_H

#include <iostream>
#include "engine.h"

class GasolineEngine : public Engine {
public:
    GasolineEngine();
    GasolineEngine(double engineVolume, std::string fuelType, char *engineModel);
    GasolineEngine(const GasolineEngine &engine);
    GasolineEngine(GasolineEngine &&engine);
    virtual ~GasolineEngine();

    void setEngineVolume(double engineVolume);
    void setFuelType(std::string fuelType);

    double engineVolume();
    std::string fuelType();

private:
    double m_engineVolume;
    std::string m_fuelType;
    char *m_engineModel;
};

#endif