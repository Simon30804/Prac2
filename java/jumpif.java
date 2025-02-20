import java.util.Stack;

class jumpif extends Instruccion {

    protected int instruccionL;
    protected boolean hacerSalto;

    public jumpif(int instruccionL){
        this.instruccionL = instruccionL;
    }

    @Override
    public void ejecutar(Stack<Integer> pila){
        int valor = pila.pop(); // Desapilo y obtengo el valor de la cima de la pila
        if(valor >= 0){
            hacerSalto = true;
        }
        else {
            hacerSalto = false;
        }
        
    }
    
    @Override 
    public int incrementarPc(int pc){
        if(hacerSalto){ // Salto a la instrucción L (parámetro de la instrucción)
            return instruccionL;
        }
        else {
            return pc + 1; // Incremento el contador de programa en 1
        }
    }

    @Override
    public String mostrar(){
        return "    jumpif" + " " + instruccionL;
    }
}
