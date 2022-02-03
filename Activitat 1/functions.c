/*
 * functions.c
 *
 *  Created on: Feb 3, 2022
 *      Author: admin-pg
 */

#include <stdio.h>

int ask_number(int n){
	printf("Introduce un número entre 10 y 5000 (incluidos): ");
	scanf("%d", &n);
	return n;
}

int verify(int n, int aux){
	if (n <= 10 || n >= 5000){
		aux= aux - 1;
	}
	else {
		aux= -1;
	}
	printf("Intentos restantes: %d\n\n", aux+1);
	return aux;
}
