#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Command
{
 public:
     virtual void Execute() = 0;
};

class Light
{
public:
   void On() {
        cout << "Light on"  << endl;
    }
    void Off() {
        cout << "Light off" << endl;
    }

};

class LightOnCommand : public Command
{
public:
   LightOnCommand(Light *light) {
       this->light_ = light;
   }
   void Execute() {
       if (light_ != nullptr) {
           light_->On();
       }
   }
private:
    Light *light_;
};
class SimpleRemoteControl {
public:
    void SetCommand(Command *command) {
        slot_ = command;
    }
    void ButtonWasPressed() {
        if (slot_ != nullptr) {
            slot_->Execute();
        }
    }
private:
    Command *slot_;
};

int main ()
{
    SimpleRemoteControl *remote = new SimpleRemoteControl();
    Light *l = new Light();
    LightOnCommand *light_on = new LightOnCommand(l);

    remote->SetCommand(light_on);
    remote->ButtonWasPressed();

    delete remote;
    delete l;
    delete light_on;
    return 0;
}
