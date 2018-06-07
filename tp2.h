typedef struct t_resultados {
    int ano,
        mes,
        dia;
    char home_team[20],
         away_team[20];
    int home_score,
        away_score;
    char tournament[30];
} t_resultados;

typedef struct t_ranking {
    char pais[20];
    int pontos,
        jogos,
        vitorias,
        empates,
        derrotas,
        gols_marcados,
        gols_sofridos,
        saldo_gols;
    float aproveitamento;
} t_ranking;


void teste_de_parametros(int num_parametros);

t_resultados *salvar_historico_jogos(int argc, char **argv);
