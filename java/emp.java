interface IntOperations
{
    boolean ispostive();
    boolean negative();
    boolean even();
    boolean odd();
    boolean prime();
    int factorial();
    int sum();
}
class MyNumber implements IntOperations
{
    private int num;
    static int sum=0;
    MyNumber()
    {
        num=0;
    }
    MyNumber(int num)
    {
        this.num=num;
    }
    public boolean ispostive()
    {
       return num>0;
    }
    public boolean negative()
    {
        return num<0;
    }
    public boolean even()
    {
        return num%2==0;
    }
    public boolean odd()
    {
        return num%2!=0;
    }
    public boolean prime()
    {
        for(int div=2;div*div<=num;div++)
        {
            if(num%div==0)
            {
                return false;
            }
        }
        return true;
    }
    public int factorial()
    {
        int fact=1;
        for(int i=2;i<=num;i++)
        {
            fact*=i;
        }
        return fact;
    }

    public int sum()
    {
        sum+=num;
        return sum;
    }

}
public class emp{
    public static void main(String[] args)
    {
	System.out.println("Rakhi jha CSE 5A 1105");
        int ans=0;
        int[] n=new int[args.length];
        for(int i=0;i<args.length;i++)
        {
            n[i]=Integer.valueOf(args[i]);
        }
        for(int i:n) {
            MyNumber n1 = new MyNumber(i);
            String out = n1.ispostive() ? i+" is positive" : i+" is  not positive";
            System.out.println(out);            
            String out1 = n1.negative() ? i+" is negative" : i+" is not negative";
            System.out.println(out1);     
            String out2 = n1.even() ? i+" is even" : i+" is  not even";
            System.out.println(out2);  
            String out3 = n1.odd() ? i+" is odd" : i+" is not odd";
            System.out.println(out3);       
            String out4 = n1.prime() ? i+" is prime" : i+" is not prime";
            System.out.println(out4);   
            int out5 = n1.factorial();
            System.out.println("Factorial of "+i+" is "+out5);
            ans=n1.sum();
        }
        System.out.println("Sum is "+ans);
    }
}

