#include "engine-library-math-vector-swizzle-operators.h"

namespace Base {
namespace Scripting {

void initVectorLibrary_swizzle_operators_dvec_rgba(AngelScript::asIScriptEngine* as_engine)
{
  int r;
  ALL_SWIZZLE_FOR_VEC_RGBA(dvec);
}


} // namespace Scripting
} // namespace Base
