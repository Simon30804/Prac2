import java.util.Stack;

class over extends Instruccion{

    @Override
    public void ejecutar(Stack<Integer> pila) {
        int valor1 = pila.pop();
        int valor2 = pila.pop();
        pila.push(valor2);//apilo el segundo
        pila.push(valor1); //apilo el que estaba en la cima
        pila.push(valor2);//apilo de nuevo el segundo
    }

    @Override
    public int incrementarPc(int pc) {
        return pc + 1;
    }

    @Override
    public String mostrar() {
        return " over";
    }
    
}
