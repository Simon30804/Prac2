import java.util.Stack;

class swap extends Instruccion{

    @Override
    public void ejecutar(Stack<Integer> pila) {
        int valor1 = pila.pop();
        int valor2 = pila.pop();
        pila.push(valor1);
        pila.push(valor2);  // apilo intercambiando los dos valores que estaban en la cima
    }

    @Override
    public int incrementarPc(int pc) {
        return pc + 1;
    }

    @Override
    public String mostrar() {
        return "    swap";
    }
}
