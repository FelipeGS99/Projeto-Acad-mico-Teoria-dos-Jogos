#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Nomes e RA dos integrantes.
// Felipe Gouveia Silva RA: 20775255
int main () {
    int prisioneiro, comparsa, estrategia, continua, jogadas, trairseguidos, cooperarseguidos;
    float percentualtrairxtrair, percentualtrairxcooperar, percentualcooperarxcooperar, trairxtrair, trairxcooperar, cooperarxcooperar;
    srand(time(NULL));
    int numeroAleatorio;
    numeroAleatorio = 1 + rand() % 2;
    comparsa = numeroAleatorio;
    jogadas = 0.0;
    trairxtrair = 0.0;
    trairxcooperar = 0.0;
    cooperarxcooperar = 0.0;
    while (estrategia != 9){
    while (estrategia < 1 || estrategia > 5 && estrategia != 9){
                    system("cls");
                    printf("Possiveis Estrategias\n");
                    printf("1 - Nao-Iterado\n");
                    printf("2 - Olho por olho\n");
                    printf("3 - Olho por dois olhos\n");
                    printf("4 - Provador Ingenuo\n");
                    printf("5 - Retaliador Permanente\n");
                    printf("Insira 9 para sair\n");
                    printf("Insira aqui a estrategia que voce vai utilizar: ");
                    scanf("%d", &estrategia);
                    printf("\n");
                    if(estrategia < 1 || estrategia > 5 && estrategia != 9){
                        system("cls");
                        printf("Estrategia Invalida\n\n");
                        system("PAUSE");
                    }
                }
    switch (estrategia){
    case 1 :
        while(continua != 3 && estrategia == 1){
        system("cls");
        printf("Digite 1 para trair ou 2 para cooperar.\n");
        printf("Voce deseja trair ou cooperar?: ");
        scanf("%d", &prisioneiro);
        printf("\n");
        if (estrategia == 1){
                srand(time(NULL));
                int numeroAleatorio;
                numeroAleatorio = 1 + rand() % 2;
                comparsa = numeroAleatorio;
        }
        if (prisioneiro == 1 && comparsa == 2){
            printf("Voce esta livre e seu comparsa foi condenado a 10 anos de prisao\n\n");
            printf("%d", comparsa);
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 2){
            printf("Ambos foram condenados a 3 anos de prisao\n\n");
            cooperarxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 1 && comparsa == 1){
            printf("Ambos foram condenados a 6 anos de prisao\n\n");
            trairxtrair++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 1){
            printf("Seu comparsa esta livre e voce foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else {
            printf ("Valor Invalido\n\n");
            system("PAUSE");
        }
            system("cls");
            printf("Digite 1 para sim e 2 para nao\n");
            printf("Deseja continuar usando a mesma estrategia?: ");
            scanf("%d", &continua);
            printf("\n");
            while (continua != 1 && continua != 2){
                system("cls");
                printf("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
            }
            if (continua == 2){
                do{
                    system("cls");
                    printf("Possiveis Estrategias\n");
                    printf("1 - Nao-Iterado\n");
                    printf("2 - Olho por olho\n");
                    printf("3 - Olho por dois olhos\n");
                    printf("4 - Provador Ingenuo\n");
                    printf("5 - Retaliador Permanente\n");
                    printf("Insira 9 para sair\n");
                    printf("Insira aqui a estrategia que voce vai utilizar: ");
                    scanf("%d", &estrategia);
                    printf("\n");
                    if (estrategia < 1 || estrategia > 5 && estrategia != 9){
                    system ("cls");
                    printf("Estrategia Invalida\n\n");
                    system("PAUSE");
                    }
                } while(estrategia < 1 || estrategia > 5 && estrategia != 9);
            }
        }
        break;
    case 2 :
            system("cls");
            printf("Digite 1 para trair ou 2 para cooperar.\n");
            printf("Voce deseja trair ou cooperar?: ");
            scanf("%d", &prisioneiro);
            printf("\n");
            if (prisioneiro == 1 && comparsa == 2){
            printf("Voce esta livre e seu comparsa foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 2){
            printf("Ambos foram condenados a 3 anos de prisao\n\n");
            cooperarxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 1 && comparsa == 1){
            printf("Ambos foram condenados a 6 anos de prisao\n\n");
            trairxtrair++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 1){
            printf("Seu comparsa esta livre e voce foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else {
            system("cls");
            printf ("Valor Invalido\n\n");
            system("PAUSE");
        }
            system("cls");
            printf("Digite 1 para sim e 2 para nao\n");
            printf("Deseja continuar usando a mesma estrategia?: ");
            scanf("%d", &continua);
            printf("\n");
            if (continua != 1 && continua !=2){
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                while(continua != 1 && continua !=2){
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
                if (continua != 1 && continua !=2){
                    system("cls");
                    printf ("Valor Invalido\n\n");
                    system("PAUSE");
                }
                }
            }
            while(continua == 1){
                system("cls");
                printf("Digite 1 para trair ou 2 para cooperar.\n");
                printf("Voce deseja trair ou cooperar?: ");
                scanf("%d", &prisioneiro);
                printf("\n");
                if (prisioneiro == 1){
                printf("Ambos foram condenados a 6 anos de prisao\n\n");
                trairxtrair++;
                jogadas++;
                system("PAUSE");
            } else if (prisioneiro == 2){
                printf("Ambos foram condenados a 3 anos de prisao\n\n");
                cooperarxcooperar++;
                jogadas++;
                system("PAUSE");
            } else {
                printf ("Valor Invalido\n\n");
                system("PAUSE");
            }
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
            }
            if (continua != 1 && continua !=2){
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                while(continua != 1 && continua !=2){
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
                if (continua != 1 && continua !=2){
                    system("cls");
                    printf ("Valor Invalido\n\n");
                    system("PAUSE");
                }
                }
            }

            if (continua == 2){
                do{
                    system("cls");
                    printf("Possiveis Estrategias\n");
                    printf("1 - Nao-Iterado\n");
                    printf("2 - Olho por olho\n");
                    printf("3 - Olho por dois olhos\n");
                    printf("4 - Provador Ingenuo\n");
                    printf("5 - Retaliador Permanente\n");
                    printf("Insira 9 para sair\n");
                    printf("Insira aqui a estrategia que voce vai utilizar: ");
                    scanf("%d", &estrategia);
                    printf("\n");
                    if(estrategia < 1 || estrategia > 5 && estrategia != 9){
                        system("cls");
                        printf("Estrategia Invalida\n\n");
                        system("PAUSE");
                    }
                } while(estrategia < 1 || estrategia > 5 && estrategia != 9);
            }
            break;
    case 3 :
            continua = 1;
            trairseguidos = 0;
            cooperarseguidos = 0;
            while (continua == 1){
            system("cls");
            printf("Digite 1 para trair ou 2 para cooperar.\n");
            printf("Voce deseja trair ou cooperar?: ");
            scanf("%d", &prisioneiro);
            printf("\n");
            if (trairseguidos >= 2){
                comparsa = 1;
            } else if (cooperarseguidos >= 2){
                comparsa = 2;
            } else if (trairseguidos <= 1){
                srand(time(NULL));
                int numeroAleatorio;
                numeroAleatorio = 1 + rand() % 2;
                comparsa = numeroAleatorio;
            } else {
                srand(time(NULL));
                int numeroAleatorio;
                numeroAleatorio = 1 + rand() % 2;
                comparsa = numeroAleatorio;
            }
            if (prisioneiro == 1 && comparsa == 2){
            printf("Voce esta livre e seu comparsa foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            trairseguidos ++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 2){
            printf("Ambos foram condenados a 3 anos de prisao\n\n");
            cooperarxcooperar++;
            jogadas++;
            cooperarseguidos++;
            system("PAUSE");
        } else if (prisioneiro == 1 && comparsa == 1){
            printf("Ambos foram condenados a 6 anos de prisao\n\n");
            trairxtrair++;
            jogadas++;
            trairseguidos++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 1){
            printf("Seu comparsa esta livre e voce foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            cooperarseguidos++;
            system("PAUSE");
        } else {
            system("cls");
            printf ("Valor Invalido\n\n");
            system("PAUSE");
        }
        if (prisioneiro == 1){
            cooperarseguidos = 0;
        } else {
            trairseguidos = 0;
        }
            system("cls");
            printf("Digite 1 para sim e 2 para nao\n");
            printf("Deseja continuar usando a mesma estrategia?: ");
            scanf("%d", &continua);
            printf("\n");
            }
            if (continua != 1 && continua !=2){
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                while(continua != 1 && continua !=2){
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
                if (continua != 1 && continua !=2){
                    system("cls");
                    printf ("Valor Invalido\n\n");
                    system("PAUSE");
                }
                }
            }
            if (continua == 2){
                do{
                    system("cls");
                    printf("Possiveis Estrategias\n");
                    printf("1 - Nao-Iterado\n");
                    printf("2 - Olho por olho\n");
                    printf("3 - Olho por dois olhos\n");
                    printf("4 - Provador Ingenuo\n");
                    printf("5 - Retaliador Permanente\n");
                    printf("Insira 9 para sair\n");
                    printf("Insira aqui a estrategia que voce vai utilizar: ");
                    scanf("%d", &estrategia);
                    printf("\n");
                    if(estrategia < 1 || estrategia > 5 && estrategia != 9){
                        system("cls");
                        printf("Estrategia Invalida\n\n");
                        system("PAUSE");
                    }
                } while(estrategia < 1 || estrategia > 5 && estrategia != 9);
            }
            break;
    case 4 :
        do{
        system("cls");
        printf("Digite 1 para trair ou 2 para cooperar.\n");
        printf("Voce deseja trair ou cooperar?: ");
        scanf("%d", &prisioneiro);
        printf("\n");
        if (prisioneiro == 1 && comparsa == 2){
            printf("Voce esta livre e seu comparsa foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 2){
            printf("Ambos foram condenados a 3 anos de prisao\n\n");
            cooperarxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 1 && comparsa == 1){
            printf("Ambos foram condenados a 6 anos de prisao\n\n");
            trairxtrair++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 1){
            printf("Seu comparsa esta livre e voce foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else {
            system("cls");
            printf("Valor Invalido\n\n");
            system("PAUSE");
        }
            system("cls");
            printf("Digite 1 para sim e 2 para nao\n");
            printf("Deseja continuar usando a mesma estrategia?: ");
            scanf("%d", &continua);
            printf("\n");
            if (continua != 1 && continua !=2){
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                while(continua != 1 && continua !=2){
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
                if (continua != 1 && continua !=2){
                    system("cls");
                    printf ("Valor Invalido\n\n");
                    system("PAUSE");
                }
                }
            }
            while (continua == 1){
            system("cls");
            printf("Digite 1 para trair ou 2 para cooperar.\n");
            printf("Voce deseja trair ou cooperar?: ");
            scanf("%d", &prisioneiro);
            printf("\n");
            comparsa = prisioneiro;
            if (prisioneiro == 1){
                printf("Ambos foram condenados a 6 anos de prisao\n\n");
                trairxtrair++;
                jogadas++;
                system("PAUSE");
            } else if (prisioneiro == 2){
                int trairaleatorio;
                trairaleatorio = 1 + rand() % 5;
                if (trairaleatorio == 4 || trairaleatorio == 5) {
                    printf("Seu comparsa esta livre e voce foi condenado a 10 anos de prisao\n\n");
                    trairxcooperar++;
                    jogadas++;
                    system("PAUSE");
                    } else if (trairaleatorio == 1 || trairaleatorio == 2 || trairaleatorio == 3){
                        printf("Ambos foram condenados a 3 anos de prisao\n\n");
                        cooperarxcooperar++;
                        jogadas++;
                        system("PAUSE");
                    } else {
                        system("cls");
                        printf ("Valor invalido\n\n");
                        system("PAUSE");
                    }
            } else {
                        system("cls");
                        printf ("Valor invalido\n\n");
                        system("PAUSE");
            }
            system("cls");
            printf("Digite 1 para sim e 2 para nao\n");
            printf("Deseja continuar usando a mesma estrategia?: ");
            scanf("%d", &continua);
            printf("\n");
            }
            if (continua != 1 && continua !=2){
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                while(continua != 1 && continua !=2){
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
                if (continua != 1 && continua !=2){
                    system("cls");
                    printf ("Valor Invalido\n\n");
                    system("PAUSE");
                }
                }
            }
        } while (continua == 1);
            if (continua == 2){
                do{
                    system("cls");
                    printf("Possiveis Estrategias\n");
                    printf("1 - Nao-Iterado\n");
                    printf("2 - Olho por olho\n");
                    printf("3 - Olho por dois olhos\n");
                    printf("4 - Provador Ingenuo\n");
                    printf("5 - Retaliador Permanente\n");
                    printf("Insira 9 para sair\n");
                    printf("Insira aqui a estrategia que voce vai utilizar: ");
                    scanf("%d", &estrategia);
                    printf("\n");
                    if(estrategia < 1 || estrategia > 5 && estrategia != 9){
                        system("cls");
                        printf("Estrategia Invalida\n\n");
                        system("PAUSE");
                    }
                } while(estrategia < 1 || estrategia > 5 && estrategia != 9);
            }
        break;
    case 5 :
            comparsa = 2;
            system("cls");
            printf("Digite 1 para trair ou 2 para cooperar.\n");
            printf("Voce deseja trair ou cooperar?: ");
            scanf("%d", &prisioneiro);
            printf("\n");
            if (prisioneiro == 1 && comparsa == 2){
            printf("Voce esta livre e seu comparsa foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 2){
            printf("Ambos foram condenados a 3 anos de prisao\n\n");
            cooperarxcooperar++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 1 && comparsa == 1){
            printf("Ambos foram condenados a 6 anos de prisao\n\n");
            trairxtrair++;
            jogadas++;
            system("PAUSE");
        } else if (prisioneiro == 2 && comparsa == 1){
            printf("Seu comparsa esta livre e voce foi condenado a 10 anos de prisao\n\n");
            trairxcooperar++;
            jogadas++;
            system("PAUSE");
        } else {
            system("cls");
            printf ("Valor Invalido\n\n");
            system("PAUSE");
        }
            system("cls");
            printf("Digite 1 para sim e 2 para nao\n");
            printf("Deseja continuar usando a mesma estrategia?: ");
            scanf("%d", &continua);
            printf("\n");
            if (continua != 1 && continua !=2){
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                while(continua != 1 && continua !=2){
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
                if (continua != 1 && continua !=2){
                    system("cls");
                    printf ("Valor Invalido\n\n");
                    system("PAUSE");
                }
                }
            }
            if (prisioneiro == 1){
            while(continua == 1){
                system("cls");
                printf("Digite 1 para trair ou 2 para cooperar.\n");
                printf("Voce deseja trair ou cooperar?: ");
                scanf("%d", &prisioneiro);
                printf("\n");
                if (prisioneiro == 1){
                printf("Ambos foram condenados a 6 anos de prisao\n\n");
                trairxtrair++;
                jogadas++;
                system("PAUSE");
            } else if (prisioneiro == 2){
                printf("Seu comparsa esta livre e voce foi condenado a 10 anos de prisao\n\n");
                trairxcooperar++;
                jogadas++;
                system("PAUSE");
            } else {
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
            }
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
            }
            }
            if (continua != 1 && continua !=2){
                system("cls");
                printf ("Valor Invalido\n\n");
                system("PAUSE");
                system("cls");
                while(continua != 1 && continua !=2){
                system("cls");
                printf("Digite 1 para sim e 2 para nao\n");
                printf("Deseja continuar usando a mesma estrategia?: ");
                scanf("%d", &continua);
                printf("\n");
                if (continua != 1 && continua !=2){
                    system("cls");
                    printf ("Valor Invalido\n\n");
                    system("PAUSE");
                }
                }
            }
            if (continua == 2){
                do{
                    system("cls");
                    printf("Possiveis Estrategias\n");
                    printf("1 - Nao-Iterado\n");
                    printf("2 - Olho por olho\n");
                    printf("3 - Olho por dois olhos\n");
                    printf("4 - Provador Ingenuo\n");
                    printf("5 - Retaliador Permanente\n");
                    printf("Insira 9 para sair\n");
                    printf("Insira aqui a estrategia que voce vai utilizar: ");
                    scanf("%d", &estrategia);
                    printf("\n");
                    if(estrategia < 1 || estrategia > 5 && estrategia != 9){
                        system("cls");
                        printf("Estrategia Invalida\n\n");
                        system("PAUSE");
                    }
                } while(estrategia < 1 || estrategia > 5 && estrategia != 9);
            }
            break;
            } //chave do switch
            }//chave do while
            system("cls");
            percentualtrairxtrair = (trairxtrair/jogadas) * 100.0;
            percentualtrairxcooperar = (trairxcooperar/jogadas) * 100.0;
            percentualcooperarxcooperar = (cooperarxcooperar/jogadas) * 100.0;
            printf("\nO jogo foi jogado um total de %d vezes\n\n", jogadas);
            printf("Estatisticas\n\n");
            printf("Trair x Trair = %.1f%% das vezes\n", percentualtrairxtrair);
            printf("Trair x Cooperar = %.1f%% das vezes\n", percentualtrairxcooperar);
            printf("Cooperar x Cooperar = %.1f%% das vezes\n", percentualcooperarxcooperar);
            printf("\n");
            printf("\n\n");
            system("PAUSE");
            return 0;
        }//chave do int main ()



