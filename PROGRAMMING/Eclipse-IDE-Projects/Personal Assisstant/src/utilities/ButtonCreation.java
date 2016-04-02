package utilities;


import java.util.ArrayList;

import javafx.event.ActionEvent;
import javafx.geometry.Insets;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.control.*;
import javafx.scene.effect.DropShadow;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;



public class ButtonCreation {

	public ButtonCreation() {
		// TODO Auto-generated constructor stub
	}
}



class newButton{
	
	public static Button addButton(String buttonName){
		Button button = new Button(buttonName);
		DropShadow shadow = new DropShadow();
		button.setOnAction(new EventHandler<ActionEvent>() {
		    public void handle(ActionEvent e) {
		    }
		});
		button.addEventHandler(MouseEvent.MOUSE_ENTERED,
		        new EventHandler<MouseEvent>() {
		    @Override public void handle(MouseEvent e) {
		        button.setEffect(shadow);
		    }
		});
		button.addEventHandler(MouseEvent.MOUSE_EXITED,
		        new EventHandler<MouseEvent>() {
		    @Override public void handle(MouseEvent e) {
		        button.setEffect(null);
		    }
		});
        return button;
        
	}
	
}

class newHBox{
	public static HBox addHBox() {
	    HBox hbox = new HBox();
	    hbox.setPadding(new Insets(15, 12, 15, 12));
	    hbox.setSpacing(10);
	    hbox.setStyle("-fx-background-color: #336699;");
	    return hbox;
	}
}

class newVBox{
	public static VBox addVBox() {
	    VBox vbox = new VBox();
	    vbox.setPadding(new Insets(15, 12, 15, 12));
	    vbox.setSpacing(10);
	    vbox.setStyle("-fx-background-color: #336699;");
	    return vbox;
	}
}

class addMultipleButtonsInVBox{
	public static VBox addButtons(int number){
		VBox vBoxXButtons = newVBox.addVBox();
		size.numberOfButtons = number;
		ArrayList<Button> vTopXButtonArrayList = new ArrayList<Button>();
		for(int i=0 ; i<size.numberOfButtons ; i++){
			vTopXButtonArrayList.add(newButton.addButton("Button "+i));
		}
		Button[] vTopXButtonArray = vTopXButtonArrayList.toArray(new Button[vTopXButtonArrayList.size()]);
		for(int i=0 ; i<size.numberOfButtons ; i++){
			vBoxXButtons.getChildren().add(vTopXButtonArray[i]);
		}
		return vBoxXButtons;
	}
}

class addMultipleButtonsInHBox{
	public static HBox addButtons(int number){
		HBox hBoxXButtons = newHBox.addHBox();
		size.numberOfButtons = number;
		ArrayList<Button> hTopXButtonArrayList = new ArrayList<Button>();
		for(int i=0 ; i<size.numberOfButtons ; i++){
			hTopXButtonArrayList.add(newButton.addButton("Button "+i));
		}
		Button[] hTopXButtonArray = hTopXButtonArrayList.toArray(new Button[hTopXButtonArrayList.size()]);
		for(int i=0 ; i<size.numberOfButtons ; i++){
			hBoxXButtons.getChildren().add(hTopXButtonArray[i]);
		}
		return hBoxXButtons;
	}
}



