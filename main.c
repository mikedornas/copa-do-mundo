/************************************************************/
/* DCC004 - ALGORITMOS E ESTRUTURAS DE DADOS II             */
/* Prof.: Cristiano Arbex Valle e Gisele L. Pappa           */
/* TP2 - Preparacao para a Copa do Mundo                  */
/* Autor: Mike Dornas Oliveira                              */
/* Matricula: 2017002199                                    */
/* Data: 02/07/2018                                         */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tp2.h"

int main(int argc, char **argv)
{
  teste_de_parametros(argc);

  t_resultados *resultados = salvar_historico_jogos(argc, argv);



  return 0;
}
