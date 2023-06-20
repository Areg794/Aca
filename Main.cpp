#include<iostream>
    class Animal {
    public:
        Animal() {

   }
        virtual void movement() {
            std::cout << "I move " << std::endl;
        }
        virtual ~Animal() {
         }
    };
    class Mammal :public Animal{
        public: 
            Mammal() {

        }
         void movement() override{
            std::cout << "I move by wallking " << std::endl;
        }
         ~Mammal() {

         }
    };
    class Fish : public Animal {
    public:
        Fish() {

        }
       void movement () override {
            std::cout << "I move by swimming " << std::endl;
        }
        ~Fish() {
            
        }
    };
        class Bird : public Animal {
        public:
            Bird() {

            }
             void movement() override {
                std::cout << "I move by flying " << std::endl;
            }
            ~Bird()  {

            }
        
};
        class Rat :public Animal {
        public:
            Rat() {

            }
            void movement() override {
                std::cout << "I move by wallking " << std::endl;
            }
            ~Rat() {

            }
        };
        class Snake :public Animal {
        public:
            Snake() {

            }
            void movement() override {
                std::cout << "I move by crawling " << std::endl;
            }
            ~Snake() {

            }
        };
        class Kangaroo :public Animal {
        public:
            Kangaroo() {

            }
            void movement() override {
                std::cout << "I move by jumping " << std::endl;
            }
            ~Kangaroo() {

            }
        };
        class Lion :public Animal {
        public:
           Lion() {

            }
            void movement() override {
                std::cout << "I move by wallking " << std::endl;
            }
            ~Lion() {

            }
        };
        class Monkey :public Animal {
        public:
            Monkey() {

            }
            void movement() override {
                std::cout << "I move by swinging " << std::endl;
            }
            ~Monkey() final {

            }
        };
        int main() {
            Animal* animal = new Animal;
            Animal* mammal = new Mammal;
            Animal* fish = new Fish;
            Animal* bird = new Bird;
            Animal* rat = new Rat;
            Animal* snake = new Snake;
            Animal* kangaroo = new Kangaroo;
            Animal* lion = new  Lion;
            Animal* monkey = new Monkey;
            animal->movement();
            mammal -> movement();
            fish -> movement();
            bird -> movement();
            rat ->movement();
            snake ->movement();
            kangaroo ->movement();
            lion ->movement();
            monkey ->movement();
            delete animal;
            delete mammal;
            delete fish;
            delete bird;
            delete rat;
            delete snake;
            delete kangaroo;
            delete lion;
            delete monkey;
            return 0;
        }