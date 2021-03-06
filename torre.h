#ifndef TORRE_H
#define TORRE_H

#include <iostream>
#include <string>
#include "peca.h"

class Tabuleiro;

class Torre: public Peca
{

public:
	bool verifica_jogada( int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro);
	bool verificando_xeque_(int n, int m);//na pos (0,2)(0,4)(0,6) que da pra ver se tem rico p rei

	std::string retornaString() override {

		if(getCor() == 'P') return "\u265C";
		else return "\u2656";
	}

    virtual QGraphicsItem *createItem(QGraphicsScene *scene) override {
        if(getCor()=='B')
            return scene->addPixmap(QPixmap(":/Imagens/w_rook_png_shadow_256px.png").scaled(80, 80));
        else
            return scene->addPixmap(QPixmap(":/Imagens/b_rook_png_shadow_256px.png").scaled(80, 80));
    }

private:
	int peca_no_caminho(int pos_atual_i, int pos_atual_j, int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro);
};

#endif
