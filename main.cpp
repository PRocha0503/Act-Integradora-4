#include "grafo.h"
using namespace std;

int main(){
    Grafo intento("bitacoraGrafos.txt");
    intento.writeConections("Conexiones.txt");
    intento.heapSort();
    intento.mostConections();
    return 0;
}