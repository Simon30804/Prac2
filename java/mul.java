import java.util.Stack;

class mul extends Instruccion{

    @Override
    public void ejecutar(Stack<Integer> pila){
        int valor1 = pila.pop(); //desapilo el primer operando
        int valor2 = pila.pop(); //desapilo el segundo operando
        pila.push(valor1 * valor2); //apilo el resultado de la multiplicación de los dos valores que estaban en la cima
    }

    @Override
    public int incrementarPc(int pc){
        return pc + 1; //como en las anteriores
    }

    @Override
    public String mostrar(){
        return "    mul";
    }
}
