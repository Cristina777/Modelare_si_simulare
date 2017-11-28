package coffeepetrinet;


public class Arc {
    public int capacity;
    public Location location;
    public Direction direction;
    public enum Direction {
	IN,OUT;
}
    
    public Arc(int capacity,Location location,Direction direction){
        this.capacity=capacity;
        this.location=location;
        this.direction=direction;
}
    public boolean isValid(){
        if(direction.equals(Direction.IN)){
            if(location.verifyCounters(capacity)){
                return true;
            }
        }else if(direction.equals(Direction.OUT)){
            return true;
            }
        return false;
    }
 
    
    public void update(){
        if(direction.equals(Direction.IN))
            location.substractCounters(capacity);        
        else if(direction.equals(Direction.OUT))
            location.addCounters(capacity);       
    }
}
