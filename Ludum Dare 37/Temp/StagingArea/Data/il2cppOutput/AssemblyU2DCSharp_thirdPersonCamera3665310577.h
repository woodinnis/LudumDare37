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
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// thirdPersonCamera
struct  thirdPersonCamera_t3665310577  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform thirdPersonCamera::lookAt
	Transform_t3275118058 * ___lookAt_4;
	// UnityEngine.Transform thirdPersonCamera::camTransform
	Transform_t3275118058 * ___camTransform_5;
	// UnityEngine.Camera thirdPersonCamera::cam
	Camera_t189460977 * ___cam_6;
	// System.Single thirdPersonCamera::distance
	float ___distance_7;
	// System.Single thirdPersonCamera::currentX
	float ___currentX_8;
	// System.Single thirdPersonCamera::currentY
	float ___currentY_9;
	// System.Single thirdPersonCamera::sensitivityX
	float ___sensitivityX_10;
	// System.Single thirdPersonCamera::sensitivityY
	float ___sensitivityY_11;

public:
	inline static int32_t get_offset_of_lookAt_4() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___lookAt_4)); }
	inline Transform_t3275118058 * get_lookAt_4() const { return ___lookAt_4; }
	inline Transform_t3275118058 ** get_address_of_lookAt_4() { return &___lookAt_4; }
	inline void set_lookAt_4(Transform_t3275118058 * value)
	{
		___lookAt_4 = value;
		Il2CppCodeGenWriteBarrier(&___lookAt_4, value);
	}

	inline static int32_t get_offset_of_camTransform_5() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___camTransform_5)); }
	inline Transform_t3275118058 * get_camTransform_5() const { return ___camTransform_5; }
	inline Transform_t3275118058 ** get_address_of_camTransform_5() { return &___camTransform_5; }
	inline void set_camTransform_5(Transform_t3275118058 * value)
	{
		___camTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___camTransform_5, value);
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___cam_6)); }
	inline Camera_t189460977 * get_cam_6() const { return ___cam_6; }
	inline Camera_t189460977 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Camera_t189460977 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___cam_6, value);
	}

	inline static int32_t get_offset_of_distance_7() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___distance_7)); }
	inline float get_distance_7() const { return ___distance_7; }
	inline float* get_address_of_distance_7() { return &___distance_7; }
	inline void set_distance_7(float value)
	{
		___distance_7 = value;
	}

	inline static int32_t get_offset_of_currentX_8() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___currentX_8)); }
	inline float get_currentX_8() const { return ___currentX_8; }
	inline float* get_address_of_currentX_8() { return &___currentX_8; }
	inline void set_currentX_8(float value)
	{
		___currentX_8 = value;
	}

	inline static int32_t get_offset_of_currentY_9() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___currentY_9)); }
	inline float get_currentY_9() const { return ___currentY_9; }
	inline float* get_address_of_currentY_9() { return &___currentY_9; }
	inline void set_currentY_9(float value)
	{
		___currentY_9 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_10() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___sensitivityX_10)); }
	inline float get_sensitivityX_10() const { return ___sensitivityX_10; }
	inline float* get_address_of_sensitivityX_10() { return &___sensitivityX_10; }
	inline void set_sensitivityX_10(float value)
	{
		___sensitivityX_10 = value;
	}

	inline static int32_t get_offset_of_sensitivityY_11() { return static_cast<int32_t>(offsetof(thirdPersonCamera_t3665310577, ___sensitivityY_11)); }
	inline float get_sensitivityY_11() const { return ___sensitivityY_11; }
	inline float* get_address_of_sensitivityY_11() { return &___sensitivityY_11; }
	inline void set_sensitivityY_11(float value)
	{
		___sensitivityY_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
