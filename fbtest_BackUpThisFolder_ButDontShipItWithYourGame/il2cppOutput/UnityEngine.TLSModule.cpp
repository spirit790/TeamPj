#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3*, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback
struct unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637;
// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback
struct unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCC519CABEDAEB613734AF73009C6330BE9E186E4 
{
};

// Unity.TLS.LowLevel.Binding
struct Binding_t4175ACCDA50512713728ADA73FFBB161A0B2C496  : public RuntimeObject
{
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
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

// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback
struct unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637  : public MulticastDelegate_t
{
};

// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback
struct unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// Unity.TLS.LowLevel.Binding

// Unity.TLS.LowLevel.Binding

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.UInt32

// System.UInt32

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback

// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback

// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback

// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_Multicast(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* currentDelegate = reinterpret_cast<unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenInst(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenStatic(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenStaticInvoker(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);
}
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_ClosedStaticInvoker(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uint8_t*, uintptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);

	return returnValue;
}
// System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4 (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_Multicast;
}
// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277 (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_Multicast(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* currentDelegate = reinterpret_cast<unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenInst(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenStatic(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenStaticInvoker(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);
}
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_ClosedStaticInvoker(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637 (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uint8_t*, uintptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);

	return returnValue;
}
// System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_Multicast;
}
// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8 (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
