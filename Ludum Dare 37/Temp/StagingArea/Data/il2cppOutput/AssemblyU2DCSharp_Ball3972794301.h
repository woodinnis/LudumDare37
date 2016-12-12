#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material[] Ball::ballMaterials
	MaterialU5BU5D_t3123989686* ___ballMaterials_2;
	// System.Single Ball::clippingPlane
	float ___clippingPlane_3;
	// UnityEngine.Collider Ball::ballCollider
	Collider_t3497673348 * ___ballCollider_4;
	// UnityEngine.MeshRenderer Ball::ballMeshRenderer
	MeshRenderer_t1268241104 * ___ballMeshRenderer_5;

public:
	inline static int32_t get_offset_of_ballMaterials_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___ballMaterials_2)); }
	inline MaterialU5BU5D_t3123989686* get_ballMaterials_2() const { return ___ballMaterials_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_ballMaterials_2() { return &___ballMaterials_2; }
	inline void set_ballMaterials_2(MaterialU5BU5D_t3123989686* value)
	{
		___ballMaterials_2 = value;
		Il2CppCodeGenWriteBarrier(&___ballMaterials_2, value);
	}

	inline static int32_t get_offset_of_clippingPlane_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___clippingPlane_3)); }
	inline float get_clippingPlane_3() const { return ___clippingPlane_3; }
	inline float* get_address_of_clippingPlane_3() { return &___clippingPlane_3; }
	inline void set_clippingPlane_3(float value)
	{
		___clippingPlane_3 = value;
	}

	inline static int32_t get_offset_of_ballCollider_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___ballCollider_4)); }
	inline Collider_t3497673348 * get_ballCollider_4() const { return ___ballCollider_4; }
	inline Collider_t3497673348 ** get_address_of_ballCollider_4() { return &___ballCollider_4; }
	inline void set_ballCollider_4(Collider_t3497673348 * value)
	{
		___ballCollider_4 = value;
		Il2CppCodeGenWriteBarrier(&___ballCollider_4, value);
	}

	inline static int32_t get_offset_of_ballMeshRenderer_5() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___ballMeshRenderer_5)); }
	inline MeshRenderer_t1268241104 * get_ballMeshRenderer_5() const { return ___ballMeshRenderer_5; }
	inline MeshRenderer_t1268241104 ** get_address_of_ballMeshRenderer_5() { return &___ballMeshRenderer_5; }
	inline void set_ballMeshRenderer_5(MeshRenderer_t1268241104 * value)
	{
		___ballMeshRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___ballMeshRenderer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
