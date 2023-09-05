#include "tabuleiro.h"
#include <stdio.h>

tTabuleiro CriaTabuleiro(){
    tTabuleiro t;
    t.peca1='x';
    t.peca2='0';
    t.pecaVazio='-';
    for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            t.posicoes[i][j]=t.pecaVazio;
        }
    }
    return t;
}

tTabuleiro MarcaPosicaoTabuleiro(tTabuleiro tabuleiro, int peca, int x, int y){
    
    if(peca=PECA_1) tabuleiro.posicoes[x][y]=tabuleiro.peca1;
    
    else if(peca=PECA_2) tabuleiro.posicoes[x][y]=tabuleiro.peca2;

    return tabuleiro;
}

int TemPosicaoLivreTabuleiro(tTabuleiro tabuleiro){
    for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            if (tabuleiro.posicoes[i][j]==tabuleiro.pecaVazio){
                return 1;
            }
        }
    }
    return 0;
}

int EstaMarcadaPosicaoPecaTabuleiro(tTabuleiro tabuleiro, int x, int y, int peca){
        char pecaFuncao;
        if(peca=PECA_1) pecaFuncao=tabuleiro.peca1;
        else if(peca=PECA_2) pecaFuncao=tabuleiro.peca2;
        
        for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            if (tabuleiro.posicoes[i][j]==pecaFuncao){
                return 1;
            }
        }
    }
    return 0;
}

int EstaLivrePosicaoTabuleiro(tTabuleiro tabuleiro, int x, int y){
    if(tabuleiro.posicoes[x][y]==tabuleiro.pecaVazio) return 1;
    else return 0;
}

int EhPosicaoValidaTabuleiro(int x, int y){
    if(x<TAM_TABULEIRO && y<TAM_TABULEIRO) return 1;
    else return 0;
}

void ImprimeTabuleiro(tTabuleiro tabuleiro){
    for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            printf("%c", tabuleiro.posicoes[i][j]);
        }
        printf("\n");
    }
}