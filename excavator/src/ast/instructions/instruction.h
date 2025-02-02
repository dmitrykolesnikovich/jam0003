#pragma once

#include <memory>

class State;

class AstInstruction {
   public:
    typedef std::shared_ptr<AstInstruction> Ptr;
    AstInstruction() {}
    virtual ~AstInstruction() {}
    virtual void run(State& state) = 0;
};
