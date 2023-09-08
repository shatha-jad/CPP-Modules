
Base* createRandomInstance() {
    srand(static_cast<unsigned int>(time(NULL)));
    int randomNum = rand() % 3;
    if (randomNum == 0)
        return new A;
    else if (randomNum == 1)
        return new B;
    return new C;
}

void detectType(Base* ptr) {
    if (dynamic_cast<A*>(ptr))
        std::cout << "Type A" << std::endl;
    else if (dynamic_cast<B*>(ptr))
        std::cout << "Type B" << std::endl;
    else if (dynamic_cast<C*>(ptr))
        std::cout << "Type C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}

void detectType(Base& ref) {
    try {
        A& aRef = dynamic_cast<A&>(ref);
        (void)aRef;
        std::cout << "Type A" << std::endl;
    } catch (std::bad_cast&) {
        try {
            B& bRef = dynamic_cast<B&>(ref);
            (void)bRef;
            std::cout << "Type B" << std::endl;
        } catch (std::bad_cast&) {
            try {
                C& cRef = dynamic_cast<C&>(ref);
                (void)cRef;
                std::cout << "Type C" << std::endl;
            } catch (std::bad_cast&) {
                std::cout << "Unknown Type" << std::endl;
            }
        }
    }
}