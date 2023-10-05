#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>

class Engine {
public:
    Engine();
    Engine(char *engineModel);
    Engine(const Engine &engine);
    Engine(Engine &&engine);
    virtual ~Engine();

    char *engineModel();

private:
    char *m_engineModel;
};

#endif