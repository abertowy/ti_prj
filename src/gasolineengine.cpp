#include <iostream>
#include <cstring>
#include "gasolineengine.h"

GasolineEngine::GasolineEngine() :
    m_engineVolume(-1),
    m_fuelType("None"),
    m_engineModel(nullptr)
{
    std::cout << "GasolineEngine Default CTOR" << std::endl;
}

GasolineEngine::GasolineEngine(double engineVolume, std::string fuelType, char *engineModel) :
    m_engineVolume(engineVolume),
    m_fuelType(fuelType),
    m_engineModel(engineModel)
{
    std::cout << "GasolineEngine CTOR" << std::endl;
}

GasolineEngine::GasolineEngine(const GasolineEngine &engine) :
    m_engineVolume(engine.m_engineVolume),
    m_fuelType(engine.m_fuelType)
{
    m_engineModel = new char [std::strlen(engine.m_engineModel) + 1];
    std::strcpy(m_engineModel, engine.m_engineModel);
    std::cout << "GasolineEngine Copy CTOR" << std::endl;
}

GasolineEngine::GasolineEngine(GasolineEngine &&engine):
    m_engineVolume(engine.m_engineVolume),
    m_fuelType(engine.m_fuelType),
    m_engineModel(engine.m_engineModel)
{
    engine.m_engineVolume = 0;
    engine.m_fuelType = "";
    engine.m_engineModel = nullptr;
    std::cout << "GasolineEngine Move CTOR" << std::endl;
}

GasolineEngine::~GasolineEngine() {
    delete [] m_engineModel;
    std::cout << "GasolineEngine DTOR" << std::endl;
}

void GasolineEngine::setEngineVolume(double engineVolume) {
    m_engineVolume = engineVolume;
}

void GasolineEngine::setFuelType(std::string fuelType) {
    m_fuelType = fuelType;
}

double GasolineEngine::engineVolume() {
    return m_engineVolume;
}

std::string GasolineEngine::fuelType() {
    return m_fuelType;
}
