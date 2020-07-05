# CxxWrapのExample

`class`や`std::vector`をwrapしてくれている．すごい

## Result

$ julia wrap_aaa.jl 
A = CppAAA.AAA() = Main.CppAAA.AAAAllocated(Ptr{Nothing} @0x0000000005b4d2e0)
CppAAA.greet(A) = "Hello World"
CppAAA.get_vector(A) = Int32[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19]