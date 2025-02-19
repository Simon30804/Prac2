class suma extends Programa{
    public suma(){
        super(4);   // Uso la llamada super para llamar al constructor de la clase padre, Programa e inicializarlo con un tamaño de 4
        // Relleno el vector de instrucciones
        instrucciones[0] = new read();
        instrucciones[1] = new read();
        instrucciones[2] = new add();
        instrucciones[3] = new write();
    }
}
