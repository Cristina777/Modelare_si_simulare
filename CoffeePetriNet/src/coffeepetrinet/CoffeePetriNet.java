package coffeepetrinet;

import coffeepetrinet.Arc.Direction;
import java.util.ArrayList;
import java.util.List;

public class CoffeePetriNet extends PetriNet{
    
    public CoffeePetriNet(){
        initialize();
    }
     public void initialize(){
         Location coin0=new Location(TypeofLocation.ZERO,1);
         Location coin5=new Location(TypeofLocation.FIVE,0);
         Location coin10=new Location(TypeofLocation.TEN,0);
         Location coin15=new Location(TypeofLocation.FIFTEEN,0);
         
         List<Arc>arcs1=new ArrayList<>();
         arcs1.add(new Arc(1,coin0,Direction.IN));
         arcs1.add(new Arc(1,coin5,Direction.OUT));
         
         transitions.add(new Transition(TypeofTransition.INSERT_COIN_5,arcs1));
         
         List<Arc>arcs2=new ArrayList<>();
         arcs2.add(new Arc(1,coin0,Direction.IN));
         arcs2.add(new Arc(1,coin10,Direction.OUT));
         
         transitions.add(new Transition(TypeofTransition.INSERT_COIN_10,arcs2));

         List<Arc>arcs3=new ArrayList<>();
         arcs3.add(new Arc(1,coin5,Direction.IN));
         arcs3.add(new Arc(1,coin10,Direction.OUT));
         
         transitions.add(new Transition(TypeofTransition.INSERT_COIN_5,arcs3));
         
         List<Arc> arcs4 = new ArrayList<>();
	 arcs4.add(new Arc(1, coin5, Direction.IN));
	 arcs4.add(new Arc(1, coin15, Direction.OUT));

	 transitions.add(new Transition(TypeofTransition.INSERT_COIN_10, arcs4));

	 List<Arc> arcs5 = new ArrayList<>();
	 arcs5.add(new Arc(1, coin10, Direction.IN));
	 arcs5.add(new Arc(1, coin15, Direction.OUT));

	 transitions.add(new Transition(TypeofTransition.INSERT_COIN_5, arcs5));
         
     }

  
}
