public class Main {
    public static void main(String[] args) {

        // Primer programa: suma de dos números
        System.out.println("Primer programa: suma de dos números\n");
        Programa sumar = new suma();    // Aquí las instrucciones y tamaño del vector de instrucciones 
        System.out.print("Programa:\n");
        sumar.listar();
        System.out.print("Ejecución:\n");
        sumar.ejecutar();

        // Segundo programa: Cuenta atrás
        System.out.println("\nSegundo programa: Cuenta atrás\n");
        Programa cuentaAtras = new cuentaAtras();   // Aquí las instrucciones y tamaño del vector de instrucciones
        cuentaAtras.listar();
        System.out.print("Ejecución:\n");
        cuentaAtras.ejecutar();

        // Tercer programa: Factorial
        System.out.println("\nTercer programa: Factorial\n");
        Programa factorial = new factorial();   // Aquí las instrucciones y tamaño del vector de instrucciones
        System.out.print("Programa:\n");
        factorial.listar();      
        System.out.print("Ejecución:\n");
        factorial.ejecutar();  
    }
}
