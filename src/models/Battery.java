package models;

public class Battery {

	private int soc;
	private int temp;
	@Override
	public String toString() {
		return "{\"soc\"=\"" + soc + "\", \"temp=\"" + temp + "\"}";
		
	}
	public int getSoc() {
		return soc;
	}
	public void setSoc(int soc) {
		this.soc = soc;
	}
	public int getTemp() {
		return temp;
	}
	public void setTemp(int temp) {
		this.temp = temp;
	}
	
	
	
}
