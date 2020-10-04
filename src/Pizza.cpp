//
// Created by victor on 04/10/2020.
//

#include "Pizza.h"

Solucao *Pizza::melhorRecorte(int ini, int fim) {
    auto x = new Solucao();
    if (ini == fim) {
        x->suf = x->pref = x->ssm = std::max(0, fatias[ini]);
        x->total = fatias[ini];
    } else {
        int meio = (ini + fim) / 2;
        auto esq = melhorRecorte(ini, meio);
        auto dir = melhorRecorte(meio + 1, fim);
        x->pref = std::max(esq->pref, dir->pref + esq->total);
        x->suf = std::max(dir->suf, esq->suf + dir->total);
        x->ssm = std::max({dir->ssm, esq->ssm, dir->pref + esq->suf});
        x->total = dir->total + esq->total;
    }
    return x;
}
