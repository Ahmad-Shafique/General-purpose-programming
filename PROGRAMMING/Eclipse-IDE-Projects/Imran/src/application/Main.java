package application;
	
import java.util.Scanner;

import javafx.application.Application;
import javafx.stage.Stage;


public class Main extends Application {
	@Override
	public void start(Stage primaryStage) {
			try{
    		
	        for(int k=0;k<2;k++){
	            Scanner sc = new Scanner(System.in);//will take input from system
	            String i = sc.nextLine();
	            String j = sc.nextLine();
	            System.out.print(i+" "+j+"\n");
	            if(j.equals("khan")){
	                System.out.println("okk!");// println is versetile function it can be from database or something but here it printing out in system
	            }
	            else{
	                System.out.println("not okk");
	            }
	            sc.close();
	        }
	        
	    	}
	    	catch(Exception ex){
	    		System.out.println("Found an exception");
	    		ex.getMessage();
	    		
	    	}
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
