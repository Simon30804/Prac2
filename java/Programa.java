import java.util.Stack;

class Programa {
    protected Instruccion[] instrucciones; // Vector de instrucciones
    protected int numInstrucciones; // Número de instrucciones
    protected int pc; // Contador de programa
    protected Stack<Integer> pila;

    public Programa(int numInstrucciones){
        instrucciones = new Instruccion[numInstrucciones];
        this.numInstrucciones = numInstrucciones; // Inicializa el número de instrucciones
        pc = 0;     // Inicializo el contador de programa en 0
        pila = new Stack<>();    // Inicializo la pila vacía
    }

    // Mientras haya instrucciones por ejecutar, ejecuto la instrucción en la posición pc del vector de instrucciones e incremento el contador de programa
    public void ejecutar(){
        while(pc < numInstrucciones){
            instrucciones[pc].ejecutar(pila); // Ejecuto la instrucción en la posición pc del vector de instrucciones
            pc = instrucciones[pc].incrementarPc(pc); // Incremento el contador de programa
        }
    }

    // Muestro por pantalla las instrucciones del programa, junto a su número de línea
    public void listar(){
        for(int i = 0; i < numInstrucciones; i++){
            System.out.print(i + instrucciones[i].mostrar() + "\n" ); 
        }
    }

}
