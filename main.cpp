#include <bits/stdc++.h>

int main() {
    int numeroDeEntradasPermitidas = 0;
    std::cin >> numeroDeEntradasPermitidas;

    std::map<std::string, int> contadorDeLasVecesEnQueApareceUnPais;

    for (int i = 0; i < numeroDeEntradasPermitidas; ++i) {
        std::string pais;
        std::cin >> pais;

        std::string primeraPalabraDeCadaLinea;
        std::getline(std::cin, primeraPalabraDeCadaLinea);

        ++contadorDeLasVecesEnQueApareceUnPais[pais];
    }

    for (auto && item: contadorDeLasVecesEnQueApareceUnPais) {
        std::cout << item.first << " " << item.second << std::endl;
    }

    return 0;
}