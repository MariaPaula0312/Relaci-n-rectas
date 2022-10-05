#include "libreria.h"
int main (int argc, char *argv[])
{
        float x0 = atof (argv[1]);
        float y0 = atof (argv[2]);
        float x1 = atof (argv[3]);
        float y1 = atof (argv[4]);
        float x2 = atof (argv[5]);
        float y2 = atof (argv[6]);
        float x3 = atof (argv[7]);
        float y3 = atof (argv[8]);
        struct punto ps[4];
        struct recta rs[2];
        struct punto res;
        char resultado;

        crear_punto(&ps[0], x0, y0);
        crear_punto(&ps[1], x1, y1);
        crear_punto(&ps[2], x2, y2);
        crear_punto(&ps[3], x3, y3);

        encontrar_recta(&rs[0], &ps[0]);
        encontrar_recta(&rs[1], &ps[2]);

        imprimir_punto(ps);
        imprimir_recta(rs);

        resultado = ortogonalidad(rs);
        if (resultado != 0)
                cruce_rectas(&res, rs);
        else
                printf("\nLas rectas son paralelas por consiguiente no tienen punto de corte\n");
        return 0;
}
