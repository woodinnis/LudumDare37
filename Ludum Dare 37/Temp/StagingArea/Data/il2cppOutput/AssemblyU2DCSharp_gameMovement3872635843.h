#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameMovement
struct  gameMovement_t3872635843  : public MonoBehaviour_t1158329972
{
public:
	// System.Single gameMovement::speed
	float ___speed_2;
	// System.Single gameMovement::rotateSpeed
	float ___rotateSpeed_3;
	// System.Single gameMovement::jumpSpeed
	float ___jumpSpeed_4;
	// System.Single gameMovement::gravity
	float ___gravity_5;
	// UnityEngine.Vector3 gameMovement::moveDirection
	Vector3_t2243707580  ___moveDirection_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(gameMovement_t3872635843, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_3() { return static_cast<int32_t>(offsetof(gameMovement_t3872635843, ___rotateSpeed_3)); }
	inline float get_rotateSpeed_3() const { return ___rotateSpeed_3; }
	inline float* get_address_of_rotateSpeed_3() { return &___rotateSpeed_3; }
	inline void set_rotateSpeed_3(float value)
	{
		___rotateSpeed_3 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_4() { return static_cast<int32_t>(offsetof(gameMovement_t3872635843, ___jumpSpeed_4)); }
	inline float get_jumpSpeed_4() const { return ___jumpSpeed_4; }
	inline float* get_address_of_jumpSpeed_4() { return &___jumpSpeed_4; }
	inline void set_jumpSpeed_4(float value)
	{
		___jumpSpeed_4 = value;
	}

	inline static int32_t get_offset_of_gravity_5() { return static_cast<int32_t>(offsetof(gameMovement_t3872635843, ___gravity_5)); }
	inline float get_gravity_5() const { return ___gravity_5; }
	inline float* get_address_of_gravity_5() { return &___gravity_5; }
	inline void set_gravity_5(float value)
	{
		___gravity_5 = value;
	}

	inline static int32_t get_offset_of_moveDirection_6() { return static_cast<int32_t>(offsetof(gameMovement_t3872635843, ___moveDirection_6)); }
	inline Vector3_t2243707580  get_moveDirection_6() const { return ___moveDirection_6; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_6() { return &___moveDirection_6; }
	inline void set_moveDirection_6(Vector3_t2243707580  value)
	{
		___moveDirection_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
