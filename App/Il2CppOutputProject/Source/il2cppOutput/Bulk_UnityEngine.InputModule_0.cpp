#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

<<<<<<< HEAD

=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

<<<<<<< HEAD

// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tCC05A68F0FC31E84E54091438749644062A6C27F;
// System.Action`2<System.Int32,System.String>
struct Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36;
// System.Action`3<System.Int32Enum,System.Int32,System.IntPtr>
struct Action_3_tA1F157C5B221E0F24BDD45BD4F6A9C25B81357F9;
// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>
struct Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

extern RuntimeClass* NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A_RuntimeMethod_var;
extern const uint32_t NativeInputSystem_NotifyBeforeUpdate_m317D534DBDD42915CE638051B87E48B76ED28574_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyDeviceDiscovered_m48C3818DDCFB1A2C0530B6CE1C78743ABA4614B0_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyUpdate_m77B02AB50FCFA5649D7203E76163C757EE1DA3CA_MetadataUsageId;



#ifndef U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
#define U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
=======
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t3032009285;
// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback
struct NativeDeviceDiscoveredCallback_t3494240628;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngineInternal.Input.NativeEventCallback
struct NativeEventCallback_t83445637;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_t2379345390;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;

struct NativeInputDeviceInfo_t3032009285_marshaled_pinvoke;
struct NativeInputDeviceInfo_t3032009285;;
struct NativeInputDeviceInfo_t3032009285_marshaled_pinvoke;;
extern RuntimeClass* NativeInputDeviceInfo_t3032009285_il2cpp_TypeInfo_var;
extern const uint32_t NativeDeviceDiscoveredCallback_BeginInvoke_m2259466034_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t NativeEventCallback_BeginInvoke_m1567248734_MetadataUsageId;
extern RuntimeClass* NativeInputSystem_t922881982_il2cpp_TypeInfo_var;
extern const uint32_t NativeInputSystem_NotifyUpdate_m2959317749_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyEvents_m2206082579_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyDeviceDiscovered_m207573541_MetadataUsageId;
extern RuntimeClass* NativeInputUpdateType_t3942820534_il2cpp_TypeInfo_var;
extern const uint32_t NativeUpdateCallback_BeginInvoke_m1903744170_MetadataUsageId;

struct DelegateU5BU5D_t1703627840;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
<<<<<<< HEAD
struct  U3CModuleU3E_tF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D 
=======
struct  U3CModuleU3E_t692745542 
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
=======
#endif // U3CMODULEU3E_T692745542_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
<<<<<<< HEAD
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
=======
#ifndef NATIVEINPUTSYSTEM_T922881982_H
#define NATIVEINPUTSYSTEM_T922881982_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Array
=======
// UnityEngineInternal.Input.NativeInputSystem
struct  NativeInputSystem_t922881982  : public RuntimeObject
{
public:

public:
};

struct NativeInputSystem_t922881982_StaticFields
{
public:
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_t2379345390 * ___onUpdate_0;
	// UnityEngineInternal.Input.NativeEventCallback UnityEngineInternal.Input.NativeInputSystem::onEvents
	NativeEventCallback_t83445637 * ___onEvents_1;
	// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	NativeDeviceDiscoveredCallback_t3494240628 * ___s_OnDeviceDiscoveredCallback_2;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t922881982_StaticFields, ___onUpdate_0)); }
	inline NativeUpdateCallback_t2379345390 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline NativeUpdateCallback_t2379345390 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(NativeUpdateCallback_t2379345390 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdate_0), value);
	}

	inline static int32_t get_offset_of_onEvents_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t922881982_StaticFields, ___onEvents_1)); }
	inline NativeEventCallback_t83445637 * get_onEvents_1() const { return ___onEvents_1; }
	inline NativeEventCallback_t83445637 ** get_address_of_onEvents_1() { return &___onEvents_1; }
	inline void set_onEvents_1(NativeEventCallback_t83445637 * value)
	{
		___onEvents_1 = value;
		Il2CppCodeGenWriteBarrier((&___onEvents_1), value);
	}

	inline static int32_t get_offset_of_s_OnDeviceDiscoveredCallback_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t922881982_StaticFields, ___s_OnDeviceDiscoveredCallback_2)); }
	inline NativeDeviceDiscoveredCallback_t3494240628 * get_s_OnDeviceDiscoveredCallback_2() const { return ___s_OnDeviceDiscoveredCallback_2; }
	inline NativeDeviceDiscoveredCallback_t3494240628 ** get_address_of_s_OnDeviceDiscoveredCallback_2() { return &___s_OnDeviceDiscoveredCallback_2; }
	inline void set_s_OnDeviceDiscoveredCallback_2(NativeDeviceDiscoveredCallback_t3494240628 * value)
	{
		___s_OnDeviceDiscoveredCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_OnDeviceDiscoveredCallback_2), value);
	}
};
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RUNTIMEARRAY_H
=======
#endif // NATIVEINPUTSYSTEM_T922881982_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
<<<<<<< HEAD
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
=======
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< HEAD
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
=======
struct  ValueType_t3640485471  : public RuntimeObject
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
<<<<<<< HEAD
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
#define NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
=======
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// UnityEngineInternal.Input.NativeInputSystem
struct  NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C  : public RuntimeObject
=======
// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

<<<<<<< HEAD
struct NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields
{
public:
	// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr> UnityEngineInternal.Input.NativeInputSystem::onUpdate
	Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * ___onBeforeUpdate_1;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * ___s_OnDeviceDiscoveredCallback_2;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onUpdate_0)); }
	inline Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdate_0), value);
	}

	inline static int32_t get_offset_of_onBeforeUpdate_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onBeforeUpdate_1)); }
	inline Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * get_onBeforeUpdate_1() const { return ___onBeforeUpdate_1; }
	inline Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 ** get_address_of_onBeforeUpdate_1() { return &___onBeforeUpdate_1; }
	inline void set_onBeforeUpdate_1(Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * value)
	{
		___onBeforeUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeUpdate_1), value);
	}

	inline static int32_t get_offset_of_s_OnDeviceDiscoveredCallback_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___s_OnDeviceDiscoveredCallback_2)); }
	inline Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * get_s_OnDeviceDiscoveredCallback_2() const { return ___s_OnDeviceDiscoveredCallback_2; }
	inline Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 ** get_address_of_s_OnDeviceDiscoveredCallback_2() { return &___s_OnDeviceDiscoveredCallback_2; }
	inline void set_s_OnDeviceDiscoveredCallback_2(Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * value)
	{
		___s_OnDeviceDiscoveredCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_OnDeviceDiscoveredCallback_2), value);
=======
struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
=======
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
<<<<<<< HEAD
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
=======
struct  Boolean_t97287965 
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
=======
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

<<<<<<< HEAD
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
=======
struct Boolean_t97287965_StaticFields
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
=======
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
=======
	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
=======
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
=======
// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
=======
#endif // VOID_T1185182177_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
<<<<<<< HEAD
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
=======
#ifndef NATIVEINPUTDEVICEINFO_T3032009285_H
#define NATIVEINPUTDEVICEINFO_T3032009285_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
=======
// UnityEngineInternal.Input.NativeInputDeviceInfo
struct  NativeInputDeviceInfo_t3032009285 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputDeviceInfo::deviceId
	int32_t ___deviceId_0;
	// System.String UnityEngineInternal.Input.NativeInputDeviceInfo::deviceDescriptor
	String_t* ___deviceDescriptor_1;

public:
	inline static int32_t get_offset_of_deviceId_0() { return static_cast<int32_t>(offsetof(NativeInputDeviceInfo_t3032009285, ___deviceId_0)); }
	inline int32_t get_deviceId_0() const { return ___deviceId_0; }
	inline int32_t* get_address_of_deviceId_0() { return &___deviceId_0; }
	inline void set_deviceId_0(int32_t value)
	{
		___deviceId_0 = value;
	}

	inline static int32_t get_offset_of_deviceDescriptor_1() { return static_cast<int32_t>(offsetof(NativeInputDeviceInfo_t3032009285, ___deviceDescriptor_1)); }
	inline String_t* get_deviceDescriptor_1() const { return ___deviceDescriptor_1; }
	inline String_t** get_address_of_deviceDescriptor_1() { return &___deviceDescriptor_1; }
	inline void set_deviceDescriptor_1(String_t* value)
	{
		___deviceDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___deviceDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t3032009285_marshaled_pinvoke
{
	int32_t ___deviceId_0;
	char* ___deviceDescriptor_1;
};
// Native definition for COM marshalling of UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t3032009285_marshaled_com
{
	int32_t ___deviceId_0;
	Il2CppChar* ___deviceDescriptor_1;
};
#endif // NATIVEINPUTDEVICEINFO_T3032009285_H
#ifndef NATIVEINPUTUPDATETYPE_T3942820534_H
#define NATIVEINPUTUPDATETYPE_T3942820534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputUpdateType
struct  NativeInputUpdateType_t3942820534 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t3942820534, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
=======
#endif // NATIVEINPUTUPDATETYPE_T3942820534_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
<<<<<<< HEAD
struct  Delegate_t  : public RuntimeObject
=======
struct  Delegate_t1188392813  : public RuntimeObject
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
<<<<<<< HEAD
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
=======
	DelegateData_t1677132599 * ___data_9;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
=======
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
=======
	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
=======
	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
=======
	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
=======
	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
=======
	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
=======
	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
=======
	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
=======
	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
=======
	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
=======
	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
<<<<<<< HEAD
struct Delegate_t_marshaled_pinvoke
=======
struct Delegate_t1188392813_marshaled_pinvoke
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
<<<<<<< HEAD
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
=======
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
<<<<<<< HEAD
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
=======
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
=======
// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
#define NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
=======
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef NATIVEEVENTCALLBACK_T83445637_H
#define NATIVEEVENTCALLBACK_T83445637_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// UnityEngineInternal.Input.NativeInputUpdateType
struct  NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
=======
// UnityEngineInternal.Input.NativeEventCallback
struct  NativeEventCallback_t83445637  : public MulticastDelegate_t
{
public:

public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
=======
#endif // NATIVEEVENTCALLBACK_T83445637_H
#ifndef NATIVEDEVICEDISCOVEREDCALLBACK_T3494240628_H
#define NATIVEDEVICEDISCOVEREDCALLBACK_T3494240628_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
=======
// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback
struct  NativeDeviceDiscoveredCallback_t3494240628  : public MulticastDelegate_t
{
public:

public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ACTION_1_TA0A72999A108CE29CD4CB14537B8FE41501859C1_H
#define ACTION_1_TA0A72999A108CE29CD4CB14537B8FE41501859C1_H
=======
#endif // NATIVEDEVICEDISCOVEREDCALLBACK_T3494240628_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct  Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1  : public MulticastDelegate_t
=======
// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ACTION_1_TA0A72999A108CE29CD4CB14537B8FE41501859C1_H
#ifndef ACTION_2_T3DE7FA14577DE01568F76D409273F315827CAA36_H
#define ACTION_2_T3DE7FA14577DE01568F76D409273F315827CAA36_H
=======
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef NATIVEUPDATECALLBACK_T2379345390_H
#define NATIVEUPDATECALLBACK_T2379345390_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Action`2<System.Int32,System.String>
struct  Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36  : public MulticastDelegate_t
=======
// UnityEngineInternal.Input.NativeUpdateCallback
struct  NativeUpdateCallback_t2379345390  : public MulticastDelegate_t
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ACTION_2_T3DE7FA14577DE01568F76D409273F315827CAA36_H
#ifndef ACTION_3_T218EFA183BDE39E1AC9A0240E98B4BFC33A703D4_H
#define ACTION_3_T218EFA183BDE39E1AC9A0240E98B4BFC33A703D4_H
=======
#endif // NATIVEUPDATECALLBACK_T2379345390_H
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void NativeInputDeviceInfo_t3032009285_marshal_pinvoke(const NativeInputDeviceInfo_t3032009285& unmarshaled, NativeInputDeviceInfo_t3032009285_marshaled_pinvoke& marshaled);
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_pinvoke_back(const NativeInputDeviceInfo_t3032009285_marshaled_pinvoke& marshaled, NativeInputDeviceInfo_t3032009285& unmarshaled);
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_pinvoke_cleanup(NativeInputDeviceInfo_t3032009285_marshaled_pinvoke& marshaled);


// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_m4093248293 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C" IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_m2703513789 (NativeUpdateCallback_t2379345390 * __this, int32_t ___updateType0, const RuntimeMethod* method);
// System.Void UnityEngineInternal.Input.NativeEventCallback::Invoke(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeEventCallback_Invoke_m3430740557 (NativeEventCallback_t83445637 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method);
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::Invoke(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C" IL2CPP_METHOD_ATTR void NativeDeviceDiscoveredCallback_Invoke_m2547691835 (NativeDeviceDiscoveredCallback_t3494240628 * __this, NativeInputDeviceInfo_t3032009285  ___deviceInfo0, const RuntimeMethod* method);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
<<<<<<< HEAD

// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>
struct  Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T218EFA183BDE39E1AC9A0240E98B4BFC33A703D4_H


// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m8672DDC58300CA227FC37981067B766C9879344B_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32Enum,System.Int32,System.IntPtr>::Invoke(!0,!1,!2)
extern "C" IL2CPP_METHOD_ATTR void Action_3_Invoke_mA42EA0FED3B60DF0F9FC0E7EA4DECB94B577ED27_gshared (Action_3_tA1F157C5B221E0F24BDD45BD4F6A9C25B81357F9 * __this, int32_t p0, int32_t p1, intptr_t p2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m8C87606D1DEC8A89FB53D1ADF8768A7403DD6202_gshared (Action_2_tCC05A68F0FC31E84E54091438749644062A6C27F * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362 (bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>::Invoke(!0)
inline void Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0 (Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m8672DDC58300CA227FC37981067B766C9879344B_gshared)(__this, p0, method);
}
// System.Void System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A (Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * __this, int32_t p0, int32_t p1, intptr_t p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 *, int32_t, int32_t, intptr_t, const RuntimeMethod*))Action_3_Invoke_mA42EA0FED3B60DF0F9FC0E7EA4DECB94B577ED27_gshared)(__this, p0, p1, p2, method);
}
// System.Void System.Action`2<System.Int32,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489 (Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 *, int32_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m8C87606D1DEC8A89FB53D1ADF8768A7403DD6202_gshared)(__this, p0, p1, method);
}
#ifdef __clang__
=======
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NativeDeviceDiscoveredCallback_t3494240628 (NativeDeviceDiscoveredCallback_t3494240628 * __this, NativeInputDeviceInfo_t3032009285  ___deviceInfo0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(NativeInputDeviceInfo_t3032009285_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___deviceInfo0' to native representation
	NativeInputDeviceInfo_t3032009285_marshaled_pinvoke ____deviceInfo0_marshaled = {};
	NativeInputDeviceInfo_t3032009285_marshal_pinvoke(___deviceInfo0, ____deviceInfo0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____deviceInfo0_marshaled);

	// Marshaling cleanup of parameter '___deviceInfo0' native representation
	NativeInputDeviceInfo_t3032009285_marshal_pinvoke_cleanup(____deviceInfo0_marshaled);

}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeDeviceDiscoveredCallback__ctor_m3062146467 (NativeDeviceDiscoveredCallback_t3494240628 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::Invoke(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C" IL2CPP_METHOD_ATTR void NativeDeviceDiscoveredCallback_Invoke_m2547691835 (NativeDeviceDiscoveredCallback_t3494240628 * __this, NativeInputDeviceInfo_t3032009285  ___deviceInfo0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, NativeInputDeviceInfo_t3032009285 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___deviceInfo0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, NativeInputDeviceInfo_t3032009285 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___deviceInfo0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(targetMethod, targetThis, ___deviceInfo0);
							else
								GenericVirtActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(targetMethod, targetThis, ___deviceInfo0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceInfo0);
							else
								VirtActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceInfo0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, NativeInputDeviceInfo_t3032009285 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceInfo0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, NativeInputDeviceInfo_t3032009285 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___deviceInfo0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, NativeInputDeviceInfo_t3032009285 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___deviceInfo0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(targetMethod, targetThis, ___deviceInfo0);
						else
							GenericVirtActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(targetMethod, targetThis, ___deviceInfo0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceInfo0);
						else
							VirtActionInvoker1< NativeInputDeviceInfo_t3032009285  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceInfo0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NativeInputDeviceInfo_t3032009285 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceInfo0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputDeviceInfo,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NativeDeviceDiscoveredCallback_BeginInvoke_m2259466034 (NativeDeviceDiscoveredCallback_t3494240628 * __this, NativeInputDeviceInfo_t3032009285  ___deviceInfo0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeDeviceDiscoveredCallback_BeginInvoke_m2259466034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(NativeInputDeviceInfo_t3032009285_il2cpp_TypeInfo_var, &___deviceInfo0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NativeDeviceDiscoveredCallback_EndInvoke_m1177959544 (NativeDeviceDiscoveredCallback_t3494240628 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NativeEventCallback_t83445637 (NativeEventCallback_t83445637 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___eventCount0, ___eventData1);

}
// System.Void UnityEngineInternal.Input.NativeEventCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeEventCallback__ctor_m2794133785 (NativeEventCallback_t83445637 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeEventCallback::Invoke(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeEventCallback_Invoke_m3430740557 (NativeEventCallback_t83445637 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___eventCount0, ___eventData1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___eventCount0, ___eventData1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___eventCount0, ___eventData1);
							else
								GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___eventCount0, ___eventData1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventCount0, ___eventData1);
							else
								VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventCount0, ___eventData1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___eventCount0, ___eventData1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___eventCount0, ___eventData1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___eventCount0, ___eventData1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___eventCount0, ___eventData1);
						else
							GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___eventCount0, ___eventData1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventCount0, ___eventData1);
						else
							VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventCount0, ___eventData1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___eventCount0, ___eventData1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeEventCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NativeEventCallback_BeginInvoke_m1567248734 (NativeEventCallback_t83445637 * __this, int32_t ___eventCount0, intptr_t ___eventData1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeEventCallback_BeginInvoke_m1567248734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___eventCount0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___eventData1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngineInternal.Input.NativeEventCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NativeEventCallback_EndInvoke_m975817557 (NativeEventCallback_t83445637 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
<<<<<<< HEAD
=======
// Conversion methods for marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_pinvoke(const NativeInputDeviceInfo_t3032009285& unmarshaled, NativeInputDeviceInfo_t3032009285_marshaled_pinvoke& marshaled)
{
	marshaled.___deviceId_0 = unmarshaled.get_deviceId_0();
	marshaled.___deviceDescriptor_1 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceDescriptor_1());
}
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_pinvoke_back(const NativeInputDeviceInfo_t3032009285_marshaled_pinvoke& marshaled, NativeInputDeviceInfo_t3032009285& unmarshaled)
{
	int32_t unmarshaled_deviceId_temp_0 = 0;
	unmarshaled_deviceId_temp_0 = marshaled.___deviceId_0;
	unmarshaled.set_deviceId_0(unmarshaled_deviceId_temp_0);
	unmarshaled.set_deviceDescriptor_1(il2cpp_codegen_marshal_string_result(marshaled.___deviceDescriptor_1));
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_pinvoke_cleanup(NativeInputDeviceInfo_t3032009285_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___deviceDescriptor_1);
	marshaled.___deviceDescriptor_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_com(const NativeInputDeviceInfo_t3032009285& unmarshaled, NativeInputDeviceInfo_t3032009285_marshaled_com& marshaled)
{
	marshaled.___deviceId_0 = unmarshaled.get_deviceId_0();
	marshaled.___deviceDescriptor_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceDescriptor_1());
}
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_com_back(const NativeInputDeviceInfo_t3032009285_marshaled_com& marshaled, NativeInputDeviceInfo_t3032009285& unmarshaled)
{
	int32_t unmarshaled_deviceId_temp_0 = 0;
	unmarshaled_deviceId_temp_0 = marshaled.___deviceId_0;
	unmarshaled.set_deviceId_0(unmarshaled_deviceId_temp_0);
	unmarshaled.set_deviceDescriptor_1(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceDescriptor_1));
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t3032009285_marshal_com_cleanup(NativeInputDeviceInfo_t3032009285_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceDescriptor_1);
	marshaled.___deviceDescriptor_1 = NULL;
}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
<<<<<<< HEAD
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem__cctor_m062AB23A2EB8CDEC8BEB378C4588038BD1614A11 (const RuntimeMethod* method)
{
	{
		NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362((bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyBeforeUpdate_m317D534DBDD42915CE638051B87E48B76ED28574 (int32_t ___updateType0, const RuntimeMethod* method)
=======
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem__cctor_m2718866957 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		NativeInputSystem_set_hasDeviceDiscoveredCallback_m4093248293(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyUpdate_m2959317749 (RuntimeObject * __this /* static, unused */, int32_t ___updateType0, const RuntimeMethod* method)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
<<<<<<< HEAD
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyBeforeUpdate_m317D534DBDD42915CE638051B87E48B76ED28574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_onBeforeUpdate_1();
		V_0 = L_0;
		Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * L_1 = V_0;
=======
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyUpdate_m2959317749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeUpdateCallback_t2379345390 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t922881982_il2cpp_TypeInfo_var);
		NativeUpdateCallback_t2379345390 * L_0 = ((NativeInputSystem_t922881982_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t922881982_il2cpp_TypeInfo_var))->get_onUpdate_0();
		V_0 = L_0;
		NativeUpdateCallback_t2379345390 * L_1 = V_0;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
<<<<<<< HEAD
		Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * L_2 = V_0;
		int32_t L_3 = ___updateType0;
		NullCheck(L_2);
		Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0(L_2, L_3, /*hidden argument*/Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0_RuntimeMethod_var);
=======
		NativeUpdateCallback_t2379345390 * L_2 = V_0;
		int32_t L_3 = ___updateType0;
		NullCheck(L_2);
		NativeUpdateCallback_Invoke_m2703513789(L_2, L_3, /*hidden argument*/NULL);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}

IL_0014:
	{
		return;
	}
}
<<<<<<< HEAD
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyUpdate_m77B02AB50FCFA5649D7203E76163C757EE1DA3CA (int32_t ___updateType0, int32_t ___eventCount1, intptr_t ___eventData2, const RuntimeMethod* method)
=======
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyEvents(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyEvents_m2206082579 (RuntimeObject * __this /* static, unused */, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
<<<<<<< HEAD
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyUpdate_m77B02AB50FCFA5649D7203E76163C757EE1DA3CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_onUpdate_0();
		V_0 = L_0;
		Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * L_2 = V_0;
		int32_t L_3 = ___updateType0;
		int32_t L_4 = ___eventCount1;
		intptr_t L_5 = ___eventData2;
		NullCheck(L_2);
		Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A(L_2, L_3, L_4, (intptr_t)L_5, /*hidden argument*/Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A_RuntimeMethod_var);
	}

IL_0016:
=======
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyEvents_m2206082579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeEventCallback_t83445637 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t922881982_il2cpp_TypeInfo_var);
		NativeEventCallback_t83445637 * L_0 = ((NativeInputSystem_t922881982_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t922881982_il2cpp_TypeInfo_var))->get_onEvents_1();
		V_0 = L_0;
		NativeEventCallback_t83445637 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		NativeEventCallback_t83445637 * L_2 = V_0;
		int32_t L_3 = ___eventCount0;
		intptr_t L_4 = ___eventData1;
		NullCheck(L_2);
		NativeEventCallback_Invoke_m3430740557(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0015:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	{
		return;
	}
}
<<<<<<< HEAD
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyDeviceDiscovered_m48C3818DDCFB1A2C0530B6CE1C78743ABA4614B0 (int32_t ___deviceId0, String_t* ___deviceDescriptor1, const RuntimeMethod* method)
=======
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyDeviceDiscovered_m207573541 (RuntimeObject * __this /* static, unused */, NativeInputDeviceInfo_t3032009285  ___deviceInfo0, const RuntimeMethod* method)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
<<<<<<< HEAD
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyDeviceDiscovered_m48C3818DDCFB1A2C0530B6CE1C78743ABA4614B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_s_OnDeviceDiscoveredCallback_2();
		V_0 = L_0;
		Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * L_2 = V_0;
		int32_t L_3 = ___deviceId0;
		String_t* L_4 = ___deviceDescriptor1;
		NullCheck(L_2);
		Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489(L_2, L_3, L_4, /*hidden argument*/Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489_RuntimeMethod_var);
	}

IL_0015:
=======
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyDeviceDiscovered_m207573541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeDeviceDiscoveredCallback_t3494240628 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t922881982_il2cpp_TypeInfo_var);
		NativeDeviceDiscoveredCallback_t3494240628 * L_0 = ((NativeInputSystem_t922881982_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t922881982_il2cpp_TypeInfo_var))->get_s_OnDeviceDiscoveredCallback_2();
		V_0 = L_0;
		NativeDeviceDiscoveredCallback_t3494240628 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NativeDeviceDiscoveredCallback_t3494240628 * L_2 = V_0;
		NativeInputDeviceInfo_t3032009285  L_3 = ___deviceInfo0;
		NullCheck(L_2);
		NativeDeviceDiscoveredCallback_Invoke_m2547691835(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
<<<<<<< HEAD
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362 (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362_ftn) (bool);
	static NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)");
=======
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_m4093248293 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NativeInputSystem_set_hasDeviceDiscoveredCallback_m4093248293_ftn) (bool);
	static NativeInputSystem_set_hasDeviceDiscoveredCallback_m4093248293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_set_hasDeviceDiscoveredCallback_m4093248293_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)");
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	_il2cpp_icall_func(___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
=======
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NativeUpdateCallback_t2379345390 (NativeUpdateCallback_t2379345390 * __this, int32_t ___updateType0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___updateType0);

}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeUpdateCallback__ctor_m1482494726 (NativeUpdateCallback_t2379345390 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C" IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_m2703513789 (NativeUpdateCallback_t2379345390 * __this, int32_t ___updateType0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___updateType0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___updateType0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___updateType0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___updateType0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___updateType0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___updateType0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___updateType0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___updateType0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___updateType0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___updateType0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___updateType0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___updateType0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___updateType0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___updateType0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NativeUpdateCallback_BeginInvoke_m1903744170 (NativeUpdateCallback_t2379345390 * __this, int32_t ___updateType0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeUpdateCallback_BeginInvoke_m1903744170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(NativeInputUpdateType_t3942820534_il2cpp_TypeInfo_var, &___updateType0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NativeUpdateCallback_EndInvoke_m4221164378 (NativeUpdateCallback_t2379345390 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
