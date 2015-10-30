#include <stdio.h>
#include "imagem.h"
int main(int argc, char const *argv[])
{
	Imagem leninha;
	leituradeimagem("lena", &leninha);
	rotate(&leninha);

	return 0;
}