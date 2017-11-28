package coffeepetrinet;


public class Application {
    
    public static void main(String[] args) {
        CoffeePetriNet coffeeMachine=new CoffeePetriNet();
        coffeeMachine.execute(TypeofTransition.INSERT_COIN_5);
	coffeeMachine.execute(TypeofTransition.INSERT_COIN_10);
	coffeeMachine.execute(TypeofTransition.TAKE_COFFEE_10);
	coffeeMachine.execute(TypeofTransition.INSERT_COIN_5);
	coffeeMachine.execute(TypeofTransition.INSERT_COIN_10);
	coffeeMachine.execute(TypeofTransition.TAKE_COFFEE_15);
	coffeeMachine.execute(TypeofTransition.TAKE_COFFEE_10);
    }
}
