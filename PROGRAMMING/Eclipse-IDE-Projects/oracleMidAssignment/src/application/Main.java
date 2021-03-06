package application;
	
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;
import javafx.stage.Stage;


public class Main extends Application {
	@Override
	public void start(Stage primaryStage) {
		try {
			BorderPane root = new BorderPane();
			
			VBox mainLayout = new VBox();
			HBox usernameArea = new HBox();
			Text usernamePrompt = new Text("Username");
			TextField usernameEntry = new TextField();
			usernameArea.getChildren().addAll(usernamePrompt,usernameEntry);
			HBox passwordArea = new HBox();
			Text passwordPrompt = new Text("Password ");
			TextField passwordEntry = new TextField();
			passwordArea.getChildren().addAll(passwordPrompt,passwordEntry);
			mainLayout.getChildren().addAll(usernameArea,passwordArea);
			
			root.setCenter(mainLayout);
			
			Scene scene = new Scene(root,400,400);
			scene.getStylesheets().add(getClass().getResource("application.css").toExternalForm());
			primaryStage.setScene(scene);
			primaryStage.show();
		} catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
