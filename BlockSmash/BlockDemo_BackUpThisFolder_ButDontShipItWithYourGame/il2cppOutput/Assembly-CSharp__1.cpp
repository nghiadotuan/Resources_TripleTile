#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<System.String,UnityEngine.GameObject>
struct Action_2_t56F759D78B099668AA921A950BDB629BA2687FF0;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t26D5965FC9C07EF9DA22ADFD28E0A82DDF6E5D84;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct Dictionary_2_t156A081D1DC9E251FCA981869B488CD5B3C38793;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Object>
struct Dictionary_2_t3B4D53CD8F19D3A38C1074A21661621001D8E725;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct Dictionary_2_t1B889C8974E23749761B6E66C7B577724C36BBC0;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct KeyCollection_tE7B0182DD48D1BF7A3C19C3F36D4AACCDBCBD08D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Queue_1_tA213608449ED687B5C90C09B661D2ED655FC602F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct ValueCollection_t30F380FCCD82AD1214E4ABF636AEF8824749F288;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>[]
struct EntryU5BU5D_tC80758524C07377CBE2EE7FF0D3E89FC6CF44E0A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AddressableAssets.AddressablesImpl
struct AddressablesImpl_tD285C19BAF4079094A9A8FE5007ED1C57C256337;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.AddressableAssets.AssetReference
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
struct IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C;
// UnityEngine.AddressableAssets.InvalidKeyException
struct InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AddressableAssets.AddressablesManager/<>c__DisplayClass94_0
struct U3CU3Ec__DisplayClass94_0_tF42831B40383560CDC61D8BDA258114D7E7C45ED;
// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91
struct U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104;
// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92
struct U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051;
// UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90
struct U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8;
// UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral12B36EA603653F7E6A16EAB4B9703FB35E3202FF;
IL2CPP_EXTERN_C String_t* _stringLiteral22F1DAE75468952202771544CD07DAE043E62158;
IL2CPP_EXTERN_C String_t* _stringLiteral378FC6DE584122F2FB63E41180C8BB3A3C9B85E8;
IL2CPP_EXTERN_C String_t* _stringLiteral3D23962BCECBC7090F8DD414F6A9DFC207C993C5;
IL2CPP_EXTERN_C String_t* _stringLiteral40B0EA695F4F7DCC037C70EAFA20F4BB81D50947;
IL2CPP_EXTERN_C String_t* _stringLiteral47ABFB62479BB68FC7E893D839BA40B661A7D4E7;
IL2CPP_EXTERN_C String_t* _stringLiteralCEED26B96E1A07711FF9E495B874464670C2D9A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD3EB4E1B76720AB6F2DFBA61750C3381A0D71B4E;
IL2CPP_EXTERN_C String_t* _stringLiteralF62FADD1F4D9117BEDE9B11A8726F8E5B757206E;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF4E3C5691B2B212E7C0C8A1DC07150E5025A91;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationAwaiter__ctor_m0D6616F270929A6243A9BE62123472990697912A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mDCCA6018E81E14729CB151B2FBDC8A7E9BE7708C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3D98CB03DCCA1D3DB8DD0D5A99F6786869CD573C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInstantiateCoroutineU3Ed__91_System_Collections_IEnumerator_Reset_mBFDB652E61796EDC8459447A6DBA12A4E212F616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInstantiateCoroutineU3Ed__92_System_Collections_IEnumerator_Reset_mADC084EDB0B4BBAAE6BA97D46D942C16F40E444D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnCompletedU3Eb__0_m707DC240A206E867D7232A08AE224FD195989194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnloadSceneCoroutineU3Ed__90_System_Collections_IEnumerator_Reset_m3A03B46E864AD300931F15C1F3146519B02F544F_RuntimeMethod_var;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com;;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct Dictionary_2_t1B889C8974E23749761B6E66C7B577724C36BBC0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC80758524C07377CBE2EE7FF0D3E89FC6CF44E0A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE7B0182DD48D1BF7A3C19C3F36D4AACCDBCBD08D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t30F380FCCD82AD1214E4ABF636AEF8824749F288* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// UnityEngine.AddressableAssets.AddressablesManager
struct AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70  : public RuntimeObject
{
};

// UnityEngine.AddressableAssets.AsyncOperationExtensions
struct AsyncOperationExtensions_t3597860C5EB18ADF0B18B89FD9773B5E4DCFB2A3  : public RuntimeObject
{
};

// UnityEngine.AddressableAssets.Exceptions
struct Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.AddressableAssets.AddressablesManager/<>c__DisplayClass94_0
struct U3CU3Ec__DisplayClass94_0_tF42831B40383560CDC61D8BDA258114D7E7C45ED  : public RuntimeObject
{
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.AddressableAssets.AddressablesManager/<>c__DisplayClass94_0::location
	RuntimeObject* ___location_0;
};

// UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955  : public RuntimeObject
{
	// System.Action UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>
struct AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Nullable`1<UnityEngine.AddressableAssets.Addressables/MergeMode>
struct Nullable_1_tCC09502196D534EF33BEAF95FE3B5A2DA6E68C60 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AddressableAssets.AssetReference
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740  : public RuntimeObject
{
	// System.String UnityEngine.AddressableAssets.AssetReference::m_AssetGUID
	String_t* ___m_AssetGUID_0;
	// System.String UnityEngine.AddressableAssets.AssetReference::m_SubObjectName
	String_t* ___m_SubObjectName_1;
	// System.String UnityEngine.AddressableAssets.AssetReference::m_SubObjectType
	String_t* ___m_SubObjectType_2;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.AddressableAssets.AssetReference::m_Operation
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___m_Operation_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91
struct U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104  : public RuntimeObject
{
	// System.Int32 UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::key
	String_t* ___key_2;
	// System.Action`1<System.String> UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::onFailed
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onFailed_3;
	// UnityEngine.Transform UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_4;
	// System.Boolean UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::inWorldSpace
	bool ___inWorldSpace_5;
	// System.Boolean UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::trackHandle
	bool ___trackHandle_6;
	// System.Action`2<System.String,UnityEngine.GameObject> UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::onSucceeded
	Action_2_t56F759D78B099668AA921A950BDB629BA2687FF0* ___onSucceeded_7;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::<operation>5__2
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___U3CoperationU3E5__2_8;
};

// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92
struct U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051  : public RuntimeObject
{
	// System.Int32 UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AddressableAssets.AssetReference UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::reference
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___reference_2;
	// System.Action`1<System.String> UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::onFailed
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onFailed_3;
	// UnityEngine.Transform UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_4;
	// System.Boolean UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::inWorldSpace
	bool ___inWorldSpace_5;
	// System.Action`2<System.String,UnityEngine.GameObject> UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::onSucceeded
	Action_2_t56F759D78B099668AA921A950BDB629BA2687FF0* ___onSucceeded_6;
	// System.String UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::<key>5__2
	String_t* ___U3CkeyU3E5__2_7;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::<operation>5__3
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___U3CoperationU3E5__3_8;
};

// UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90
struct U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8  : public RuntimeObject
{
	// System.Int32 UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AddressableAssets.AssetReference UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::reference
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___reference_2;
	// System.Action`1<System.String> UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::onFailed
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onFailed_3;
	// System.Action`1<System.String> UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::onSucceeded
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onSucceeded_4;
	// System.String UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::<key>5__2
	String_t* ___U3CkeyU3E5__2_5;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::<operation>5__3
	AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 ___U3CoperationU3E5__3_6;
};

// UnityEngine.AddressableAssets.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD 
{
	// UnityEngine.AsyncOperation UnityEngine.AddressableAssets.AsyncOperationAwaiter::operation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___operation_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AddressableAssets.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_pinvoke
{
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke ___operation_0;
};
// Native definition for COM marshalling of UnityEngine.AddressableAssets.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_com
{
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com* ___operation_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AddressableAssets.InvalidKeyException
struct InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34  : public Exception_t
{
	// System.Object UnityEngine.AddressableAssets.InvalidKeyException::<Key>k__BackingField
	RuntimeObject* ___U3CKeyU3Ek__BackingField_18;
	// System.Type UnityEngine.AddressableAssets.InvalidKeyException::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_19;
	// System.Nullable`1<UnityEngine.AddressableAssets.Addressables/MergeMode> UnityEngine.AddressableAssets.InvalidKeyException::<MergeMode>k__BackingField
	Nullable_1_tCC09502196D534EF33BEAF95FE3B5A2DA6E68C60 ___U3CMergeModeU3Ek__BackingField_20;
	// UnityEngine.AddressableAssets.AddressablesImpl UnityEngine.AddressableAssets.InvalidKeyException::m_Addressables
	AddressablesImpl_tD285C19BAF4079094A9A8FE5007ED1C57C256337* ___m_Addressables_21;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,UnityEngine.GameObject>
struct Action_2_t56F759D78B099668AA921A950BDB629BA2687FF0  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>

// UnityEngine.AddressableAssets.AddressablesManager
struct AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> UnityEngine.AddressableAssets.AddressablesManager::_locations
	Dictionary_2_t156A081D1DC9E251FCA981869B488CD5B3C38793* ____locations_0;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.AddressableAssets.AddressablesManager::_noLocation
	List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* ____noLocation_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Object> UnityEngine.AddressableAssets.AddressablesManager::_assets
	Dictionary_2_t3B4D53CD8F19D3A38C1074A21661621001D8E725* ____assets_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.AddressableAssets.AddressablesManager::_scenes
	Dictionary_2_t1B889C8974E23749761B6E66C7B577724C36BBC0* ____scenes_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>> UnityEngine.AddressableAssets.AddressablesManager::_instances
	Dictionary_2_t26D5965FC9C07EF9DA22ADFD28E0A82DDF6E5D84* ____instances_4;
	// System.Collections.Generic.Queue`1<System.Collections.Generic.List`1<UnityEngine.GameObject>> UnityEngine.AddressableAssets.AddressablesManager::_instanceListPool
	Queue_1_tA213608449ED687B5C90C09B661D2ED655FC602F* ____instanceListPool_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AddressablesManager::_noInstanceList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____noInstanceList_6;
	// System.Collections.Generic.List`1<System.Object> UnityEngine.AddressableAssets.AddressablesManager::_keys
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____keys_7;
	// UnityEngine.AddressableAssets.AddressablesManager/ExceptionHandleType UnityEngine.AddressableAssets.AddressablesManager::<ExceptionHandle>k__BackingField
	int32_t ___U3CExceptionHandleU3Ek__BackingField_8;
	// System.Boolean UnityEngine.AddressableAssets.AddressablesManager::<SuppressWarningLogs>k__BackingField
	bool ___U3CSuppressWarningLogsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.AddressableAssets.AddressablesManager::<SuppressErrorLogs>k__BackingField
	bool ___U3CSuppressErrorLogsU3Ek__BackingField_10;
};

// UnityEngine.AddressableAssets.AddressablesManager

// UnityEngine.AddressableAssets.AsyncOperationExtensions

// UnityEngine.AddressableAssets.AsyncOperationExtensions

// UnityEngine.AddressableAssets.Exceptions
struct Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7_StaticFields
{
	// UnityEngine.AddressableAssets.InvalidKeyException UnityEngine.AddressableAssets.Exceptions::InvalidReference
	InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34* ___InvalidReference_13;
};

// UnityEngine.AddressableAssets.Exceptions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.AddressableAssets.AddressablesManager/<>c__DisplayClass94_0

// UnityEngine.AddressableAssets.AddressablesManager/<>c__DisplayClass94_0

// UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0

// UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// UnityEngine.AddressableAssets.AssetReference

// UnityEngine.AddressableAssets.AssetReference

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91

// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91

// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92

// UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92

// UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90

// UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90

// UnityEngine.AddressableAssets.AsyncOperationAwaiter

// UnityEngine.AddressableAssets.AsyncOperationAwaiter

// UnityEngine.AddressableAssets.InvalidKeyException

// UnityEngine.AddressableAssets.InvalidKeyException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<System.String,UnityEngine.GameObject>

// System.Action`2<System.String,UnityEngine.GameObject>

// System.Action

// System.Action

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif

IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke& marshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_back(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com& marshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_cleanup(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com& marshaled);

// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AddressableAssets.AddressablesManager::GuardKey(UnityEngine.AddressableAssets.AssetReference,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressablesManager_GuardKey_mFD2ACE16832D4059E82C54D3784B74E971C5D480 (AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___0_reference, String_t** ___1_result, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mDCCA6018E81E14729CB151B2FBDC8A7E9BE7708C (Dictionary_2_t1B889C8974E23749761B6E66C7B577724C36BBC0* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::Remove(TKey)
inline bool Dictionary_2_Remove_m3D98CB03DCCA1D3DB8DD0D5A99F6786869CD573C (Dictionary_2_t1B889C8974E23749761B6E66C7B577724C36BBC0* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void UnityEngine.AddressableAssets.AddressablesManager::OnUnloadSceneCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>,System.String,System.Action`1<System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressablesManager_OnUnloadSceneCompleted_mA2350759DC06D0FBB314E89908B3E7F1CC15A70E (AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 ___0_handle, String_t* ___1_key, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_onSucceeded, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_onFailed, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AddressableAssets.AddressablesManager::GuardKey(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressablesManager_GuardKey_mB580974CF1B53149DBF82F17810C4D6DA90A509B (String_t* ___0_key, String_t** ___1_result, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.Addressables::InstantiateAsync(System.Object,UnityEngine.Transform,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA Addressables_InstantiateAsync_mD10FF052D569CA9E7027857932564E8630F9574E (RuntimeObject* ___0_key, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_instantiateInWorldSpace, bool ___3_trackHandle, const RuntimeMethod* method) ;
// System.Void UnityEngine.AddressableAssets.AddressablesManager::OnInstantiateCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>,System.String,System.Boolean,System.Action`2<System.String,UnityEngine.GameObject>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressablesManager_OnInstantiateCompleted_m75C0A9736B42AC612860B4613E480101E34E9A71 (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_handle, String_t* ___1_key, bool ___2_useReference, Action_2_t56F759D78B099668AA921A950BDB629BA2687FF0* ___3_onSucceeded, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_onFailed, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter::.ctor(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter__ctor_m0D6616F270929A6243A9BE62123472990697912A (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_operation, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AddressableAssets.AsyncOperationAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationAwaiter_get_IsCompleted_mD57C3ABCD14E992EBE0A86A39E2906B74C5881FD (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m05B3758C9A12095309C891258DA1AF906A53AE03 (U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_OnCompleted_m8B96333331AA261E3127155B4CBDF413309FB355 (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_GetResult_mEEE1924E85E077B08AF7570434786562E1F6C47F (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AddressableAssets.InvalidKeyException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidKeyException__ctor_mEF237FAA1A8213257158AF80BC52D1CCFF54EB94 (InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34* __this, String_t* ___0_message, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadSceneCoroutineU3Ed__90__ctor_m386CC62E6DCA0BD1021460CE7F7B6810E8A05C9B (U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadSceneCoroutineU3Ed__90_System_IDisposable_Dispose_mF41E6C6078BB35B698735F0A4CCFBE0A29C9F1C7 (U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUnloadSceneCoroutineU3Ed__90_MoveNext_m03AD1BFBC80AA32306E2037AD5C17F034816C1AE (U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDCCA6018E81E14729CB151B2FBDC8A7E9BE7708C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D98CB03DCCA1D3DB8DD0D5A99F6786869CD573C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B6_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B5_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B10_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00b2;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!GuardKey(reference, out var key))
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_3 = __this->___reference_2;
		String_t** L_4 = (&__this->___U3CkeyU3E5__2_5);
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = AddressablesManager_GuardKey_mFD2ACE16832D4059E82C54D3784B74E971C5D480(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		// onFailed?.Invoke(string.Empty);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = __this->___onFailed_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_003c;
		}
	}
	{
		goto IL_00e2;
	}

IL_003c:
	{
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B6_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B6_0, L_8, NULL);
		goto IL_00e2;
	}

IL_004b:
	{
		// if (!_scenes.ContainsKey(key))
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		Dictionary_2_t1B889C8974E23749761B6E66C7B577724C36BBC0* L_9 = ((AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_StaticFields*)il2cpp_codegen_static_fields_for(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var))->____scenes_3;
		String_t* L_10 = __this->___U3CkeyU3E5__2_5;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_mDCCA6018E81E14729CB151B2FBDC8A7E9BE7708C(L_9, L_10, Dictionary_2_ContainsKey_mDCCA6018E81E14729CB151B2FBDC8A7E9BE7708C_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0076;
		}
	}
	{
		// onFailed?.Invoke(key);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_12 = __this->___onFailed_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_13 = L_12;
		G_B9_0 = L_13;
		if (L_13)
		{
			G_B10_0 = L_13;
			goto IL_0069;
		}
	}
	{
		goto IL_00e2;
	}

IL_0069:
	{
		String_t* L_14 = __this->___U3CkeyU3E5__2_5;
		NullCheck(G_B10_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B10_0, L_14, NULL);
		goto IL_00e2;
	}

IL_0076:
	{
		// _scenes.Remove(key);
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		Dictionary_2_t1B889C8974E23749761B6E66C7B577724C36BBC0* L_15 = ((AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_StaticFields*)il2cpp_codegen_static_fields_for(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var))->____scenes_3;
		String_t* L_16 = __this->___U3CkeyU3E5__2_5;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_Remove_m3D98CB03DCCA1D3DB8DD0D5A99F6786869CD573C(L_15, L_16, Dictionary_2_Remove_m3D98CB03DCCA1D3DB8DD0D5A99F6786869CD573C_RuntimeMethod_var);
		// var operation = reference.UnLoadScene();
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_18 = __this->___reference_2;
		NullCheck(L_18);
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_19;
		L_19 = VirtualFuncInvoker0< AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 >::Invoke(14 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.AddressableAssets.AssetReference::UnLoadScene() */, L_18);
		__this->___U3CoperationU3E5__3_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CoperationU3E5__3_6))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CoperationU3E5__3_6))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return operation;
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_20 = __this->___U3CoperationU3E5__3_6;
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_21 = L_20;
		RuntimeObject* L_22 = Box(AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5_il2cpp_TypeInfo_var, &L_21);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnUnloadSceneCompleted(operation, key, onSucceeded, onFailed);
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_23 = __this->___U3CoperationU3E5__3_6;
		String_t* L_24 = __this->___U3CkeyU3E5__2_5;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_25 = __this->___onSucceeded_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_26 = __this->___onFailed_3;
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		AddressablesManager_OnUnloadSceneCompleted_mA2350759DC06D0FBB314E89908B3E7F1CC15A70E(L_23, L_24, L_25, L_26, NULL);
		// }
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5* L_27 = (&__this->___U3CoperationU3E5__3_6);
		il2cpp_codegen_initobj(L_27, sizeof(AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5));
	}

IL_00e2:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUnloadSceneCoroutineU3Ed__90_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m284F39761891717F3C5A05C3BF9C0015A2300AF1 (U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadSceneCoroutineU3Ed__90_System_Collections_IEnumerator_Reset_m3A03B46E864AD300931F15C1F3146519B02F544F (U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnloadSceneCoroutineU3Ed__90_System_Collections_IEnumerator_Reset_m3A03B46E864AD300931F15C1F3146519B02F544F_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.AddressableAssets.AddressablesManager/<UnloadSceneCoroutine>d__90::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUnloadSceneCoroutineU3Ed__90_System_Collections_IEnumerator_get_Current_m3359B8997116C9450B50E4AA38A53C7AC2A11FE6 (U3CUnloadSceneCoroutineU3Ed__90_t9B4AF15C3BF6CE066009C84A5DF24DB33717FCF8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateCoroutineU3Ed__91__ctor_m2849A2BED4F089D884732CCDE61652D71206D582 (U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateCoroutineU3Ed__91_System_IDisposable_Dispose_mC6A4384F77A14C512ABBB9C662D1A0B7101A8E1C (U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInstantiateCoroutineU3Ed__91_MoveNext_mAF58407D960043AD456F22AE47FE26B9D28BF6EF (U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B6_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0080;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!GuardKey(key, out key))
		String_t* L_3 = __this->___key_2;
		String_t** L_4 = (&__this->___key_2);
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = AddressablesManager_GuardKey_mB580974CF1B53149DBF82F17810C4D6DA90A509B(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		// onFailed?.Invoke(key);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = __this->___onFailed_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0036;
		}
	}
	{
		goto IL_00b1;
	}

IL_0036:
	{
		String_t* L_8 = __this->___key_2;
		NullCheck(G_B6_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B6_0, L_8, NULL);
		goto IL_00b1;
	}

IL_0043:
	{
		// var operation = Addressables.InstantiateAsync(key, parent, inWorldSpace, trackHandle);
		String_t* L_9 = __this->___key_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___parent_4;
		bool L_11 = __this->___inWorldSpace_5;
		bool L_12 = __this->___trackHandle_6;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_13;
		L_13 = Addressables_InstantiateAsync_mD10FF052D569CA9E7027857932564E8630F9574E(L_9, L_10, L_11, L_12, NULL);
		__this->___U3CoperationU3E5__2_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CoperationU3E5__2_8))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CoperationU3E5__2_8))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return operation;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_14 = __this->___U3CoperationU3E5__2_8;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_15 = L_14;
		RuntimeObject* L_16 = Box(AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA_il2cpp_TypeInfo_var, &L_15);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0080:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnInstantiateCompleted(operation, key, false, onSucceeded, onFailed);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_17 = __this->___U3CoperationU3E5__2_8;
		String_t* L_18 = __this->___key_2;
		Action_2_t56F759D78B099668AA921A950BDB629BA2687FF0* L_19 = __this->___onSucceeded_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_20 = __this->___onFailed_3;
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		AddressablesManager_OnInstantiateCompleted_m75C0A9736B42AC612860B4613E480101E34E9A71(L_17, L_18, (bool)0, L_19, L_20, NULL);
		// }
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* L_21 = (&__this->___U3CoperationU3E5__2_8);
		il2cpp_codegen_initobj(L_21, sizeof(AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA));
	}

IL_00b1:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateCoroutineU3Ed__91_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m756BC4F8ED6080E72B2C8A21435D817946854B42 (U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateCoroutineU3Ed__91_System_Collections_IEnumerator_Reset_mBFDB652E61796EDC8459447A6DBA12A4E212F616 (U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstantiateCoroutineU3Ed__91_System_Collections_IEnumerator_Reset_mBFDB652E61796EDC8459447A6DBA12A4E212F616_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__91::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateCoroutineU3Ed__91_System_Collections_IEnumerator_get_Current_m4A75EE3220B7E463AF3746746CD02A60D6F73054 (U3CInstantiateCoroutineU3Ed__91_tBDDF821603802902C90720281D51B56D97A6F104* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateCoroutineU3Ed__92__ctor_mB78ACFF5B94DD8760958B5F9D23B793481DAD5CD (U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateCoroutineU3Ed__92_System_IDisposable_Dispose_m6707D210F67B445E4099F6760F2D600936424BEB (U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInstantiateCoroutineU3Ed__92_MoveNext_mCCE997233ACC33034F193E3B27F25D7D2116BE1A (U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B6_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!GuardKey(reference, out var key))
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_3 = __this->___reference_2;
		String_t** L_4 = (&__this->___U3CkeyU3E5__2_7);
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = AddressablesManager_GuardKey_mFD2ACE16832D4059E82C54D3784B74E971C5D480(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// onFailed?.Invoke(string.Empty);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = __this->___onFailed_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0036;
		}
	}
	{
		goto IL_00aa;
	}

IL_0036:
	{
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B6_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B6_0, L_8, NULL);
		goto IL_00aa;
	}

IL_0042:
	{
		// var operation = reference.InstantiateAsync(parent, inWorldSpace);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_9 = __this->___reference_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___parent_4;
		bool L_11 = __this->___inWorldSpace_5;
		NullCheck(L_9);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_12;
		L_12 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.AssetReference::InstantiateAsync(UnityEngine.Transform,System.Boolean) */, L_9, L_10, L_11);
		__this->___U3CoperationU3E5__3_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CoperationU3E5__3_8))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CoperationU3E5__3_8))->___m_LocationName_2), (void*)NULL);
		#endif
		// yield return operation;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_13 = __this->___U3CoperationU3E5__3_8;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_14 = L_13;
		RuntimeObject* L_15 = Box(AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA_il2cpp_TypeInfo_var, &L_14);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0079:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnInstantiateCompleted(operation, key, true, onSucceeded, onFailed);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_16 = __this->___U3CoperationU3E5__3_8;
		String_t* L_17 = __this->___U3CkeyU3E5__2_7;
		Action_2_t56F759D78B099668AA921A950BDB629BA2687FF0* L_18 = __this->___onSucceeded_6;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_19 = __this->___onFailed_3;
		il2cpp_codegen_runtime_class_init_inline(AddressablesManager_t8B06562D7C524BD601C79644F5DA454619116C70_il2cpp_TypeInfo_var);
		AddressablesManager_OnInstantiateCompleted_m75C0A9736B42AC612860B4613E480101E34E9A71(L_16, L_17, (bool)1, L_18, L_19, NULL);
		// }
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* L_20 = (&__this->___U3CoperationU3E5__3_8);
		il2cpp_codegen_initobj(L_20, sizeof(AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA));
	}

IL_00aa:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateCoroutineU3Ed__92_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE07BCBCA5991FFBD854099DBD1A42999F1D17113 (U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateCoroutineU3Ed__92_System_Collections_IEnumerator_Reset_mADC084EDB0B4BBAAE6BA97D46D942C16F40E444D (U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstantiateCoroutineU3Ed__92_System_Collections_IEnumerator_Reset_mADC084EDB0B4BBAAE6BA97D46D942C16F40E444D_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.AddressableAssets.AddressablesManager/<InstantiateCoroutine>d__92::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateCoroutineU3Ed__92_System_Collections_IEnumerator_get_Current_mBDCDC5A2973B9476A1E3937277D28515E009B5E7 (U3CInstantiateCoroutineU3Ed__92_t880F10364DCE254EA589712BE7D4747D0D8F0051* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AddressableAssets.AddressablesManager/<>c__DisplayClass94_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass94_0__ctor_m2DC2786CBE1B3A702F1ADB62796FB3A56A676E36 (U3CU3Ec__DisplayClass94_0_tF42831B40383560CDC61D8BDA258114D7E7C45ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.AddressablesManager/<>c__DisplayClass94_0::<OnLoadLocationsCompleted>b__0(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass94_0_U3COnLoadLocationsCompletedU3Eb__0_mF082071356805100D65F7CAE4099115FF128AAFF (U3CU3Ec__DisplayClass94_0_tF42831B40383560CDC61D8BDA258114D7E7C45ED* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var index = list.FindIndex(x => string.Equals(x.InternalId, location.InternalId));
		RuntimeObject* L_0 = ___0_x;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_InternalId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = __this->___location_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_InternalId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AddressableAssets.AsyncOperationAwaiter UnityEngine.AddressableAssets.AsyncOperationExtensions::GetAwaiter(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD AsyncOperationExtensions_GetAwaiter_m433E41D0FAD0E8E1A0EF32ED9097D77B18FB4515 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_operation, const RuntimeMethod* method) 
{
	{
		// return new AsyncOperationAwaiter(operation);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = ___0_operation;
		AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		AsyncOperationAwaiter__ctor_m0D6616F270929A6243A9BE62123472990697912A((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AddressableAssets.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshal_pinvoke(const AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD& unmarshaled, AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___operation_0 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(*unmarshaled.___operation_0, marshaled.___operation_0);
	}
}
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshal_pinvoke_back(const AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_pinvoke& marshaled, AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___operation_0 = (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)il2cpp_codegen_object_new(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___operation_0), (void*)(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)il2cpp_codegen_object_new(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var));
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(marshaled.___operation_0, *unmarshaled.___operation_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AddressableAssets.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshal_pinvoke_cleanup(AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_pinvoke& marshaled)
{
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(marshaled.___operation_0);
}


// Conversion methods for marshalling of: UnityEngine.AddressableAssets.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshal_com(const AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD& unmarshaled, AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_com& marshaled)
{
	if (unmarshaled.___operation_0 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com(*unmarshaled.___operation_0, *marshaled.___operation_0);
	}
}
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshal_com_back(const AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_com& marshaled, AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD& unmarshaled)
{
	if (unmarshaled.___operation_0 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_back(*marshaled.___operation_0, *unmarshaled.___operation_0);
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.AddressableAssets.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshal_com_cleanup(AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD_marshaled_com& marshaled)
{
	if (marshaled.___operation_0 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_cleanup(*marshaled.___operation_0);
	}
}
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter::.ctor(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter__ctor_m0D6616F270929A6243A9BE62123472990697912A (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_operation, const RuntimeMethod* method) 
{
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* G_B2_0 = NULL;
	AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* G_B2_1 = NULL;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* G_B1_0 = NULL;
	AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* G_B1_1 = NULL;
	{
		// this.operation = operation ?? throw new ArgumentNullException(nameof(operation));
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = ___0_operation;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47ABFB62479BB68FC7E893D839BA40B661A7D4E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperationAwaiter__ctor_m0D6616F270929A6243A9BE62123472990697912A_RuntimeMethod_var)));
	}

IL_0011:
	{
		G_B2_1->___operation_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___operation_0), (void*)G_B2_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter__ctor_m0D6616F270929A6243A9BE62123472990697912A_AdjustorThunk (RuntimeObject* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_operation, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD*>(__this + _offset);
	AsyncOperationAwaiter__ctor_m0D6616F270929A6243A9BE62123472990697912A(_thisAdjusted, ___0_operation, method);
}
// System.Boolean UnityEngine.AddressableAssets.AsyncOperationAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationAwaiter_get_IsCompleted_mD57C3ABCD14E992EBE0A86A39E2906B74C5881FD (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, const RuntimeMethod* method) 
{
	{
		// => this.operation.isDone;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = __this->___operation_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationAwaiter_get_IsCompleted_mD57C3ABCD14E992EBE0A86A39E2906B74C5881FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationAwaiter_get_IsCompleted_mD57C3ABCD14E992EBE0A86A39E2906B74C5881FD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_OnCompleted_m8B96333331AA261E3127155B4CBDF413309FB355 (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnCompletedU3Eb__0_m707DC240A206E867D7232A08AE224FD195989194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955* L_0 = (U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m05B3758C9A12095309C891258DA1AF906A53AE03(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___continuation_0), (void*)L_2);
		// => this.operation.completed += _ => continuation?.Invoke();
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = __this->___operation_0;
		U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955* L_4 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_5 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnCompletedU3Eb__0_m707DC240A206E867D7232A08AE224FD195989194_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_3, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_OnCompleted_m8B96333331AA261E3127155B4CBDF413309FB355_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD*>(__this + _offset);
	AsyncOperationAwaiter_OnCompleted_m8B96333331AA261E3127155B4CBDF413309FB355(_thisAdjusted, ___0_continuation, method);
}
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_GetResult_mEEE1924E85E077B08AF7570434786562E1F6C47F (AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* __this, const RuntimeMethod* method) 
{
	{
		// public void GetResult() { }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_GetResult_mEEE1924E85E077B08AF7570434786562E1F6C47F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tA34779FF01A5E588D1E1E96A31FCE1C6C01F49AD*>(__this + _offset);
	AsyncOperationAwaiter_GetResult_mEEE1924E85E077B08AF7570434786562E1F6C47F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m05B3758C9A12095309C891258DA1AF906A53AE03 (U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.AsyncOperationAwaiter/<>c__DisplayClass4_0::<OnCompleted>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnCompletedU3Eb__0_m707DC240A206E867D7232A08AE224FD195989194 (U3CU3Ec__DisplayClass4_0_tFFFC5C48DD2A9E23E97B5AAEFB14DBC33AF59955* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0__, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// => this.operation.completed += _ => continuation?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.AddressableAssets.Exceptions::CannotFindAssetByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_CannotFindAssetByKey_mE0CCAF18E076872123D68E61A2CE377DDFB82F57 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378FC6DE584122F2FB63E41180C8BB3A3C9B85E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_cannotFindAssetByKey, key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral378FC6DE584122F2FB63E41180C8BB3A3C9B85E8, L_0, NULL);
		return L_1;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::NoInstanceKeyInitialized(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_NoInstanceKeyInitialized_mB5F4ED7169E4656E5B8666473DFFCC2B89D88AA3 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D23962BCECBC7090F8DD414F6A9DFC207C993C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_noInstanceKeyInitialized, key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3D23962BCECBC7090F8DD414F6A9DFC207C993C5, L_0, NULL);
		return L_1;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::NoInstanceReferenceInitialized(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_NoInstanceReferenceInitialized_m636500B61047547146C06A769174C38D7891B701 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D23962BCECBC7090F8DD414F6A9DFC207C993C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_noInstanceReferenceInitialized, key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3D23962BCECBC7090F8DD414F6A9DFC207C993C5, L_0, NULL);
		return L_1;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::NoSceneKeyLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_NoSceneKeyLoaded_m4502C4C6FB142B4EB6B063E3FD82736765217224 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF62FADD1F4D9117BEDE9B11A8726F8E5B757206E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_noSceneKeyLoaded, key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF62FADD1F4D9117BEDE9B11A8726F8E5B757206E, L_0, NULL);
		return L_1;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::NoSceneReferenceLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_NoSceneReferenceLoaded_m36793C8324E14ECF2AC706F9F08DDF619093CDCD (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F1DAE75468952202771544CD07DAE043E62158);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_noSceneReferenceLoaded, key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral22F1DAE75468952202771544CD07DAE043E62158, L_0, NULL);
		return L_1;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::AssetKeyExist(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_AssetKeyExist_m50E3D4F1E68A136BE1F1586D0CC94E2609F4C722 (Type_t* ___0_type, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B0EA695F4F7DCC037C70EAFA20F4BB81D50947);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_assetKeyExist, type, key);
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_key;
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral40B0EA695F4F7DCC037C70EAFA20F4BB81D50947, L_0, L_1, NULL);
		return L_2;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::AssetReferenceExist(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_AssetReferenceExist_m981F9A3BA3E6AB177F16BF12E37BFD9DF8B09D5E (Type_t* ___0_type, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3EB4E1B76720AB6F2DFBA61750C3381A0D71B4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_assetReferenceExist, type, key);
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_key;
		String_t* L_2;
		L_2 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD3EB4E1B76720AB6F2DFBA61750C3381A0D71B4E, L_0, L_1, NULL);
		return L_2;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::CannotInstantiateKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_CannotInstantiateKey_mBD9926F93DC55D9338F1786C490F91A6D2DD76E0 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEED26B96E1A07711FF9E495B874464670C2D9A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_cannotInstantiateKey, key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCEED26B96E1A07711FF9E495B874464670C2D9A3, L_0, NULL);
		return L_1;
	}
}
// System.String UnityEngine.AddressableAssets.Exceptions::CannotInstantiateReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exceptions_CannotInstantiateReference_m76409C84BA7B5442159FB20254D42ED22C0721ED (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B36EA603653F7E6A16EAB4B9703FB35E3202FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => string.Format(_cannotInstantiateReference, key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral12B36EA603653F7E6A16EAB4B9703FB35E3202FF, L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.AddressableAssets.Exceptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exceptions__cctor_mEF07B4BC4D12280A0C40B693EC77AAA20766D823 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF4E3C5691B2B212E7C0C8A1DC07150E5025A91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly InvalidKeyException InvalidReference = new InvalidKeyException("Reference is invalid.");
		InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34* L_0 = (InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34*)il2cpp_codegen_object_new(InvalidKeyException_tE26B29187C911F23C03F8CF4A5E61F7F899C7A34_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvalidKeyException__ctor_mEF237FAA1A8213257158AF80BC52D1CCFF54EB94(L_0, _stringLiteralFFF4E3C5691B2B212E7C0C8A1DC07150E5025A91, NULL);
		((Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7_StaticFields*)il2cpp_codegen_static_fields_for(Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7_il2cpp_TypeInfo_var))->___InvalidReference_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7_StaticFields*)il2cpp_codegen_static_fields_for(Exceptions_t76F662942DDC45D2EEB7C0F4E9D3DAE20DD1F5F7_il2cpp_TypeInfo_var))->___InvalidReference_13), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
