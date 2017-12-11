package coffeepetrinet;

import java.util.Scanner;


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
        
        ReaderWriter readWrite = new ReaderWriter();
        readWrite.execute(TypeofTransition.ONE);
        readWrite.execute(TypeofTransition.TWO);
        readWrite.execute(TypeofTransition.THREE);
        
        ProducerConsumer producerConsumer = new ProducerConsumer();
        producerConsumer.execute(TypeofTransition.ONE);
        producerConsumer.execute(TypeofTransition.TWO);
        producerConsumer.execute(TypeofTransition.THREE);
    }
}
