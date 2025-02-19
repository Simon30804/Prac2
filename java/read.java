import java.util.Scanner;
import java.util.Stack;

class read extends Instruccion {
    private static Scanner sc = new Scanner(System.in); // Scanner único compartido
    
    @Override
    public void ejecutar(Stack<Integer> pila){
        System.out.println("Introduce un valor entero: ");
        int valor = sc.nextInt(); // Leo un entero
        pila.push(valor);
    }

    @Override 
    public int incrementarPc(int pc){
        return pc + 1; // Incremento el contador de programa en 1
    }

    @Override
    public String mostrar(){
        return " read";
    }
}
