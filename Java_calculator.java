import java.util.Scanner;//Importing the scanner function

public class Main{

    public static void main(String[] args){
        Scanner mymin= new Scanner(System.in);
        
        System.out.println("====Calculator====");//Layout of the calculator
        System.out.println("Enter the first number: ");
        int FirI=mymin.nextInt();//Scanning the first input value
        
        System.out.println("Enter the second number: ");
        int SecI=mymin.nextInt();//Scanning the second input value
        
        //option selection for operation on the digits stored
        System.out.println("Select one the options below: \n");
        System.out.println("1: Addition");
        System.out.println("2: Substraction");
        System.out.println("3: Multiplication");
        System.out.println("4: Division\n");
        
        int Input=mymin.nextInt();//Scanning the operation input
        
        switch(Input){//Switch for calculation of the digits according to option selected
            case 1: System.out.println(FirI+SecI);break;
            case 2: System.out.println(FirI-SecI);break;
            case 3: System.out.println(FirI*SecI);break;
            case 4: System.out.println(FirI/SecI);break;
            default: break;
        }
    }
}
