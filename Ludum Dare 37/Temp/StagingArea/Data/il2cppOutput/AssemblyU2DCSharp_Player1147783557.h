#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Player::moveSpeed
	float ___moveSpeed_2;
	// System.Single Player::smoothTime
	float ___smoothTime_3;
	// UnityEngine.Vector3 Player::velocity
	Vector3_t2243707580  ___velocity_4;
	// System.Single Player::journeyLength
	float ___journeyLength_5;
	// System.Single Player::distCovered
	float ___distCovered_6;
	// System.Single Player::startTime
	float ___startTime_7;
	// UnityEngine.Transform Player::startPoint
	Transform_t3275118058 * ___startPoint_8;
	// System.Single Player::fracJourney
	float ___fracJourney_9;
	// UnityEngine.Vector3 Player::newPosition
	Vector3_t2243707580  ___newPosition_10;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_smoothTime_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___smoothTime_3)); }
	inline float get_smoothTime_3() const { return ___smoothTime_3; }
	inline float* get_address_of_smoothTime_3() { return &___smoothTime_3; }
	inline void set_smoothTime_3(float value)
	{
		___smoothTime_3 = value;
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___velocity_4)); }
	inline Vector3_t2243707580  get_velocity_4() const { return ___velocity_4; }
	inline Vector3_t2243707580 * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Vector3_t2243707580  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_journeyLength_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___journeyLength_5)); }
	inline float get_journeyLength_5() const { return ___journeyLength_5; }
	inline float* get_address_of_journeyLength_5() { return &___journeyLength_5; }
	inline void set_journeyLength_5(float value)
	{
		___journeyLength_5 = value;
	}

	inline static int32_t get_offset_of_distCovered_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___distCovered_6)); }
	inline float get_distCovered_6() const { return ___distCovered_6; }
	inline float* get_address_of_distCovered_6() { return &___distCovered_6; }
	inline void set_distCovered_6(float value)
	{
		___distCovered_6 = value;
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___startTime_7)); }
	inline float get_startTime_7() const { return ___startTime_7; }
	inline float* get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(float value)
	{
		___startTime_7 = value;
	}

	inline static int32_t get_offset_of_startPoint_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___startPoint_8)); }
	inline Transform_t3275118058 * get_startPoint_8() const { return ___startPoint_8; }
	inline Transform_t3275118058 ** get_address_of_startPoint_8() { return &___startPoint_8; }
	inline void set_startPoint_8(Transform_t3275118058 * value)
	{
		___startPoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___startPoint_8, value);
	}

	inline static int32_t get_offset_of_fracJourney_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___fracJourney_9)); }
	inline float get_fracJourney_9() const { return ___fracJourney_9; }
	inline float* get_address_of_fracJourney_9() { return &___fracJourney_9; }
	inline void set_fracJourney_9(float value)
	{
		___fracJourney_9 = value;
	}

	inline static int32_t get_offset_of_newPosition_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___newPosition_10)); }
	inline Vector3_t2243707580  get_newPosition_10() const { return ___newPosition_10; }
	inline Vector3_t2243707580 * get_address_of_newPosition_10() { return &___newPosition_10; }
	inline void set_newPosition_10(Vector3_t2243707580  value)
	{
		___newPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
