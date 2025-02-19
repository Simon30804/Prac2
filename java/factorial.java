class factorial extends Programa {
    public factorial(){
        super(14);  // Uso la llamada super para llamar al constructor de la clase padre, Programa e inicializarlo con un tamaño de 14
        // Relleno el vector de instrucciones
        instrucciones[0] = new push(1);
        instrucciones[1] = new read();
        instrucciones[2] = new swap();
        instrucciones[3] = new over();
        instrucciones[4] = new mul();
        instrucciones[5] = new swap();
        instrucciones[6] = new push(-1);
        instrucciones[7] = new add();
        instrucciones[8] = new dup();
        instrucciones[9] = new push(-2);  
        instrucciones[10] = new add();
        instrucciones[11] = new jumpif(2);
        instrucciones[12] = new swap();
        instrucciones[13] = new write();
    }
}
