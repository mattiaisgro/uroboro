#ifndef UROBORO_CONSTANTS_H
#define UROBORO_CONSTANTS_H

using real = double;

namespace uroboro {

	// PI constant
	constexpr double PI = 3.141592653589793238462643;

	// Half PI
	constexpr real PI2 = 1.570796;

	// A quarter of PI.
	constexpr real PI4 = 0.785398;

	// PI multiplied by 2.
	constexpr real PIDOUBLE = 6.283185;

	// Inverse of the PI constant.
	constexpr real INVPI = 0.318310;

	// Square root of PI constant.
	constexpr real SQRTPI = 1.772454;

	// Euler constant.
	constexpr real E = 2.718282;

	// Logarithms base 2 of Euler constant.
	constexpr real LOG2E = 1.442695;

	// Logarithm base 10 of Euler constant.
	constexpr real LOG10E = 0.434295;

	// Natural logarithm of 2.
	constexpr real LN2 = 0.693147;

	// Natural logarithm of 10.
	constexpr real LN10 = 2.302585;

	// Multiply a number by this constant to change it to radians.
	constexpr real DEG2RAD = 0.0174533;

	// Multiply a number by this constant to change it to degrees.
	constexpr real RAD2DEG = 57.2958;

	// Square root of 2.
	constexpr real SQRT2 = 1.414213;

	// Inverse square root of 2.
	constexpr real INVSQR2 = 0.707106;

}

#endif
