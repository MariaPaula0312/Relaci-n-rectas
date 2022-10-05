#include "libreria.h"


void crear_punto(struct punto *ps, float x, float y)
{
        ps->x = x;
        ps->y = y;
}

void encontrar_recta(struct recta *rs,struct punto *ps)
{
        rs->m = ((ps->y - (ps+1)->y)/(ps->x - (ps+1)->x));
        rs->b =((ps->y)-((rs->m)*(ps->x)));
        rs->p1 = *ps;
        rs->p2 = *(ps+1);
}

void imprimir_punto(struct punto *ps)
{
        int i = 0;
        for (i=0; i<4; i++)
                printf("\nEl punto %d es: (%f , %f)", i, ps[i].x, ps[i].y);
}

void imprimir_recta(struct recta *rs)
{
        int  i = 0;
        for (i=0; i<2; i++)
                printf("\t\nLa recta %d encontrada con los puntos ingresados es: y =  %fx + %f ",i, rs[i].m, rs[i].b);
}

void cruce_rectas(struct punto *res, struct recta *rs)
{
        res-> x =(rs[1].b-rs[0].b)/(rs[0].m-rs[1].m);
        res-> y =((rs[0].m * res->x) + rs[0].b);
        printf ("\nEl punto de intersección de las rectas es: (%f , %f)\n", res->x, res->y);
}

char ortogonalidad(struct recta *rs)
{
        char resultado = 1;
        if (rs[0].m == rs[1].m)
                resultado = 0;
        else if (rs[0].m == (1/(rs[0].m)))
                resultado = -1;
        return resultado;
}

