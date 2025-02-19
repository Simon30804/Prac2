import java.util.Stack;

public class add extends Instruccion {
    
    @Override // Lo uso para indicar que estoy sobreescribiendo un método de la clase base Instruccion
    public void ejecutar(Stack<Integer> pila){ // Recibo un objeto pila como parámetro, luego podré hacer uso de sus operaciones(siempre y cuando sean públicas)
        int valor1 = pila.pop(); //desapilo el primer operando
        int valor2 = pila.pop(); //desapilo el segundo operando
        pila.push(valor1 + valor2); //apilo el resultado de la suma

    }

    @Override 
    public int incrementarPc(int pc){
        return pc + 1; // Incremento el contador de programa en 1
    }

    @Override
    public String mostrar(){
        return " add";
    }
}
