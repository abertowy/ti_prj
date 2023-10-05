#include <iostream>
#include <cstring>
#include "electricengine.h"

ElectricEngine::ElectricEngine() :
    m_battariesQuantity(-1),
    m_batteriesChargeLevel(-1),
    m_batteriesManufacturer("None"),
    m_engineModel(nullptr)
{
    std::cout << "ElectricEngine Default CTOR" << std::endl;
}

ElectricEngine::ElectricEngine(int battariesQuantity, int batteriesChargeLevel, std::string batteriesManufacturer, char *engineModel) :
    m_battariesQuantity(battariesQuantity),
    m_batteriesChargeLevel(batteriesChargeLevel),
    m_batteriesManufacturer(batteriesManufacturer),
    m_engineModel(engineModel)
{
    std::cout << "ElectricEngine CTOR" << std::endl;
}

ElectricEngine::ElectricEngine(const ElectricEngine &engine) :
    m_battariesQuantity(engine.m_battariesQuantity),
    m_batteriesChargeLevel(engine.m_batteriesChargeLevel),
    m_batteriesManufacturer(engine.m_batteriesManufacturer)
{
    m_engineModel = new char [std::strlen(engine.m_engineModel) + 1];
    std::strcpy(m_engineModel, engine.m_engineModel);
    std::cout << "ElectricEngine Copy CTOR" << std::endl;
}

ElectricEngine::ElectricEngine(ElectricEngine &&engine):
    m_battariesQuantity(engine.m_battariesQuantity),
    m_batteriesChargeLevel(engine.m_batteriesChargeLevel),
    m_batteriesManufacturer(engine.m_batteriesManufacturer),
    m_engineModel(engine.m_engineModel)
{
    engine.m_battariesQuantity = 0;
    engine.m_batteriesChargeLevel = 0;
    engine.m_batteriesManufacturer = "";
    engine.m_engineModel = nullptr;
    std::cout << "ElectricEngine Move CTOR" << std::endl;
}

ElectricEngine::~ElectricEngine() {
    delete [] m_engineModel;
    std::cout << "ElectricEngine DTOR" << std::endl;
}

void ElectricEngine::setBatteriesQuantity(int battariesQuantity) {
    m_battariesQuantity = battariesQuantity;
}
void ElectricEngine::setBatteriesChargeLevel(int batteriesChargeLevel) {
    m_batteriesChargeLevel = batteriesChargeLevel;
}
void ElectricEngine::setBatteriesManufacturer(std::string batteriesManufacturer) {
    m_batteriesManufacturer = batteriesManufacturer;
}

int ElectricEngine::batteriesQuantity() {
    return m_battariesQuantity;
}

int ElectricEngine::batteriesChargeLevel() {
    return m_batteriesChargeLevel;
}

std::string ElectricEngine::batteriesManufacturer() {
    return m_batteriesManufacturer;
}
