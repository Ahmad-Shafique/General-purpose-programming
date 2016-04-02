package application;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import javafx.scene.Node;

public class LoginScreen {
	WindowManager LW;
	public LoginScreen() {
		// TODO Auto-generated constructor stub
		WindowManager loginWindow = new WindowManager("0" , "0" ,"0" , "0" ,  "la");
		
		System.out.println("All is well");
		List<Object> mainList= new ArrayList<Object>();
		Iterator itr2;
		mainList.equals(ReturnSomething.returnAllChildrenOfWindowManagerInAList(loginWindow));
		itr2=mainList.iterator();
		while(itr2.hasNext()){
			itr2.next();
		}
		int size = ReturnSomething.returnSizeOfAList(ReturnSomething.returnAllChildrenOfWindowManagerInAList(loginWindow));
		Object[] arrayOfNodes= new Object[size];
		arrayOfNodes = (ReturnSomething.returnAllChildrenOfWindowManagerInAList(loginWindow)).toArray(arrayOfNodes);
		
		
		
		//fn(arrayOfNodes[i]);
		
		
		
		
		setRoot(loginWindow);
	}
	
	
	public void setRoot(WindowManager w1){
		LW = w1;
	}
	
	public WindowManager returnWindowManager(){
		return LW;
	}
	
	

}
