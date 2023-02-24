#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
int ops;
cout << "Introduce la opcion a elegir: "<<endl;

//Opciones
cout <<"1- fireshark -icmp"<<endl;
cout <<"2- fireshark -http"<<endl;
cout <<"3- fireshark -tcp"<<endl;
cout <<"4- fireshark -dhcp"<<endl;

//-----CASOS------
cin>>ops;

switch(ops){

//----ICMP-----
case 1:
	//Modelo OSI	
	cout <<"       OSI              PDU              TCP/IP"<<endl;
        cout <<"+---------------+----------------+------------------+"<<endl;
        cout <<"| Aplicaciones  |                |                  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"| Presentación  |     Datos      |    Aplicaciones  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"|   Sesión      |                |                  |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout <<"|_______________|________________|                  |"<<endl;
        cout <<"|     Física    |      Bits      |                  |"<<endl;
        cout <<"+_______________|________________|__________________+"<<endl;
        cout << endl;
	//Descripcion
	cout << "El protocolo de mensajes de control de Internet es parte del conjunto de protocolos IP. Es utilizado para enviar mensajes de error e  información operativa indicando, por ejemplo, que un host no puede ser localizado o que un servicio que se ha solicitado no está disponible."<<endl<<endl;
	cout <<"Capa del Modelo OSI: Red"<<endl;
        //Esnifar
	system("ifconfig");
	system("tcpdump icmp");
	break;

//----HTTP----
case 2:
	//Modelo OSI    
        cout <<"       OSI              PDU              TCP/IP"<<endl;
        cout <<"+---------------+----------------+------------------+"<<endl;
        cout <<"| Aplicaciones  |                |                  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"| Presentación  |     Datos      |    Aplicaciones  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"|   Sesión      |                |                  |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout <<"|_______________|________________|                  |"<<endl;
        cout <<"|     Física    |      Bits      |                  |"<<endl;
        cout <<"+_______________|________________|__________________+"<<endl;
        cout << endl;
        //Descripcion
	cout<<"HTTP es el nombre de un protocolo el cual nos permite realizar una petición de datos y recursos, como pueden ser documentos HTML. Es la base de cualquier intercambio de datos en la Web, y un protocolo de estructura cliente-servidor, esto quiere decir que una petición de datos"<<endl<<endl;
	cout <<"Capa del Modelo OSI: Aplicacion"<<endl;
        //Esnifar
	system("tcpdump tcp port http");
	break;

//----TCP----
case 3:
	//Modelo OSI
        cout <<"       OSI              PDU              TCP/IP"<<endl;
        cout <<"+---------------+----------------+------------------+"<<endl;
        cout <<"| Aplicaciones  |                |                  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"| Presentación  |     Datos      |    Aplicaciones  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"|   Sesión      |                |                  |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout <<"|_______________|________________|                  |"<<endl;
        cout <<"|     Física    |      Bits      |                  |"<<endl;
        cout <<"+_______________|________________|__________________+"<<endl;
        cout << endl;
        //Descripcion
	cout <<"TCP (Protocolo de Control de Transmisión, por sus siglas en inglés Transmission Control Protocol) es protocolo de red importante que permite que dos anfitriones (hosts) se conecten e intercambien flujos de datos. TCP garantiza la entrega de datos y paquetes (en-US) en el mismo orden en que se enviaron."<<endl;
        cout <<"Capa del Modelo OSI: Transporte"<<endl;

	//Esnifar
	system("tcpdump tcp");
        break;

//----DHCP-----
case 4:
	//Modelo OSI
        cout <<"       OSI              PDU              TCP/IP"<<endl;
        cout <<"+---------------+----------------+------------------+"<<endl;
        cout <<"| Aplicaciones  |                |                  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"| Presentación  |     Datos      |    Aplicaciones  |"<<endl;
        cout <<"|_______________|                |                  |"<<endl;
        cout <<"|   Sesión      |                |                  |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout <<"|_______________|________________|__________________|"<<endl;
        cout <<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout <<"|_______________|________________|                  |"<<endl;
        cout <<"|     Física    |      Bits      |                  |"<<endl;
        cout <<"+_______________|________________|__________________+"<<endl;
        cout << endl;
        //Descripcion
        cout <<"El protocolo DHCP (Protocolo de configuración dinámica de host) o también conocido como «Dynamic Host Configuration Protocol«, es un protocolo de red que utiliza una arquitectura cliente-servidor. Por tanto, tendremos uno o varios servidores DHCP y también uno o varios clientes, que se deberán comunicar entre ellos correctamente para que el servidor DHCP brinde información a los diferentes clientes conectados. Este protocolo se encarga de asignar de manera dinámica y automática una dirección IP, ya sea una dirección IP privada desde el router hacia los equipos de la red local, o también una IP pública por parte de un operador que utilice este tipo de protocolo para el establecimiento de la conexión."<<endl;
       	cout <<"Capa del Modelo OSI: Aplicacion"<<endl;
        //Esnifar
	system("tcpdump port 67 or port 68 -e -n -vv");
        break;
}
return 0;
}