import java.util.Stack;

class push extends Instruccion {
    private int valor;
    
    public push(int valor){
        this.valor = valor;
    }
    
    @Override
    public void ejecutar(Stack<Integer> pila){
        pila.push(valor); // Apilo el valor en la pila
    }
    
    @Override 
    public int incrementarPc(int pc){
        return pc + 1; // Incremento el contador de programa en 1
    }

    @Override
    public String mostrar(){
        return " push ";
    }
    
}
