#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

#include "stack.hpp"

int main(int argc, char** argv) {

	srand((unsigned)time(NULL));

	stack p(10);

	int n = rand() % 11 + 5;

	for (int i; i < n; i++){
		int data = rand() % 100 + 1;

		printf("Agregando %i\n", data);

		p.push(data);
	}

	printf("\nEstraccion de datos\n");
	printf("Se insertaron %i datos: ", p.size());

	while(!p.empty()){
		printf("%i ", p.pop());
	}

	printf("\n");

	return 0;
}
