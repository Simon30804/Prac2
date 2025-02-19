import java.util.Stack;

abstract class Instruccion {

    public Instruccion(){ // Constructor vacío 
    };
    
    public abstract void ejecutar(Stack<Integer> pila); // Lo defino como abstracto para indicar que las clases que hereden de esta clase deben implementar este método
    public abstract int incrementarPc(int pc); // Lo defino como abstracto para indicar que las clases que hereden de esta clase deben implementar este método
    public abstract String mostrar(); // Para poder listar el programa, cada instrucción debe poder devolver una cadena de texto que representa la propia instruccion 
}
