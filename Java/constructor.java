class room {
    int length;
    int width;

    room(int x, int y) {
        length = x;
        width = y;
    }

    int area() {
        return (length * width);
    }
}