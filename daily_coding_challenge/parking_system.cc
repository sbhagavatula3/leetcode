class ParkingSystem {
public:
    int big_;
    int med_;
    int small_;
    ParkingSystem(int big, int medium, int small) {
        big_ = big;
        med_ = medium;
        small_ = small;
    }
    
    bool addCar(int carType) {
        switch (carType) {
            case 1:
                if (big_ == 0) return false;
                else --big_; return true;
            case 2:
                if (med_ == 0) return false;
                else --med_; return true;
            case 3:
                if (small_ == 0) return false;
                else --small_; return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
