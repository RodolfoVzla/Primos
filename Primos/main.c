#include <stdio.h>

// Función para verificar si un número es primo
int es_primo(int numero) {
	if (numero <= 1) {
		return 0;  // Falso, no es primo
	}
	for (int i = 2; i * i <= numero; i++) {
		if (numero % i == 0) {
			return 0;  // Falso, no es primo
		}
	}
	return 1;  // Verdadero, es primo
}

int main() {
	int numero;

	printf("Calculadora Primos\nIngrese un número: ");
	scanf("%d", &numero);

	if (es_primo(numero)) {
		printf("El número %d sí es primo.\n", numero);
	} else {
		printf("El número %d no es primo.\n", numero);
	}

	return 0;
}
