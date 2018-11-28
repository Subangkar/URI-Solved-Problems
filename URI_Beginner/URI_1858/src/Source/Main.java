package Source;

import java.io.IOException;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException 
    
    {
    	int min = 21;
    	int minPos = 0;
    	
    	Scanner input = new Scanner(System.in); // defining a object like cin
    	
    	int testCase = input.nextInt(); // scanning one int value from console
    	int number=0;
    	   	
    	for(int position=1;position<=testCase;position++)
    	{    		
    		number = input.nextInt();
    		    		
    		if(number<min) // finding the min Number
    		{
    			min = number;
    			minPos = position;
    			
    			continue;
    		}
    	}
    	
        System.out.println(minPos); 
        
        input.close();
    }

}