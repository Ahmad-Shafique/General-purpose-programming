package application;
	
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.Label;



public class Main extends Application {
	@Override
	public void start(Stage primaryStage) {
		try {
			WindowManager w1 = new WindowManager("6h" , "4v" ,"ta" , "0" ,  "la");
			Scene scene = new Scene(w1,800,600);
			scene.getStylesheets().add(getClass().getResource("application.css").toExternalForm());
			Label title = new Label("Personal Assisstant");
			title.setAlignment(Pos.TOP_CENTER);
			title.setPrefSize(800,600);
			w1.getChildren().add(title);

			
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
