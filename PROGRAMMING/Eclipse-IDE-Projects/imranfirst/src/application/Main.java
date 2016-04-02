package application;
	
import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;


public class Main extends Application {
	@Override
	public void start(Stage primaryStage) {
		try {
			VBox imu=new VBox();
			imu.setPadding(new Insets(30,30,30,30));
			imu.setSpacing(50);
			Button bb=new Button("show");
	
			imu.getChildren().add(bb);
			Scene ss=new Scene(imu,600,500);
			primaryStage.setScene(ss);
			primaryStage.show();
		} catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
