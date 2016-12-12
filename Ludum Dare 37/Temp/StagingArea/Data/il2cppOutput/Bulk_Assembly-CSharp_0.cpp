#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Ball
struct Ball_t3972794301;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Object
struct Il2CppObject;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Collision
struct Collision_t2876846408;
// BallDetroyer
struct BallDetroyer_t536949375;
// Cleaner
struct Cleaner_t1604682602;
// UnityEngine.Camera
struct Camera_t189460977;
// Dirt
struct Dirt_t450896597;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// GameCamera
struct GameCamera_t2776184625;
// Player
struct Player_t1147783557;
// gameMovement
struct gameMovement_t3872635843;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// thirdPersonCamera
struct thirdPersonCamera_t3665310577;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_Ball3972794301.h"
#include "AssemblyU2DCSharp_Ball3972794301MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_MeshRenderer1268241104.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BallDetroyer536949375.h"
#include "AssemblyU2DCSharp_BallDetroyer536949375MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2876846408MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Cleaner1604682602.h"
#include "AssemblyU2DCSharp_Cleaner1604682602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_Dirt450896597.h"
#include "AssemblyU2DCSharp_Dirt450896597MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "AssemblyU2DCSharp_GameCamera2776184625.h"
#include "AssemblyU2DCSharp_GameCamera2776184625MethodDeclarations.h"
#include "AssemblyU2DCSharp_Player1147783557.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_gameMovement3872635843.h"
#include "AssemblyU2DCSharp_gameMovement3872635843MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController4094781467MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController4094781467.h"
#include "UnityEngine_UnityEngine_CollisionFlags4046947985.h"
#include "AssemblyU2DCSharp_Player1147783557MethodDeclarations.h"
#include "AssemblyU2DCSharp_thirdPersonCamera3665310577.h"
#include "AssemblyU2DCSharp_thirdPersonCamera3665310577MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m2721246802_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m2721246802(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t3497673348_m2974738468(__this, method) ((  Collider_t3497673348 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950(__this, method) ((  MeshRenderer_t1268241104 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisIl2CppObject_m483057723(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.Camera>()
#define Object_FindObjectOfType_TisCamera_t189460977_m1548094075(__this /* static, unused */, method) ((  Camera_t189460977 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
#define Component_GetComponent_TisCollider2D_t646061738_m2950827934(__this, method) ((  Collider2D_t646061738 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, method) ((  SpriteRenderer_t1209076198 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<Player>()
#define Object_FindObjectOfType_TisPlayer_t1147783557_m2414708628(__this /* static, unused */, method) ((  Player_t1147783557 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t189460977_m633060157(__this, method) ((  Camera_t189460977 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t4094781467_m1582798737(__this, method) ((  CharacterController_t4094781467 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1073530660 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	{
		__this->set_clippingPlane_3((-5.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern const MethodInfo* Component_GetComponent_TisCollider_t3497673348_m2974738468_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950_MethodInfo_var;
extern const uint32_t Ball_Start_m2511773116_MetadataUsageId;
extern "C"  void Ball_Start_m2511773116 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m2511773116_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t3497673348 * L_0 = Component_GetComponent_TisCollider_t3497673348_m2974738468(__this, /*hidden argument*/Component_GetComponent_TisCollider_t3497673348_m2974738468_MethodInfo_var);
		__this->set_ballCollider_4(L_0);
		MeshRenderer_t1268241104 * L_1 = Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950_MethodInfo_var);
		__this->set_ballMeshRenderer_5(L_1);
		Ball_SetBallColour_m1190115333(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Update()
extern "C"  void Ball_Update_m2036524005 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Ball::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Ball_OnCollisionEnter_m715489174 (Ball_t3972794301 * __this, Collision_t2876846408 * ___otherCollider0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Ball::SetBallColour()
extern "C"  void Ball_SetBallColour_m1190115333 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		MaterialU5BU5D_t3123989686* L_0 = __this->get_ballMaterials_2();
		int32_t L_1 = Random_Range_m694320887(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		MeshRenderer_t1268241104 * L_2 = __this->get_ballMeshRenderer_5();
		MaterialU5BU5D_t3123989686* L_3 = __this->get_ballMaterials_2();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Material_t193706927 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Renderer_set_material_m1053097112(L_2, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::OnDestroy()
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3630149336;
extern const uint32_t Ball_OnDestroy_m411971851_MetadataUsageId;
extern "C"  void Ball_OnDestroy_m411971851 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Ball_OnDestroy_m411971851_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3630149336, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallDetroyer::.ctor()
extern "C"  void BallDetroyer__ctor_m266779274 (BallDetroyer_t536949375 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallDetroyer::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral405905523;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern const uint32_t BallDetroyer_OnCollisionEnter_m3596474840_MetadataUsageId;
extern "C"  void BallDetroyer_OnCollisionEnter_m3596474840 (BallDetroyer_t536949375 * __this, Collision_t2876846408 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallDetroyer_OnCollisionEnter_m3596474840_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t2876846408 * L_0 = ___other0;
		Collider_t3497673348 * L_1 = Collision_get_collider_m3340328360(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Component_get_tag_m357168014(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral405905523, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Collision_t2876846408 * L_4 = ___other0;
		GameObject_t1756533147 * L_5 = Collision_get_gameObject_m1370363400(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4279412553(NULL /*static, unused*/, L_5, (0.5f), /*hidden argument*/NULL);
	}

IL_002a:
	{
		Collision_t2876846408 * L_6 = ___other0;
		Collider_t3497673348 * L_7 = Collision_get_collider_m3340328360(L_6, /*hidden argument*/NULL);
		String_t* L_8 = Component_get_tag_m357168014(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_8, _stringLiteral1875862075, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Collision_t2876846408 * L_10 = ___other0;
		Transform_t3275118058 * L_11 = Collision_get_transform_m4132935520(L_10, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Vector3_get_zero_m1527993324(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void Cleaner::.ctor()
extern "C"  void Cleaner__ctor_m3358797653 (Cleaner_t1604682602 * __this, const MethodInfo* method)
{
	{
		Vector3_t2243707580  L_0 = Vector3_get_zero_m1527993324(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_velocity_4(L_0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cleaner::Start()
extern "C"  void Cleaner_Start_m2605623493 (Cleaner_t1604682602 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_startTime_7(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_startPoint_8(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		__this->set_newPosition_10(L_3);
		__this->set_fracJourney_9((0.0f));
		return;
	}
}
// System.Void Cleaner::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern const uint32_t Cleaner_Update_m3662975880_MetadataUsageId;
extern "C"  void Cleaner_Update_m3662975880 (Cleaner_t1604682602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Cleaner_Update_m3662975880_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButton_m38251721(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_3 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = Vector3_Distance_m1859670022(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->set_journeyLength_5(L_4);
		float L_5 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_startTime_7();
		float L_7 = __this->get_moveSpeed_2();
		__this->set_distCovered_6(((float)((float)((float)((float)L_5-(float)L_6))*(float)L_7)));
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_startPoint_8(L_8);
		float L_9 = __this->get_distCovered_6();
		float L_10 = __this->get_journeyLength_5();
		__this->set_fracJourney_9(((float)((float)L_9/(float)L_10)));
		Vector3_t2243707580  L_11 = Cleaner_CalculateWorldspaceFromMouseClick_m401974616(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_newPosition_10(L_11);
	}

IL_006d:
	{
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_13 = __this->get_startPoint_8();
		Vector3_t2243707580  L_14 = Transform_get_position_m1104419803(L_13, /*hidden argument*/NULL);
		Vector3_t2243707580  L_15 = __this->get_newPosition_10();
		Vector3_t2243707580 * L_16 = __this->get_address_of_velocity_4();
		float L_17 = __this->get_smoothTime_3();
		Vector3_t2243707580  L_18 = Vector3_SmoothDamp_m3087890513(NULL /*static, unused*/, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_12, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cleaner::MoveToPosition(System.Single)
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern const uint32_t Cleaner_MoveToPosition_m475953139_MetadataUsageId;
extern "C"  void Cleaner_MoveToPosition_m475953139 (Cleaner_t1604682602 * __this, float ___journeyLength0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Cleaner_MoveToPosition_m475953139_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Transform_t3275118058 * V_3 = NULL;
	{
		Vector3_t2243707580  L_0 = Cleaner_CalculateWorldspaceFromMouseClick_m401974616(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_startTime_7();
		float L_3 = __this->get_moveSpeed_2();
		V_1 = ((float)((float)((float)((float)L_1-(float)L_2))*(float)L_3));
		float L_4 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = L_4;
		Il2CppObject * L_6 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_5);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		float L_7 = __this->get_startTime_7();
		float L_8 = L_7;
		Il2CppObject * L_9 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_8);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		float L_10 = __this->get_moveSpeed_2();
		float L_11 = L_10;
		Il2CppObject * L_12 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_11);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		float L_13 = V_1;
		float L_14 = ___journeyLength0;
		V_2 = ((float)((float)L_13/(float)L_14));
		Transform_t3275118058 * L_15 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		V_3 = L_15;
		Transform_t3275118058 * L_16 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_17 = V_3;
		Vector3_t2243707580  L_18 = Transform_get_position_m1104419803(L_17, /*hidden argument*/NULL);
		Vector3_t2243707580  L_19 = V_0;
		float L_20 = V_2;
		Vector3_t2243707580  L_21 = Vector3_Lerp_m2935648359(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_16, L_21, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 Cleaner::CalculateWorldspaceFromMouseClick()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisCamera_t189460977_m1548094075_MethodInfo_var;
extern const uint32_t Cleaner_CalculateWorldspaceFromMouseClick_m401974616_MetadataUsageId;
extern "C"  Vector3_t2243707580  Cleaner_CalculateWorldspaceFromMouseClick_m401974616 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Cleaner_CalculateWorldspaceFromMouseClick_m401974616_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_t189460977 * V_3 = NULL;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t2243707580  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_0 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_0;
		float L_1 = (&V_6)->get_x_1();
		V_0 = L_1;
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_2;
		float L_3 = (&V_7)->get_y_2();
		V_1 = L_3;
		V_2 = (10.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Camera_t189460977 * L_4 = Object_FindObjectOfType_TisCamera_t189460977_m1548094075(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCamera_t189460977_m1548094075_MethodInfo_var);
		V_3 = L_4;
		float L_5 = V_0;
		float L_6 = V_1;
		float L_7 = V_2;
		Vector3__ctor_m2638739322((&V_4), L_5, L_6, L_7, /*hidden argument*/NULL);
		Camera_t189460977 * L_8 = V_3;
		Vector3_t2243707580  L_9 = V_4;
		Vector3_t2243707580  L_10 = Camera_ScreenToWorldPoint_m929392728(L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Vector3_t2243707580  L_11 = V_5;
		return L_11;
	}
}
// System.Void Dirt::.ctor()
extern "C"  void Dirt__ctor_m2975399500 (Dirt_t450896597 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Dirt::Start()
extern const MethodInfo* Component_GetComponent_TisCollider2D_t646061738_m2950827934_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var;
extern const uint32_t Dirt_Start_m1601221460_MetadataUsageId;
extern "C"  void Dirt_Start_m1601221460 (Dirt_t450896597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Dirt_Start_m1601221460_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = Component_GetComponent_TisCollider2D_t646061738_m2950827934(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_t646061738_m2950827934_MethodInfo_var);
		__this->set_dirtCollider_3(L_0);
		SpriteRenderer_t1209076198 * L_1 = Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var);
		__this->set_dirtSpriteRenderer_4(L_1);
		Dirt_SetBallColour_m2350510317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Dirt::Update()
extern "C"  void Dirt_Update_m1434267357 (Dirt_t450896597 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Dirt::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const uint32_t Dirt_OnCollisionEnter2D_m3616797822_MetadataUsageId;
extern "C"  void Dirt_OnCollisionEnter2D_m3616797822 (Dirt_t450896597 * __this, Collision2D_t1539500754 * ___otherCollider0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Dirt_OnCollisionEnter2D_m3616797822_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___otherCollider0;
		Collider2D_t646061738 * L_1 = Collision2D_get_collider_m3330356936(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Collision2D_t1539500754 * L_3 = ___otherCollider0;
		Dirt_SwapSprites_m1411029138(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Dirt::SwapSprites(UnityEngine.Collision2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2332761120;
extern Il2CppCodeGenString* _stringLiteral1178975115;
extern const uint32_t Dirt_SwapSprites_m1411029138_MetadataUsageId;
extern "C"  void Dirt_SwapSprites_m1411029138 (Dirt_t450896597 * __this, Collision2D_t1539500754 * ___otherCollider0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Dirt_SwapSprites_m1411029138_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___otherCollider0;
		Collider2D_t646061738 * L_1 = Collision2D_get_collider_m3330356936(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral2332761120, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Dirt_SetBallColour_m2350510317(__this, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_0025:
	{
		Collision2D_t1539500754 * L_4 = ___otherCollider0;
		Collider2D_t646061738 * L_5 = Collision2D_get_collider_m3330356936(L_4, /*hidden argument*/NULL);
		String_t* L_6 = Component_get_tag_m357168014(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_6, _stringLiteral1178975115, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Collision2D_t1539500754 * L_8 = ___otherCollider0;
		Collider2D_t646061738 * L_9 = Collision2D_get_collider_m3330356936(L_8, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_10 = Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(L_9, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var);
		Sprite_t309593783 * L_11 = SpriteRenderer_get_sprite_m3016837432(L_10, /*hidden argument*/NULL);
		SpriteU5BU5D_t3359083662* L_12 = __this->get_dirtSprites_2();
		int32_t L_13 = 0;
		Sprite_t309593783 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		Dirt_SetBallColour_m2350510317(__this, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void Dirt::SetBallColour()
extern "C"  void Dirt_SetBallColour_m2350510317 (Dirt_t450896597 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SpriteU5BU5D_t3359083662* L_0 = __this->get_dirtSprites_2();
		int32_t L_1 = Random_Range_m694320887(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		SpriteRenderer_t1209076198 * L_2 = __this->get_dirtSpriteRenderer_4();
		SpriteU5BU5D_t3359083662* L_3 = __this->get_dirtSprites_2();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Sprite_t309593783 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SpriteRenderer_set_sprite_m617298623(L_2, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCamera::.ctor()
extern "C"  void GameCamera__ctor_m3999561464 (GameCamera_t2776184625 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCamera::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisPlayer_t1147783557_m2414708628_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t189460977_m633060157_MethodInfo_var;
extern const uint32_t GameCamera_Start_m1203369072_MetadataUsageId;
extern "C"  void GameCamera_Start_m1203369072 (GameCamera_t2776184625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameCamera_Start_m1203369072_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Player_t1147783557 * L_0 = Object_FindObjectOfType_TisPlayer_t1147783557_m2414708628(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayer_t1147783557_m2414708628_MethodInfo_var);
		__this->set_player_5(L_0);
		Camera_t189460977 * L_1 = Component_GetComponent_TisCamera_t189460977_m633060157(__this, /*hidden argument*/Component_GetComponent_TisCamera_t189460977_m633060157_MethodInfo_var);
		__this->set_thisCamera_6(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		__this->set_startingPosition_7(L_3);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_5 = Transform_get_rotation_m1033555130(L_4, /*hidden argument*/NULL);
		__this->set_startingRotation_8(L_5);
		return;
	}
}
// System.Void GameCamera::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern Il2CppCodeGenString* _stringLiteral1684512047;
extern Il2CppCodeGenString* _stringLiteral842948034;
extern const uint32_t GameCamera_Update_m187360601_MetadataUsageId;
extern "C"  void GameCamera_Update_m187360601 (GameCamera_t2776184625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameCamera_Update_m187360601_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Player_t1147783557 * L_2 = __this->get_player_5();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_get_up_m2725403797(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_rotationSpeed_2();
		float L_7 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m3410686872(L_1, L_4, L_5, ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_8 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0080;
		}
	}
	{
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Player_t1147783557 * L_10 = __this->get_player_5();
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(L_10, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Transform_get_position_m1104419803(L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Vector3_get_down_m2372302126(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_rotationSpeed_2();
		float L_15 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m3410686872(L_9, L_12, L_13, ((float)((float)L_14*(float)L_15)), /*hidden argument*/NULL);
	}

IL_0080:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_16 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_00c0;
		}
	}
	{
		Transform_t3275118058 * L_17 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Player_t1147783557 * L_18 = __this->get_player_5();
		Transform_t3275118058 * L_19 = Component_get_transform_m2697483695(L_18, /*hidden argument*/NULL);
		Vector3_t2243707580  L_20 = Transform_get_position_m1104419803(L_19, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_22 = __this->get_rotationSpeed_2();
		float L_23 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m3410686872(L_17, L_20, L_21, ((float)((float)L_22*(float)L_23)), /*hidden argument*/NULL);
	}

IL_00c0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_24 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_0100;
		}
	}
	{
		Transform_t3275118058 * L_25 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Player_t1147783557 * L_26 = __this->get_player_5();
		Transform_t3275118058 * L_27 = Component_get_transform_m2697483695(L_26, /*hidden argument*/NULL);
		Vector3_t2243707580  L_28 = Transform_get_position_m1104419803(L_27, /*hidden argument*/NULL);
		Vector3_t2243707580  L_29 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_30 = __this->get_rotationSpeed_2();
		float L_31 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m3410686872(L_25, L_28, L_29, ((float)((float)L_30*(float)L_31)), /*hidden argument*/NULL);
	}

IL_0100:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_32 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1684512047, /*hidden argument*/NULL);
		if ((!(((float)L_32) > ((float)(0.0f)))))
		{
			goto IL_0141;
		}
	}
	{
		Camera_t189460977 * L_33 = __this->get_thisCamera_6();
		float L_34 = Camera_get_fieldOfView_m3384007405(L_33, /*hidden argument*/NULL);
		float L_35 = __this->get_maxIn_4();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_0141;
		}
	}
	{
		Camera_t189460977 * L_36 = __this->get_thisCamera_6();
		Camera_t189460977 * L_37 = L_36;
		float L_38 = Camera_get_fieldOfView_m3384007405(L_37, /*hidden argument*/NULL);
		Camera_set_fieldOfView_m3974156396(L_37, ((float)((float)L_38-(float)(1.0f))), /*hidden argument*/NULL);
	}

IL_0141:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_39 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1684512047, /*hidden argument*/NULL);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_0182;
		}
	}
	{
		Camera_t189460977 * L_40 = __this->get_thisCamera_6();
		float L_41 = Camera_get_fieldOfView_m3384007405(L_40, /*hidden argument*/NULL);
		float L_42 = __this->get_maxOut_3();
		if ((!(((float)L_41) < ((float)L_42))))
		{
			goto IL_0182;
		}
	}
	{
		Camera_t189460977 * L_43 = __this->get_thisCamera_6();
		Camera_t189460977 * L_44 = L_43;
		float L_45 = Camera_get_fieldOfView_m3384007405(L_44, /*hidden argument*/NULL);
		Camera_set_fieldOfView_m3974156396(L_44, ((float)((float)L_45+(float)(1.0f))), /*hidden argument*/NULL);
	}

IL_0182:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_46 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral842948034, /*hidden argument*/NULL);
		if ((!(((float)L_46) > ((float)(0.0f)))))
		{
			goto IL_01b8;
		}
	}
	{
		Transform_t3275118058 * L_47 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_48 = __this->get_startingPosition_7();
		Transform_set_position_m2469242620(L_47, L_48, /*hidden argument*/NULL);
		Transform_t3275118058 * L_49 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_50 = __this->get_startingRotation_8();
		Transform_set_rotation_m3411284563(L_49, L_50, /*hidden argument*/NULL);
	}

IL_01b8:
	{
		return;
	}
}
// System.Void gameMovement::.ctor()
extern "C"  void gameMovement__ctor_m2170090994 (gameMovement_t3872635843 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((3.0f));
		__this->set_rotateSpeed_3((3.0f));
		__this->set_jumpSpeed_4((8.0f));
		__this->set_gravity_5((20.0f));
		Vector3_t2243707580  L_0 = Vector3_get_zero_m1527993324(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_moveDirection_6(L_0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gameMovement::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCharacterController_t4094781467_m1582798737_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern Il2CppCodeGenString* _stringLiteral842948034;
extern const uint32_t gameMovement_Update_m2220083979_MetadataUsageId;
extern "C"  void gameMovement_Update_m2220083979 (gameMovement_t3872635843 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (gameMovement_Update_m2220083979_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	CharacterController_t4094781467 * V_0 = NULL;
	{
		CharacterController_t4094781467 * L_0 = Component_GetComponent_TisCharacterController_t4094781467_m1582798737(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t4094781467_m1582798737_MethodInfo_var);
		V_0 = L_0;
		CharacterController_t4094781467 * L_1 = V_0;
		bool L_2 = CharacterController_get_isGrounded_m2594228107(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		float L_4 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m2638739322(&L_5, L_3, (0.0f), L_4, /*hidden argument*/NULL);
		__this->set_moveDirection_6(L_5);
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = __this->get_moveDirection_6();
		Vector3_t2243707580  L_8 = Transform_TransformDirection_m1639585047(L_6, L_7, /*hidden argument*/NULL);
		__this->set_moveDirection_6(L_8);
		Vector3_t2243707580  L_9 = __this->get_moveDirection_6();
		float L_10 = __this->get_speed_2();
		Vector3_t2243707580  L_11 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_moveDirection_6(L_11);
		bool L_12 = Input_GetButton_m38251721(NULL /*static, unused*/, _stringLiteral842948034, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Vector3_t2243707580 * L_13 = __this->get_address_of_moveDirection_6();
		float L_14 = __this->get_jumpSpeed_4();
		L_13->set_y_2(L_14);
	}

IL_0084:
	{
		Vector3_t2243707580 * L_15 = __this->get_address_of_moveDirection_6();
		Vector3_t2243707580 * L_16 = L_15;
		float L_17 = L_16->get_y_2();
		float L_18 = __this->get_gravity_5();
		float L_19 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_16->set_y_2(((float)((float)L_17-(float)((float)((float)L_18*(float)L_19)))));
		CharacterController_t4094781467 * L_20 = V_0;
		Vector3_t2243707580  L_21 = __this->get_moveDirection_6();
		float L_22 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_23 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		CharacterController_Move_m3456882757(L_20, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m1986401168 (Player_t1147783557 * __this, const MethodInfo* method)
{
	{
		Vector3_t2243707580  L_0 = Vector3_get_zero_m1527993324(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_velocity_4(L_0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m3139373552 (Player_t1147783557 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_startTime_7(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_startPoint_8(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		__this->set_newPosition_10(L_3);
		__this->set_fracJourney_9((0.0f));
		return;
	}
}
// System.Void Player::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern const uint32_t Player_Update_m717746161_MetadataUsageId;
extern "C"  void Player_Update_m717746161 (Player_t1147783557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_m717746161_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButton_m38251721(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_3 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = Vector3_Distance_m1859670022(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->set_journeyLength_5(L_4);
		float L_5 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_startTime_7();
		float L_7 = __this->get_moveSpeed_2();
		__this->set_distCovered_6(((float)((float)((float)((float)L_5-(float)L_6))*(float)L_7)));
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_startPoint_8(L_8);
		float L_9 = __this->get_distCovered_6();
		float L_10 = __this->get_journeyLength_5();
		__this->set_fracJourney_9(((float)((float)L_9/(float)L_10)));
		Vector3_t2243707580  L_11 = Player_CalculateWorldspaceFromMouseClick_m4273438917(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_newPosition_10(L_11);
	}

IL_006d:
	{
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_13 = __this->get_startPoint_8();
		Vector3_t2243707580  L_14 = Transform_get_position_m1104419803(L_13, /*hidden argument*/NULL);
		Vector3_t2243707580  L_15 = __this->get_newPosition_10();
		Vector3_t2243707580 * L_16 = __this->get_address_of_velocity_4();
		float L_17 = __this->get_smoothTime_3();
		Vector3_t2243707580  L_18 = Vector3_SmoothDamp_m3087890513(NULL /*static, unused*/, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_12, L_18, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 Player::CalculateWorldspaceFromMouseClick()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisCamera_t189460977_m1548094075_MethodInfo_var;
extern const uint32_t Player_CalculateWorldspaceFromMouseClick_m4273438917_MetadataUsageId;
extern "C"  Vector3_t2243707580  Player_CalculateWorldspaceFromMouseClick_m4273438917 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player_CalculateWorldspaceFromMouseClick_m4273438917_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_t189460977 * V_3 = NULL;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t2243707580  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_0 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_0;
		float L_1 = (&V_6)->get_x_1();
		V_0 = L_1;
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_2;
		float L_3 = (&V_7)->get_y_2();
		V_1 = L_3;
		V_2 = (10.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Camera_t189460977 * L_4 = Object_FindObjectOfType_TisCamera_t189460977_m1548094075(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCamera_t189460977_m1548094075_MethodInfo_var);
		V_3 = L_4;
		float L_5 = V_0;
		float L_6 = V_1;
		float L_7 = V_2;
		Vector3__ctor_m2638739322((&V_4), L_5, L_6, L_7, /*hidden argument*/NULL);
		Camera_t189460977 * L_8 = V_3;
		Vector3_t2243707580  L_9 = V_4;
		Vector3_t2243707580  L_10 = Camera_ScreenToWorldPoint_m929392728(L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Vector3_t2243707580  L_11 = V_5;
		return L_11;
	}
}
// System.Void thirdPersonCamera::.ctor()
extern "C"  void thirdPersonCamera__ctor_m1176186394 (thirdPersonCamera_t3665310577 * __this, const MethodInfo* method)
{
	{
		__this->set_distance_7((20.0f));
		__this->set_sensitivityX_10((4.0f));
		__this->set_sensitivityY_11((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void thirdPersonCamera::Start()
extern "C"  void thirdPersonCamera_Start_m332445538 (thirdPersonCamera_t3665310577 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_camTransform_5(L_0);
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cam_6(L_1);
		return;
	}
}
// System.Void thirdPersonCamera::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1307534077;
extern Il2CppCodeGenString* _stringLiteral1307534078;
extern Il2CppCodeGenString* _stringLiteral1684512047;
extern const uint32_t thirdPersonCamera_Update_m30695773_MetadataUsageId;
extern "C"  void thirdPersonCamera_Update_m30695773 (thirdPersonCamera_t3665310577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (thirdPersonCamera_Update_m30695773_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_currentX_8();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_1 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534077, /*hidden argument*/NULL);
		__this->set_currentX_8(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_currentY_9();
		float L_3 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534078, /*hidden argument*/NULL);
		__this->set_currentY_9(((float)((float)L_2+(float)L_3)));
		float L_4 = __this->get_currentY_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_4, (20.0f), (90.0f), /*hidden argument*/NULL);
		__this->set_currentY_9(L_5);
		float L_6 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1684512047, /*hidden argument*/NULL);
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		Camera_t189460977 * L_7 = __this->get_cam_6();
		Camera_t189460977 * L_8 = L_7;
		float L_9 = Camera_get_fieldOfView_m3384007405(L_8, /*hidden argument*/NULL);
		Camera_set_fieldOfView_m3974156396(L_8, ((float)((float)L_9-(float)(1.0f))), /*hidden argument*/NULL);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_10 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1684512047, /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		Camera_t189460977 * L_11 = __this->get_cam_6();
		Camera_t189460977 * L_12 = L_11;
		float L_13 = Camera_get_fieldOfView_m3384007405(L_12, /*hidden argument*/NULL);
		Camera_set_fieldOfView_m3974156396(L_12, ((float)((float)L_13+(float)(1.0f))), /*hidden argument*/NULL);
	}

IL_009f:
	{
		Camera_t189460977 * L_14 = __this->get_cam_6();
		Camera_t189460977 * L_15 = __this->get_cam_6();
		float L_16 = Camera_get_fieldOfView_m3384007405(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_16, (15.0f), (60.0f), /*hidden argument*/NULL);
		Camera_set_fieldOfView_m3974156396(L_14, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void thirdPersonCamera::LateUpdate()
extern "C"  void thirdPersonCamera_LateUpdate_m3395770441 (thirdPersonCamera_t3665310577 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t4030073918  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = __this->get_distance_7();
		Vector3__ctor_m2638739322((&V_0), (0.0f), (0.0f), ((-L_0)), /*hidden argument*/NULL);
		float L_1 = __this->get_currentY_9();
		float L_2 = __this->get_currentX_8();
		Quaternion_t4030073918  L_3 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, L_1, L_2, (0.0f), /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t3275118058 * L_4 = __this->get_camTransform_5();
		Transform_t3275118058 * L_5 = __this->get_lookAt_4();
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_7 = V_1;
		Vector3_t2243707580  L_8 = V_0;
		Vector3_t2243707580  L_9 = Quaternion_op_Multiply_m1483423721(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_4, L_10, /*hidden argument*/NULL);
		Transform_t3275118058 * L_11 = __this->get_camTransform_5();
		Transform_t3275118058 * L_12 = __this->get_lookAt_4();
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		Transform_LookAt_m3314153180(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
