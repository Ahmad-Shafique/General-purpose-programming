package utilities;

import javafx.geometry.Rectangle2D;
import javafx.stage.Screen;

public class WindowSize {
	public double width;
	public double height;
	
	public WindowSize() {
		Rectangle2D bounds = Screen.getPrimary().getVisualBounds();
		double height = bounds.getHeight();
		double width = bounds.getWidth();
		setSize(width,height);
	}
	
	public void setSize(double w,double h){
		width = w;
		height = h;
	}
	
	public double getWidth(){
		return width;
	}
	
	public double getHeight(){
		return height;
	}

}
