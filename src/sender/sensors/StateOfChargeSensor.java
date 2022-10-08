package sensors;

import java.util.Random;

public class StateOfChargeSensor {

	private int minSoc;
	private int maxSoc;
	
	public StateOfChargeSensor(int minSoc,int maxSoc) {
		this.minSoc=minSoc;
		this.maxSoc=maxSoc;
	}
	
	public int getStateOfCharge() {
		   Random random = new Random();
		    return random.nextInt(maxSoc- minSoc) + minSoc;
	}
}
