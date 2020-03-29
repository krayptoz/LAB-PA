#include <iostream>

using namespace std;
// Data type

class Dtfecha{
public:
    int dia;
    int mes;
    int anio;
};

class DtViajeBase{
public:
    Dtfecha fecha;
    int duracion;
    int distancia;
};

enum class TipoBici{
    PASEO,MONTANIA
};

class DtVehiculo{
public:
    int nroSerie;
    float porcentaje;
    float precioBase;
};

class DtMonopatin: public DtVehiculo{
public:
        bool tieneLuces;
};

class DtBicicleta: DtVehiculo{
public:
    TipoBici tipo;
    int cantCambios;
};

class DtViaje: public DtViajeBase{
public:
    float precioTotal;
    DtVehiculo vehiculo;
};


// Clases

class Usuario{
public:
    string cedula;
    string nombre;
    Dtfecha fechaIngreso;
};

class Viaje{
public:
    Dtfecha fecha;
    int duracion;
    int distancia;
};

class Vehiculo: public Viaje{
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
    DtMonopatin tieneLuces;
public:
   float darPrecioViaje(int duracion, int distancia, bool tieneLuces);
};

float Vehiculo::darPrecioViaje(int duracion, int distancia,bool tieneLuces){
    if(tieneLuces){
        return 0.5 * duracion + distancia * precioBase;
    }
    else{
        return distancia * precioBase;
    }
}

class Monopatin: public DtMonopatin{
private:
    bool tieneLuces;
public:
    float darPrecioViaje(int duracion, int distancia, bool tieneLuces);
};

class Bicicleta: public DtBicicleta{
private:
    TipoBici tipo;
    int cantCambios;
public:
    float darPrecioViaje(int duracion, int distancia);
};



int main()
{

    return 0;
}
