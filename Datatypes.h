#ifndef DATATYPES_H_INCLUDED
#define DATATYPES_H_INCLUDED
// Data types

struct Dtfecha{
public:
    int dia;
    int mes;
    int anio;
};

struct DtViajeBase{
public:
    Dtfecha fecha;
    int duracion;
    int distancia;
};

enum struct TipoBici{
    PASEO,MONTANIA
};

struct DtVehiculo{
public:
    int nroSerie;
    float porcentaje;
    float precioBase;
};

struct DtMonopatin: public DtVehiculo{
public:
        bool tieneLuces;
};

struct DtBicicleta: DtVehiculo{
public:
    TipoBici tipo;
    int cantCambios;
};

struct DtViaje: public DtViajeBase{
public:
    float precioTotal;
    DtVehiculo vehiculo;
};




#endif // DATATYPES_H_INCLUDED
