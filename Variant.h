//
// Created by Leonardo Valdes on 28/11/23.
//

#ifndef LEONARDO_VALDES_INTEGRADOR_VARIANT_H
#define LEONARDO_VALDES_INTEGRADOR_VARIANT_H

#include <string>
#include <nlohmann/json.hpp>

class Variant {
public:
    std::string to_string();
    json to_json();
};


#endif //LEONARDO_VALDES_INTEGRADOR_VARIANT_H
