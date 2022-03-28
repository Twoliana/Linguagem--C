//Primeiro programa com função recursão! 

int soma (int valor) {
    int resultado;
    if (valor == 0) resultado = 0;
    else { resultado = valor + soma(valor -1);
    }
    return resultado; 
    }

int main () {
    int valor;
    printf ("Numero ? ");
    scanf ("%d", &valor);
    printf ("%d",soma (valor));
    return 0;
}