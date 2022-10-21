import java.util.List;

import constants.BmsConstants;
import models.Battery;
import sensors.StateOfChargeSensor;
import sensors.TemperatureSensor;

public class Sender {
	static StateOfChargeSensor socSensor ;
	static  TemperatureSensor tempSensor;
    
	public static Battery getBatteryStatus(StateOfChargeSensor socSensor, TemperatureSensor tempSensor) {
		Battery battery = new Battery();
        battery.setSoc(socSensor.getStateOfCharge());
        battery.setTemp(tempSensor.getTemperature());
        
        System.out.println("soc="+battery.getSoc()+",temp="+battery.getTemp());

        return battery;
	}


	public static void printBatteryStatus(int count,StateOfChargeSensor socSensor, TemperatureSensor tempSensor) {
		for (int i=0;i<count;i++) {
			getBatteryStatus(socSensor, tempSensor);
		}
	}		
	
	public static void main(String[] args) {
    	
    	socSensor = new StateOfChargeSensor(BmsConstants.MIN_SOC,BmsConstants.MAX_SOC);
        tempSensor = new TemperatureSensor(BmsConstants.MIN_TEMP, BmsConstants.MAX_TEMP);
        
        printBatteryStatus(50, socSensor, tempSensor);
                
    }
}

