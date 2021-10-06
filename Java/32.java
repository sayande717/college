class vehicle {
    void display() {
        System.out.println("Inside vehicle's display() method.");
    }
}

class car extends vehicle {
    void display() {
        System.out.println("Inside car's display() method.");
    }
}

class bus extends vehicle {
    void display() {
        System.out.println("Inside bus's display() method.");
    }
}

class demo {
    public static void main(String[] args) {
        vehicle a = new vehicle();
        car b = new car();
        bus c = new bus();
        vehicle ref;
        ref = a;
        ref.display();
        ref = b;
        ref.display();
        ref = c;
        ref.display();
    }
}