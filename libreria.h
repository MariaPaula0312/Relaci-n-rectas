#ifndef LIBRERIA_H
#define LIBRERIA_H


	#include<stdio.h>
	#include<stdlib.h>

	struct punto{
        	float x;
	        float y;
	};
	struct recta{
	        float m;
        	float b;
	        struct punto p1,p2;
	};

	//declaración de funciones
	void crear_punto(struct punto *ps, float x, float y);
	void encontrar_recta(struct recta *rs, struct punto *ps);
	void imprimir_punto(struct punto *ps);
	void imprimir_recta(struct recta *rs);
	char ortogonalidad(struct recta *rs);
	void cruce_rectas(struct punto *res, struct recta *rs);

#endif
