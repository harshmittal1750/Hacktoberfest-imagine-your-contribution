import java.io.InvalidObjectException;

class NegativeNumberException extends Exception
{
    NegativeNumberException(double n)
    {
        System.out.println("Solution is Negative " + n);
    }
}
class InvalidOperatorException extends Exception
{
    InvalidOperatorException()
    {
        System.out.println("Operator is Invalid");
    }
}

public class operator {

    public static void main(String[] args)
    {
        try {
            if (args.length != 3) {
                throw new IllegalArgumentException("No of arguments is less than 3");
            }
            double value1 = Double.valueOf(args[0]);
            String operator = args[1];
            double value2 = Double.valueOf(args[2]);
            switch (operator)
            {
                case"+":
                    System.out.println(value1+value2);
                    break;
                case"-":
                    if((value1-value2)<0)
                        throw new NegativeNumberException(value1-value2);
                    break;
                case"*":
                    System.out.println(value1*value2);
                    break;
                case"/":
                    System.out.println(value1/value2);
                    break;
                case"%":
                    System.out.println(value1%value2);
                    break;
                case"^":
                    System.out.println(Math.pow(value1,value2));
                    break;
                default:
                    throw new InvalidOperatorException();
            }
        }catch (IllegalArgumentException e)
        {
            System.out.println(e.getMessage());
        }catch(InvalidOperatorException e)
        {

        }catch (NegativeNumberException e)
        {

        }

    }
}

