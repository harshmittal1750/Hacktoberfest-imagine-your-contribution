import java.io.Console;
import java.util.Arrays;
import java.util.Collections;
class NobitaAndString
{

    NobitaAndString()
    {
        Console cnsl = System.console();
        int t = Integer.parseInt(cnsl.readLine());
        while (t-- > 0)
        {
            String[] words = cnsl.readLine().split(" ");
		Collections.reverse(Arrays.asList(words));
            for(String w:words)
            {
                System.out.print(w+" ");
            }
            System.out.println();
        }
    }
}

public class check
{
    public static void main(String[] args)
    {
        NobitaAndString n=new NobitaAndString();
    }
}
