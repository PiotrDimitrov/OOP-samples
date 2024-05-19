#include <iostream>

namespace innr{
    class Image{
    private:
        class Pixel{ //inner class
        public:
            Pixel(int r, int g, int b){
                this->r = r % 256;
                this->g = g % 256;
                this->b = b % 256;
            }
            std::string getInfo(){
                return "Pixel: (" + std::to_string(r) + ", " + std::to_string(g) + ", " + std::to_string(b) + ")\n";
            }
        private:
            int r;
            int g;
            int b;
        };
        Pixel pixels[8]{
                Pixel(0, 0, 0),
                Pixel(0, 0, 0),
                Pixel(0, 0, 0),
                Pixel(0, 0, 0),
                Pixel(0, 0, 0),
                Pixel(0, 0, 0),
                Pixel(0, 0, 0),
                Pixel(0, 0, 0)
        };
    public:
        void getInfo(){
            std::cout << "Image: \n";
            for (int i = 0; i < 8; i++){
                std::cout << pixels[i].getInfo();
            }
        }
    };
}


void innerClass() {
    innr::Image image;
    image.getInfo();

    //Image::Pixel pixel(13, 15, 100);
    //pixel.getInfo();

}