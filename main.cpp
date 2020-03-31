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
private:
    string cedula;
    string nombre;
    Dtfecha fechaIngreso;
public:
    Usuario(string _ci, string _nombre, Dtfecha _fechaIngreso);
};

Usuario::Usuario(string _ci, string _nombre, Dtfecha _fechaIngreso){
    string ci = _ci;
    string nombre = _nombre;
    _fechaIngreso.anio = 0;
    _fechaIngreso.mes = 0;
    _fechaIngreso.dia = 0;
}
class Viaje{
private:
    Dtfecha fecha;
    int duracion;
    int distancia;
public:
    Viaje(Dtfecha fecha, int duracion, int distancia);
};

Viaje::Viaje(Dtfecha _fecha, int _duracion, int _distancia){
    _fecha.anio = 0;
    _fecha.mes = 0;
    _fecha.dia = 0;
    int duracion = _duracion;
    int distacia = _distancia;
}

class Vehiculo: public Viaje{
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
    DtMonopatin tieneLuces;
public:
    Vehiculos(int nroSerie, float porcentajeBateria, float precioBase, DtMonopatin tieneLuces);
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

class Monopatin: public Vehiculo{
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
    DtMonopatin tieneLuces;
public:
    Monopatin(int nroSerie , float porcentajeBateria, float precioBase;, DtMonopatin tieneLuces);
    float darPrecioViaje(int duracion, int distancia, bool tieneLuces);
};

Monopatin::Monopatin(int _nroSerie, float _porcentajeBateria, float _precioBase;, DtMonopatin _tieneLuces){

}

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
