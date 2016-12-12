#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t1147783557;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCamera
struct  GameCamera_t2776184625  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GameCamera::rotationSpeed
	float ___rotationSpeed_2;
	// System.Single GameCamera::maxOut
	float ___maxOut_3;
	// System.Single GameCamera::maxIn
	float ___maxIn_4;
	// Player GameCamera::player
	Player_t1147783557 * ___player_5;
	// UnityEngine.Camera GameCamera::thisCamera
	Camera_t189460977 * ___thisCamera_6;
	// UnityEngine.Vector3 GameCamera::startingPosition
	Vector3_t2243707580  ___startingPosition_7;
	// UnityEngine.Quaternion GameCamera::startingRotation
	Quaternion_t4030073918  ___startingRotation_8;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxOut_3() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ___maxOut_3)); }
	inline float get_maxOut_3() const { return ___maxOut_3; }
	inline float* get_address_of_maxOut_3() { return &___maxOut_3; }
	inline void set_maxOut_3(float value)
	{
		___maxOut_3 = value;
	}

	inline static int32_t get_offset_of_maxIn_4() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ___maxIn_4)); }
	inline float get_maxIn_4() const { return ___maxIn_4; }
	inline float* get_address_of_maxIn_4() { return &___maxIn_4; }
	inline void set_maxIn_4(float value)
	{
		___maxIn_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ___player_5)); }
	inline Player_t1147783557 * get_player_5() const { return ___player_5; }
	inline Player_t1147783557 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(Player_t1147783557 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_thisCamera_6() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ___thisCamera_6)); }
	inline Camera_t189460977 * get_thisCamera_6() const { return ___thisCamera_6; }
	inline Camera_t189460977 ** get_address_of_thisCamera_6() { return &___thisCamera_6; }
	inline void set_thisCamera_6(Camera_t189460977 * value)
	{
		___thisCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___thisCamera_6, value);
	}

	inline static int32_t get_offset_of_startingPosition_7() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ___startingPosition_7)); }
	inline Vector3_t2243707580  get_startingPosition_7() const { return ___startingPosition_7; }
	inline Vector3_t2243707580 * get_address_of_startingPosition_7() { return &___startingPosition_7; }
	inline void set_startingPosition_7(Vector3_t2243707580  value)
	{
		___startingPosition_7 = value;
	}

	inline static int32_t get_offset_of_startingRotation_8() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ___startingRotation_8)); }
	inline Quaternion_t4030073918  get_startingRotation_8() const { return ___startingRotation_8; }
	inline Quaternion_t4030073918 * get_address_of_startingRotation_8() { return &___startingRotation_8; }
	inline void set_startingRotation_8(Quaternion_t4030073918  value)
	{
		___startingRotation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
