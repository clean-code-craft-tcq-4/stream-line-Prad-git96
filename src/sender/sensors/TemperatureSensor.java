package sensors;

import java.util.Random;

public class TemperatureSensor {

	private int minTemp;
	private int maxTemp;
	
	public TemperatureSensor(int minTemp,int maxTemp) {
		this.minTemp=minTemp;
		this.maxTemp=maxTemp;
	}
	
	public int getTemperature() {
		   Random random = new Random();
		    return random.nextInt(maxTemp- minTemp) + minTemp;
	}
}
