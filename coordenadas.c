#include "coordenadas.h"
#include <math.h>
#include <stdio.h>

/// multiplica um vetor por um escalar
/// este é um exemplo entregue pronto pra você ;)
vetor multiplicaPorEscalar(vetor v, escalar alpha)
{
    vetor resultado =
    {
        v.x * alpha,
        v.y * alpha,
        v.z * alpha,
        v.w * alpha
    };
    return resultado;
}

vetor somaVetorComVetor(vetor v, vetor u)
{
    //TODO: implementar
    vetor resultado = v;
    return resultado;
}

vetor diferencaVetorComVetor(vetor v, vetor u)
{
    //TODO: implementar
    vetor resultado = v;
    return resultado;
}

vetor diferencaEntrePontos(ponto p, ponto q)
{
    //TODO: implementar
    vetor resultado = {0,0,0,0};
    return resultado;
}

ponto somaPontoComVetor(ponto p, vetor v)
{
    //TODO: implementar
    ponto resultado = p;
    return resultado;
}

escalar normaDoVetor(vetor v)
{
    //TODO: implementar
    escalar resultado = 0;
    return resultado;
}

vetor normalizado(vetor v)
{
    //TODO: implementar
    vetor resultado = v;
    return resultado;
}

escalar distanciaEntrePontos(ponto p, ponto q)
{
    //TODO: implementar
    escalar resultado = 0;
    return resultado;
}

escalar produtoEscalar(vetor v, vetor u)
{
    //TODO: implementar
    escalar resultado = 1;
    return resultado;
}

vetor produtoVetorial(vetor v, vetor u)
{
    //TODO: implementar
    // Produto vetorial só faz sentido em 3D
    // Ignorar a componente "w" de "v" e "u"
    // Como o resultado é um vetor, o "w" dele deve ser 0
    vetor resultado = v;
    return resultado;
}

///
/// Referências: http://localhost:8080/classes/geometry/#30
escalar anguloEntreVetores(vetor v, vetor u)
{
    //TODO: implementar
    escalar resultado = 0;
    return resultado;
}

///
/// Referências: http://localhost:8080/classes/geometry/#22
ponto combinacaoAfim2Pontos(ponto p, ponto q, escalar alpha)
{
    //TODO: implementar
    ponto resultado = p;
    return resultado;
}

/// Imprime um vetor ou ponto no terminal
/// Uso:
///   vetor r = somaVetorComVetor(a, b);
///   imprime("vetor r", r);
void imprime(struct coordenadas c, char* nome)
{
    printf("%s = { %.2f, %.2f, %.2f, %.2f }\n", nome, c.x, c.y, c.z, c.w);
}
