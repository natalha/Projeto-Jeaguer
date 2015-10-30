typedef struct 
{
	int red, green, blue;
}Pixel;

typedef struct 
{
	int largura, altura;
	Pixel matrizimagem[largura][altura];
}Imagem;

void leituradaimagem(char nomedoarquivo[50], Imagem *img);


