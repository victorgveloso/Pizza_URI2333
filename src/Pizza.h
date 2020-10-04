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
        auto sol = melhorRecorte(0, tamanho - 1);
        return tamanho == 1 ? sol->ssm : std::max(sol->ssm, sol->pref + sol->suf);
    }

    Solucao *melhorRecorte(int ini, int fim);
};


#endif //PIZZA_URI2333_PIZZA_H
