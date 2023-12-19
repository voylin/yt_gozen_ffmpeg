#pragma once

#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include "ffmpeg_includes.hpp"

using namespace godot;

class GoZenTest : public Resource {
  GDCLASS(GoZenTest, Resource);

  public:
    static inline void print_test() {
      UtilityFunctions::print("Test succeeded!!!");
    }

    GoZenTest() {}
    ~GoZenTest() {}

  protected:
    static inline void _bind_methods() {
      ClassDB::bind_static_method("GoZenTest", D_METHOD("print_test"), &GoZenTest::print_test);
    }
};
