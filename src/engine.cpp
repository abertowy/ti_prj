#include <iostream>
#include <cstring>
#include "engine.h"

Engine::Engine(): m_engineModel(nullptr) {std::cout << "Engine Default CTOR" << std::endl;}

Engine::Engine(char *engineModel) : m_engineModel(engineModel) {
    std::cout << "Engine CTOR" << std::endl;
}

Engine::Engine(const Engine &engine)
{
    m_engineModel = new char [std::strlen(engine.m_engineModel) + 1];
    std::strcpy(m_engineModel, engine.m_engineModel);
    std::cout << "Engine Copy CTOR" << std::endl;
}

Engine::Engine(Engine &&engine) : m_engineModel(engine.m_engineModel)
{
    engine.m_engineModel = nullptr;
    std::cout << "Engine Move CTOR" << std::endl;
}

Engine::~Engine() {
    delete [] m_engineModel;
    std::cout << "Engine DTOR" << std::endl;
}

char * Engine::engineModel() {
    return m_engineModel;
}
