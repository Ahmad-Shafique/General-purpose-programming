package application;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ProcessorFunctions {

	public ProcessorFunctions() {
		// TODO Auto-generated constructor stub
	}
}

class ReturnSomething{
	public static List<Object> returnAllChildrenOfWindowManagerInAList(WindowManager w1){
		List<Object> mainList= new ArrayList<Object>();
		Iterator itr1;
		itr1 = w1.getChildren().iterator();
		while(itr1.hasNext()){
			mainList.add(itr1.next());
		}
		return mainList;
	}
	
	public static int returnSizeOfAList(List<Object> L1){
		return L1.size();
	}
	
	
	/*
	public static List<Object> returnAllChildrenOfASpecificNode(Object objectFromArray){
		List<Object> newList = new ArrayList<Object>();
		Node n1 = objectFromArray;
		Iterator itr1;
		itr1 = objectFromArray.get
		while(itr1.hasNext()){
			mainList.add(itr1.next());
		}
		
	}
	*/ //This Function is to take the node and convert its children in to a list and return the list
	
	
}

