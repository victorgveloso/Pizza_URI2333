//
// Created by victor on 04/10/2020.
//

#ifndef PIZZA_URI2333_PIZZA_H
#define PIZZA_URI2333_PIZZA_H

#include <algorithm>

class Solucao {
    int pref;
    int suf;
    int ssm;
    int total;

    friend class Pizza;
};

class Pizza {
    int *fatias;
    int tamanho;
public:
    Pizza() : tamanho(0), fatias(new int[100001]) {}

    Pizza(int tamanho, int *fatias) : tamanho(tamanho), fatias(fatias) {}

    int melhorRecorte() {
        auto pizzaInversa = Pizza(tamanho, new int[tamanho]);
        for (int i = 0; i < tamanho; ++i) {
            pizzaInversa.fatias[i] = -fatias[i];
        }
        auto sol = melhorRecorte(0, tamanho - 1);
        return std::max(sol->ssm, sol->total + pizzaInversa.melhorRecorte(0, tamanho - 1)->ssm);
    }

    Solucao *melhorRecorte(int ini, int fim);
};


#endif //PIZZA_URI2333_PIZZA_H
