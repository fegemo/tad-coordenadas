#include "coordenadas.h"
#include <math.h>
#include <stdio.h>

/// multiplica um vetor por um escalar
/// este é um exemplo entregue pronto pra você ;)
vetor multiplicaPorEscalar(vetor v, escalar alpha) {
  vetor resultado = {
    v.x * alpha,
    v.y * alpha,
    v.z * alpha,
    v.w * alpha
  };
  return resultado;
}

vetor somaVetorComVetor(vetor v, vetor u) {
  vetor resultado = {
    v.x + u.x,
    v.y + u.y,
    v.z + u.z,
    v.w + u.w
  };
  return resultado;
}

vetor diferencaVetorComVetor(vetor v, vetor u) {
  vetor uNegado = multiplicaPorEscalar(u, -1);
  vetor resultado = somaVetorComVetor(v, uNegado);
  return resultado;
}

vetor diferencaEntrePontos(ponto p, ponto q) {
  vetor resultado = diferencaVetorComVetor((vetor)p, (vetor)q);
  return resultado;
}

ponto somaPontoComVetor(ponto p, vetor v) {
  ponto resultado = somaVetorComVetor((vetor)p, v);
  return resultado;
}

escalar normaDoVetor(vetor v) {
  escalar resultado = sqrt(
    pow(v.x,2) + pow(v.y,2) + pow(v.z,2) + pow(v.w,2)
  );
  return resultado;
}

vetor normalizado(vetor v) {
  vetor resultado = multiplicaPorEscalar(v, 1/normaDoVetor(v));
  return resultado;
}

escalar distanciaEntrePontos(ponto p , ponto q) {
  escalar resultado = normaDoVetor(diferencaEntrePontos(p, q));
  return resultado;
}

escalar produtoEscalar(vetor v, vetor u) {
  escalar resultado = sqrt(
    v.x*u.x + v.y*u.y + v.z*u.z + v.w*u.w
  );
  return resultado;
}

vetor produtoVetorial(vetor v, vetor u) {
  // Ignorar a componente "w" de "v" e "u"
  // Como o resultado é um vetor, o "w" dele deve ser 0
  vetor resultado = {
    v.y*u.z - v.z*u.y,
    v.z*u.x - v.x*u.z,
    v.x*u.y - v.y*u.x,
    0
  };
  return resultado;
}

///
/// Referências: http://localhost:8080/classes/geometry/#30
escalar anguloEntreVetores(vetor v, vetor u) {
  vetor vNormalizado = normalizado(v);
  vetor uNormalizado = normalizado(u);
  escalar resultado = acos(produtoEscalar(vNormalizado, uNormalizado));
  return resultado;
}

///
/// Referências: http://localhost:8080/classes/geometry/#22
ponto combinacaoAfim2Pontos(ponto p, ponto q, escalar alpha) {
  vetor pq = diferencaEntrePontos(q, p);
  ponto resultado = somaPontoComVetor(p, multiplicaPorEscalar(pq, alpha));
  return resultado;
}

/// Imprime um vetor ou ponto no terminal
/// Uso:
///   vetor r = somaVetorComVetor(a, b);
///   imprime("vetor r", r);
void imprime(struct coordenadas c, char* nome) {
  printf("%s = { %.2f, %.2f, %.2f, %.2f }\n", nome, c.x, c.y, c.z, c.w);
}
