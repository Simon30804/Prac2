public class Main {
    public static void main(String[] args) {

        // Primer programa: suma de dos números
        Programa sumar = new suma();    
        System.out.print("Programa:\n");
        sumar.listar();
        System.out.print("\n");
        System.out.print("Ejecución:\n");
        sumar.ejecutar();
        System.out.print("\n");

        // Segundo programa: Cuenta atrás
        Programa cuentaAtras = new cuentaAtras();   
        System.out.print("Programa:\n");
        cuentaAtras.listar();
        System.out.print("\n");
        System.out.print("Ejecución:\n");
        cuentaAtras.ejecutar();
        System.out.print("\n");

        // Tercer programa: Factorial
        Programa factorial = new factorial();   
        factorial.listar();      
        System.out.print("\n");
        System.out.print("Ejecución:\n");
        factorial.ejecutar();  
        System.out.print("\n");
    }
}
