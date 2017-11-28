package coffeepetrinet;

public class Location {
    public TypeofLocation tag;
    public int jetoane;
  
    
    public Location(TypeofLocation tag,int jetoane){
        this.tag = tag;
        this.jetoane = jetoane;
    }
   
    public boolean verifyCounters(int capacity){           
        if (jetoane >= capacity)
            return true;
        return false;
        }
               
    public void substractCounters(int capacity){
        this.jetoane-=capacity;
        }
        
    public void addCounters(int capacity){
        this.jetoane+=capacity;           
        }
    }

