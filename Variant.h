//
// Created by Leonardo Valdes on 28/11/23.
//

#ifndef LEONARDO_VALDES_INTEGRADOR_VARIANT_H
#define LEONARDO_VALDES_INTEGRADOR_VARIANT_H

#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
using namespace nlohmann;

class Variant {
public:
    std::string texto;
    std::getline(std::cin, texto);
    std::string to_string();
    json to_json_string();
};


#endif //LEONARDO_VALDES_INTEGRADOR_VARIANT_H
