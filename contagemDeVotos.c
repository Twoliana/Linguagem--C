#include <stdio.h>

int main()
{
int qnt = 1;
int votoa =0, votob =0, TOTAL =0, invalido =0;
char voto;

 
do {
    printf ("%d voto? ",qnt++);
    scanf ("%c%*c",&voto);
    
    switch( voto ) {
    case 'A': (votoa++); break;
    case 'B': (votob++); break;
    default : (invalido++); break;
    }
    
}while (voto != 'F');

puts("Resultado");
printf ("votos A: %d\n",votoa);
printf ("votos B: %d\n",votob);
printf ("votos invalidos: %d\n",invalido);
printf ("votos Total: %d\n", TOTAL= votoa+votob+invalido);

    return 0;
}
