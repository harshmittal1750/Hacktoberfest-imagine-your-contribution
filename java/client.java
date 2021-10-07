import java.net.*;
import java.io.*;
public class client 
{
    public static void main(String args[])
    {        try
        {                       String str=" ";
            Socket server=new Socket("localhost",5380);
            PrintStream toServer=new PrintStream(server.getOutputStream());
            InputStreamReader isr=new InputStreamReader(server.getInputStream());
            BufferedReader fromServer=new BufferedReader(isr);
            DataInputStream d=new DataInputStream(System.in);  
            System.out.println("Ready to type now");
            while(true)
            {    
               System.out.print("Client ::");
               str=":" +d.readLine();
               toServer.println(str);            
               String str1=fromServer.readLine();
               if(str1.length()>0)
               System.out.println("Server:: "+str1);
           }     
      }
            catch(Exception e)
            {           System.out.println(e);       
             }         
        }   
 }
