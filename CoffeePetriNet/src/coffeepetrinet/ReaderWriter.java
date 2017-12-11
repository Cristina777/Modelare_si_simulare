package coffeepetrinet;

import coffeepetrinet.Arc.Direction;
import coffeepetrinet.PetriNet;
import java.util.ArrayList;
import java.util.List;

public class ReaderWriter extends PetriNet {

	public ReaderWriter() {
		super();
		initialize();
	}

	private void initialize() {
		Location outset = new Location(TypeofLocation.one, 10);
		Location reading = new Location(TypeofLocation.two, 0);
		Location writing = new Location(TypeofLocation.three, 0);
		
		List<Arc> arcs1 = new ArrayList<>();
		arcs1.add(new Arc(10, outset, Direction.IN));
		arcs1.add(new Arc(1, writing, Direction.OUT));

		transitions.add(new Transition(TypeofTransition.ONE, arcs1));

		List<Arc> arcs2 = new ArrayList<>();
		arcs2.add(new Arc(1, writing, Direction.IN));
		arcs2.add(new Arc(10, outset, Direction.OUT));

		transitions.add(new Transition(TypeofTransition.TWO, arcs2));

		List<Arc> arcs3 = new ArrayList<>();
		arcs3.add(new Arc(1, outset, Direction.IN));
		arcs3.add(new Arc(1, reading, Direction.OUT));

		transitions.add(new Transition(TypeofTransition.THREE, arcs3));

		List<Arc> arcs4 = new ArrayList<>();
		arcs4.add(new Arc(1, reading, Direction.IN));
		arcs4.add(new Arc(1, outset, Direction.OUT));

		transitions.add(new Transition(TypeofTransition.FOUR, arcs4));

	}

}