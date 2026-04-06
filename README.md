# Sistema de Gestión de Tienda
### ISWZ1102 – Programación 1 | Taller Colaborativo

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-red?style=for-the-badge&logo=gnu&logoColor=white)
![License](https://img.shields.io/badge/licencia-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/estado-completo-brightgreen?style=for-the-badge)

---

## Descripción

Programa en lenguaje **C** que simula el sistema de gestión de ventas de un pequeño comerciante. Permite registrar un producto, realizar ventas con descuento, reabastecer el inventario, consultar información y calcular ganancias acumuladas — todo desde una interfaz de menú interactivo en consola.

Desarrollado como parte del Taller Colaborativo de la materia **Programación 1** de la Universidad de las Américas (UDLA).

---

## Funcionalidades

| # | Función | Descripción |
|---|---------|-------------|
| 1 | **Agregar producto** | Registra ID, nombre, stock inicial y precio unitario |
| 2 | **Vender producto** | Vende unidades con validación de stock y descuento opcional (0–100%) |
| 3 | **Reabastecer** | Agrega unidades al inventario existente |
| 4 | **Información** | Muestra los datos actuales del producto |
| 5 | **Ganancias totales** | Muestra el acumulado de ventas de la sesión |
| 6 | **Salir** | Termina el programa mostrando el resumen final |

---

## Validaciones implementadas

- Entradas no numéricas detectadas con el retorno de `scanf`
- Buffer del teclado limpiado con `while(getchar() != '\n')` tras cada lectura
- Stock no puede ser negativo al registrar
- Precio debe ser mayor a cero
- No se puede vender si no hay producto registrado
- No se puede vender más unidades de las disponibles
- Descuento validado en rango 0–100%
- Reabastecimiento solo acepta valores positivos
- Menú solo acepta opciones entre 1 y 6

---

## Estructura del proyecto

```
ISWZ1102-Taller/
├── menu_tienda.c         <- Código fuente principal
├── README.md             <- Este archivo
└── Informe_Taller.docx   <- Informe con análisis y pruebas
```

---

## Compilación y ejecución

### Requisitos
- GCC (GNU Compiler Collection)
- Terminal Linux / macOS / Windows con MinGW

### Pasos

```bash
# 1. Clonar el repositorio
git clone https://github.com/al3w0f205/TiendaMenu.git
cd TiendaMenu

# 2. Compilar
gcc menu_tienda.c -o menu_tienda -Wall

# 3. Ejecutar
./menu_tienda
```

> En Windows con MinGW: `gcc menu_tienda.c -o menu_tienda.exe -Wall` y luego `menu_tienda.exe`

---

## Ejemplo de uso

```
---------- Menu -----------

Seleccione una opcion:
    1. Agregar producto
    2. Vender producto
    3. Reabastecer producto
    4. Informacion producto
    5. Mostrar Ganancias Totales
    6. Salir
>> 1

--- AGREGAR PRODUCTO ---
Ingrese el ID del producto: P001
Ingrese el nombre del producto: Arroz Diana
Ingrese el stock del producto: 50
Ingrese el precio del producto: 2.50
Producto agregado con exito

>> 2

--- VENDER PRODUCTO ---
Ingrese la cantidad a vender (max 50): 10
Ingrese el descuento en % (0 = sin descuento): 5

Venta hecha con exito
Item Vendido: Arroz Diana
Ganancia: 23.75
Stock restante: 40
```

---

## Escenarios de prueba

| Escenario | Resultado esperado |
|-----------|-------------------|
| Vender sin registrar producto | Comportamiento indefinido — registrar primero |
| Ingresar letra en el menú | Repite la solicitud |
| Vender más del stock disponible | Mensaje de stock insuficiente |
| Stock negativo al registrar | Repite la solicitud |
| Descuento del 100% | Precio final = 0.00 |
| Multiples ventas | Ganancias se acumulan correctamente |

---

## Conceptos aplicados

- **Variables**: `int`, `float`, `char[]` para representar entidades del mundo real
- **Entrada/Salida**: `printf`, `scanf`, `fgets` con manejo correcto de buffer
- **Estructuras de control**: `do-while` anidados, `switch`, `if-else`
- **Validación de entradas**: retorno de `scanf` + limpieza de buffer
- **Cálculo con flotantes**: uso de `1.0f` para forzar aritmética de punto flotante

---

## Autores

| Nombre |
|--------|
| Alejandro Figueroa |

**Docente:** Carlos Andrés Guaita Ayala  
**Materia:** ISWZ1102 – Programación 1  
**Universidad:** Universidad de las Américas (UDLA)
