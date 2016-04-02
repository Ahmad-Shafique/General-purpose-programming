package application;

import javafx.scene.control.Button;
//import javafx.scene.control.Label;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;

class size{
	final static public int width = 800;
	final static public int height = 600;
	public static int numberOfButtons;
}

class loginArea{
	public static VBox createLoginArea(){
		VBox vTopLogin = newVBox.addVBox();
		TextField userName = new TextField();
		userName.setPromptText("Username");
		PasswordField password = new PasswordField();
		Button loginButton = newButton.addButton("Login");
		vTopLogin.getChildren().addAll(userName,password,loginButton);
		return vTopLogin;
	}
}


class WindowManager extends BorderPane{
	
	public WindowManager(String top , String left ,String right , String bottom ,  String center) {
		super();
		
		// TODO Auto-generated constructor stub
		/*Expected parameter values :
		 * ta - text area
		 * lf - login field 
		 * nv - n buttons using VBox (n = 1,2,3,4,5,6)
		 * nh - n buttons using HBox (n = 1,2,3,4,5,6)
		 * 0 - Empty value(Side is not to be used)
		 * 
		 * 
		 */
		
		//Label heading = new Label(); //This will define the heading of the program
		/*Label to be edited as per necessity
		 */
		
		//-------------Top construction begins here---------------
		switch(top){
		
		case "ta" :
			VBox vTop = new VBox();
			super.setTop(vTop);
			TextArea topTextArea = new TextArea();
			topTextArea.setWrapText(true);
			vTop.getChildren().add(topTextArea);
			break;
			
		case "la" :
			super.setTop(loginArea.createLoginArea());
			break;
			
		case "1v":
			VBox vTopOneButton = newVBox.addVBox();
			Button bv = new Button();
			vTopOneButton.getChildren().add(bv);
			break;	
		
		case "2v":
			VBox vTopTwoButtons = addMultipleButtonsInVBox.addButtons(2);
			super.setTop(vTopTwoButtons);
			break;
			
		case "3v":
			VBox vTopThreeButtons = addMultipleButtonsInVBox.addButtons(3);
			super.setTop(vTopThreeButtons);
			break;
			
		case "4v":
			VBox vTopFourButtons = addMultipleButtonsInVBox.addButtons(4);
			super.setTop(vTopFourButtons);
			break;
			
		case "5v":
			VBox vTopFiveButtons = addMultipleButtonsInVBox.addButtons(5);
			super.setTop(vTopFiveButtons);
			break;
			
		case "6v":
			VBox vTopSixButtons = addMultipleButtonsInVBox.addButtons(6);
			super.setTop(vTopSixButtons);
			break;
			
		case "1h":
			HBox hTopOneButton = newHBox.addHBox();
			Button bh = new Button();
			hTopOneButton.getChildren().add(bh);
			break;	
		
		case "2h":
			HBox hTopTwoButtons = addMultipleButtonsInHBox.addButtons(2);
			super.setTop(hTopTwoButtons);
			break;
			
		case "3h":
			HBox hTopThreeButtons = addMultipleButtonsInHBox.addButtons(3);
			super.setTop(hTopThreeButtons);
			break;
			
		case "4h":
			HBox hTopFourButtons = addMultipleButtonsInHBox.addButtons(4);
			super.setTop(hTopFourButtons);
			break;
			
		case "5h":
			HBox hTopFiveButtons = addMultipleButtonsInHBox.addButtons(5);
			super.setTop(hTopFiveButtons);
			break;
			
		case "6h":
			HBox hTopSixButtons = addMultipleButtonsInHBox.addButtons(6);
			super.setTop(hTopSixButtons);
			break;
		}
		//-------------Top construction Ends here-----------------

		
		//-------------Left construction begins here--------------
		switch(left){
		
		case "ta" :
			VBox vLeft = new VBox();
			super.setLeft(vLeft);
			TextArea leftTextArea = new TextArea();
			leftTextArea.setWrapText(true);
			vLeft.getChildren().add(leftTextArea);
			break;
			
		case "la" :
			super.setLeft(loginArea.createLoginArea());
			break;
			
		case "1v":
			VBox vLeftOneButton = newVBox.addVBox();
			Button bv = new Button();
			vLeftOneButton.getChildren().add(bv);
			break;	
		
		case "2v":
			VBox vLeftTwoButtons = addMultipleButtonsInVBox.addButtons(2);
			super.setLeft(vLeftTwoButtons);
			break;
			
		case "3v":
			VBox vLeftThreeButtons = addMultipleButtonsInVBox.addButtons(3);
			super.setLeft(vLeftThreeButtons);
			break;
			
		case "4v":
			VBox vLeftFourButtons = addMultipleButtonsInVBox.addButtons(4);
			super.setLeft(vLeftFourButtons);
			break;
			
		case "5v":
			VBox vLeftFiveButtons = addMultipleButtonsInVBox.addButtons(5);
			super.setLeft(vLeftFiveButtons);
			break;
			
		case "6v":
			VBox vLeftSixButtons = addMultipleButtonsInVBox.addButtons(6);
			super.setLeft(vLeftSixButtons);
			break;
			
		case "1h":
			HBox hLeftOneButton = newHBox.addHBox();
			Button bh = new Button();
			hLeftOneButton.getChildren().add(bh);
			break;	
		
		case "2h":
			HBox hLeftTwoButtons = addMultipleButtonsInHBox.addButtons(2);
			super.setLeft(hLeftTwoButtons);
			break;
			
		case "3h":
			HBox hLeftThreeButtons = addMultipleButtonsInHBox.addButtons(3);
			super.setLeft(hLeftThreeButtons);
			break;
			
		case "4h":
			HBox hLeftFourButtons = addMultipleButtonsInHBox.addButtons(4);
			super.setLeft(hLeftFourButtons);
			break;
			
		case "5h":
			HBox hLeftFiveButtons = addMultipleButtonsInHBox.addButtons(5);
			super.setLeft(hLeftFiveButtons);
			break;
			
		case "6h":
			HBox hLeftSixButtons = addMultipleButtonsInHBox.addButtons(6);
			super.setLeft(hLeftSixButtons);
			break;
			
		default:
			break;
			
		}
		

		//-------------Left construction Ends here----------------
	
		
		
		//-------------Right construction Starts here-------------

		
		switch(right){
		
		case "ta" :
			VBox vRight = new VBox();
			super.setRight(vRight);
			TextArea RightTextArea = new TextArea();
			RightTextArea.setWrapText(true);
			vRight.getChildren().add(RightTextArea);
			break;
			
		case "la" :
			super.setRight(loginArea.createLoginArea());
			break;
			
		case "1v":
			VBox vRightOneButton = newVBox.addVBox();
			Button bv = new Button();
			vRightOneButton.getChildren().add(bv);
			break;	
		
		case "2v":
			VBox vRightTwoButtons = addMultipleButtonsInVBox.addButtons(2);
			super.setRight(vRightTwoButtons);
			break;
			
		case "3v":
			VBox vRightThreeButtons = addMultipleButtonsInVBox.addButtons(3);
			super.setRight(vRightThreeButtons);
			break;
			
		case "4v":
			VBox vRightFourButtons = addMultipleButtonsInVBox.addButtons(4);
			super.setRight(vRightFourButtons);
			break;
			
		case "5v":
			VBox vRightFiveButtons = addMultipleButtonsInVBox.addButtons(5);
			super.setRight(vRightFiveButtons);
			break;
			
		case "6v":
			VBox vRightSixButtons = addMultipleButtonsInVBox.addButtons(6);
			super.setRight(vRightSixButtons);
			break;
			
		case "1h":
			HBox hRightOneButton = newHBox.addHBox();
			Button bh = new Button();
			hRightOneButton.getChildren().add(bh);
			break;	
		
		case "2h":
			HBox hRightTwoButtons = addMultipleButtonsInHBox.addButtons(2);
			super.setRight(hRightTwoButtons);
			break;
			
		case "3h":
			HBox hRightThreeButtons = addMultipleButtonsInHBox.addButtons(3);
			super.setRight(hRightThreeButtons);
			break;
			
		case "4h":
			HBox hRightFourButtons = addMultipleButtonsInHBox.addButtons(4);
			super.setRight(hRightFourButtons);
			break;
			
		case "5h":
			HBox hRightFiveButtons = addMultipleButtonsInHBox.addButtons(5);
			super.setRight(hRightFiveButtons);
			break;
			
		case "6h":
			HBox hRightSixButtons = addMultipleButtonsInHBox.addButtons(6);
			super.setRight(hRightSixButtons);
			break;
			
		default:
			break;
			
		}
		
		//-------------Right construction Ends here---------------
		
		
		//-------------Bottom construction Starts here------------
		
		switch(bottom){
		
		case "ta" :
			VBox vBottom = new VBox();
			super.setBottom(vBottom);
			TextArea BottomTextArea = new TextArea();
			BottomTextArea.setWrapText(true);
			vBottom.getChildren().add(BottomTextArea);
			break;
			
		case "la" :
			super.setBottom(loginArea.createLoginArea());
			break;
			
		case "1v":
			VBox vBottomOneButton = newVBox.addVBox();
			Button bv = new Button();
			vBottomOneButton.getChildren().add(bv);
			break;	
		
		case "2v":
			VBox vBottomTwoButtons = addMultipleButtonsInVBox.addButtons(2);
			super.setBottom(vBottomTwoButtons);
			break;
			
		case "3v":
			VBox vBottomThreeButtons = addMultipleButtonsInVBox.addButtons(3);
			super.setBottom(vBottomThreeButtons);
			break;
			
		case "4v":
			VBox vBottomFourButtons = addMultipleButtonsInVBox.addButtons(4);
			super.setBottom(vBottomFourButtons);
			break;
			
		case "5v":
			VBox vBottomFiveButtons = addMultipleButtonsInVBox.addButtons(5);
			super.setBottom(vBottomFiveButtons);
			break;
			
		case "6v":
			VBox vBottomSixButtons = addMultipleButtonsInVBox.addButtons(6);
			super.setBottom(vBottomSixButtons);
			break;
			
		case "1h":
			HBox hBottomOneButton = newHBox.addHBox();
			Button bh = new Button();
			hBottomOneButton.getChildren().add(bh);
			break;	
		
		case "2h":
			HBox hBottomTwoButtons = addMultipleButtonsInHBox.addButtons(2);
			super.setBottom(hBottomTwoButtons);
			break;
			
		case "3h":
			HBox hBottomThreeButtons = addMultipleButtonsInHBox.addButtons(3);
			super.setBottom(hBottomThreeButtons);
			break;
			
		case "4h":
			HBox hBottomFourButtons = addMultipleButtonsInHBox.addButtons(4);
			super.setBottom(hBottomFourButtons);
			break;
			
		case "5h":
			HBox hBottomFiveButtons = addMultipleButtonsInHBox.addButtons(5);
			super.setBottom(hBottomFiveButtons);
			break;
			
		case "6h":
			HBox hBottomSixButtons = addMultipleButtonsInHBox.addButtons(6);
			super.setBottom(hBottomSixButtons);
			break;
			
		default:
			break;
			
		}
		
		//-------------Bottom construction Ends here--------------
		
		
		//-------------Center construction Starts here------------
		
		switch(center){
		
		case "ta" :
			VBox vCenter = new VBox();
			super.setCenter(vCenter);
			TextArea CenterTextArea = new TextArea();
			CenterTextArea.setWrapText(true);
			vCenter.getChildren().add(CenterTextArea);
			break;
			
		case "la" :
			super.setCenter(loginArea.createLoginArea());
			break;
			
		case "1v":
			VBox vCenterOneButton = newVBox.addVBox();
			Button bv = new Button();
			vCenterOneButton.getChildren().add(bv);
			break;	
		
		case "2v":
			VBox vCenterTwoButtons = addMultipleButtonsInVBox.addButtons(2);
			super.setCenter(vCenterTwoButtons);
			break;
			
		case "3v":
			VBox vCenterThreeButtons = addMultipleButtonsInVBox.addButtons(3);
			super.setCenter(vCenterThreeButtons);
			break;
			
		case "4v":
			VBox vCenterFourButtons = addMultipleButtonsInVBox.addButtons(4);
			super.setCenter(vCenterFourButtons);
			break;
			
		case "5v":
			VBox vCenterFiveButtons = addMultipleButtonsInVBox.addButtons(5);
			super.setCenter(vCenterFiveButtons);
			break;
			
		case "6v":
			VBox vCenterSixButtons = addMultipleButtonsInVBox.addButtons(6);
			super.setCenter(vCenterSixButtons);
			break;
			
		case "1h":
			HBox hCenterOneButton = newHBox.addHBox();
			Button bh = new Button();
			hCenterOneButton.getChildren().add(bh);
			break;	
		
		case "2h":
			HBox hCenterTwoButtons = addMultipleButtonsInHBox.addButtons(2);
			super.setCenter(hCenterTwoButtons);
			break;
			
		case "3h":
			HBox hCenterThreeButtons = addMultipleButtonsInHBox.addButtons(3);
			super.setCenter(hCenterThreeButtons);
			break;
			
		case "4h":
			HBox hCenterFourButtons = addMultipleButtonsInHBox.addButtons(4);
			super.setCenter(hCenterFourButtons);
			break;
			
		case "5h":
			HBox hCenterFiveButtons = addMultipleButtonsInHBox.addButtons(5);
			super.setCenter(hCenterFiveButtons);
			break;
			
		case "6h":
			HBox hCenterSixButtons = addMultipleButtonsInHBox.addButtons(6);
			super.setCenter(hCenterSixButtons);
			break;
			
		default:
			break;
			
		}
		
		//-------------Center construction Ends here--------------
	
	}
	
	
	
	

}
