package coffeepetrinet;
import java.util.List;

public class Transition {
    public TypeofTransition tag;
    public List<Arc> arcs;
    
    public Transition(TypeofTransition tag,List<Arc> arcs){
        this.tag=tag;
        this.arcs=arcs;
    }
    
    public boolean isValid(){
        for(Arc arc : arcs){
            if(!(arc.isValid())){
                return false;
            }
            return true;
        }
        return false;
    }
      
     public void update(){
        for(Arc arc : arcs){
            arc.update();
        }
    }
     
     
     
    /*public boolean hasSameName(TypeofTransition theTransition){
        if(tag.equals(theTransition)){
           return true;
        }
       return false;
    }*/
    
   
}
