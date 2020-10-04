#include "Pizza.h"

#include <iostream>

int main() {
    std::ostream::sync_with_stdio(false);
    int tamanho;
    std::cin >> tamanho;
    int fatias[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        std::cin >> fatias[i];
    }
    auto p = Pizza(tamanho, fatias);
    std::cout << p.melhorRecorte() << std::endl;
    return 0;
}
