# Sistema de Gestión de Tienda
### ISWZ1102 – Programación 1 | Taller Colaborativo

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-red?style=for-the-badge&logo=gnu&logoColor=white)
![License](https://img.shields.io/badge/licencia-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/estado-completo-brightgreen?style=for-the-badge)

---

## Descripción

Programa en lenguaje **C** que simula el sistema de gestión de ventas de un pequeño comerciante. Permite registrar un producto, realizar ventas con descuento, reabastecer el inventario, consultar información, además de calcular ganancias acumuladas — todo desde una interfaz de menú interactivo en consola.

Desarrollado como parte del Taller Colaborativo de la materia **Programación 1** de la Universidad de las Américas (UDLA).

---

## Funcionalidades

| # | Función | Descripción |
|---|---------|-------------|
| 1 | **Agregar producto** | Registra ID, nombre, stock inicial junto con precio unitario |
| 2 | **Vender producto** | Vende unidades con validación de stock, incluyendo un descuento opcional (0–100%) |
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
- Menú solo acepta opciones entre 1 hasta 6

---

## Estructura del proyecto

```text
ISWZ1102-Taller/
├── menu_tienda.c      ← Código fuente principal
├── README.md          ← Este archivo
└── Informe_Taller.docx ← Informe con análisis además de pruebas
