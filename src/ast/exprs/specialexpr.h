#pragma once

#include <ast/exprs/expr.h>

class AstSpecialExpr : public AstExpr {
   public:
    enum Type {
        GoLeft = 1,
        GoRight,
        GoUp,
        GoDown
    };

    AstSpecialExpr(Type type) : AstExpr(), m_type(type) {}

   private:
    Type m_type;
};
