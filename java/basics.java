import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public  class Class1{
    //print welcome

    public void printWelcome(){
        System.out.println("Welcome");
    }
    //Demonstrate BufferedReader
     void bufferReader(){
        InputStreamReader inputStreamReader= new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(inputStreamReader);
        int n= 0;
        try {
            n = Integer.parseInt(br.readLine());
        } catch (IOException e) {
            e.printStackTrace();
        }
        Scanner scanner=new Scanner(System.in);
        System.out.println(n);
    }
    //Demonstrate Arrays
    void array(){
        int [] arr={3,23,4,1,-1,0};
        System.out.println(arr[0]);
    }
    public static class Class10{
        Class10(){
            System.out.println("no parameter constructor of Class10 called");
        }
        Class10(int x){
            System.out.println("1 parameter(x)constructor of Class10 called");

        }
        void sum(){
            System.out.println("no parameter sum called");
        }
        int sum(int x){
            System.out.println("1 parameter(x) sum called");
            return x+1;

        }


    }

    public  static class Class11 extends Class10{
        @Override
        public void sum(){
            System.out.println("Welcome back!");
        }

    }

    public static void main(String[] args) {
        Class1 a=new Class1();
//1
        a.printWelcome();
//2      
        a.bufferReader();
        a.array();
//3
        Class10 b=new Class10();
        Class10 d=new Class10(3);
        Class11 c=new Class11();
        b.sum();
        b.sum(1);
        d.sum();
        d.sum(4);
        c.sum();
        
    }
        }
