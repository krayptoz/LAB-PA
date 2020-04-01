#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
//Clases

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
    Monopatin(int nroSerie , float porcentajeBateria, float precioBase, DtMonopatin tieneLuces);
    float darPrecioViaje(int duracion, int distancia, bool tieneLuces);
};

Usuario::Usuario(string _cedula,string _nombre,Dtfecha _fechaIngreso){
    cedula=_cedula;
    nombre=_nombre;
    fechaIngreso=_fechaIngreso;
}

Viaje::Viaje(Dtfecha _fecha,int _duracion,int _distancia){
     fecha=_fecha;
     duracion=_duracion;
     distancia=_distancia;
}

Vehiculo::Vehiculo(int _nroSerie,float _porcentajeBateria,float _precioBase){
    nroSerie=_nroSerie;
    porcentajeBateria=_porcentajeBateria;
    precioBase=_precioBase;
}


Monopatin::Monopatin(int _nroSerie,float _porcentajeBateria,float _precioBase,bool _tieneLuces) : Vehiculo(_nroSerie,_porcentajeBateria,_precioBase){
    tieneLuces=_tieneLuces;
}

Bicicleta::Bicicleta(int _nroSerie,float _porcentajeBateria,float _precioBase,TipoBici _tipo, int _cantCambios) : Vehiculo(_nroSerie,_porcentajeBateria,_precioBase){
    tipo=_tipo;
    cantCambios=_cantCambios;
}


#endif // CLASS_H_INCLUDED
