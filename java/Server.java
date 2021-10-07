import java.net.*;
import java.io.*;
public class Server
{
    public static void main(String[] args) 
    {                    String str=" ";
           try
           {               ServerSocket s=new ServerSocket(5380);
               System.out.println("server started");
               Socket client=s.accept();    //.accept() is Accepting the client responses           		
		DataInputStream d=new DataInputStream(System.in);               
               InputStreamReader isr=new InputStreamReader(client.getInputStream());
               BufferedReader fromClient=new BufferedReader(isr);
               PrintStream toClient=new PrintStream(client.getOutputStream());
               while(true)
               {               str=fromClient.readLine();
               System.out.println("Client::"+str);
               System.out.print("Server::");
               str=":" +d.readLine();
               toClient.println(str);
               }           }
            catch(Exception e)
            {            System.out.println(e);            }
     }
}
