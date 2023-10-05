#include <cstring>
#include "hybridengine.h"

HybridEngine::HybridEngine() :
    m_battariesQuantity(-1),
    m_engineVolume(-1),
    m_engineModel(nullptr)
{
    std::cout << "HybridEngine Default CTOR" << std::endl;
}

HybridEngine::HybridEngine(int battariesQuantity, double engineVolume, char *engineModel) :
    m_battariesQuantity(battariesQuantity),
    m_engineVolume(engineVolume),
    m_engineModel(engineModel)
{
    std::cout << "HybridEngine CTOR" << std::endl;
}


HybridEngine::HybridEngine(const HybridEngine &engine) :
    m_battariesQuantity(engine.m_battariesQuantity),
    m_engineVolume(engine.m_engineVolume)
{
    m_engineModel = new char [std::strlen(engine.m_engineModel) + 1];
    std::strcpy(m_engineModel, engine.m_engineModel);
    std::cout << "HybridEngine Copy CTOR" << std::endl;
}

HybridEngine::HybridEngine(HybridEngine &&engine):
    m_battariesQuantity(engine.m_battariesQuantity),
    m_engineVolume(engine.m_engineVolume),
    m_engineModel(engine.m_engineModel)
{
    engine.m_battariesQuantity = 0;
    engine.m_engineVolume = 0;
    engine.m_engineModel = nullptr;
    std::cout << "HybridEngine Move CTOR" << std::endl;
}

HybridEngine::~HybridEngine() {
    delete m_engineModel;
    std::cout << "HybridEngine DTOR" << std::endl;
}