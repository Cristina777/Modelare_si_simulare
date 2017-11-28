package coffeepetrinet;
import java.util.ArrayList;
import java.util.List;

public class PetriNet {
    public static List<Transition> transitions;
    
    public PetriNet(){
        transitions = new ArrayList<>();
    }
    
    public void execute(TypeofTransition Transition){
        List<Transition> possibleTransition = new ArrayList<>();
        for(Transition transition : transitions){
            //if(transition.hasSameName(theTransition))
                if(transition.isValid()){
                    possibleTransition.add(transition);
                }
        }
        if(possibleTransition.isEmpty()){
            System.out.println("Can not execute the desired action!");
            }
        else{
            for(Transition transition : possibleTransition){
                transition.update();
            }
        }
    }
}
