package coffeepetrinet;

import coffeepetrinet.Arc.Direction;
import coffeepetrinet.PetriNet;
import java.util.ArrayList;
import java.util.List;

public class ProducerConsumer extends PetriNet {

	public ProducerConsumer() {
		super();
		initialize();
	}

	private void initialize() {
		Location producers = new Location(TypeofLocation.PROD, 20);
		Location prodReadyInQueue = new Location(TypeofLocation.PRQ, 0);
		Location mutex = new Location(TypeofLocation.MUTEX, 1);
		Location freePosition = new Location(TypeofLocation.FP, 10);
		Location fullPosition = new Location(TypeofLocation.FFP, 0);
		Location prodReadyConsumed = new Location(TypeofLocation.PRC, 0);
		Location consumers = new Location(TypeofLocation.CONS, 0);
		
		
		List<Arc> arcs1 = new ArrayList<>();
		arcs1.add(new Arc(1,producers, Direction.IN));
		arcs1.add(new Arc(1, prodReadyInQueue, Direction.OUT));

		transitions.add(new Transition(TypeofTransition.ONE, arcs1));

		List<Arc> arcs2 = new ArrayList<>();
		arcs2.add(new Arc(1, prodReadyInQueue, Direction.IN));
		arcs2.add(new Arc(1,fullPosition, Direction.OUT));
		arcs2.add(new Arc(1, prodReadyInQueue, Direction.IN));
		arcs2.add(new Arc(1,producers, Direction.OUT));
		arcs2.add(new Arc(1, freePosition, Direction.IN));
		arcs2.add(new Arc(1,fullPosition, Direction.OUT));
		arcs2.add(new Arc(1, mutex, Direction.IN));
		arcs2.add(new Arc(1,mutex, Direction.OUT));
		
		transitions.add(new Transition(TypeofTransition.TWO, arcs2));

		List<Arc> archs3 = new ArrayList<>();
		archs3.add(new Arc(1, fullPosition, Direction.IN));
		archs3.add(new Arc(1, prodReadyConsumed, Direction.OUT));
		archs3.add(new Arc(1, fullPosition, Direction.IN));
		archs3.add(new Arc(1, freePosition, Direction.OUT));
		archs3.add(new Arc(1, consumers, Direction.IN));
		archs3.add(new Arc(1, prodReadyConsumed, Direction.OUT));
		archs3.add(new Arc(1, mutex, Direction.IN));
		archs3.add(new Arc(1, mutex, Direction.OUT));
		

		//transitions.add(new Transition(TypeofTransition.THREE, arcs3));

		List<Arc> arcs4 = new ArrayList<>();
		arcs4.add(new Arc(1, prodReadyInQueue, Direction.IN));
		arcs4.add(new Arc(1, consumers, Direction.OUT));

		transitions.add(new Transition(TypeofTransition.FOUR, arcs4));

	}

    

}