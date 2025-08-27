public class Lasagna {

    private static final int EXPECTED_MINUTES = 40;
    private static final int PREP_TIME = 2;

    public int expectedMinutesInOven() {
        return EXPECTED_MINUTES;
    };

    public int remainingMinutesInOven(int time) {
        return expectedMinutesInOven() - time;
    }

    public int preparationTimeInMinutes(int layers) {
        return PREP_TIME * layers;
    }

    public int totalTimeInMinutes(int layers, int time) {
        return preparationTimeInMinutes(layers) + time;
    }
}
