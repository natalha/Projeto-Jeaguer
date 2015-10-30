/*Este arquivo faz a leitura da imagem.*/
#include <stdio.h>
#include "imagem.h"
void leituradaimagem(char nomedoarquivo[50], Imagem *img)
{
	FILE *arquivo;
	int x, y;
	strcat(nomedoarquivo,".ppm");
	arquivo = fopen(nomedoarquivo, "r");
	fscanf(arquivo,"P3 %i %i 255", &img->largura, &img->altura)
	for(x=0;x<img->largura;x++)
	{
		for(y=0;y<img->altura;y++)
		{
			fscanf(arquivo,"%i %i %i", img->matrizimagem[x][y].red, img->matrizimagem[x][y].green, img->matrizimagem[x][y].blue);
		}
	}
}
