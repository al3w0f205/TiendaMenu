    #include <stdio.h>
    #include <string.h>

    int main()
    {
        char ID[10]; 
        char nombre[20];
        int stock;
        int opc = 0, opc2 = 0;
        int aux;
        int cantidad;
        int producto = 0;
        float ganancias = 0;
        float precio_final = 0;
        float descuento = 0;
        float precio;
        
        do
        {
            printf("---------- Menu -----------\n\n");
            printf("Seleccione una opcion: \n\t");
            printf("1. Agregar producto\n\t");
            printf("2. Vender producto\n\t");
            printf("3. Reabastecer producto\n\t");
            printf("4. Informacion producto\n\t");
            printf("5. Mostrar Ganancias Totales\n\t");
            printf("6. Salir\n");

            do
            {
                printf(">> ");
                aux = scanf("%d", &opc);
                while(getchar() != '\n');
                if (aux != 1 || opc < 0)
                {
                    printf("Opcion no valida, intente nuevamente\n");
                }

            } while (aux != 1 || opc < 0);
            
            switch(opc)
            {
                case 1:
                    printf("--- AGREGAR PRODUCTO ---\n");
                    printf("Ingrese el ID del producto: ");
                    scanf("%s", ID);
                    while(getchar() != '\n');

                    printf("Ingrese el nombre del producto: ");
                    fgets(nombre, sizeof(nombre), stdin);
                    nombre[strcspn(nombre, "\n")] = '\0';

                    do
                    {
                        printf("Ingrese el stock del producto: ");
                        aux = scanf("%d", &stock);
                        while(getchar() != '\n');
                        if (aux != 1 || stock < 0)
                        {
                            printf("Stock no valido, intente nuevamente\n");
                        }
                    } while (aux != 1 || stock < 0);

                    do
                    {
                        printf("Ingrese el precio del producto: ");
                        aux = scanf("%f", &precio);
                        while(getchar() != '\n');
                        if (aux != 1 || precio <= 0)
                        {
                            printf("Precio no valido, intente nuevamente\n");
                        }
                    } 
                    
                    while (aux != 1 || precio <= 0);
                    printf("Producto agregado con exito\n");
                    producto = 1;
                    break;


                case 2:
                    printf("--- VENDER PRODUCTO ---\n");
                    do {
                        printf("Ingrese la cantidad a vender: ");
                        aux = scanf("%d", &cantidad);
                        while(getchar() != '\n');
                        if (aux != 1 || cantidad <= 0)
                            printf("Cantidad invalida.\n");
                        else if (cantidad > stock)
                            printf("Stock insuficiente. Solo hay %d unidades.\n", stock);
                    } while (aux != 1 || cantidad <= 0 || cantidad > stock);

                    do {
                        printf("Ingrese el descuento en %% (0 = sin descuento): ");
                        aux = scanf("%f", &descuento);
                        while (getchar() != '\n');
                        if (aux != 1 || descuento < 0 || descuento > 100)
                            printf("  [!] Descuento invalido. Debe estar entre 0 y 100.\n");
                    } while (aux != 1 || descuento < 0 || descuento > 100);
    
                    
                    precio_final = precio * (1.0f - descuento / 100.0f);
                    stock -= cantidad;
                    ganancias += cantidad * precio_final;
                        
                    printf("Venta hecha con exito\n");
                    printf("Item Vendido: %s\n", nombre);
                    printf("Ganancia: %.2f\n", cantidad * precio_final);
                    printf("Stock restante: %d\n", stock);
                    break;
                
    

                case 3:
                printf("--- REABASTECER PRODUCTO ---\n");
                do {
                    printf("Ingrese la cantidad a reabastecer: ");
                    aux = scanf("%d", &cantidad);
                    while(getchar() != '\n');
                    
                    if (aux != 1 || cantidad < 0)
                    {
                        printf("Cantidad no valida, intente nuevamente\n");
                    }
                } while (aux != 1 || cantidad < 0);
                    stock += cantidad;
                    printf("Stock actualizado con exito\n"); 
                    break;
                    

                case 4:
                printf("--- INFORMACION DEL PRODUCTO ---\n");
                    if (!producto) {
                        printf("No hay producto registrado\n");
                        break;
                    }
                    printf("ID: %s\n", ID);
                    printf("Nombre: %s\n", nombre);
                    printf("Stock: %d\n", stock);
                    printf("Precio: %.2f\n", precio);
                    
                    break;

                case 5:
                printf("--- GANANCIAS TOTALES ---\n");
                printf("%.2f\n", ganancias);
                break;           
            }

            printf("Desea seleccionar otra opcion: (1=Si | 2=No)\n");
            scanf("%d", &opc2);
        } while(opc2==1);

        return 0;

    }