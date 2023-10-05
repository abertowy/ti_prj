#include <cstring>
#include "hybridengine.h"

int main() {
    char *hybride_engine_model = new char[100];
    strcpy(hybride_engine_model, "HE_v1.0");
    HybridEngine hybrid_engine_instance(4, 1.3, hybride_engine_model);
    //std::cout << hybrid_engine_instance.engineModel() << std::endl;
}