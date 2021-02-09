#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int numero, i, cont = 0 ;
	
	printf ("\n Digite um nъmero..: ") ; // Entrada de dados.
	scanf ("%d", &numero) ;
	
	for (i = 1; i <= numero; i++) // Para contar o nъmero de divisores,que tкm guardado na variavel numero... condiзгo comessa por 1.
	{
		if (numero % i == 0) // Se caso na sequкncia do for, o resto da divisao do nъmero pelo contador "i" o contador fфr iguбl а 0...cont++.
		{
			cont++ ;
		}
	}
	
	if (cont == 2) // Para ser primo й preciso dividir somente por 1 e por ele mesmo ou seja por dois nъmeros.
	{
		printf ("\n O nъmero %d й primo", numero) ; // Saнda de dados. 
	}

	else
	{
		printf ("\n O nъmero %d nгo й primo", numero) ;	// Saнda de dados.
	}
    
	return 0 ;
	system ("pause") ;
}
