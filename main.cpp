#include <bits/stdc++.h>

int main() {
    std::map<std::string, int> paisAparicion;
    std::string pais, amante;
    int entradasPermitidas = 0;

    std::cin >> entradasPermitidas;

    for (int i = 0; i < entradasPermitidas; ++i) {
        std::getline(std::cin, amante);
        std::cin >> pais;

        ++paisAparicion[pais];
    }

    for (auto && item: paisAparicion) {
        std::cout << item.first << " " << item.second << std::endl;
    }

    return 0;
}