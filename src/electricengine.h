#ifndef ELECTRICENGINE_H
#define ELECTRICENGINE_H
#include <iostream>
#include "engine.h"

class ElectricEngine: public Engine {
public:
    ElectricEngine();
    ElectricEngine(int battariesQuantity, int batteriesChargeLevel, std::string batteriesManufacturer, char *engineModel);
    ElectricEngine(const ElectricEngine &engine);
    ElectricEngine(ElectricEngine &&engine);
    virtual ~ElectricEngine();

    void setBatteriesQuantity(int battariesQuantity);
    void setBatteriesChargeLevel(int batteriesChargeLevel);
    void setBatteriesManufacturer(std::string batteriesManufacturer);

    int batteriesQuantity();
    int batteriesChargeLevel();
    std::string batteriesManufacturer();

private:
    int m_battariesQuantity;
    int m_batteriesChargeLevel;
    std::string m_batteriesManufacturer;
    char *m_engineModel;
};

#endif