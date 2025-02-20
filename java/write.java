import java.util.Stack;

class write extends Instruccion {
    @Override 
    public void ejecutar(Stack<Integer> pila){
        System.out.println(pila.pop()); // Desapilo el valor de la pila y lo escribo en la salida estándar
    }
    
    @Override 
    public int incrementarPc(int pc){
        return pc + 1;  // Incremento el contador de programa en 1
    }

    @Override
    public String mostrar(){
        return "    write";
    }
}
