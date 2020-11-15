#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double precioUnidad = 3.50;
    const double descuento1 = 0.05; //descuento por la compra de mas de 10 unidades
    const double descuento2 = 0.1; //descuento por la compra de mas de 20 unidades
    const double descuento3 = 0.15; //descuento por la compra de mas de 50 unidades
    double precioTotal = 0.0;
    int cantidad = 0;

    printf("Introduzca el numero de unidades que desea comprar: ");
    scanf("%d",&cantidad);

    precioTotal = cantidad*precioUnidad*(1.0 -
                        (cantidad > 50 ? descuento3 : (
                           cantidad > 20 ? descuento2 : (
                              cantidad > 10 ? descuento1 : 0.0))));

    printf("El precio final para %d unidades es: %.2f euros\n", cantidad, precioTotal);
    return 0;
}
