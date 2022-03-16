#include <stdio.h>
#include <math.h>

int main()
{
    int qnt=0;
    int i;
    float peso,altura,imc;
    
    printf ("Quantidade de pacientes? ");
    scanf ("%d",&qnt);
    
    for (i=1; i <=qnt ;i++){
	printf ("%d paciente\n", i);
    printf("peso?");
    scanf ("%f", &peso);
    printf("altura?");
    scanf ("%f", &altura);

    imc = peso/(altura*altura);
    printf ("IMC: %.1f\n", imc);
	
	if (imc >= 18.5 && imc <= 25.0)
	printf ("Risco: baixo\n\n");
	else
	printf("Risco: alto\n\n");
	}

    return 0;
}
