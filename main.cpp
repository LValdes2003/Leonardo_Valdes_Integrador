#include <iostream>
#include <nholmann/json.hpp>

json to_json_string() {
    json j;
    j["texto"] = texto;
    return j;
}

int main() {
    std::string texto;
    std::getline(std::cin, texto);

    return 0;
}