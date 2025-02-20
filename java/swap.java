import java.util.Stack;

class swap extends Instruccion{

    @Override
    public void ejecutar(Stack<Integer> pila) {
        int valor1 = pila.pop();    // desapilo el valor de la cima y lo guardo
        int valor2 = pila.pop();    // desapilo el valor de la cima y lo guardo
        pila.push(valor1);
        pila.push(valor2);  // apilo intercambiando los dos valores que estaban en la cima
    }

    @Override
    public int incrementarPc(int pc) {
        return pc + 1;  // Incremento el contador de programa en 1
    }

    @Override
    public String mostrar() {
        return "    swap";
    }
}
