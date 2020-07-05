module CppAAA

using CxxWrap
@wrapmodule(joinpath("build", "Release", "testlib"))

# CxxWrapがいい感じにwrapしてくれているので，class AAAの定義などもここでこれで行われる．
function __init__()
    @initcxx
end

# greet(s::AAAjl) = ccall($fpointer, Any, (Ptr{Cvoid}, WorldRef), $thunk, cconvert(AAARef, s))

end

# Call greet and show the result
@show A = CppAAA.AAA()
@show CppAAA.greet(A)
@show CppAAA.get_vector(A)