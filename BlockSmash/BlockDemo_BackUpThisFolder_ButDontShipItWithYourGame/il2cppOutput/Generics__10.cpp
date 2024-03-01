#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// Cysharp.Threading.Tasks.ITriggerHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ITriggerHandler_1_t53BCC826B29B27388A8A63C9E80F17313AB22E2C;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757;
// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B;
// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
// Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithoutCurrentEnumerable_t61691720F7363FB52D0166233D6F1CDEC9A12368;
// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithoutCurrentEnumerable_tA165573F50CE7FD8626E075AE98BC04DE9B29888;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004  : public RuntimeObject
{
};

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithoutCurrentEnumerable_t61691720F7363FB52D0166233D6F1CDEC9A12368  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<T> Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable::parent
	AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733* ___parent_0;
};

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithoutCurrentEnumerable_tA165573F50CE7FD8626E075AE98BC04DE9B29888  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1<T> Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/WithoutCurrentEnumerable::parent
	ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* ___parent_0;
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

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// Cysharp.Threading.Tasks.TriggerEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0 
{
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.TriggerEvent`1::head
	RuntimeObject* ___head_0;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.TriggerEvent`1::iteratingHead
	RuntimeObject* ___iteratingHead_1;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.TriggerEvent`1::iteratingNode
	RuntimeObject* ___iteratingNode_2;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	bool ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;

// System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF;

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;

// System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0;

// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733 : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9 : public RuntimeObject {};

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F;

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5;

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2;

// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
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

// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean> Cysharp.Threading.Tasks.MoveNextSource::completionSource
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource_0;
};

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Enumerator_t52AB038CB588CDE841350C02AA5D28DAAA6DBA60 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Enumerator_t2264BA8CF3D7072C596172D20E9E9AB2BF7CF0BE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E : public RuntimeObject {};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D : public RuntimeObject {};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234 : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D;

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2;

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1;

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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072 : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757 : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c<T1,T2,T3,T4,T5,T6,T7> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9
	U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9__2_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_0_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9__2_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_1_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9__2_2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_2_3;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9__2_3
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_3_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9__2_4
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_4_5;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9__2_5
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_5_6;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c::<>9__2_6
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_6_7;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c<T1,T2,T3,T4,T5,T6,T7,T8> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9
	U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_0_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_1_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_2_3;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_3
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_3_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_4
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_4_5;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_5
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_5_6;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_6
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_6_7;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c::<>9__2_7
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_7_8;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9
	U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_0_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_1_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_2_3;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_3
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_3_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_4
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_4_5;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_5
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_5_6;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_6
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_6_7;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_7
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_7_8;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c::<>9__2_8
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_8_9;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Int16

// System.Int16

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

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733_StaticFields
{
	// System.Boolean Cysharp.Threading.Tasks.AsyncReactiveProperty`1::isValueType
	bool ___isValueType_2;
};

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9_StaticFields
{
	// System.Boolean Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1::isValueType
	bool ___isValueType_3;
};

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Enumerator_t52AB038CB588CDE841350C02AA5D28DAAA6DBA60_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AsyncReactiveProperty`1/Enumerator::cancellationCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___cancellationCallback_1;
};

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Enumerator_t2264BA8CF3D7072C596172D20E9E9AB2BF7CF0BE_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/Enumerator::cancellationCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___cancellationCallback_1;
};

// Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_gshared_inline (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_item4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___4_item5, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___5_item6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___6_item7, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___7_rest, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_gshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1)
inline void ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_gshared_inline)((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)__this, ___0_item1, method);
}
// System.Void System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
inline void ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82 (ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F* __this, int32_t ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_item4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___4_item5, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___5_item6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___6_item7, /*System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___7_rest, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_gshared)((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)__this, (Il2CppFullySharedGenericAny)&___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, ___5_item6, ___6_item7, (Il2CppFullySharedGenericStruct)___7_rest, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_item1, ___1_item2, method);
}
// System.Void System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
inline void ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122 (ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5* __this, int32_t ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_item4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___4_item5, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___5_item6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___6_item7, /*System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___7_rest, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_gshared)((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)__this, (Il2CppFullySharedGenericAny)&___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, ___5_item6, ___6_item7, (Il2CppFullySharedGenericStruct)___7_rest, method);
}
// System.Void System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1,T2,T3)
inline void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_gshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_item1, ___1_item2, ___2_item3, method);
}
// System.Void System.ValueTuple`8<System.Int32,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
inline void ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE (ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2* __this, int32_t ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_item4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___4_item5, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___5_item6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___6_item7, /*System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___7_rest, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_gshared)((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)__this, (Il2CppFullySharedGenericAny)&___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, ___5_item6, ___6_item7, (Il2CppFullySharedGenericStruct)___7_rest, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7__ctor_m3ACDE0767E6D4818B814193CE0FEEAF0A341AE02_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task1, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___1_task2, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___2_task3, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___3_task4, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___4_task5, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___5_task6, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___6_task7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>)
	const uint32_t SizeOf_Awaiter_tDBAA5B07F0B862812E44572BF651A8F29F3CE2C3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>)
	const uint32_t SizeOf_Awaiter_t843A5D7D728C20D15287743F138A882F846C141C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>)
	const uint32_t SizeOf_Awaiter_t349B02E6536E760D503FC1C70C646ED80988F893 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>)
	const uint32_t SizeOf_Awaiter_t5F3A8B33D927AEB0454E16B05140A8EAE6E1D02D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>)
	const uint32_t SizeOf_Awaiter_t1669B7957B5723BB08C7FD87186BDFB644A75A55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>)
	const uint32_t SizeOf_Awaiter_tF516DC90789B273E29C24909B6248B35E0C4060F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>)
	const uint32_t SizeOf_Awaiter_tCD559881F58A9D240F85415F775B1797BBBCAD81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 66));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_0 = alloca(SizeOf_Awaiter_tDBAA5B07F0B862812E44572BF651A8F29F3CE2C3);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_0;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_9 = alloca(SizeOf_Awaiter_t843A5D7D728C20D15287743F138A882F846C141C);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = alloca(SizeOf_Awaiter_t349B02E6536E760D503FC1C70C646ED80988F893);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_25 = L_18;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_27 = alloca(SizeOf_Awaiter_t5F3A8B33D927AEB0454E16B05140A8EAE6E1D02D);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_34 = L_27;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_36 = alloca(SizeOf_Awaiter_t1669B7957B5723BB08C7FD87186BDFB644A75A55);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_43 = L_36;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_45 = alloca(SizeOf_Awaiter_tF516DC90789B273E29C24909B6248B35E0C4060F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_52 = L_45;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_54 = alloca(SizeOf_Awaiter_tCD559881F58A9D240F85415F775B1797BBBCAD81);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_61 = L_54;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_0 = alloca(SizeOf_Awaiter_tDBAA5B07F0B862812E44572BF651A8F29F3CE2C3);
	memset(V_0, 0, SizeOf_Awaiter_tDBAA5B07F0B862812E44572BF651A8F29F3CE2C3);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t843A5D7D728C20D15287743F138A882F846C141C);
	memset(V_1, 0, SizeOf_Awaiter_t843A5D7D728C20D15287743F138A882F846C141C);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t349B02E6536E760D503FC1C70C646ED80988F893);
	memset(V_2, 0, SizeOf_Awaiter_t349B02E6536E760D503FC1C70C646ED80988F893);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_3 = alloca(SizeOf_Awaiter_t5F3A8B33D927AEB0454E16B05140A8EAE6E1D02D);
	memset(V_3, 0, SizeOf_Awaiter_t5F3A8B33D927AEB0454E16B05140A8EAE6E1D02D);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_4 = alloca(SizeOf_Awaiter_t1669B7957B5723BB08C7FD87186BDFB644A75A55);
	memset(V_4, 0, SizeOf_Awaiter_t1669B7957B5723BB08C7FD87186BDFB644A75A55);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_5 = alloca(SizeOf_Awaiter_tF516DC90789B273E29C24909B6248B35E0C4060F);
	memset(V_5, 0, SizeOf_Awaiter_tF516DC90789B273E29C24909B6248B35E0C4060F);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_6 = alloca(SizeOf_Awaiter_tCD559881F58A9D240F85415F775B1797BBBCAD81);
	memset(V_6, 0, SizeOf_Awaiter_tCD559881F58A9D240F85415F775B1797BBBCAD81);
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B3_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B9_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B8_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B14_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B14_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B13_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B13_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B19_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B19_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B18_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B18_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B24_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B24_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B23_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B23_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B29_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B29_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B28_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B28_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B34_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B34_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B33_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B33_1 = NULL;
	{
		// public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.completedCount = 0;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), 0);
		// var awaiter = task1.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___0_task1, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_Awaiter_tDBAA5B07F0B862812E44572BF651A8F29F3CE2C3);
		// if (awaiter.IsCompleted)
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// TryInvokeContinuationT1(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		goto IL_0055;
	}

IL_0028:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7>, UniTask<T1>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT1(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* L_4 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B3_1);
	}

IL_0049:
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_Awaiter_tDBAA5B07F0B862812E44572BF651A8F29F3CE2C3);
		StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E* L_8;
		L_8 = InvokerFuncInvoker2< StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E*, WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, __this, L_7);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), G_B4_1, G_B4_0, (RuntimeObject*)L_8);
	}

IL_0055:
	{
		// var awaiter = task2.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___1_task2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_9);
		il2cpp_codegen_memcpy(V_1, L_9, SizeOf_Awaiter_t843A5D7D728C20D15287743F138A882F846C141C);
		// if (awaiter.IsCompleted)
		bool L_10;
		L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// TryInvokeContinuationT2(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		goto IL_009d;
	}

IL_0070:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7>, UniTask<T2>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT2(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = L_11;
		G_B8_0 = L_12;
		G_B8_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		if (L_12)
		{
			G_B9_0 = L_12;
			G_B9_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* L_13 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_14, (RuntimeObject*)L_13, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 20)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = L_14;
		((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2), (void*)L_15);
		G_B9_0 = L_15;
		G_B9_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B8_1);
	}

IL_0091:
	{
		il2cpp_codegen_memcpy(L_16, V_1, SizeOf_Awaiter_t843A5D7D728C20D15287743F138A882F846C141C);
		StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E* L_17;
		L_17 = InvokerFuncInvoker2< StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E*, WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), NULL, __this, L_16);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), G_B9_1, G_B9_0, (RuntimeObject*)L_17);
	}

IL_009d:
	{
		// var awaiter = task3.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___2_task3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_18);
		il2cpp_codegen_memcpy(V_2, L_18, SizeOf_Awaiter_t349B02E6536E760D503FC1C70C646ED80988F893);
		// if (awaiter.IsCompleted)
		bool L_19;
		L_19 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// TryInvokeContinuationT3(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		goto IL_00e5;
	}

IL_00b8:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7>, UniTask<T3>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT3(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = L_20;
		G_B13_0 = L_21;
		G_B13_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		if (L_21)
		{
			G_B14_0 = L_21;
			G_B14_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
			goto IL_00d9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* L_22 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_23, (RuntimeObject*)L_22, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 30)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = L_23;
		((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3), (void*)L_24);
		G_B14_0 = L_24;
		G_B14_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B13_1);
	}

IL_00d9:
	{
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_Awaiter_t349B02E6536E760D503FC1C70C646ED80988F893);
		StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E* L_26;
		L_26 = InvokerFuncInvoker2< StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E*, WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), NULL, __this, L_25);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), G_B14_1, G_B14_0, (RuntimeObject*)L_26);
	}

IL_00e5:
	{
		// var awaiter = task4.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___3_task4, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_27);
		il2cpp_codegen_memcpy(V_3, L_27, SizeOf_Awaiter_t5F3A8B33D927AEB0454E16B05140A8EAE6E1D02D);
		// if (awaiter.IsCompleted)
		bool L_28;
		L_28 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		if (!L_28)
		{
			goto IL_0100;
		}
	}
	{
		// TryInvokeContinuationT4(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		goto IL_012d;
	}

IL_0100:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7>, UniTask<T4>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT4(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_29 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_30 = L_29;
		G_B18_0 = L_30;
		G_B18_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		if (L_30)
		{
			G_B19_0 = L_30;
			G_B19_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
			goto IL_0121;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* L_31 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_32 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_32, (RuntimeObject*)L_31, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 40)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_33 = L_32;
		((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4), (void*)L_33);
		G_B19_0 = L_33;
		G_B19_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B18_1);
	}

IL_0121:
	{
		il2cpp_codegen_memcpy(L_34, V_3, SizeOf_Awaiter_t5F3A8B33D927AEB0454E16B05140A8EAE6E1D02D);
		StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E* L_35;
		L_35 = InvokerFuncInvoker2< StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E*, WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), NULL, __this, L_34);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), G_B19_1, G_B19_0, (RuntimeObject*)L_35);
	}

IL_012d:
	{
		// var awaiter = task5.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___4_task5, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_36);
		il2cpp_codegen_memcpy(V_4, L_36, SizeOf_Awaiter_t1669B7957B5723BB08C7FD87186BDFB644A75A55);
		// if (awaiter.IsCompleted)
		bool L_37;
		L_37 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		if (!L_37)
		{
			goto IL_0149;
		}
	}
	{
		// TryInvokeContinuationT5(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		goto IL_0177;
	}

IL_0149:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7>, UniTask<T5>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT5(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_38 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_39 = L_38;
		G_B23_0 = L_39;
		G_B23_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		if (L_39)
		{
			G_B24_0 = L_39;
			G_B24_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
			goto IL_016a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* L_40 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_41 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_41, (RuntimeObject*)L_40, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 50)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_42 = L_41;
		((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5), (void*)L_42);
		G_B24_0 = L_42;
		G_B24_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B23_1);
	}

IL_016a:
	{
		il2cpp_codegen_memcpy(L_43, V_4, SizeOf_Awaiter_t1669B7957B5723BB08C7FD87186BDFB644A75A55);
		StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E* L_44;
		L_44 = InvokerFuncInvoker2< StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E*, WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), NULL, __this, L_43);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), G_B24_1, G_B24_0, (RuntimeObject*)L_44);
	}

IL_0177:
	{
		// var awaiter = task6.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___5_task6, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_45);
		il2cpp_codegen_memcpy(V_5, L_45, SizeOf_Awaiter_tF516DC90789B273E29C24909B6248B35E0C4060F);
		// if (awaiter.IsCompleted)
		bool L_46;
		L_46 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		if (!L_46)
		{
			goto IL_0193;
		}
	}
	{
		// TryInvokeContinuationT6(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)), il2cpp_rgctx_method(method->klass->rgctx_data, 58), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		goto IL_01c1;
	}

IL_0193:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7>, UniTask<T6>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT6(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_47 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_48 = L_47;
		G_B28_0 = L_48;
		G_B28_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		if (L_48)
		{
			G_B29_0 = L_48;
			G_B29_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
			goto IL_01b4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* L_49 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_50, (RuntimeObject*)L_49, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 60)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_51 = L_50;
		((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6), (void*)L_51);
		G_B29_0 = L_51;
		G_B29_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B28_1);
	}

IL_01b4:
	{
		il2cpp_codegen_memcpy(L_52, V_5, SizeOf_Awaiter_tF516DC90789B273E29C24909B6248B35E0C4060F);
		StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E* L_53;
		L_53 = InvokerFuncInvoker2< StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E*, WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)), il2cpp_rgctx_method(method->klass->rgctx_data, 61), NULL, __this, L_52);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), G_B29_1, G_B29_0, (RuntimeObject*)L_53);
	}

IL_01c1:
	{
		// var awaiter = task7.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)), il2cpp_rgctx_method(method->klass->rgctx_data, 65), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___6_task7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_54);
		il2cpp_codegen_memcpy(V_6, L_54, SizeOf_Awaiter_tCD559881F58A9D240F85415F775B1797BBBCAD81);
		// if (awaiter.IsCompleted)
		bool L_55;
		L_55 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 67)), il2cpp_rgctx_method(method->klass->rgctx_data, 67), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		if (!L_55)
		{
			goto IL_01dc;
		}
	}
	{
		// TryInvokeContinuationT7(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 68)), il2cpp_rgctx_method(method->klass->rgctx_data, 68), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		return;
	}

IL_01dc:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7>, UniTask<T7>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT7(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_56 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_57 = L_56;
		G_B33_0 = L_57;
		G_B33_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		if (L_57)
		{
			G_B34_0 = L_57;
			G_B34_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
			goto IL_01fd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B* L_58 = ((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_59 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_59, (RuntimeObject*)L_58, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 70)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_60 = L_59;
		((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t860FEC480E67A73527482CBB87CEC2DA4082C95B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7), (void*)L_60);
		G_B34_0 = L_60;
		G_B34_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B33_1);
	}

IL_01fd:
	{
		il2cpp_codegen_memcpy(L_61, V_6, SizeOf_Awaiter_tCD559881F58A9D240F85415F775B1797BBBCAD81);
		StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E* L_62;
		L_62 = InvokerFuncInvoker2< StateTuple_2_tD239CF0073285A4C6899754787E206EC62F1190E*, WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 71)), il2cpp_rgctx_method(method->klass->rgctx_data, 71), NULL, __this, L_61);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 73)), il2cpp_rgctx_method(method->klass->rgctx_data, 73), G_B34_1, G_B34_0, (RuntimeObject*)L_62);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT1(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_TryInvokeContinuationT1_m3D3D0D1055954373E75F2F0923DA99CE7B91F533_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T1)
	const uint32_t SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5AB0B28249F882088367F1906593511196788455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80));
	// sizeof(T5)
	const uint32_t SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t9093750511783139499C77585E45017975B8CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83));
	// sizeof(System.ValueTuple`1<T7>)
	const uint32_t SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 84));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 86));
	// T1
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	// System.ValueTuple`1<T7>
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_16 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_23 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_24 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	memset(V_0, 0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	memset(V_2, 0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	memset(V_3, 0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	memset(V_4, 0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	memset(V_5, 0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	memset(V_6, 0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	memset(V_7, 0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 74)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 74), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// self.core.TrySetResult((0, result, default, default, default, default, default, default));
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_7 = ___0_self;
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_memcpy(L_10, V_3, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		memset(L_16, 0, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
		ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA): *(void**)L_14), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85));
		memset(L_24, 0, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82((ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_24, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75)) ? il2cpp_codegen_memcpy(L_17, L_8, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78)) ? il2cpp_codegen_memcpy(L_18, L_9, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79)) ? il2cpp_codegen_memcpy(L_19, L_10, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80)) ? il2cpp_codegen_memcpy(L_20, L_11, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81)) ? il2cpp_codegen_memcpy(L_21, L_12, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82)) ? il2cpp_codegen_memcpy(L_22, L_13, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552): *(void**)L_13), il2cpp_codegen_memcpy(L_23, L_16, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87));
		bool L_25;
		L_25 = InvokerFuncInvoker1< bool, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_24);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT2(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_TryInvokeContinuationT2_mE63B7FB7E3A49428F1EBA3F879A82CD4037BEBCC_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T2)
	const uint32_t SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5AB0B28249F882088367F1906593511196788455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80));
	// sizeof(T5)
	const uint32_t SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t9093750511783139499C77585E45017975B8CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83));
	// sizeof(System.ValueTuple`1<T7>)
	const uint32_t SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 84));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 86));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	// System.ValueTuple`1<T7>
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_16 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_23 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_24 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	memset(V_0, 0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	memset(V_2, 0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	memset(V_3, 0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	memset(V_4, 0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	memset(V_5, 0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	memset(V_6, 0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	memset(V_7, 0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 89)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 89), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// self.core.TrySetResult((1, default, result, default, default, default, default, default));
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_memcpy(L_10, V_3, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		memset(L_16, 0, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
		ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA): *(void**)L_14), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85));
		memset(L_24, 0, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82((ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_24, 1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75)) ? il2cpp_codegen_memcpy(L_17, L_8, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78)) ? il2cpp_codegen_memcpy(L_18, L_9, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79)) ? il2cpp_codegen_memcpy(L_19, L_10, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80)) ? il2cpp_codegen_memcpy(L_20, L_11, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81)) ? il2cpp_codegen_memcpy(L_21, L_12, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82)) ? il2cpp_codegen_memcpy(L_22, L_13, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552): *(void**)L_13), il2cpp_codegen_memcpy(L_23, L_16, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87));
		bool L_25;
		L_25 = InvokerFuncInvoker1< bool, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_24);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT3(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_TryInvokeContinuationT3_mC0029021A8B2734D973BC5238372C3F8187A671D_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T3)
	const uint32_t SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5AB0B28249F882088367F1906593511196788455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80));
	// sizeof(T5)
	const uint32_t SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t9093750511783139499C77585E45017975B8CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83));
	// sizeof(System.ValueTuple`1<T7>)
	const uint32_t SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 84));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 86));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	// T3
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	// System.ValueTuple`1<T7>
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_16 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_23 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_24 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	memset(V_0, 0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	memset(V_2, 0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	memset(V_3, 0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	memset(V_4, 0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	memset(V_5, 0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	memset(V_6, 0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	memset(V_7, 0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 90)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 90), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// self.core.TrySetResult((2, default, default, result, default, default, default, default));
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		memset(L_16, 0, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
		ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA): *(void**)L_14), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85));
		memset(L_24, 0, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82((ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_24, 2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75)) ? il2cpp_codegen_memcpy(L_17, L_8, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78)) ? il2cpp_codegen_memcpy(L_18, L_9, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79)) ? il2cpp_codegen_memcpy(L_19, L_10, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80)) ? il2cpp_codegen_memcpy(L_20, L_11, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81)) ? il2cpp_codegen_memcpy(L_21, L_12, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82)) ? il2cpp_codegen_memcpy(L_22, L_13, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552): *(void**)L_13), il2cpp_codegen_memcpy(L_23, L_16, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87));
		bool L_25;
		L_25 = InvokerFuncInvoker1< bool, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_24);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT4(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_TryInvokeContinuationT4_m85E8044451CAA64CB143D5FED6939C0B0020655D_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5AB0B28249F882088367F1906593511196788455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79));
	// sizeof(T5)
	const uint32_t SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t9093750511783139499C77585E45017975B8CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83));
	// sizeof(System.ValueTuple`1<T7>)
	const uint32_t SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 84));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 86));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	// T4
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	// System.ValueTuple`1<T7>
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_16 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_23 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_24 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	memset(V_0, 0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	memset(V_2, 0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	memset(V_3, 0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	memset(V_4, 0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	memset(V_5, 0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	memset(V_6, 0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	memset(V_7, 0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 91)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 91), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// self.core.TrySetResult((3, default, default, default, result, default, default, default));
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		memset(L_16, 0, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
		ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA): *(void**)L_14), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85));
		memset(L_24, 0, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82((ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_24, 3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75)) ? il2cpp_codegen_memcpy(L_17, L_8, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78)) ? il2cpp_codegen_memcpy(L_18, L_9, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79)) ? il2cpp_codegen_memcpy(L_19, L_10, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80)) ? il2cpp_codegen_memcpy(L_20, L_11, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81)) ? il2cpp_codegen_memcpy(L_21, L_12, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82)) ? il2cpp_codegen_memcpy(L_22, L_13, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552): *(void**)L_13), il2cpp_codegen_memcpy(L_23, L_16, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87));
		bool L_25;
		L_25 = InvokerFuncInvoker1< bool, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_24);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT5(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_TryInvokeContinuationT5_m29D69529657EBF40FEEFD39FCF7808ED179F68C9_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T5)
	const uint32_t SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5AB0B28249F882088367F1906593511196788455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t9093750511783139499C77585E45017975B8CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83));
	// sizeof(System.ValueTuple`1<T7>)
	const uint32_t SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 84));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 86));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	// T5
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	const Il2CppFullySharedGenericAny L_12 = L_1;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	// System.ValueTuple`1<T7>
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_16 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_23 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_24 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	memset(V_0, 0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	memset(V_2, 0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	memset(V_3, 0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	memset(V_4, 0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	memset(V_5, 0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	memset(V_6, 0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	memset(V_7, 0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 92)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 92), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// self.core.TrySetResult((4, default, default, default, default, result, default, default));
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		memset(L_16, 0, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
		ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA): *(void**)L_14), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85));
		memset(L_24, 0, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82((ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_24, 4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75)) ? il2cpp_codegen_memcpy(L_17, L_8, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78)) ? il2cpp_codegen_memcpy(L_18, L_9, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79)) ? il2cpp_codegen_memcpy(L_19, L_10, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80)) ? il2cpp_codegen_memcpy(L_20, L_11, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81)) ? il2cpp_codegen_memcpy(L_21, L_12, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82)) ? il2cpp_codegen_memcpy(L_22, L_13, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552): *(void**)L_13), il2cpp_codegen_memcpy(L_23, L_16, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87));
		bool L_25;
		L_25 = InvokerFuncInvoker1< bool, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_24);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT6(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_TryInvokeContinuationT6_m86512FD9C36896CB02F2C12EADFEB1F4A14FA916_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T6)
	const uint32_t SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5AB0B28249F882088367F1906593511196788455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80));
	// sizeof(T5)
	const uint32_t SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t9093750511783139499C77585E45017975B8CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83));
	// sizeof(System.ValueTuple`1<T7>)
	const uint32_t SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 84));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 86));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	// T6
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	// System.ValueTuple`1<T7>
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_16 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_23 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_24 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	memset(V_0, 0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	memset(V_2, 0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	memset(V_3, 0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	memset(V_4, 0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	memset(V_5, 0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	memset(V_6, 0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	memset(V_7, 0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 93)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 93), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// self.core.TrySetResult((5, default, default, default, default, default, result, default));
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		memset(L_16, 0, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
		ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA): *(void**)L_14), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85));
		memset(L_24, 0, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82((ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_24, 5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75)) ? il2cpp_codegen_memcpy(L_17, L_8, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78)) ? il2cpp_codegen_memcpy(L_18, L_9, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79)) ? il2cpp_codegen_memcpy(L_19, L_10, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80)) ? il2cpp_codegen_memcpy(L_20, L_11, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81)) ? il2cpp_codegen_memcpy(L_21, L_12, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82)) ? il2cpp_codegen_memcpy(L_22, L_13, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552): *(void**)L_13), il2cpp_codegen_memcpy(L_23, L_16, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87));
		bool L_25;
		L_25 = InvokerFuncInvoker1< bool, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_24);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT7(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_TryInvokeContinuationT7_mC352B55AD33E9598679F25DE08A1A63883E91D68_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T7)
	const uint32_t SizeOf_T7_t9093750511783139499C77585E45017975B8CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5AB0B28249F882088367F1906593511196788455 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80));
	// sizeof(T5)
	const uint32_t SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82));
	// sizeof(System.ValueTuple`1<T7>)
	const uint32_t SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 84));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 86));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	// T7
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	const Il2CppFullySharedGenericAny L_14 = L_1;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	// System.ValueTuple`1<T7>
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_16 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_23 = alloca(SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_24 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	memset(V_0, 0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	memset(V_2, 0, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	memset(V_3, 0, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	memset(V_4, 0, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	memset(V_5, 0, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	memset(V_6, 0, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	memset(V_7, 0, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 94)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 94), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0079;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// self.core.TrySetResult((6, default, default, default, default, default, default, result));
		WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_memcpy(L_13, V_7, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA);
		memset(L_16, 0, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9);
		ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_inline((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 83)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T7_t9093750511783139499C77585E45017975B8CABA): *(void**)L_14), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85));
		memset(L_24, 0, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		ValueTuple_8__ctor_m7A1C59EB1AF84EC5855F92B4C73EC9A96D85BA82((ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_24, 6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 75)) ? il2cpp_codegen_memcpy(L_17, L_8, SizeOf_T1_t2C49F537F825A71517E00C8D78B7FF94D50ADB20): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 78)) ? il2cpp_codegen_memcpy(L_18, L_9, SizeOf_T2_t83180294508942547EEF8069848B4DCA60BDBD41): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 79)) ? il2cpp_codegen_memcpy(L_19, L_10, SizeOf_T3_t42F497744C9D56600164CF5D3F6F2E08A972E31F): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 80)) ? il2cpp_codegen_memcpy(L_20, L_11, SizeOf_T4_t5AB0B28249F882088367F1906593511196788455): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 81)) ? il2cpp_codegen_memcpy(L_21, L_12, SizeOf_T5_t837F9104EC47E2AFC243B8366A57E8A5B7A4ABFB): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 82)) ? il2cpp_codegen_memcpy(L_22, L_13, SizeOf_T6_t0F54DDBD033B901D74DDDA28FACD7E9577C68552): *(void**)L_13), il2cpp_codegen_memcpy(L_23, L_16, SizeOf_ValueTuple_1_tC98081C9F442B604FF32F19F1BDF90B6383D5AD9), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87));
		bool L_25;
		L_25 = InvokerFuncInvoker1< bool, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_24);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_GetResult_mC1652044AF9DCB05AADEF06E8E8A1886D17D53F8_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* __this, int16_t ___0_token, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 86));
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_1 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// return core.GetResult(token);
		int16_t L_0 = ___0_token;
		InvokerActionInvoker2< int16_t, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 95)), il2cpp_rgctx_method(method->klass->rgctx_data, 95), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0, (ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_7_GetStatus_m17530EA20A22A4E366B94ECCC7CE6DA52DABEEF1_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		// return core.GetStatus(token);
		int16_t L_0 = ___0_token;
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 96)), il2cpp_rgctx_method(method->klass->rgctx_data, 96), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0);
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_OnCompleted_mBB4D6472B573C1AEC89CA8676B43A846B45A392C_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	{
		// core.OnCompleted(continuation, state, token);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		RuntimeObject* L_1 = ___1_state;
		int16_t L_2 = ___2_token;
		InvokerActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 97)), il2cpp_rgctx_method(method->klass->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0, L_1, L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::UnsafeGetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_7_UnsafeGetStatus_m8F625CC004BDD29F351190C76429EFBB0172EB2F_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* __this, const RuntimeMethod* method) 
{
	{
		// return core.UnsafeGetStatus();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 98)), il2cpp_rgctx_method(method->klass->rgctx_data, 98), (((UniTaskCompletionSourceCore_1_t22222AD93CF9BE9C7488AF5E792E1474E0C9837D*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))));
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Cysharp.Threading.Tasks.IUniTaskSource.GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_7_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m5093C2E24C2E3A0806A2FDADB6F6D1EA9AE6B282_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_7_t354ACE057C836122798B0B89EB0956841B40C24F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`1<T7>>)
	const uint32_t SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 86));
	const ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F L_1 = alloca(SizeOf_ValueTuple_8_t1A5B5ECDA8CA5D6B152EE3CB2EF3B9CEFDA4127E);
	{
		// GetResult(token);
		int16_t L_0 = ___0_token;
		InvokerActionInvoker2< int16_t, ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 99)), il2cpp_rgctx_method(method->klass->rgctx_data, 99), __this, L_0, (ValueTuple_8_t6754BC4E9DF456199B04B3C66F90A9C6F65C460F*)L_1);
		// }
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
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,Cysharp.Threading.Tasks.UniTask`1<T8>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8__ctor_m18F44290BFEE1A49901914016EF42864F572D2C9_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task1, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___1_task2, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___2_task3, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___3_task4, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___4_task5, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___5_task6, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___6_task7, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___7_task8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>)
	const uint32_t SizeOf_Awaiter_t9A9C7894E67F92F62269992EF29FED74910CA8ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>)
	const uint32_t SizeOf_Awaiter_t9550C174597C16586743A13FEF52613D8322DF94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>)
	const uint32_t SizeOf_Awaiter_t02688AF530BDE672EC936A6BAD803EEF1559F7AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>)
	const uint32_t SizeOf_Awaiter_t7A81FFE0864F0EE80543D75C2BC11C55564435EC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>)
	const uint32_t SizeOf_Awaiter_t01E8F3A2EE7D051AE259071153960F5E026AEB07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>)
	const uint32_t SizeOf_Awaiter_t08DB486D320DE1EBF3F9FB652F567E70C353DE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>)
	const uint32_t SizeOf_Awaiter_tF4210D9DFBF825189111E59C53A746AC4672E5CF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 66));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T8>)
	const uint32_t SizeOf_Awaiter_tEF5C3968A5F16BAFA7F93AD302BB4FDBDF8CA948 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 76));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_0 = alloca(SizeOf_Awaiter_t9A9C7894E67F92F62269992EF29FED74910CA8ED);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_0;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_9 = alloca(SizeOf_Awaiter_t9550C174597C16586743A13FEF52613D8322DF94);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = alloca(SizeOf_Awaiter_t02688AF530BDE672EC936A6BAD803EEF1559F7AB);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_25 = L_18;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_27 = alloca(SizeOf_Awaiter_t7A81FFE0864F0EE80543D75C2BC11C55564435EC);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_34 = L_27;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_36 = alloca(SizeOf_Awaiter_t01E8F3A2EE7D051AE259071153960F5E026AEB07);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_43 = L_36;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_45 = alloca(SizeOf_Awaiter_t08DB486D320DE1EBF3F9FB652F567E70C353DE6B);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_52 = L_45;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_54 = alloca(SizeOf_Awaiter_tF4210D9DFBF825189111E59C53A746AC4672E5CF);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_61 = L_54;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T8>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_63 = alloca(SizeOf_Awaiter_tEF5C3968A5F16BAFA7F93AD302BB4FDBDF8CA948);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_70 = L_63;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_0 = alloca(SizeOf_Awaiter_t9A9C7894E67F92F62269992EF29FED74910CA8ED);
	memset(V_0, 0, SizeOf_Awaiter_t9A9C7894E67F92F62269992EF29FED74910CA8ED);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t9550C174597C16586743A13FEF52613D8322DF94);
	memset(V_1, 0, SizeOf_Awaiter_t9550C174597C16586743A13FEF52613D8322DF94);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t02688AF530BDE672EC936A6BAD803EEF1559F7AB);
	memset(V_2, 0, SizeOf_Awaiter_t02688AF530BDE672EC936A6BAD803EEF1559F7AB);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_3 = alloca(SizeOf_Awaiter_t7A81FFE0864F0EE80543D75C2BC11C55564435EC);
	memset(V_3, 0, SizeOf_Awaiter_t7A81FFE0864F0EE80543D75C2BC11C55564435EC);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_4 = alloca(SizeOf_Awaiter_t01E8F3A2EE7D051AE259071153960F5E026AEB07);
	memset(V_4, 0, SizeOf_Awaiter_t01E8F3A2EE7D051AE259071153960F5E026AEB07);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_5 = alloca(SizeOf_Awaiter_t08DB486D320DE1EBF3F9FB652F567E70C353DE6B);
	memset(V_5, 0, SizeOf_Awaiter_t08DB486D320DE1EBF3F9FB652F567E70C353DE6B);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_6 = alloca(SizeOf_Awaiter_tF4210D9DFBF825189111E59C53A746AC4672E5CF);
	memset(V_6, 0, SizeOf_Awaiter_tF4210D9DFBF825189111E59C53A746AC4672E5CF);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_7 = alloca(SizeOf_Awaiter_tEF5C3968A5F16BAFA7F93AD302BB4FDBDF8CA948);
	memset(V_7, 0, SizeOf_Awaiter_tEF5C3968A5F16BAFA7F93AD302BB4FDBDF8CA948);
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B3_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B9_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B8_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B14_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B14_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B13_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B13_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B19_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B19_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B18_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B18_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B24_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B24_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B23_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B23_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B29_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B29_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B28_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B28_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B34_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B34_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B33_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B33_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B39_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B39_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B38_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B38_1 = NULL;
	{
		// public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.completedCount = 0;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), 0);
		// var awaiter = task1.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___0_task1, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_Awaiter_t9A9C7894E67F92F62269992EF29FED74910CA8ED);
		// if (awaiter.IsCompleted)
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// TryInvokeContinuationT1(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		goto IL_0055;
	}

IL_0028:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T1>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT1(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_4 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B3_1);
	}

IL_0049:
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_Awaiter_t9A9C7894E67F92F62269992EF29FED74910CA8ED);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_8;
		L_8 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, __this, L_7);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), G_B4_1, G_B4_0, (RuntimeObject*)L_8);
	}

IL_0055:
	{
		// var awaiter = task2.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___1_task2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_9);
		il2cpp_codegen_memcpy(V_1, L_9, SizeOf_Awaiter_t9550C174597C16586743A13FEF52613D8322DF94);
		// if (awaiter.IsCompleted)
		bool L_10;
		L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// TryInvokeContinuationT2(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		goto IL_009d;
	}

IL_0070:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T2>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT2(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = L_11;
		G_B8_0 = L_12;
		G_B8_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		if (L_12)
		{
			G_B9_0 = L_12;
			G_B9_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_13 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_14, (RuntimeObject*)L_13, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 20)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = L_14;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2), (void*)L_15);
		G_B9_0 = L_15;
		G_B9_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B8_1);
	}

IL_0091:
	{
		il2cpp_codegen_memcpy(L_16, V_1, SizeOf_Awaiter_t9550C174597C16586743A13FEF52613D8322DF94);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_17;
		L_17 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), NULL, __this, L_16);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), G_B9_1, G_B9_0, (RuntimeObject*)L_17);
	}

IL_009d:
	{
		// var awaiter = task3.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___2_task3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_18);
		il2cpp_codegen_memcpy(V_2, L_18, SizeOf_Awaiter_t02688AF530BDE672EC936A6BAD803EEF1559F7AB);
		// if (awaiter.IsCompleted)
		bool L_19;
		L_19 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// TryInvokeContinuationT3(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		goto IL_00e5;
	}

IL_00b8:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T3>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT3(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = L_20;
		G_B13_0 = L_21;
		G_B13_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		if (L_21)
		{
			G_B14_0 = L_21;
			G_B14_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
			goto IL_00d9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_22 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_23, (RuntimeObject*)L_22, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 30)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = L_23;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3), (void*)L_24);
		G_B14_0 = L_24;
		G_B14_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B13_1);
	}

IL_00d9:
	{
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_Awaiter_t02688AF530BDE672EC936A6BAD803EEF1559F7AB);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_26;
		L_26 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), NULL, __this, L_25);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), G_B14_1, G_B14_0, (RuntimeObject*)L_26);
	}

IL_00e5:
	{
		// var awaiter = task4.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___3_task4, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_27);
		il2cpp_codegen_memcpy(V_3, L_27, SizeOf_Awaiter_t7A81FFE0864F0EE80543D75C2BC11C55564435EC);
		// if (awaiter.IsCompleted)
		bool L_28;
		L_28 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		if (!L_28)
		{
			goto IL_0100;
		}
	}
	{
		// TryInvokeContinuationT4(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		goto IL_012d;
	}

IL_0100:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T4>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT4(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_29 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_30 = L_29;
		G_B18_0 = L_30;
		G_B18_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		if (L_30)
		{
			G_B19_0 = L_30;
			G_B19_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
			goto IL_0121;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_31 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_32 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_32, (RuntimeObject*)L_31, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 40)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_33 = L_32;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4), (void*)L_33);
		G_B19_0 = L_33;
		G_B19_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B18_1);
	}

IL_0121:
	{
		il2cpp_codegen_memcpy(L_34, V_3, SizeOf_Awaiter_t7A81FFE0864F0EE80543D75C2BC11C55564435EC);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_35;
		L_35 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), NULL, __this, L_34);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), G_B19_1, G_B19_0, (RuntimeObject*)L_35);
	}

IL_012d:
	{
		// var awaiter = task5.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___4_task5, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_36);
		il2cpp_codegen_memcpy(V_4, L_36, SizeOf_Awaiter_t01E8F3A2EE7D051AE259071153960F5E026AEB07);
		// if (awaiter.IsCompleted)
		bool L_37;
		L_37 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		if (!L_37)
		{
			goto IL_0149;
		}
	}
	{
		// TryInvokeContinuationT5(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		goto IL_0177;
	}

IL_0149:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T5>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT5(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_38 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_39 = L_38;
		G_B23_0 = L_39;
		G_B23_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		if (L_39)
		{
			G_B24_0 = L_39;
			G_B24_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
			goto IL_016a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_40 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_41 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_41, (RuntimeObject*)L_40, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 50)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_42 = L_41;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5), (void*)L_42);
		G_B24_0 = L_42;
		G_B24_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B23_1);
	}

IL_016a:
	{
		il2cpp_codegen_memcpy(L_43, V_4, SizeOf_Awaiter_t01E8F3A2EE7D051AE259071153960F5E026AEB07);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_44;
		L_44 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), NULL, __this, L_43);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), G_B24_1, G_B24_0, (RuntimeObject*)L_44);
	}

IL_0177:
	{
		// var awaiter = task6.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___5_task6, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_45);
		il2cpp_codegen_memcpy(V_5, L_45, SizeOf_Awaiter_t08DB486D320DE1EBF3F9FB652F567E70C353DE6B);
		// if (awaiter.IsCompleted)
		bool L_46;
		L_46 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		if (!L_46)
		{
			goto IL_0193;
		}
	}
	{
		// TryInvokeContinuationT6(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)), il2cpp_rgctx_method(method->klass->rgctx_data, 58), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		goto IL_01c1;
	}

IL_0193:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T6>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT6(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_47 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_48 = L_47;
		G_B28_0 = L_48;
		G_B28_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		if (L_48)
		{
			G_B29_0 = L_48;
			G_B29_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
			goto IL_01b4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_49 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_50, (RuntimeObject*)L_49, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 60)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_51 = L_50;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6), (void*)L_51);
		G_B29_0 = L_51;
		G_B29_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B28_1);
	}

IL_01b4:
	{
		il2cpp_codegen_memcpy(L_52, V_5, SizeOf_Awaiter_t08DB486D320DE1EBF3F9FB652F567E70C353DE6B);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_53;
		L_53 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)), il2cpp_rgctx_method(method->klass->rgctx_data, 61), NULL, __this, L_52);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), G_B29_1, G_B29_0, (RuntimeObject*)L_53);
	}

IL_01c1:
	{
		// var awaiter = task7.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)), il2cpp_rgctx_method(method->klass->rgctx_data, 65), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___6_task7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_54);
		il2cpp_codegen_memcpy(V_6, L_54, SizeOf_Awaiter_tF4210D9DFBF825189111E59C53A746AC4672E5CF);
		// if (awaiter.IsCompleted)
		bool L_55;
		L_55 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 67)), il2cpp_rgctx_method(method->klass->rgctx_data, 67), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		if (!L_55)
		{
			goto IL_01dd;
		}
	}
	{
		// TryInvokeContinuationT7(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 68)), il2cpp_rgctx_method(method->klass->rgctx_data, 68), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		goto IL_020b;
	}

IL_01dd:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T7>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT7(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_56 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_57 = L_56;
		G_B33_0 = L_57;
		G_B33_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		if (L_57)
		{
			G_B34_0 = L_57;
			G_B34_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
			goto IL_01fe;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_58 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_59 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_59, (RuntimeObject*)L_58, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 70)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_60 = L_59;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7), (void*)L_60);
		G_B34_0 = L_60;
		G_B34_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B33_1);
	}

IL_01fe:
	{
		il2cpp_codegen_memcpy(L_61, V_6, SizeOf_Awaiter_tF4210D9DFBF825189111E59C53A746AC4672E5CF);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_62;
		L_62 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 71)), il2cpp_rgctx_method(method->klass->rgctx_data, 71), NULL, __this, L_61);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 73)), il2cpp_rgctx_method(method->klass->rgctx_data, 73), G_B34_1, G_B34_0, (RuntimeObject*)L_62);
	}

IL_020b:
	{
		// var awaiter = task8.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 75)), il2cpp_rgctx_method(method->klass->rgctx_data, 75), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___7_task8, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_63);
		il2cpp_codegen_memcpy(V_7, L_63, SizeOf_Awaiter_tEF5C3968A5F16BAFA7F93AD302BB4FDBDF8CA948);
		// if (awaiter.IsCompleted)
		bool L_64;
		L_64 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)), il2cpp_rgctx_method(method->klass->rgctx_data, 77), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
		if (!L_64)
		{
			goto IL_0226;
		}
	}
	{
		// TryInvokeContinuationT8(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)), il2cpp_rgctx_method(method->klass->rgctx_data, 78), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
		return;
	}

IL_0226:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8>, UniTask<T8>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT8(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_65 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_7_8;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_66 = L_65;
		G_B38_0 = L_66;
		G_B38_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
		if (L_66)
		{
			G_B39_0 = L_66;
			G_B39_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
			goto IL_0247;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5* L_67 = ((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_68 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_68, (RuntimeObject*)L_67, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 80)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_69 = L_68;
		((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_7_8 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCA231E49E5C1E23CB178548188D1AF028B6EA7E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_7_8), (void*)L_69);
		G_B39_0 = L_69;
		G_B39_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B38_1);
	}

IL_0247:
	{
		il2cpp_codegen_memcpy(L_70, V_7, SizeOf_Awaiter_tEF5C3968A5F16BAFA7F93AD302BB4FDBDF8CA948);
		StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D* L_71;
		L_71 = InvokerFuncInvoker2< StateTuple_2_tC4A9F77640FBC0CC082D17B72B0414FE9A533C0D*, WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), NULL, __this, L_70);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 83)), il2cpp_rgctx_method(method->klass->rgctx_data, 83), G_B39_1, G_B39_0, (RuntimeObject*)L_71);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT1(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT1_m74BD369380F9A340D7205EEAF599C4F26BBB4818_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_0, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_2, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_3, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_4, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_5, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_6, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_7, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_8, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 84)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 84), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((0, result, default, default, default, default, default, default, default));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_10, V_3, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT2(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT2_m54BE10B1D7BD6627B69A9B4BA60B635349E9D526_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_0, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_2, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_3, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_4, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_5, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_6, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_7, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_8, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 100)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 100), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((1, default, result, default, default, default, default, default, default));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_10, V_3, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT3(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT3_m58445FFF0FC130E509D0E4E4A2B4E7EBF61F246B_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_0, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_2, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_3, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_4, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_5, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_6, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_7, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_8, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 101)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 101), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((2, default, default, result, default, default, default, default, default));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT4(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT4_m302B67798FFEC117F70C31EE79F813136E78C99C_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_0, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_2, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_3, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_4, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_5, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_6, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_7, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_8, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 102)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 102), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((3, default, default, default, result, default, default, default, default));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT5(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT5_m669FA2A85F02AB504E6D21EAF27D70C352DD4FD9_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_12 = L_1;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_0, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_2, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_3, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_4, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_5, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_6, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_7, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_8, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 103)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 103), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((4, default, default, default, default, result, default, default, default));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT6(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT6_m28050B75E4A0BAC5853C6222D8BFAD446B4BD4E6_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_0, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_2, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_3, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_4, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_5, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_6, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_7, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_8, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 104)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 104), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((5, default, default, default, default, default, result, default, default));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT7(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT7_m0131E161FB88451A4BCAC0D07F744A79D63D63C6_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_14 = L_1;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_0, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_2, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_3, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_4, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_5, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_6, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_7, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_8, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 105)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 105), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((6, default, default, default, default, default, default, result, default));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_13, V_7, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT8(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T8>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_TryInvokeContinuationT8_mD35DBE8A9AB85FF1423A6B87EEA5E5B05E035078_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T8)
	const uint32_t SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89));
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91));
	// sizeof(T6)
	const uint32_t SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92));
	// sizeof(T7)
	const uint32_t SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93));
	// sizeof(System.ValueTuple`2<T7,T8>)
	const uint32_t SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 97));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	// T8
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	const Il2CppFullySharedGenericAny L_15 = L_1;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	// System.ValueTuple`2<T7,T8>
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_18 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_25 = alloca(SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_26 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	memset(V_0, 0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	memset(V_2, 0, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	memset(V_3, 0, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	memset(V_4, 0, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	memset(V_5, 0, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	memset(V_6, 0, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	memset(V_7, 0, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	memset(V_8, 0, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 106)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 106), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// self.core.TrySetResult((7, default, default, default, default, default, default, default, result));
		WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_memcpy(L_13, V_7, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_14, V_8, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7);
		il2cpp_codegen_memcpy(L_15, V_0, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90);
		memset(L_18, 0, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB);
		ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 93)) ? il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T7_t12AF7525E88D4361083E6F50DD71ECC32E6985A7): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 94)) ? il2cpp_codegen_memcpy(L_17, L_15, SizeOf_T8_t2EB77468546390559127DE1F112A1E7F29F79F90): *(void**)L_15), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 96));
		memset(L_26, 0, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		ValueTuple_8__ctor_m03E5F35F1F6A37FA114EA2D38102DC71B063F122((ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_26, 7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 85)) ? il2cpp_codegen_memcpy(L_19, L_8, SizeOf_T1_t9561033C9FAB66A59515AC513C37865C3B8B1C18): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 88)) ? il2cpp_codegen_memcpy(L_20, L_9, SizeOf_T2_t60A74597284FB13F39BBDE70DD68794BD9BAC16D): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 89)) ? il2cpp_codegen_memcpy(L_21, L_10, SizeOf_T3_t17D6D15FA58A3752AECA204EA2A27CF117C6BD27): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 90)) ? il2cpp_codegen_memcpy(L_22, L_11, SizeOf_T4_tA6EA1FDA558CFF527D8E1C6FD66E4BCF5A863863): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 91)) ? il2cpp_codegen_memcpy(L_23, L_12, SizeOf_T5_tB849E0E76BE46D68793D81D57EA80E4C07ED9C11): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 92)) ? il2cpp_codegen_memcpy(L_24, L_13, SizeOf_T6_t2C03AD7AA0DA698E7086E9F7DC38F179995C5D0C): *(void**)L_13), il2cpp_codegen_memcpy(L_25, L_18, SizeOf_ValueTuple_2_tEFD44100BF6E84A07E01EE4796B1C6D5293D34EB), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 98));
		bool L_27;
		L_27 = InvokerFuncInvoker1< bool, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 99), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_26);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_GetResult_m8179773EAF240657A037D86BD41AEE69F6243B01_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* __this, int16_t ___0_token, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 97));
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_1 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// return core.GetResult(token);
		int16_t L_0 = ___0_token;
		InvokerActionInvoker2< int16_t, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 107)), il2cpp_rgctx_method(method->klass->rgctx_data, 107), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0, (ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_8_GetStatus_m120327589A6911025F26EA21963516518FA3D8A6_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		// return core.GetStatus(token);
		int16_t L_0 = ___0_token;
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 108)), il2cpp_rgctx_method(method->klass->rgctx_data, 108), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0);
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_OnCompleted_m296EED481119D3E0F40E167836FBE3C7AA67B812_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	{
		// core.OnCompleted(continuation, state, token);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		RuntimeObject* L_1 = ___1_state;
		int16_t L_2 = ___2_token;
		InvokerActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 109)), il2cpp_rgctx_method(method->klass->rgctx_data, 109), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0, L_1, L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::UnsafeGetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_8_UnsafeGetStatus_m0EC308A6F2E9D6D42B9F657DE69B75434F23C8FB_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* __this, const RuntimeMethod* method) 
{
	{
		// return core.UnsafeGetStatus();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 110)), il2cpp_rgctx_method(method->klass->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_tA9C7E3CB9001D1F438C1C3BBA224B20995E6A7A2*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))));
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Cysharp.Threading.Tasks.IUniTaskSource.GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_8_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m11C051AEC60F84D7B662AA2CA5F7BB8FCA9982E8_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_8_tB1A18813B231826F7BEE92541715D6266929F072* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`2<T7,T8>>)
	const uint32_t SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 97));
	const ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5 L_1 = alloca(SizeOf_ValueTuple_8_t5A4F9798F00844711054552CC2AA9D1C017B186C);
	{
		// GetResult(token);
		int16_t L_0 = ___0_token;
		InvokerActionInvoker2< int16_t, ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 111)), il2cpp_rgctx_method(method->klass->rgctx_data, 111), __this, L_0, (ValueTuple_8_tD42E286CF79B463B55FD4A534F1A73E02CAEECC5*)L_1);
		// }
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
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9__ctor_mCDAB8EA16CD8CDA71DE9E63EE51DD247D9070294_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task1, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___1_task2, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___2_task3, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___3_task4, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___4_task5, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___5_task6, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___6_task7, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___7_task8, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___8_task9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>)
	const uint32_t SizeOf_Awaiter_t1CB335AE21BA160B0696B13493AFAA6006408052 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>)
	const uint32_t SizeOf_Awaiter_t7285A84B788050EB2963579444EEE0D82AA2776F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>)
	const uint32_t SizeOf_Awaiter_t8E7332A0B3890D89A55DD086A9B18D6DD097EB4A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>)
	const uint32_t SizeOf_Awaiter_t2BE5DFCDDF1E1769B74EA8B9D1F1AE8AC5C6B550 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>)
	const uint32_t SizeOf_Awaiter_tCCA67F4A21F8DC391E99818FBBE3F4C47FD52AF7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>)
	const uint32_t SizeOf_Awaiter_t51D8578ADFDB9DDED327CC3488B7EAEF664DB387 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>)
	const uint32_t SizeOf_Awaiter_tF45E6AA0F09CC1C94B66E16FB5ED0D7C231BCDC2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 66));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T8>)
	const uint32_t SizeOf_Awaiter_t9A2F748C83EE5745F31F629DBC0C26AE0B45F342 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 76));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T9>)
	const uint32_t SizeOf_Awaiter_t2BEBEFE73CAAEF9B13D5D3047C346979ED99C61E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 86));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_0 = alloca(SizeOf_Awaiter_t1CB335AE21BA160B0696B13493AFAA6006408052);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_0;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_9 = alloca(SizeOf_Awaiter_t7285A84B788050EB2963579444EEE0D82AA2776F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = alloca(SizeOf_Awaiter_t8E7332A0B3890D89A55DD086A9B18D6DD097EB4A);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_25 = L_18;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_27 = alloca(SizeOf_Awaiter_t2BE5DFCDDF1E1769B74EA8B9D1F1AE8AC5C6B550);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_34 = L_27;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_36 = alloca(SizeOf_Awaiter_tCCA67F4A21F8DC391E99818FBBE3F4C47FD52AF7);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_43 = L_36;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_45 = alloca(SizeOf_Awaiter_t51D8578ADFDB9DDED327CC3488B7EAEF664DB387);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_52 = L_45;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_54 = alloca(SizeOf_Awaiter_tF45E6AA0F09CC1C94B66E16FB5ED0D7C231BCDC2);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_61 = L_54;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T8>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_63 = alloca(SizeOf_Awaiter_t9A2F748C83EE5745F31F629DBC0C26AE0B45F342);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_70 = L_63;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T9>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_72 = alloca(SizeOf_Awaiter_t2BEBEFE73CAAEF9B13D5D3047C346979ED99C61E);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_79 = L_72;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_0 = alloca(SizeOf_Awaiter_t1CB335AE21BA160B0696B13493AFAA6006408052);
	memset(V_0, 0, SizeOf_Awaiter_t1CB335AE21BA160B0696B13493AFAA6006408052);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t7285A84B788050EB2963579444EEE0D82AA2776F);
	memset(V_1, 0, SizeOf_Awaiter_t7285A84B788050EB2963579444EEE0D82AA2776F);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t8E7332A0B3890D89A55DD086A9B18D6DD097EB4A);
	memset(V_2, 0, SizeOf_Awaiter_t8E7332A0B3890D89A55DD086A9B18D6DD097EB4A);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_3 = alloca(SizeOf_Awaiter_t2BE5DFCDDF1E1769B74EA8B9D1F1AE8AC5C6B550);
	memset(V_3, 0, SizeOf_Awaiter_t2BE5DFCDDF1E1769B74EA8B9D1F1AE8AC5C6B550);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_4 = alloca(SizeOf_Awaiter_tCCA67F4A21F8DC391E99818FBBE3F4C47FD52AF7);
	memset(V_4, 0, SizeOf_Awaiter_tCCA67F4A21F8DC391E99818FBBE3F4C47FD52AF7);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_5 = alloca(SizeOf_Awaiter_t51D8578ADFDB9DDED327CC3488B7EAEF664DB387);
	memset(V_5, 0, SizeOf_Awaiter_t51D8578ADFDB9DDED327CC3488B7EAEF664DB387);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_6 = alloca(SizeOf_Awaiter_tF45E6AA0F09CC1C94B66E16FB5ED0D7C231BCDC2);
	memset(V_6, 0, SizeOf_Awaiter_tF45E6AA0F09CC1C94B66E16FB5ED0D7C231BCDC2);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_7 = alloca(SizeOf_Awaiter_t9A2F748C83EE5745F31F629DBC0C26AE0B45F342);
	memset(V_7, 0, SizeOf_Awaiter_t9A2F748C83EE5745F31F629DBC0C26AE0B45F342);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_8 = alloca(SizeOf_Awaiter_t2BEBEFE73CAAEF9B13D5D3047C346979ED99C61E);
	memset(V_8, 0, SizeOf_Awaiter_t2BEBEFE73CAAEF9B13D5D3047C346979ED99C61E);
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B3_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B9_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B8_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B14_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B14_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B13_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B13_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B19_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B19_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B18_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B18_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B24_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B24_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B23_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B23_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B29_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B29_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B28_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B28_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B34_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B34_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B33_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B33_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B39_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B39_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B38_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B38_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B44_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B44_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B43_0 = NULL;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* G_B43_1 = NULL;
	{
		// public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.completedCount = 0;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), 0);
		// var awaiter = task1.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___0_task1, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_Awaiter_t1CB335AE21BA160B0696B13493AFAA6006408052);
		// if (awaiter.IsCompleted)
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// TryInvokeContinuationT1(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		goto IL_0055;
	}

IL_0028:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T1>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT1(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0);
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_4 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B3_1);
	}

IL_0049:
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_Awaiter_t1CB335AE21BA160B0696B13493AFAA6006408052);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_8;
		L_8 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, __this, L_7);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), G_B4_1, G_B4_0, (RuntimeObject*)L_8);
	}

IL_0055:
	{
		// var awaiter = task2.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___1_task2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_9);
		il2cpp_codegen_memcpy(V_1, L_9, SizeOf_Awaiter_t7285A84B788050EB2963579444EEE0D82AA2776F);
		// if (awaiter.IsCompleted)
		bool L_10;
		L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// TryInvokeContinuationT2(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		goto IL_009d;
	}

IL_0070:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T2>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT2(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = L_11;
		G_B8_0 = L_12;
		G_B8_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
		if (L_12)
		{
			G_B9_0 = L_12;
			G_B9_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1);
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_13 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_14, (RuntimeObject*)L_13, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 20)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = L_14;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_1_2), (void*)L_15);
		G_B9_0 = L_15;
		G_B9_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B8_1);
	}

IL_0091:
	{
		il2cpp_codegen_memcpy(L_16, V_1, SizeOf_Awaiter_t7285A84B788050EB2963579444EEE0D82AA2776F);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_17;
		L_17 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), NULL, __this, L_16);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), G_B9_1, G_B9_0, (RuntimeObject*)L_17);
	}

IL_009d:
	{
		// var awaiter = task3.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___2_task3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_18);
		il2cpp_codegen_memcpy(V_2, L_18, SizeOf_Awaiter_t8E7332A0B3890D89A55DD086A9B18D6DD097EB4A);
		// if (awaiter.IsCompleted)
		bool L_19;
		L_19 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// TryInvokeContinuationT3(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		goto IL_00e5;
	}

IL_00b8:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T3>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT3(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = L_20;
		G_B13_0 = L_21;
		G_B13_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
		if (L_21)
		{
			G_B14_0 = L_21;
			G_B14_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2);
			goto IL_00d9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_22 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_23, (RuntimeObject*)L_22, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 30)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = L_23;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_2_3), (void*)L_24);
		G_B14_0 = L_24;
		G_B14_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B13_1);
	}

IL_00d9:
	{
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_Awaiter_t8E7332A0B3890D89A55DD086A9B18D6DD097EB4A);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_26;
		L_26 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), NULL, __this, L_25);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), G_B14_1, G_B14_0, (RuntimeObject*)L_26);
	}

IL_00e5:
	{
		// var awaiter = task4.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___3_task4, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_27);
		il2cpp_codegen_memcpy(V_3, L_27, SizeOf_Awaiter_t2BE5DFCDDF1E1769B74EA8B9D1F1AE8AC5C6B550);
		// if (awaiter.IsCompleted)
		bool L_28;
		L_28 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		if (!L_28)
		{
			goto IL_0100;
		}
	}
	{
		// TryInvokeContinuationT4(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		goto IL_012d;
	}

IL_0100:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T4>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT4(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_29 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_30 = L_29;
		G_B18_0 = L_30;
		G_B18_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
		if (L_30)
		{
			G_B19_0 = L_30;
			G_B19_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3);
			goto IL_0121;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_31 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_32 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_32, (RuntimeObject*)L_31, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 40)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_33 = L_32;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_3_4), (void*)L_33);
		G_B19_0 = L_33;
		G_B19_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B18_1);
	}

IL_0121:
	{
		il2cpp_codegen_memcpy(L_34, V_3, SizeOf_Awaiter_t2BE5DFCDDF1E1769B74EA8B9D1F1AE8AC5C6B550);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_35;
		L_35 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), NULL, __this, L_34);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), G_B19_1, G_B19_0, (RuntimeObject*)L_35);
	}

IL_012d:
	{
		// var awaiter = task5.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___4_task5, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_36);
		il2cpp_codegen_memcpy(V_4, L_36, SizeOf_Awaiter_tCCA67F4A21F8DC391E99818FBBE3F4C47FD52AF7);
		// if (awaiter.IsCompleted)
		bool L_37;
		L_37 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		if (!L_37)
		{
			goto IL_0149;
		}
	}
	{
		// TryInvokeContinuationT5(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		goto IL_0177;
	}

IL_0149:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T5>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT5(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_38 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_39 = L_38;
		G_B23_0 = L_39;
		G_B23_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
		if (L_39)
		{
			G_B24_0 = L_39;
			G_B24_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_4);
			goto IL_016a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_40 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_41 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_41, (RuntimeObject*)L_40, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 50)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_42 = L_41;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_4_5), (void*)L_42);
		G_B24_0 = L_42;
		G_B24_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B23_1);
	}

IL_016a:
	{
		il2cpp_codegen_memcpy(L_43, V_4, SizeOf_Awaiter_tCCA67F4A21F8DC391E99818FBBE3F4C47FD52AF7);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_44;
		L_44 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), NULL, __this, L_43);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), G_B24_1, G_B24_0, (RuntimeObject*)L_44);
	}

IL_0177:
	{
		// var awaiter = task6.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___5_task6, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_45);
		il2cpp_codegen_memcpy(V_5, L_45, SizeOf_Awaiter_t51D8578ADFDB9DDED327CC3488B7EAEF664DB387);
		// if (awaiter.IsCompleted)
		bool L_46;
		L_46 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		if (!L_46)
		{
			goto IL_0193;
		}
	}
	{
		// TryInvokeContinuationT6(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)), il2cpp_rgctx_method(method->klass->rgctx_data, 58), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		goto IL_01c1;
	}

IL_0193:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T6>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT6(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_47 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_48 = L_47;
		G_B28_0 = L_48;
		G_B28_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
		if (L_48)
		{
			G_B29_0 = L_48;
			G_B29_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_5);
			goto IL_01b4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_49 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_50, (RuntimeObject*)L_49, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 60)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_51 = L_50;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_5_6), (void*)L_51);
		G_B29_0 = L_51;
		G_B29_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B28_1);
	}

IL_01b4:
	{
		il2cpp_codegen_memcpy(L_52, V_5, SizeOf_Awaiter_t51D8578ADFDB9DDED327CC3488B7EAEF664DB387);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_53;
		L_53 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)), il2cpp_rgctx_method(method->klass->rgctx_data, 61), NULL, __this, L_52);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), G_B29_1, G_B29_0, (RuntimeObject*)L_53);
	}

IL_01c1:
	{
		// var awaiter = task7.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)), il2cpp_rgctx_method(method->klass->rgctx_data, 65), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___6_task7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_54);
		il2cpp_codegen_memcpy(V_6, L_54, SizeOf_Awaiter_tF45E6AA0F09CC1C94B66E16FB5ED0D7C231BCDC2);
		// if (awaiter.IsCompleted)
		bool L_55;
		L_55 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 67)), il2cpp_rgctx_method(method->klass->rgctx_data, 67), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		if (!L_55)
		{
			goto IL_01dd;
		}
	}
	{
		// TryInvokeContinuationT7(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 68)), il2cpp_rgctx_method(method->klass->rgctx_data, 68), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		goto IL_020b;
	}

IL_01dd:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T7>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT7(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_56 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_57 = L_56;
		G_B33_0 = L_57;
		G_B33_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
		if (L_57)
		{
			G_B34_0 = L_57;
			G_B34_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6);
			goto IL_01fe;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_58 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_59 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_59, (RuntimeObject*)L_58, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 70)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_60 = L_59;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_6_7), (void*)L_60);
		G_B34_0 = L_60;
		G_B34_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B33_1);
	}

IL_01fe:
	{
		il2cpp_codegen_memcpy(L_61, V_6, SizeOf_Awaiter_tF45E6AA0F09CC1C94B66E16FB5ED0D7C231BCDC2);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_62;
		L_62 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 71)), il2cpp_rgctx_method(method->klass->rgctx_data, 71), NULL, __this, L_61);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 73)), il2cpp_rgctx_method(method->klass->rgctx_data, 73), G_B34_1, G_B34_0, (RuntimeObject*)L_62);
	}

IL_020b:
	{
		// var awaiter = task8.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 75)), il2cpp_rgctx_method(method->klass->rgctx_data, 75), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___7_task8, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_63);
		il2cpp_codegen_memcpy(V_7, L_63, SizeOf_Awaiter_t9A2F748C83EE5745F31F629DBC0C26AE0B45F342);
		// if (awaiter.IsCompleted)
		bool L_64;
		L_64 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)), il2cpp_rgctx_method(method->klass->rgctx_data, 77), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
		if (!L_64)
		{
			goto IL_0227;
		}
	}
	{
		// TryInvokeContinuationT8(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)), il2cpp_rgctx_method(method->klass->rgctx_data, 78), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
		goto IL_0255;
	}

IL_0227:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T8>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT8(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_65 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_7_8;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_66 = L_65;
		G_B38_0 = L_66;
		G_B38_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
		if (L_66)
		{
			G_B39_0 = L_66;
			G_B39_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_7);
			goto IL_0248;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_67 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_68 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_68, (RuntimeObject*)L_67, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 80)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_69 = L_68;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_7_8 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_7_8), (void*)L_69);
		G_B39_0 = L_69;
		G_B39_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B38_1);
	}

IL_0248:
	{
		il2cpp_codegen_memcpy(L_70, V_7, SizeOf_Awaiter_t9A2F748C83EE5745F31F629DBC0C26AE0B45F342);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_71;
		L_71 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), NULL, __this, L_70);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 83)), il2cpp_rgctx_method(method->klass->rgctx_data, 83), G_B39_1, G_B39_0, (RuntimeObject*)L_71);
	}

IL_0255:
	{
		// var awaiter = task9.GetAwaiter();
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 85)), il2cpp_rgctx_method(method->klass->rgctx_data, 85), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___8_task9, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_72);
		il2cpp_codegen_memcpy(V_8, L_72, SizeOf_Awaiter_t2BEBEFE73CAAEF9B13D5D3047C346979ED99C61E);
		// if (awaiter.IsCompleted)
		bool L_73;
		L_73 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 87)), il2cpp_rgctx_method(method->klass->rgctx_data, 87), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8);
		if (!L_73)
		{
			goto IL_0270;
		}
	}
	{
		// TryInvokeContinuationT9(this, awaiter);
		InvokerActionInvoker2< WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 88)), il2cpp_rgctx_method(method->klass->rgctx_data, 88), NULL, __this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8);
		return;
	}

IL_0270:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9>, UniTask<T9>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT9(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_74 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_8_9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_75 = L_74;
		G_B43_0 = L_75;
		G_B43_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8);
		if (L_75)
		{
			G_B44_0 = L_75;
			G_B44_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)(Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8);
			goto IL_0291;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004* L_76 = ((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_77 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_77, (RuntimeObject*)L_76, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 90)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_78 = L_77;
		((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_8_9 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41E2E5F70B53034BC7666F370C8F57BAE82ED004_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 9)))->___U3CU3E9__2_8_9), (void*)L_78);
		G_B44_0 = L_78;
		G_B44_1 = ((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)G_B43_1);
	}

IL_0291:
	{
		il2cpp_codegen_memcpy(L_79, V_8, SizeOf_Awaiter_t2BEBEFE73CAAEF9B13D5D3047C346979ED99C61E);
		StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234* L_80;
		L_80 = InvokerFuncInvoker2< StateTuple_2_tBD3D2F2123018CF69F8DF69AFEC60EC71A57D234*, WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 91)), il2cpp_rgctx_method(method->klass->rgctx_data, 91), NULL, __this, L_79);
		InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 93)), il2cpp_rgctx_method(method->klass->rgctx_data, 93), G_B44_1, G_B44_0, (RuntimeObject*)L_80);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT1(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT1_m057E8851EC36E71467FBB33A797A57F7D1333531_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_0, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_2, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_3, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_4, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_5, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_6, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_7, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_8, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 94)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 94), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((0, result, default, default, default, default, default, default, default, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_3, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT2(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT2_mFA8CDBC833AB4DE9119E70BBA8E9E16888DB8E44_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_0, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_3, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_4, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_5, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_6, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_7, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_8, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 111)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 111), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((1, default, result, default, default, default, default, default, default, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_3, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT3(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT3_m1942E7C0A32C2F8807BA581D2DC517D5CDD3488F_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_0, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_3, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_4, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_5, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_6, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_7, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_8, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 112)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 112), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((2, default, default, result, default, default, default, default, default, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_4, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT4(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T4>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT4_m2DDCE23CB6D75CF15B8A369F4C707CCAE28FCBA2_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_0, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_3, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_4, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_5, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_6, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_7, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_8, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 113)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 113), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((3, default, default, default, result, default, default, default, default, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_5, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT5(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T5>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT5_mA9245F2F16F02627801F7BF5204EC59DBFAF99F5_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_12 = L_1;
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_0, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_3, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_4, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_5, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_6, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_7, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_8, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 114)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 114), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((4, default, default, default, default, result, default, default, default, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_6, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT6(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T6>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT6_m1E268A14435A676642142013F00FA0DC43D45CB1_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_0, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_3, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_4, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_5, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_6, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_7, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_8, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 115)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 115), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((5, default, default, default, default, default, result, default, default, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_7, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT7(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T7>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT7_mE0EF0E9A9E0CA04B64E3E8E5AE1ED3F00D3B16ED_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_14 = L_1;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_0, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_3, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_4, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_5, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_6, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_7, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_8, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 116)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 116), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((6, default, default, default, default, default, default, result, default, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_7, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_8, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT8(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T8>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT8_m5FC1B728069A4CDC86ED96AE614CB436DEA8A921_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_15 = L_1;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_0, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_3, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_4, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_5, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_6, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_7, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_8, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_9, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 117)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 117), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((7, default, default, default, default, default, default, default, result, default));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_7, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_8, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_15, V_0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		il2cpp_codegen_memcpy(L_16, V_9, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryInvokeContinuationT9(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T9>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_TryInvokeContinuationT9_m9427B13779F5AA9462D0E2AE63D5A5F5E69332AC_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* ___0_self, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* ___1_awaiter, const RuntimeMethod* method) 
{
	// sizeof(T9)
	const uint32_t SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105));
	// sizeof(T1)
	const uint32_t SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99));
	// sizeof(T4)
	const uint32_t SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100));
	// sizeof(T5)
	const uint32_t SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101));
	// sizeof(T6)
	const uint32_t SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102));
	// sizeof(T7)
	const uint32_t SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103));
	// sizeof(T8)
	const uint32_t SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104));
	// sizeof(System.ValueTuple`3<T7,T8,T9>)
	const uint32_t SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 106));
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 108));
	// T1
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	// T2
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	// T3
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	// T4
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	// T5
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	// T6
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	// T7
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	// T8
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	// T9
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	const Il2CppFullySharedGenericAny L_16 = L_1;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	// System.ValueTuple`3<T7,T8,T9>
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_27 = alloca(SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_28 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	memset(V_0, 0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
	Exception_t* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	memset(V_2, 0, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	memset(V_3, 0, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	memset(V_4, 0, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	memset(V_5, 0, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	memset(V_6, 0, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	memset(V_7, 0, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	memset(V_8, 0, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	memset(V_9, 0, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* L_0 = ___1_awaiter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 118)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 118), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_2 = ___0_self;
		Exception_t* L_3 = V_1;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 97), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_5 = ___0_self;
		int32_t L_6;
		L_6 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// self.core.TrySetResult((8, default, default, default, default, default, default, default, default, result));
		WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* L_7 = ___0_self;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_memcpy(L_11, V_5, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_memcpy(L_13, V_7, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_memcpy(L_14, V_8, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_15, V_9, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A);
		il2cpp_codegen_memcpy(L_16, V_0, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2);
		memset(L_20, 0, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F);
		ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 103)) ? il2cpp_codegen_memcpy(L_17, L_14, SizeOf_T7_tB1C7E0C236178B74109F4EF31E447F56A86DBA34): *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 104)) ? il2cpp_codegen_memcpy(L_18, L_15, SizeOf_T8_tAF9A0784F75559C808ECBC453336127EB8DA3A7A): *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 105)) ? il2cpp_codegen_memcpy(L_19, L_16, SizeOf_T9_tB9C3488598121213AB36E222281D28C99542EDB2): *(void**)L_16), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 107));
		memset(L_28, 0, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		ValueTuple_8__ctor_m5FDE8CF38A97A3D5FC7C364C3467B819664360EE((ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_28, 8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 95)) ? il2cpp_codegen_memcpy(L_21, L_8, SizeOf_T1_t12224CDB8CF3A7A9B85AE3735573C8F4E483F5C8): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 98)) ? il2cpp_codegen_memcpy(L_22, L_9, SizeOf_T2_tAD4D518AD8F8B278644DA50484CBC022467C03C8): *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 99)) ? il2cpp_codegen_memcpy(L_23, L_10, SizeOf_T3_t66D9D606A6E8AE1FFD2214BAC540BA2C6A05F30E): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 100)) ? il2cpp_codegen_memcpy(L_24, L_11, SizeOf_T4_t72EE5E3145D8FF5738B17FFF6A56CD3596448171): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 101)) ? il2cpp_codegen_memcpy(L_25, L_12, SizeOf_T5_tBAA81B6ABC55C264673BFAB9E6595906EACF4385): *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 102)) ? il2cpp_codegen_memcpy(L_26, L_13, SizeOf_T6_tDBE701EEE385225ABD2D5FE3A33BBB44DAB77FA1): *(void**)L_13), il2cpp_codegen_memcpy(L_27, L_20, SizeOf_ValueTuple_3_t296AC28BABFD66CC8A156720B3F2B3437143A60F), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 109));
		bool L_29;
		L_29 = InvokerFuncInvoker1< bool, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 110), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_28);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_GetResult_mCCC68AC3809E9B9FD0B5C8888E60252635A131CF_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* __this, int16_t ___0_token, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 108));
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_1 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// return core.GetResult(token);
		int16_t L_0 = ___0_token;
		InvokerActionInvoker2< int16_t, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 119)), il2cpp_rgctx_method(method->klass->rgctx_data, 119), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0, (ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_9_GetStatus_m9AF4F3EFADAE1D5FBD672D4EC5859BD5D9E35C25_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		// return core.GetStatus(token);
		int16_t L_0 = ___0_token;
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 120)), il2cpp_rgctx_method(method->klass->rgctx_data, 120), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0);
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_OnCompleted_m89DBDCA38D47A9F190DDFFA8AD2AA0FFEF2DFDC7_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	{
		// core.OnCompleted(continuation, state, token);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		RuntimeObject* L_1 = ___1_state;
		int16_t L_2 = ___2_token;
		InvokerActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 121)), il2cpp_rgctx_method(method->klass->rgctx_data, 121), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))), L_0, L_1, L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::UnsafeGetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_9_UnsafeGetStatus_m28CC9A1F714C8C5CEF54BB2438875999E843CC26_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* __this, const RuntimeMethod* method) 
{
	{
		// return core.UnsafeGetStatus();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 122)), il2cpp_rgctx_method(method->klass->rgctx_data, 122), (((UniTaskCompletionSourceCore_1_t1911EC18C6234A1A4E814CB064F127B40A3F2BD1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)))));
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Cysharp.Threading.Tasks.IUniTaskSource.GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_9_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m4E565561F1211B9F8E105F3F1BE90E4F55368ADD_gshared (/*Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhenAnyPromise_9_t2D551F16D8A9A247E0C45E7698A6A7A3CCDB7757* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	// System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>
	// sizeof(System.ValueTuple`8<System.Int32,T1,T2,T3,T4,T5,T6,System.ValueTuple`3<T7,T8,T9>>)
	const uint32_t SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 108));
	const ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2 L_1 = alloca(SizeOf_ValueTuple_8_t8393F807A09311AE5C3F77F38D87FF98B57A7A47);
	{
		// GetResult(token);
		int16_t L_0 = ___0_token;
		InvokerActionInvoker2< int16_t, ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 123)), il2cpp_rgctx_method(method->klass->rgctx_data, 123), __this, L_0, (ValueTuple_8_tF94FE992101922E2A97F08D019A9EBDDA748DCB2*)L_1);
		// }
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereArrayIterator_1_Clone_m1D80001794E47D2DF00A77273FD71D61987E8A44_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_2 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m42FC055181A1CDD12BBB46A9EE9ED76C6048BA07_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
	// TSource
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	memset(V_0, 0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 7)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mB2C59E78355E518D359A6D5035BCD6254337B84E_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_1, L_2);
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_4 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereEnumerableIterator_1_Clone_m0317D203B88386A9A479C72FA9D62763FD0A91D3_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_2 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2583FECFDC8EDFE66C959C7C386F99E287C5763E_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1A18D4050C069B6C4310DAB9857281E37DCB2C69_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TSource
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	memset(V_1, 0, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_10, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC623267514B4299E409A01161DBBDA5362CEDFC2_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), NULL, L_1, L_2);
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_4 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 10)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2)))));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_1, L_2);
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TSource
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
	// TSource
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	// TResult
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_11);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.AsyncReactiveProperty`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithoutCurrentEnumerable__ctor_m5F2548C9BDEA098E43955DB9F5AB9AC9867A1446_gshared (WithoutCurrentEnumerable_t61691720F7363FB52D0166233D6F1CDEC9A12368* __this, /*Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733* ___0_parent, const RuntimeMethod* method) 
{
	{
		// public WithoutCurrentEnumerable(AsyncReactiveProperty<T> parent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithoutCurrentEnumerable_GetAsyncEnumerator_mA34590B1BE46B1BCA23E0AFE548A2B8EEC33788B_gshared (WithoutCurrentEnumerable_t61691720F7363FB52D0166233D6F1CDEC9A12368* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		// return new Enumerator(parent, cancellationToken, false);
		AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733* L_0 = (AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733*)__this->___parent_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		Enumerator_t52AB038CB588CDE841350C02AA5D28DAAA6DBA60* L_2 = (Enumerator_t52AB038CB588CDE841350C02AA5D28DAAA6DBA60*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		InvokerActionInvoker3< AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_2, L_0, L_1, (bool)0);
		return (RuntimeObject*)L_2;
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
// System.Void Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithoutCurrentEnumerable__ctor_m4C8C640AF658BB633522AD90FBFFFD2A4C742B2C_gshared (WithoutCurrentEnumerable_tA165573F50CE7FD8626E075AE98BC04DE9B29888* __this, /*Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* ___0_parent, const RuntimeMethod* method) 
{
	{
		// public WithoutCurrentEnumerable(ReadOnlyAsyncReactiveProperty<T> parent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty`1/WithoutCurrentEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithoutCurrentEnumerable_GetAsyncEnumerator_mF8EB8E275666D4F8CB9E5DB7DA08CF20E14A833C_gshared (WithoutCurrentEnumerable_tA165573F50CE7FD8626E075AE98BC04DE9B29888* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		// return new Enumerator(parent, cancellationToken, false);
		ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9* L_0 = (ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9*)__this->___parent_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		Enumerator_t2264BA8CF3D7072C596172D20E9E9AB2BF7CF0BE* L_2 = (Enumerator_t2264BA8CF3D7072C596172D20E9E9AB2BF7CF0BE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		InvokerActionInvoker3< ReadOnlyAsyncReactiveProperty_1_tB7349A20B00D8047434C5CDE4CB7EC263380B1E9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_2, L_0, L_1, (bool)0);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_gshared_inline (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, const RuntimeMethod* method) 
{
	// sizeof(T1)
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T1
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		return;
	}
}
