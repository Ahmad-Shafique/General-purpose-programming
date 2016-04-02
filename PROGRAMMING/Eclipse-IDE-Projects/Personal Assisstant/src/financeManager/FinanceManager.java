/*
 * Build notes :
 * #Title is set for stage only
 *  
 */

package financeManager;

import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import utilities.WindowSize;

public class FinanceManager {
	public Scene FinanceManagerScene;

	public FinanceManager() {
		BorderPane bproot = new BorderPane();
		WindowSize ws = new WindowSize();
		VBox financeManagerVBoxOne = new VBox();
		bproot.setLeft(financeManagerVBoxOne);
		HBox financeManagerLeftVBoxHBoxOne = new HBox();
		
		
		financeManagerVBoxOne.getChildren().add(financeManagerLeftVBoxHBoxOne);
		
		Scene temp = new Scene(bproot,ws.getWidth(),ws.getHeight());
		setFinanceManagerScene(temp);
	}
	
	public void setFinanceManagerScene(Scene s1){
		FinanceManagerScene = s1;
	}
	
	public Scene getScene(){
		return FinanceManagerScene;
	}

}
