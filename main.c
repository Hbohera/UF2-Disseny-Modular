/*
 * main.c
 *
 *  Created on: Feb 3, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void main(){
	int n= 0, aux= 3;
	while (aux >= 0){
		n =	ask_number(n);
		aux= verify(n, aux);
	}
}
