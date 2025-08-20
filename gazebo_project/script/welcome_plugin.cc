#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>

namespace gazebo {

class WelcomePlugin : public WorldPlugin {
public:
  void Load(physics::WorldPtr _world, sdf::ElementPtr /*_sdf*/) override {
    // You can keep or use _world; for rubric a hello message is enough
    gzdbg << "Welcome to World!" << std::endl;   // shows up with GZ_DEBUG
    std::cout << "Welcome to robot garage's World!" << std::endl; // stdout
  }
};

GZ_REGISTER_WORLD_PLUGIN(WelcomePlugin)

} // namespace gazebo

