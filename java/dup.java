import java.util.Stack;

class dup extends Instruccion {
    
    @Override
    public void ejecutar(Stack<Integer> pila){
        int valor = pila.pop(); // Desapilo y obtengo el valor de la cima de la pila
        pila.push(valor);  
        pila.push(valor); // Reapilo el valor dos veces
    }
    
    @Override 
    public int incrementarPc(int pc){
        return pc + 1; // Incremento el contador de programa en 1
    }

    @Override
    public String mostrar(){
        return " dup";
    }
}
