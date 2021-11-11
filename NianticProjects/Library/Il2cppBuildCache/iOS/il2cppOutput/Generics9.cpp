﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
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
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149;
// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct Dictionary_2_tBD3577D7455E9C9FDAB004AF818DFD67809849A3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>
struct Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Resources.ResourceLocator>
struct Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IComparer_1_t40B525B485A7A89ABCFC5E1266A05F346524377D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEqualityComparer_1_tD2AF20E67D8624289AE792EE7E48B879EEF614ED;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9;
// System.Collections.Generic.SortedList`2/KeyList<System.Object,System.Object>
struct KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC;
// System.Collections.Generic.SortedList`2/KeyList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyList_t296975AE18449739E9E0D36201870D32AD100126;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0;
// System.Collections.Generic.SortedList`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t03AE7A9F3FCFC6AD533F1AC3F403168B8140649F;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t346381F1A8322029735E6CB60BE656844AC911E8;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_tBD40FD22068207BB90449FC608025235E400C47A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_tB043EC909C55FE5BC78AD95436858F4956E3DE4C;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t758226B1C7A7735796B7029A5913BC43628FCCF3;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t2CAAD77E4532041B0120AE543DB331C1CECFA765;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t1953500C8BD92CD8DCFED1CC3B58B24A60C24E43;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_tE9F5623D0E551591334872A367EFF28A72775EEA;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t3385ADCA6DCAB14BAB5A5E886D096E0B5FA530F5;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t227E1B3CD9B70F544BE2BAC33219E40F224A16BA;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t7F92C20128624C004DAABFC3F72A9994C54898D9;
// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E;
// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_t936566050E79A53330A93469CAF15575A12A114D;
// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63;
// System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>
struct ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940;
// System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>[]
struct EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral336703A716E6AABC0F3D29AA7F207E54FF0E7ACC;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral812EC03C4AEF0AE76BA178C4367F385393486DE8;
IL2CPP_EXTERN_C String_t* _stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Add_m3E1D2B6F6C4D09209AF58E02395F5B8F7A3DB2B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Add_m68620F0AB8EF3F6BA7B609510D8BDC208B2D9BA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Insert_m65FAD5E5D08DEE21CA029F283584C886FF00874F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Insert_mA4C67440F2E4293B6994AC7FE17C6F534EB556C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Remove_mDDF5D0F6A35CABC20698B79551345F19DC8F8E1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Remove_mEEC7F3739A8D08123C53E3795C149691D18C0C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_set_Item_m4E06D887E6E7A3B53FDB39BEC8AC56F5C506D100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_set_Item_m94F3E4CAACEB3D08ADE9A539B5B7EABB84DE22F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___entries_1)); }
	inline EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___keys_7)); }
	inline KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___values_8)); }
	inline ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2/SortedListValueEnumerator<System.Object,System.Object>
struct SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_sortedList
	SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * ____sortedList_0;
	// System.Int32 System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_currentValue
	RuntimeObject * ____currentValue_3;

public:
	inline static int32_t get_offset_of__sortedList_0() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____sortedList_0)); }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * get__sortedList_0() const { return ____sortedList_0; }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 ** get_address_of__sortedList_0() { return &____sortedList_0; }
	inline void set__sortedList_0(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * value)
	{
		____sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortedList_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__currentValue_3() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____currentValue_3)); }
	inline RuntimeObject * get__currentValue_3() const { return ____currentValue_3; }
	inline RuntimeObject ** get_address_of__currentValue_3() { return &____currentValue_3; }
	inline void set__currentValue_3(RuntimeObject * value)
	{
		____currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2/SortedListValueEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_sortedList
	SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * ____sortedList_0;
	// System.Int32 System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.SortedList`2/SortedListValueEnumerator::_currentValue
	RuntimeObject * ____currentValue_3;

public:
	inline static int32_t get_offset_of__sortedList_0() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____sortedList_0)); }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * get__sortedList_0() const { return ____sortedList_0; }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 ** get_address_of__sortedList_0() { return &____sortedList_0; }
	inline void set__sortedList_0(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * value)
	{
		____sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortedList_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__currentValue_3() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____currentValue_3)); }
	inline RuntimeObject * get__currentValue_3() const { return ____currentValue_3; }
	inline RuntimeObject ** get_address_of__currentValue_3() { return &____currentValue_3; }
	inline void set__currentValue_3(RuntimeObject * value)
	{
		____currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0  : public RuntimeObject
{
public:
	// TKey[] System.Collections.Generic.SortedList`2::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// TValue[] System.Collections.Generic.SortedList`2::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.Generic.SortedList`2::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.SortedList`2::version
	int32_t ___version_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.Generic.SortedList`2/KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::keyList
	KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC * ___keyList_5;
	// System.Collections.Generic.SortedList`2/ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::valueList
	ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * ___valueList_6;
	// System.Object System.Collections.Generic.SortedList`2::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___keyList_5)); }
	inline KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___valueList_6)); }
	inline ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230  : public RuntimeObject
{
public:
	// TKey[] System.Collections.Generic.SortedList`2::keys
	TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* ___keys_0;
	// TValue[] System.Collections.Generic.SortedList`2::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.Generic.SortedList`2::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.SortedList`2::version
	int32_t ___version_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.Generic.SortedList`2/KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::keyList
	KeyList_t296975AE18449739E9E0D36201870D32AD100126 * ___keyList_5;
	// System.Collections.Generic.SortedList`2/ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::valueList
	ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * ___valueList_6;
	// System.Object System.Collections.Generic.SortedList`2::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___keys_0)); }
	inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* get_keys_0() const { return ___keys_0; }
	inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___keyList_5)); }
	inline KeyList_t296975AE18449739E9E0D36201870D32AD100126 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t296975AE18449739E9E0D36201870D32AD100126 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t296975AE18449739E9E0D36201870D32AD100126 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___valueList_6)); }
	inline ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item2_1)); }
	inline Il2CppChar get_m_Item2_1() const { return ___m_Item2_1; }
	inline Il2CppChar* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Il2CppChar value)
	{
		___m_Item2_1 = value;
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	RuntimeObject * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}
};


// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_t936566050E79A53330A93469CAF15575A12A114D  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};


// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	RuntimeObject * ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	RuntimeObject * ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item4_3)); }
	inline RuntimeObject * get_m_Item4_3() const { return ___m_Item4_3; }
	inline RuntimeObject ** get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(RuntimeObject * value)
	{
		___m_Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item4_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct ValueCollection_tF53EAC075C536C6BBEDD4AF0E2FC653DF9EE866C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tF53EAC075C536C6BBEDD4AF0E2FC653DF9EE866C, ___dictionary_0)); }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct ValueCollection_t81F32731B188197DB536DAA1C51819F2ABAC35C4  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tBD3577D7455E9C9FDAB004AF818DFD67809849A3 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t81F32731B188197DB536DAA1C51819F2ABAC35C4, ___dictionary_0)); }
	inline Dictionary_2_tBD3577D7455E9C9FDAB004AF818DFD67809849A3 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD3577D7455E9C9FDAB004AF818DFD67809849A3 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD3577D7455E9C9FDAB004AF818DFD67809849A3 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>
struct ValueCollection_t717796FB49620F46508DE171A43D148E5CAC0101  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t717796FB49620F46508DE171A43D148E5CAC0101, ___dictionary_0)); }
	inline Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848, ___dictionary_0)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>
struct ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC, ___dictionary_0)); }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63, ___dictionary_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>
struct ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/ValueList::_dict
	SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * ____dict_0;

public:
	inline static int32_t get_offset_of__dict_0() { return static_cast<int32_t>(offsetof(ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940, ____dict_0)); }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * get__dict_0() const { return ____dict_0; }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 ** get_address_of__dict_0() { return &____dict_0; }
	inline void set__dict_0(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * value)
	{
		____dict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dict_0), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/ValueList::_dict
	SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * ____dict_0;

public:
	inline static int32_t get_offset_of__dict_0() { return static_cast<int32_t>(offsetof(ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A, ____dict_0)); }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * get__dict_0() const { return ____dict_0; }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 ** get_address_of__dict_0() { return &____dict_0; }
	inline void set__dict_0(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * value)
	{
		____dict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dict_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// System.Collections.LowLevelComparer
struct LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields, ___Default_0)); }
	inline LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.ObjectEqualityComparer
struct ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9, ___Delegate_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF, ___Delegate_0)); }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90, ___Delegate_0)); }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870, ___Delegate_0)); }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD, ___Delegate_0)); }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CproviderU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2, ___m_Trackables_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Boolean>
struct ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	bool ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12, ___Item2_1)); }
	inline bool get_Item2_1() const { return ___Item2_1; }
	inline bool* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(bool value)
	{
		___Item2_1 = value;
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741, ___Delegate_0)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___key_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_key_0() const { return ___key_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t03AE7A9F3FCFC6AD533F1AC3F403168B8140649F  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t346381F1A8322029735E6CB60BE656844AC911E8  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_tBD40FD22068207BB90449FC608025235E400C47A  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_tB043EC909C55FE5BC78AD95436858F4956E3DE4C  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t758226B1C7A7735796B7029A5913BC43628FCCF3  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t2CAAD77E4532041B0120AE543DB331C1CECFA765  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t1953500C8BD92CD8DCFED1CC3B58B24A60C24E43  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_tE9F5623D0E551591334872A367EFF28A72775EEA  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t3385ADCA6DCAB14BAB5A5E886D096E0B5FA530F5  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t227E1B3CD9B70F544BE2BAC33219E40F224A16BA  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t7F92C20128624C004DAABFC3F72A9994C54898D9  : public SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2
{
public:

public:
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___dictionary_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___current_3)); }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FixationPoint_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_LeftEyePose_4() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_LeftEyePose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LeftEyePose_4() const { return ___m_LeftEyePose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LeftEyePose_4() { return &___m_LeftEyePose_4; }
	inline void set_m_LeftEyePose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LeftEyePose_4 = value;
	}

	inline static int32_t get_offset_of_m_RightEyePose_5() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_RightEyePose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_RightEyePose_5() const { return ___m_RightEyePose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_RightEyePose_5() { return &___m_RightEyePose_5; }
	inline void set_m_RightEyePose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_RightEyePose_5 = value;
	}

	inline static int32_t get_offset_of_m_FixationPoint_6() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_FixationPoint_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FixationPoint_6() const { return ___m_FixationPoint_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FixationPoint_6() { return &___m_FixationPoint_6; }
	inline void set_m_FixationPoint_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FixationPoint_6 = value;
	}
};

struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___s_Default_7;

public:
	inline static int32_t get_offset_of_s_Default_7() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields, ___s_Default_7)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_s_Default_7() const { return ___s_Default_7; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_s_Default_7() { return &___s_Default_7; }
	inline void set_s_Default_7(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___s_Default_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipant
struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>
struct Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07, ___m_Enumerator_0)); }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Added_1)); }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Updated_2)); }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Added_1)); }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Updated_2)); }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Added_1)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Updated_2)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Added_1)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Updated_2)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Added_1)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Updated_2)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Added_1)); }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Updated_2)); }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Added_1)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Updated_2)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Added_1)); }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Updated_2)); }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m509D78F4A94AB4B514AD94A736432B44752D3EF3_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m41A4427A98AD75DDB1F4F6A811CDDBBC45F1A3E1_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_gshared (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m22CFD690D9CAC1E3C0F6347B0E13A264B961AAF6_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultValue4, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_gshared (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___nativeArray0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m86FF5A6D8EB823DC0AAAE8784983344EF4451CCB_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3_gshared (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_gshared (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_added_m6456F0BBC036D0E05F521F8236BCB0DF711F85EC_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_updated_mADD0CC56A6804C70B29E682486318F9E02FF5853_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mBE38A6863EC0DF6C3D6596328163619CCCF6B05F_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mBE2B0C4768286FA65224873406FCB8A26E981C8D_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA9405A031CAB7C9522DE4B4EC6E42CD838C985E6_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m7342F965BDB96A6B8558E8E4CC1B4AD2CE86016A_gshared (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m2CA7C2F46B2FB6A3516C063F5C282CC115DE16A6_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_m22E74E1A1CE39909D3CE413DC3D4257DC71EF221_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mA1631D460A042E78DF5341363C5C5DDED83B82AA_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m0083081CA16A222B5F9D3B9F80CD36686C386952_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3D2A48FC516A9461FE74D592F11FD5EBCB1021A3_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC_gshared (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mFC317C477989C173EAA9775AA11F779B8E6FCC86_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_m504DA194BB674A1C4CA84E39B11EE8E60FEDF1B4_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m55724874B4CA2AA91D921C539042B1E72D581FA7_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mAA8AD41983B7F4B9F4C85B7AC7191906F65E9B23_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD_gshared (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_added_m91304D532A125A91DA032D30A1102C5728C44961_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_updated_mD44ECCE6DFA4658ACA7E130DF6B8E68F805F5E62_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m5AEA71BD82CC210CF004B8CC44A08383E3D582EB_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mECACB137A91E259559029D2F1A87BF9ED017B52F_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mC83AD6BADB9F83E0CACE1669DA04CE64ED50FE92_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m4CDB60667F21D4D1FE7764439F222E38EC8583A7_gshared (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mA17A69073E206693F40213557DFD6FE47DFC2D9D_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_m92FFA2F1D627E210024C9ECE37704B201A879B39_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mB2E61C1D2F427172E76D12A93136B19627D32CC3_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mE38CB34B829DF49111291FA7D07AA951AA5E0876_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mEF5EDBE19459AC6E3FFB664ABD876D26D05840E5_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489_gshared (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_mF35E319657A0930BB3AFBDDFDC344BB2610F94DF_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m978EBE9AC9EA2B7A7D8A3AD21CF43F69DF937865_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m616ABD191E25F8FB4177F8DAC9C049D40607EC2D_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m4F5D34822064CD0070E67AA2D2153B4DE0E66F86_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23_gshared (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_added_mDE26C62D5F166E06CE2A2C9CB08FCC7C44A1C475_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_updated_m1465025B1228F225EE7DBA0DF451EE8116E2CB6B_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DB61959C97EFB7FD0864432150198B5882D9E_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mCA29D15B30C5D96C468DF66F3E7BC4310E6D7467_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m17176A0A5FC360159390E6C015BA47963F0C4E12_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m6FB8CBBAB8D901A94BDB00753991BD4B40C8E4C1_gshared (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C53FB40CB00102300FED9D8CB3EF6B25EBCEAFC_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDA05F189BDE00DBDD5807B2499D8BB36A1271925_gshared (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_mEC3FA237F6A8530A067C7D7F3E8F9466D144B2CC_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Boolean>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m048D63CDB7084AEC874B1A762649AF39AAC80F8D_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mAD2AB81B40B7BEA1BA86A9F3369CD1F062EE1FB6_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mE81191215F74EAB4A105FC4171306C2048870F3F_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Object,System.Boolean>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mBABF7EBF37F40A20153104D68C2BD6FB6A777D20_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mAF40CEE3BE0047064506BD2EBFDD05D0E0155286_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mC72DD49B650A20080C35B93DC9D8F20B49503251_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m509D78F4A94AB4B514AD94A736432B44752D3EF3_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_added_m509D78F4A94AB4B514AD94A736432B44752D3EF3_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m41A4427A98AD75DDB1F4F6A811CDDBBC45F1A3E1_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m41A4427A98AD75DDB1F4F6A811CDDBBC45F1A3E1_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m22CFD690D9CAC1E3C0F6347B0E13A264B961AAF6 (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, int32_t, int32_t, int32_t, int32_t, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 , const RuntimeMethod*))TrackableChanges_1__ctor_m22CFD690D9CAC1E3C0F6347B0E13A264B961AAF6_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_gshared)(___nativeArray0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m86FF5A6D8EB823DC0AAAE8784983344EF4451CCB (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, void*, int32_t, void*, int32_t, void*, int32_t, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m86FF5A6D8EB823DC0AAAE8784983344EF4451CCB_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3 (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *, const RuntimeMethod*))NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *, const RuntimeMethod*))NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_added()
inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_added_m6456F0BBC036D0E05F521F8236BCB0DF711F85EC_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, const RuntimeMethod*))TrackableChanges_1_get_added_m6456F0BBC036D0E05F521F8236BCB0DF711F85EC_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_updated()
inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_updated_mADD0CC56A6804C70B29E682486318F9E02FF5853_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mADD0CC56A6804C70B29E682486318F9E02FF5853_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mBE38A6863EC0DF6C3D6596328163619CCCF6B05F_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mBE38A6863EC0DF6C3D6596328163619CCCF6B05F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_mBE2B0C4768286FA65224873406FCB8A26E981C8D (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, int32_t, int32_t, int32_t, int32_t, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B , const RuntimeMethod*))TrackableChanges_1__ctor_mBE2B0C4768286FA65224873406FCB8A26E981C8D_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA9405A031CAB7C9522DE4B4EC6E42CD838C985E6 (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, void*, int32_t, void*, int32_t, void*, int32_t, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA9405A031CAB7C9522DE4B4EC6E42CD838C985E6_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
inline void NativeArray_1_Dispose_m7342F965BDB96A6B8558E8E4CC1B4AD2CE86016A (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 *, const RuntimeMethod*))NativeArray_1_Dispose_m7342F965BDB96A6B8558E8E4CC1B4AD2CE86016A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
inline void TrackableChanges_1_Dispose_m2CA7C2F46B2FB6A3516C063F5C282CC115DE16A6 (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m2CA7C2F46B2FB6A3516C063F5C282CC115DE16A6_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_m22E74E1A1CE39909D3CE413DC3D4257DC71EF221_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_added_m22E74E1A1CE39909D3CE413DC3D4257DC71EF221_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mA1631D460A042E78DF5341363C5C5DDED83B82AA_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_updated_mA1631D460A042E78DF5341363C5C5DDED83B82AA_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m0083081CA16A222B5F9D3B9F80CD36686C386952 (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, int32_t, int32_t, int32_t, int32_t, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F , const RuntimeMethod*))TrackableChanges_1__ctor_m0083081CA16A222B5F9D3B9F80CD36686C386952_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m3D2A48FC516A9461FE74D592F11FD5EBCB1021A3 (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, void*, int32_t, void*, int32_t, void*, int32_t, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m3D2A48FC516A9461FE74D592F11FD5EBCB1021A3_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
inline void NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *, const RuntimeMethod*))NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
inline void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9 (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mFC317C477989C173EAA9775AA11F779B8E6FCC86_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_added_mFC317C477989C173EAA9775AA11F779B8E6FCC86_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_m504DA194BB674A1C4CA84E39B11EE8E60FEDF1B4_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m504DA194BB674A1C4CA84E39B11EE8E60FEDF1B4_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m55724874B4CA2AA91D921C539042B1E72D581FA7 (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, int32_t, int32_t, int32_t, int32_t, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 , const RuntimeMethod*))TrackableChanges_1__ctor_m55724874B4CA2AA91D921C539042B1E72D581FA7_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mAA8AD41983B7F4B9F4C85B7AC7191906F65E9B23 (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, void*, int32_t, void*, int32_t, void*, int32_t, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mAA8AD41983B7F4B9F4C85B7AC7191906F65E9B23_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *, const RuntimeMethod*))NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2 (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_added()
inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_added_m91304D532A125A91DA032D30A1102C5728C44961_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, const RuntimeMethod*))TrackableChanges_1_get_added_m91304D532A125A91DA032D30A1102C5728C44961_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_updated()
inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_updated_mD44ECCE6DFA4658ACA7E130DF6B8E68F805F5E62_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mD44ECCE6DFA4658ACA7E130DF6B8E68F805F5E62_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m5AEA71BD82CC210CF004B8CC44A08383E3D582EB_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m5AEA71BD82CC210CF004B8CC44A08383E3D582EB_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_mECACB137A91E259559029D2F1A87BF9ED017B52F (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, int32_t, int32_t, int32_t, int32_t, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , const RuntimeMethod*))TrackableChanges_1__ctor_mECACB137A91E259559029D2F1A87BF9ED017B52F_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mC83AD6BADB9F83E0CACE1669DA04CE64ED50FE92 (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, void*, int32_t, void*, int32_t, void*, int32_t, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mC83AD6BADB9F83E0CACE1669DA04CE64ED50FE92_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
inline void NativeArray_1_Dispose_m4CDB60667F21D4D1FE7764439F222E38EC8583A7 (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E *, const RuntimeMethod*))NativeArray_1_Dispose_m4CDB60667F21D4D1FE7764439F222E38EC8583A7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
inline void TrackableChanges_1_Dispose_mA17A69073E206693F40213557DFD6FE47DFC2D9D (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mA17A69073E206693F40213557DFD6FE47DFC2D9D_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_m92FFA2F1D627E210024C9ECE37704B201A879B39_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_added_m92FFA2F1D627E210024C9ECE37704B201A879B39_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mB2E61C1D2F427172E76D12A93136B19627D32CC3_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mB2E61C1D2F427172E76D12A93136B19627D32CC3_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_mE38CB34B829DF49111291FA7D07AA951AA5E0876 (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, int32_t, int32_t, int32_t, int32_t, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 , const RuntimeMethod*))TrackableChanges_1__ctor_mE38CB34B829DF49111291FA7D07AA951AA5E0876_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mEF5EDBE19459AC6E3FFB664ABD876D26D05840E5 (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, void*, int32_t, void*, int32_t, void*, int32_t, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mEF5EDBE19459AC6E3FFB664ABD876D26D05840E5_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489 (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *, const RuntimeMethod*))NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7 (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_mF35E319657A0930BB3AFBDDFDC344BB2610F94DF_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_added_mF35E319657A0930BB3AFBDDFDC344BB2610F94DF_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m978EBE9AC9EA2B7A7D8A3AD21CF43F69DF937865_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m978EBE9AC9EA2B7A7D8A3AD21CF43F69DF937865_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m616ABD191E25F8FB4177F8DAC9C049D40607EC2D (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, int32_t, int32_t, int32_t, int32_t, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F , const RuntimeMethod*))TrackableChanges_1__ctor_m616ABD191E25F8FB4177F8DAC9C049D40607EC2D_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m4F5D34822064CD0070E67AA2D2153B4DE0E66F86 (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m4F5D34822064CD0070E67AA2D2153B4DE0E66F86_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23 (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *, const RuntimeMethod*))NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051 (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_added()
inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_added_mDE26C62D5F166E06CE2A2C9CB08FCC7C44A1C475_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, const RuntimeMethod*))TrackableChanges_1_get_added_mDE26C62D5F166E06CE2A2C9CB08FCC7C44A1C475_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_updated()
inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_updated_m1465025B1228F225EE7DBA0DF451EE8116E2CB6B_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m1465025B1228F225EE7DBA0DF451EE8116E2CB6B_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DB61959C97EFB7FD0864432150198B5882D9E_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mCF5DB61959C97EFB7FD0864432150198B5882D9E_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_mCA29D15B30C5D96C468DF66F3E7BC4310E6D7467 (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, int32_t, int32_t, int32_t, int32_t, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 , const RuntimeMethod*))TrackableChanges_1__ctor_mCA29D15B30C5D96C468DF66F3E7BC4310E6D7467_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m17176A0A5FC360159390E6C015BA47963F0C4E12 (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m17176A0A5FC360159390E6C015BA47963F0C4E12_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
inline void NativeArray_1_Dispose_m6FB8CBBAB8D901A94BDB00753991BD4B40C8E4C1 (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 *, const RuntimeMethod*))NativeArray_1_Dispose_m6FB8CBBAB8D901A94BDB00753991BD4B40C8E4C1_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
inline void TrackableChanges_1_Dispose_m1C53FB40CB00102300FED9D8CB3EF6B25EBCEAFC (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m1C53FB40CB00102300FED9D8CB3EF6B25EBCEAFC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void Enumerator__ctor_mDA05F189BDE00DBDD5807B2499D8BB36A1271925 (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 *, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, const RuntimeMethod*))Enumerator__ctor_mDA05F189BDE00DBDD5807B2499D8BB36A1271925_gshared)(__this, ___trackables0, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
inline Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_mEC3FA237F6A8530A067C7D7F3E8F9466D144B2CC (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_mEC3FA237F6A8530A067C7D7F3E8F9466D144B2CC_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, const RuntimeMethod*))TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F_gshared)(__this, ___trackables0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
inline int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161 (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, const RuntimeMethod*))TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m6757CFA9B5CC91705866ABDD9E48681DAB1C71D9 (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
inline RuntimeObject * TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , const RuntimeMethod*))TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD_gshared)(__this, ___trackableId0, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetHashCode()
inline int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, const RuntimeMethod*))TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
inline bool TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 , const RuntimeMethod*))TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(System.Object)
inline bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03 (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, RuntimeObject *, const RuntimeMethod*))TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
inline bool TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , RuntimeObject **, const RuntimeMethod*))TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F_gshared)(__this, ___trackableId0, ___trackable1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m34B16565FCB93CC63DAF544CC55CD4459A7435AB (int32_t ___h10, int32_t ___h21, int32_t ___h32, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * ___call0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36 (Type_t * ___objectType0, String_t* ___functionName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7 (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Boolean>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m048D63CDB7084AEC874B1A762649AF39AAC80F8D (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, bool, const RuntimeMethod*))ValueTuple_2__ctor_m048D63CDB7084AEC874B1A762649AF39AAC80F8D_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
inline bool ValueTuple_2_Equals_mAD2AB81B40B7BEA1BA86A9F3369CD1F062EE1FB6 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 , const RuntimeMethod*))ValueTuple_2_Equals_mAD2AB81B40B7BEA1BA86A9F3369CD1F062EE1FB6_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.Object)
inline bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
inline int32_t ValueTuple_2_CompareTo_mE81191215F74EAB4A105FC4171306C2048870F3F (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 , const RuntimeMethod*))ValueTuple_2_CompareTo_mE81191215F74EAB4A105FC4171306C2048870F3F_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCode()
inline int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, const RuntimeMethod*))ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_gshared)(__this, ___comparer0, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Object,System.Boolean>::ToString()
inline String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, const RuntimeMethod*))ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_gshared)(__this, method);
}
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mBABF7EBF37F40A20153104D68C2BD6FB6A777D20 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2__ctor_mBABF7EBF37F40A20153104D68C2BD6FB6A777D20_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
inline bool ValueTuple_2_Equals_mAF40CEE3BE0047064506BD2EBFDD05D0E0155286 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))ValueTuple_2_Equals_mAF40CEE3BE0047064506BD2EBFDD05D0E0155286_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
inline int32_t ValueTuple_2_CompareTo_mC72DD49B650A20080C35B93DC9D8F20B49503251 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))ValueTuple_2_CompareTo_mC72DD49B650A20080C35B93DC9D8F20B49503251_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, const RuntimeMethod*))ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_gshared)(__this, ___comparer0, method);
}
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
inline String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, const RuntimeMethod*))ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m509D78F4A94AB4B514AD94A736432B44752D3EF3_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Added_1();
		return (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m509D78F4A94AB4B514AD94A736432B44752D3EF3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  _returnValue;
	_returnValue = TrackableChanges_1_get_added_m509D78F4A94AB4B514AD94A736432B44752D3EF3_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m41A4427A98AD75DDB1F4F6A811CDDBBC45F1A3E1_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Updated_2();
		return (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m41A4427A98AD75DDB1F4F6A811CDDBBC45F1A3E1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_m41A4427A98AD75DDB1F4F6A811CDDBBC45F1A3E1_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m22CFD690D9CAC1E3C0F6347B0E13A264B961AAF6_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_3;
		L_3 = ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_7;
		L_7 = ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline((TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m22CFD690D9CAC1E3C0F6347B0E13A264B961AAF6_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	TrackableChanges_1__ctor_m22CFD690D9CAC1E3C0F6347B0E13A264B961AAF6(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m86FF5A6D8EB823DC0AAAE8784983344EF4451CCB_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_5;
		L_5 = ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_11;
		L_11 = ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline((TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m86FF5A6D8EB823DC0AAAE8784983344EF4451CCB_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	TrackableChanges_1__ctor_m86FF5A6D8EB823DC0AAAE8784983344EF4451CCB(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_inline((TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * L_1 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3((NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * L_2 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3((NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline((TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_added_m6456F0BBC036D0E05F521F8236BCB0DF711F85EC_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_0 = (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )__this->get_m_Added_1();
		return (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_added_m6456F0BBC036D0E05F521F8236BCB0DF711F85EC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  _returnValue;
	_returnValue = TrackableChanges_1_get_added_m6456F0BBC036D0E05F521F8236BCB0DF711F85EC_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_updated_mADD0CC56A6804C70B29E682486318F9E02FF5853_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_0 = (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )__this->get_m_Updated_2();
		return (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_updated_mADD0CC56A6804C70B29E682486318F9E02FF5853_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_mADD0CC56A6804C70B29E682486318F9E02FF5853_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mBE38A6863EC0DF6C3D6596328163619CCCF6B05F_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mBE38A6863EC0DF6C3D6596328163619CCCF6B05F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_mBE38A6863EC0DF6C3D6596328163619CCCF6B05F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mBE2B0C4768286FA65224873406FCB8A26E981C8D_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_3;
		L_3 = ((  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  (*) (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_7;
		L_7 = ((  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  (*) (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_inline((TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mBE2B0C4768286FA65224873406FCB8A26E981C8D_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	TrackableChanges_1__ctor_mBE2B0C4768286FA65224873406FCB8A26E981C8D(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA9405A031CAB7C9522DE4B4EC6E42CD838C985E6_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_5;
		L_5 = ((  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  (*) (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_11;
		L_11 = ((  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  (*) (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_inline((TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mA9405A031CAB7C9522DE4B4EC6E42CD838C985E6_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	TrackableChanges_1__ctor_mA9405A031CAB7C9522DE4B4EC6E42CD838C985E6(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m2CA7C2F46B2FB6A3516C063F5C282CC115DE16A6_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_inline((TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * L_1 = (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m7342F965BDB96A6B8558E8E4CC1B4AD2CE86016A((NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 *)(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * L_2 = (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m7342F965BDB96A6B8558E8E4CC1B4AD2CE86016A((NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 *)(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_inline((TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m2CA7C2F46B2FB6A3516C063F5C282CC115DE16A6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *>(__this + _offset);
	TrackableChanges_1_Dispose_m2CA7C2F46B2FB6A3516C063F5C282CC115DE16A6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_m22E74E1A1CE39909D3CE413DC3D4257DC71EF221_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Added_1();
		return (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_m22E74E1A1CE39909D3CE413DC3D4257DC71EF221_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  _returnValue;
	_returnValue = TrackableChanges_1_get_added_m22E74E1A1CE39909D3CE413DC3D4257DC71EF221_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mA1631D460A042E78DF5341363C5C5DDED83B82AA_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Updated_2();
		return (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mA1631D460A042E78DF5341363C5C5DDED83B82AA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_mA1631D460A042E78DF5341363C5C5DDED83B82AA_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m0083081CA16A222B5F9D3B9F80CD36686C386952_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_3;
		L_3 = ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_7;
		L_7 = ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m0083081CA16A222B5F9D3B9F80CD36686C386952_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	TrackableChanges_1__ctor_m0083081CA16A222B5F9D3B9F80CD36686C386952(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3D2A48FC516A9461FE74D592F11FD5EBCB1021A3_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_5;
		L_5 = ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_11;
		L_11 = ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m3D2A48FC516A9461FE74D592F11FD5EBCB1021A3_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	TrackableChanges_1__ctor_m3D2A48FC516A9461FE74D592F11FD5EBCB1021A3(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * L_1 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC((NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * L_2 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC((NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mFC317C477989C173EAA9775AA11F779B8E6FCC86_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Added_1();
		return (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mFC317C477989C173EAA9775AA11F779B8E6FCC86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  _returnValue;
	_returnValue = TrackableChanges_1_get_added_mFC317C477989C173EAA9775AA11F779B8E6FCC86_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_m504DA194BB674A1C4CA84E39B11EE8E60FEDF1B4_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Updated_2();
		return (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_m504DA194BB674A1C4CA84E39B11EE8E60FEDF1B4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_m504DA194BB674A1C4CA84E39B11EE8E60FEDF1B4_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m55724874B4CA2AA91D921C539042B1E72D581FA7_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_3;
		L_3 = ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_7;
		L_7 = ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline((TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m55724874B4CA2AA91D921C539042B1E72D581FA7_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	TrackableChanges_1__ctor_m55724874B4CA2AA91D921C539042B1E72D581FA7(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mAA8AD41983B7F4B9F4C85B7AC7191906F65E9B23_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_5;
		L_5 = ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_11;
		L_11 = ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline((TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mAA8AD41983B7F4B9F4C85B7AC7191906F65E9B23_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	TrackableChanges_1__ctor_mAA8AD41983B7F4B9F4C85B7AC7191906F65E9B23(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_inline((TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * L_1 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD((NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * L_2 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD((NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline((TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_added_m91304D532A125A91DA032D30A1102C5728C44961_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_0 = (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )__this->get_m_Added_1();
		return (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_added_m91304D532A125A91DA032D30A1102C5728C44961_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  _returnValue;
	_returnValue = TrackableChanges_1_get_added_m91304D532A125A91DA032D30A1102C5728C44961_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_updated_mD44ECCE6DFA4658ACA7E130DF6B8E68F805F5E62_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_0 = (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )__this->get_m_Updated_2();
		return (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_updated_mD44ECCE6DFA4658ACA7E130DF6B8E68F805F5E62_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_mD44ECCE6DFA4658ACA7E130DF6B8E68F805F5E62_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m5AEA71BD82CC210CF004B8CC44A08383E3D582EB_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m5AEA71BD82CC210CF004B8CC44A08383E3D582EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_m5AEA71BD82CC210CF004B8CC44A08383E3D582EB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mECACB137A91E259559029D2F1A87BF9ED017B52F_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_3;
		L_3 = ((  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  (*) (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_7;
		L_7 = ((  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  (*) (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_inline((TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mECACB137A91E259559029D2F1A87BF9ED017B52F_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	TrackableChanges_1__ctor_mECACB137A91E259559029D2F1A87BF9ED017B52F(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mC83AD6BADB9F83E0CACE1669DA04CE64ED50FE92_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_5;
		L_5 = ((  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  (*) (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_11;
		L_11 = ((  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  (*) (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_inline((TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mC83AD6BADB9F83E0CACE1669DA04CE64ED50FE92_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	TrackableChanges_1__ctor_mC83AD6BADB9F83E0CACE1669DA04CE64ED50FE92(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mA17A69073E206693F40213557DFD6FE47DFC2D9D_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_inline((TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * L_1 = (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m4CDB60667F21D4D1FE7764439F222E38EC8583A7((NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E *)(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * L_2 = (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m4CDB60667F21D4D1FE7764439F222E38EC8583A7((NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E *)(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_inline((TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mA17A69073E206693F40213557DFD6FE47DFC2D9D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *>(__this + _offset);
	TrackableChanges_1_Dispose_mA17A69073E206693F40213557DFD6FE47DFC2D9D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_m92FFA2F1D627E210024C9ECE37704B201A879B39_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Added_1();
		return (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_m92FFA2F1D627E210024C9ECE37704B201A879B39_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  _returnValue;
	_returnValue = TrackableChanges_1_get_added_m92FFA2F1D627E210024C9ECE37704B201A879B39_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mB2E61C1D2F427172E76D12A93136B19627D32CC3_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Updated_2();
		return (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mB2E61C1D2F427172E76D12A93136B19627D32CC3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_mB2E61C1D2F427172E76D12A93136B19627D32CC3_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mE38CB34B829DF49111291FA7D07AA951AA5E0876_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_3;
		L_3 = ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_7;
		L_7 = ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline((TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mE38CB34B829DF49111291FA7D07AA951AA5E0876_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	TrackableChanges_1__ctor_mE38CB34B829DF49111291FA7D07AA951AA5E0876(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mEF5EDBE19459AC6E3FFB664ABD876D26D05840E5_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_5;
		L_5 = ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_11;
		L_11 = ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline((TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mEF5EDBE19459AC6E3FFB664ABD876D26D05840E5_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	TrackableChanges_1__ctor_mEF5EDBE19459AC6E3FFB664ABD876D26D05840E5(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_inline((TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * L_1 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489((NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * L_2 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489((NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline((TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_mF35E319657A0930BB3AFBDDFDC344BB2610F94DF_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Added_1();
		return (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_mF35E319657A0930BB3AFBDDFDC344BB2610F94DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  _returnValue;
	_returnValue = TrackableChanges_1_get_added_mF35E319657A0930BB3AFBDDFDC344BB2610F94DF_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m978EBE9AC9EA2B7A7D8A3AD21CF43F69DF937865_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Updated_2();
		return (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m978EBE9AC9EA2B7A7D8A3AD21CF43F69DF937865_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_m978EBE9AC9EA2B7A7D8A3AD21CF43F69DF937865_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m616ABD191E25F8FB4177F8DAC9C049D40607EC2D_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_3;
		L_3 = ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_7;
		L_7 = ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline((TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m616ABD191E25F8FB4177F8DAC9C049D40607EC2D_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	TrackableChanges_1__ctor_m616ABD191E25F8FB4177F8DAC9C049D40607EC2D(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m4F5D34822064CD0070E67AA2D2153B4DE0E66F86_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_5;
		L_5 = ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_11;
		L_11 = ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline((TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m4F5D34822064CD0070E67AA2D2153B4DE0E66F86_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	TrackableChanges_1__ctor_m4F5D34822064CD0070E67AA2D2153B4DE0E66F86(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_inline((TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * L_1 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23((NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * L_2 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23((NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline((TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_added_mDE26C62D5F166E06CE2A2C9CB08FCC7C44A1C475_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_0 = (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )__this->get_m_Added_1();
		return (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_added_mDE26C62D5F166E06CE2A2C9CB08FCC7C44A1C475_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  _returnValue;
	_returnValue = TrackableChanges_1_get_added_mDE26C62D5F166E06CE2A2C9CB08FCC7C44A1C475_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_updated_m1465025B1228F225EE7DBA0DF451EE8116E2CB6B_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_0 = (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )__this->get_m_Updated_2();
		return (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_updated_m1465025B1228F225EE7DBA0DF451EE8116E2CB6B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  _returnValue;
	_returnValue = TrackableChanges_1_get_updated_m1465025B1228F225EE7DBA0DF451EE8116E2CB6B_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DB61959C97EFB7FD0864432150198B5882D9E_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DB61959C97EFB7FD0864432150198B5882D9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  _returnValue;
	_returnValue = TrackableChanges_1_get_removed_mCF5DB61959C97EFB7FD0864432150198B5882D9E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mCA29D15B30C5D96C468DF66F3E7BC4310E6D7467_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_3;
		L_3 = ((  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  (*) (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_7;
		L_7 = ((  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  (*) (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_inline((TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mCA29D15B30C5D96C468DF66F3E7BC4310E6D7467_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultValue4, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	TrackableChanges_1__ctor_mCA29D15B30C5D96C468DF66F3E7BC4310E6D7467(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m17176A0A5FC360159390E6C015BA47963F0C4E12_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_5;
		L_5 = ((  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  (*) (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_11;
		L_11 = ((  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  (*) (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m814A593C5425B0EBE4D059217522206F3282697F_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_16 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m769818455B11F78DCFF1E04625BF0E9CD5758A5A_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_inline((TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m17176A0A5FC360159390E6C015BA47963F0C4E12_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	TrackableChanges_1__ctor_m17176A0A5FC360159390E6C015BA47963F0C4E12(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C53FB40CB00102300FED9D8CB3EF6B25EBCEAFC_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0;
		L_0 = TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_inline((TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * L_1 = (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m6FB8CBBAB8D901A94BDB00753991BD4B40C8E4C1((NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 *)(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * L_2 = (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m6FB8CBBAB8D901A94BDB00753991BD4B40C8E4C1((NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 *)(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_inline((TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m1C53FB40CB00102300FED9D8CB3EF6B25EBCEAFC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *>(__this + _offset);
	TrackableChanges_1_Dispose_m1C53FB40CB00102300FED9D8CB3EF6B25EBCEAFC(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_mEC3FA237F6A8530A067C7D7F3E8F9466D144B2CC_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	{
		// return new Enumerator(m_Trackables);
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mDA05F189BDE00DBDD5807B2499D8BB36A1271925((&L_1), (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_mEC3FA237F6A8530A067C7D7F3E8F9466D144B2CC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  _returnValue;
	_returnValue = TrackableCollection_1_GetEnumerator_mEC3FA237F6A8530A067C7D7F3E8F9466D144B2CC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	{
		// if (trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = ___trackables0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("trackables");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral336703A716E6AABC0F3D29AA7F207E54FF0E7ACC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// m_Trackables = trackables;
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = ___trackables0;
		__this->set_m_Trackables_0(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	TrackableCollection_1__ctor_m599ED767CA9BB47CEC3CE4E26D3D55A45BAE7D8F(_thisAdjusted, ___trackables0, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return m_Trackables.Count;
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		NullCheck((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (int32_t)L_3;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161(_thisAdjusted, method);
	return _returnValue;
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_Trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD_RuntimeMethod_var)));
	}

IL_0013:
	{
	}

IL_0014:
	try
	{// begin try (depth: 1)
		// return m_Trackables[trackableId];
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___trackableId0;
		NullCheck((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2);
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2, (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_4;
		goto IL_003b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Collections.Generic.KeyNotFoundException)
		// catch (KeyNotFoundException e)
		V_1 = (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)((KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)IL2CPP_GET_ACTIVE_EXCEPTION(KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *));
		// throw new KeyNotFoundException(
		//     string.Format("Trackable with id {0} does not exist in this collection.", trackableId),
		//     e);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_5 = ___trackableId0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral812EC03C4AEF0AE76BA178C4367F385393486DE8)), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * L_9 = V_1;
		KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * L_10 = (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_m6757CFA9B5CC91705866ABDD9E48681DAB1C71D9(L_10, (String_t*)L_8, (Exception_t *)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_003b:
	{
		// }
		RuntimeObject * L_11 = V_0;
		return (RuntimeObject *)L_11;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = TrackableCollection_1_get_Item_m365B4BBDFC2743CEFAFD0A58ECE781705CC556CD(_thisAdjusted, ___trackableId0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	{
		// return m_Trackables == null ? 0 : m_Trackables.GetHashCode();
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_1 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		NullCheck((RuntimeObject *)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_1);
		return (int32_t)L_2;
	}

IL_0014:
	{
		return (int32_t)0;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// if (!(obj is TrackableCollection<TTrackable>))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4))))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((TrackableCollection<TTrackable>) obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)__this, (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 )((*(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return (bool)L_2;
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method)
{
	{
		// return ReferenceEquals(m_Trackables, other.m_Trackables);
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  L_1 = ___other0;
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_1.get_m_Trackables_0();
		return (bool)((((RuntimeObject*)(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_0) == ((RuntimeObject*)(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D_AdjustorThunk (RuntimeObject * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::op_Equality(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>,UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_op_Equality_mC85273131C07B6040E10B91ADE0CCFE16A67FA97_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___lhs0, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  L_0 = ___rhs1;
		bool L_1;
		L_1 = TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(&___lhs0), (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return (bool)L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::op_Inequality(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>,UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_op_Inequality_m44692FA40981E11A3F0E734C0B9F69AF26D4AD93_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___lhs0, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !lhs.Equals(rhs);
		TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  L_0 = ___rhs1;
		bool L_1;
		L_1 = TrackableCollection_1_Equals_m24E8E970B0E2A551F0B4A162234B43020CD3649D((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(&___lhs0), (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	{
		// if (m_Trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return m_Trackables.TryGetValue(trackableId, out trackable);
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___trackableId0;
		RuntimeObject ** L_4 = ___trackable1;
		NullCheck((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2);
		bool L_5;
		L_5 = ((  bool (*) (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2, (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_3, (RuntimeObject **)(RuntimeObject **)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableCollection_1_TryGetTrackable_m3227DE560DE63060CCF94B43C7C0DC58EF1F7B0F(_thisAdjusted, ___trackableId0, ___trackable1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m495E6B5CCD50BDC48525BBF2A817EBED5A305233_gshared (TrackingSubsystem_4_t03AE7A9F3FCFC6AD533F1AC3F403168B8140649F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m4E56D6762DBAF4B85197189BE61C13DE30BA9EA0_gshared (TrackingSubsystem_4_t346381F1A8322029735E6CB60BE656844AC911E8 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m975B52EF0629E5F911DF3B2540956C2ECAC19F1C_gshared (TrackingSubsystem_4_tBD40FD22068207BB90449FC608025235E400C47A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m88ED6F3499AFB910896A8FCC211F32BC4ACDB87D_gshared (TrackingSubsystem_4_tB043EC909C55FE5BC78AD95436858F4956E3DE4C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m1D64645D50A5AF5DE737B76E812A9282AE5C75D0_gshared (TrackingSubsystem_4_t758226B1C7A7735796B7029A5913BC43628FCCF3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m00DE04D7B62F9F06D59F884D4382E11CB0476D80_gshared (TrackingSubsystem_4_t2CAAD77E4532041B0120AE543DB331C1CECFA765 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mC95093BD2646F8DAEE7E7D9D836D9149439CB30A_gshared (TrackingSubsystem_4_t1953500C8BD92CD8DCFED1CC3B58B24A60C24E43 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mFF3892B28340E6F3ED1F3DC251FF933173F496B6_gshared (TrackingSubsystem_4_tE9F5623D0E551591334872A367EFF28A72775EEA * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mE19523A7606EFAD4BE7A4A102D5224D66B5FE0DE_gshared (TrackingSubsystem_4_t3385ADCA6DCAB14BAB5A5E886D096E0B5FA530F5 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m6EC254893EEB06ED242EB316FA3C224F9B1EF255_gshared (TrackingSubsystem_4_t227E1B3CD9B70F544BE2BAC33219E40F224A16BA * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mD06E8532EADAB0CF5854F1190D0302D2A5C301EB_gshared (TrackingSubsystem_4_t7F92C20128624C004DAABFC3F72A9994C54898D9 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this);
		((  void (*) (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// T1 System.Tuple`2<System.Object,System.Char>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m674FB189FF2498552FFCBC25374995060CF52DAE_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Char>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_mA20460987209D5C42A028B9B1D371414046CE837_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_m_Item2_1();
		return (Il2CppChar)L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Char>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m0F7068BB6EC9D425B7233FF21A64CF883E17AA5D_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___item10, Il2CppChar ___item21, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		Il2CppChar L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_mC13D56B08E3BF9AE03134F713E88F59AF49E0986_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (bool)L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mB8764DDC777A14644C984149BC346B303F8CB7E7_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)((Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		Il2CppChar L_9 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_10);
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_12 = V_0;
		NullCheck(L_12);
		Il2CppChar L_13 = (Il2CppChar)L_12->get_m_Item2_1();
		Il2CppChar L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_14);
		NullCheck((RuntimeObject*)L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		return (bool)L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m9F56832E563506449F01AB0020EDF8E99AD82E4D_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (int32_t)L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)((Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5;
		L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_RuntimeMethod_var)));
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return (int32_t)L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		Il2CppChar L_15 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_16);
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_18 = V_0;
		NullCheck(L_18);
		Il2CppChar L_19 = (Il2CppChar)L_18->get_m_Item2_1();
		Il2CppChar L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_20);
		NullCheck((RuntimeObject*)L_14);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_17, (RuntimeObject *)L_21);
		return (int32_t)L_22;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m56B88A8B03BF1856556DB8527DB575A497601841_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m6A8402570FA26D368443512574A0A03CBFAB7585_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_5);
		NullCheck((RuntimeObject*)L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		int32_t L_8;
		L_8 = Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797((int32_t)L_2, (int32_t)L_7, /*hidden argument*/NULL);
		return (int32_t)L_8;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m4F1D997C1F791EC93E8E153E25B8802A2A111436_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_3);
		return (String_t*)L_4;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_mC29992D30719486284F41C1DC333E9A321947EBE_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_3, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		Il2CppChar L_6 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_7 = L_6;
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_7);
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_5, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		NullCheck((StringBuilder_t *)L_10);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_10, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_12 = ___sb0;
		NullCheck((RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_12);
		return (String_t*)L_13;
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
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m9994204216D25B2CE26689DB74231658870E9BCD_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m1F702303A2BC5D3916F17612A504670424BE2DBF_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F0DCCFFFFC0DFB02FBB33278A2BD6A8F04AE5C9_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m7904D914C7F0D8920A3F2F0FB05BDA201DC34F7D_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (bool)L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m76DD43DE79BB19BCD41673F706D96FE167C894B2_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)((Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return (bool)L_12;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m0FB81164CA69BB5F29772A077579254D3F7EE3D4_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (int32_t)L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)((Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5;
		L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_RuntimeMethod_var)));
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return (int32_t)L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		return (int32_t)L_18;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m93554844C338C3CFF8715DF628FCE38039872674_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mC537B0B94B81AFE40F05E07B16B6741735D1A376_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6;
		L_6 = Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797((int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return (int32_t)L_6;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m2E2FEB492CEDA8B61F6869909C0376A8F0DEEE9A_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_3);
		return (String_t*)L_4;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m910380308358C7A726EC2516E3C9D9BD1E5F8EB6_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_3, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_5, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_8, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		return (String_t*)L_11;
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
// T1 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item1_mEEE0FC7201C6C5DCCB4E113BD20471E34780E390_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item2_m4715145091B3538709DF71A641E2059A0F245C13_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// T3 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item3_m558853F444C691FB4150CC8EBB4E436ABD5D8947_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return (RuntimeObject *)L_0;
	}
}
// System.Void System.Tuple`3<System.Object,System.Object,System.Object>::.ctor(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mEE1CD7BF22364F18E34EFDDD73BF1BDACA7A4653_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		return;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_mE4282D65B2614390D3D6131F38CA4F71E38BD30B_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (bool)L_2;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_mC0D0C105DDA322C1B2E2BEF716D15EE7E7A97B04_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)((Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_16 = (RuntimeObject *)L_15->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		return (bool)L_17;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m66B7166E41172B9AC64C38A6EA9B0A7FF946F01C_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (int32_t)L_2;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)((Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5;
		L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_RuntimeMethod_var)));
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return (int32_t)L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return (int32_t)L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject * L_24 = (RuntimeObject *)L_23->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_21);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		return (int32_t)L_25;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m1AED3AC52D43DA1716AA4458567FC4E6F7454B1A_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m64C75EE1F144BBF0539D92AEC518ECEF964CC28A_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		int32_t L_9;
		L_9 = Tuple_CombineHashCodes_m34B16565FCB93CC63DAF544CC55CD4459A7435AB((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, /*hidden argument*/NULL);
		return (int32_t)L_9;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m96B918423D9BBE3EA66EBFE4A617DFF628ECEA42_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_3);
		return (String_t*)L_4;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m5B9310EE550CC41905FF3002D70DEB87884DED37_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_3, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_5, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((StringBuilder_t *)L_10);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_10, (RuntimeObject *)L_11, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = ___sb0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_15 = ___sb0;
		NullCheck((RuntimeObject *)L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_15);
		return (String_t*)L_16;
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
// T1 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m5589B4890BC50DAF173127E924D61CF990D670AD_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m248B44AE46E97D0880FF73864B4305F641F762FA_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_m631BBAE89B9447B1110C96D4041F49F0917C7B03_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item3_2();
		return (int32_t)L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_mF4CC840702967BAB60DA03C7AA1C32F706E6A96D_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item4_3();
		return (int32_t)L_0;
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
// T1 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m502C943F2583A4AAB7B8AFE9B6F1BDE15856CB02_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_mAE93CA5AADFB6718C087068E43CFDC1ECDB87424_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item3_m11EDFABFD44423F58616CAA4873CE08D303A9536_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return (RuntimeObject *)L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item4_m5B75EA7036081DDE6C95E282E7111BF36D781DF6_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item4_3();
		return (RuntimeObject *)L_0;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mD9DFAC5993684099EF6E2B34DC0BF0CC0B2C22C8_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
		}
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
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m79E366A000E7622894AD17893C6526FD8C8D9E07_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
		}
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
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2D68191A82F9694106A25F2FAF9A54236FD637B5_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mA4ADF56200888B2A297C5913DA00A89F11BD87C5_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m0BC2DDB674C95344B83ABBC905464FF1F126690F_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
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
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2340742C957B9094B5D7A1C843C5D98104883F44_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
		}
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
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m89CD866D8E791A1B8849AF1F69F123C5A7BB66A2_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtualActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtualActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mC2C7349CA882E51819D68BBBF6BA2D68855E16D7_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m0C00362D343EC67FB1EF0E541E09F2A0A18441EC_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
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
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mB86D6414884FDC1E91052C11EDE9D2D76F7ECA4F_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_mDC17F0FBF00F87DBBFA027998DB4C9A6C8CE96EB_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtualActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtualActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
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
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m77B1860A1697D777A50B461899187B1F788FED67_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m84DC46742D04FB73CAFF04622BC3827D7AAE896F_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtualActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtualActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mF622204016275063612BB5682A477BF64A843A7D_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mE15FEED7E7986673D780E29374C2F54D3262E34F_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m883CB9322DD397C11303E11CE1D75DE4DAB7A2A1_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m9F6A762AD5938FB4E433C68A6CAE0E064358B79E_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m6AB8BDB4CBE3384E2D1415034B98C5EECCD229CF_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___action0;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_1 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3F9D60C155FF7D4C41F86E3039C845D3BB8816D5_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		NullCheck((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6);
		VirtualActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtualActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mCB985906426A738046B3F5E3F98FF4049E9DE117_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m1E4406CA5E26F7BD87C74A32B1C51ADADA4A23E6_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mAEF284CEE451CDF002B423EAD1920E36A12A9CF0_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m7B52283F3C9BA5BFFADCEA8C22119BD2DEF4FD39_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m905B97810635546B3664858E6B2E0EBEC020E03E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___action0;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_1 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m8C81925EFA00A24807B72178004B3A1CDAF97EEF_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		NullCheck((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6);
		VirtualActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m0355483F421B989D18FA2D46BA69D941D51161E2_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_22 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22);
		VirtualActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_26 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mF60EF62AFB15A35F2DD69476A73537390423F21A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m9DEDA5637D671AC58D580000A01B4B335B9923F0_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9;
		L_9 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return (MethodInfo_t *)L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_2_GetDelegate_m8F25D40B052080876D1C4762AA6E7E6703D0249E_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 * L_2 = (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m4B93C635FB8DB80244E4979D82F6F94941196483_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m28C35DB6F6DBCF1315EC5755FBA0B5DB80822DB7_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12;
		L_12 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return (MethodInfo_t *)L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_3_GetDelegate_m4D1CD01F37200B3D0525A100BCE71287EA769653_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * L_2 = (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_mAD32A45894B24DF8063BA635592B37EAEAB2C63A_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m18804249F2696D07B6E5723A86A95E2A98424E62_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15;
		L_15 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return (MethodInfo_t *)L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_4_GetDelegate_mCC9B16CF07EAAA26AE65B3BB31CFFC22031EE4A0_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD * L_2 = (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
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
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_mD4705EB6A148020B09F5B4679B293F5D225CF33D_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = ___dictionary0;
		__this->set__dict_0(L_0);
		return;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_get_Count_m7E6989C8A5AFBE2E0FAAF973725FB41C197644D3_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get__size_2();
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsReadOnly_mD5F886B93A6C469BC94022293D030AEF7EAE7AF8_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Add_m3E1D2B6F6C4D09209AF58E02395F5B8F7A3DB2B7_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Add_m3E1D2B6F6C4D09209AF58E02395F5B8F7A3DB2B7_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Contains_m604B454699264941C7DE063C43C76A8E3EFC0B5D_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (bool)L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_CopyTo_m2B1F7A489B318D8F6D5D522470F04A21DA9AC5B1_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___array0;
		int32_t L_3 = ___arrayIndex1;
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_4 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_4);
		int32_t L_5;
		L_5 = ((  int32_t (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_1, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray * L_1 = ___array0;
		NullCheck((RuntimeArray *)L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_RuntimeMethod_var)));
	}

IL_001c:
	{
	}

IL_001d:
	try
	{// begin try (depth: 1)
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_4 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4->get_values_1();
		RuntimeArray * L_6 = ___array0;
		int32_t L_7 = ___index1;
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_8 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_8);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, (int32_t)0, (RuntimeArray *)L_6, (int32_t)L_7, (int32_t)L_9, /*hidden argument*/NULL);
		goto IL_004e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_10, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_004e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::Insert(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Insert_mA4C67440F2E4293B6994AC7FE17C6F534EB556C5_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Insert_mA4C67440F2E4293B6994AC7FE17C6F534EB556C5_RuntimeMethod_var)));
	}
}
// TValue System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueList_get_Item_mF1886A4E7FE826B13A04842B426577DAD1BD36D9_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		int32_t L_1 = ___index0;
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0);
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject *)L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::set_Item(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_set_Item_m94F3E4CAACEB3D08ADE9A539B5B7EABB84DE22F2_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_set_Item_m94F3E4CAACEB3D08ADE9A539B5B7EABB84DE22F2_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_GetEnumerator_m9ED9800B6D1CCF0664C35E1577154BA2606E8BD7_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 * L_1 = (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *, SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_IEnumerable_GetEnumerator_m046D93E98E0BB0737522322FF0E050B21FC0F135_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 * L_1 = (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *, SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::IndexOf(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_IndexOf_mEE9D32B0D7009ACF766C87C7D16125CB15B208BC_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		RuntimeObject * L_2 = ___value0;
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_3 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1, (RuntimeObject *)L_2, (int32_t)0, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (int32_t)L_5;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Remove_mEEC7F3739A8D08123C53E3795C149691D18C0C05_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Remove_mEEC7F3739A8D08123C53E3795C149691D18C0C05_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_RuntimeMethod_var)));
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
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_m6F377AAE072B1A70FEE2D4D8FAC7DB1716E1CC09_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = ___dictionary0;
		__this->set__dict_0(L_0);
		return;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_get_Count_m99DC7D2C701935EDE06433F5B41DE352943CAB6B_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get__size_2();
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsReadOnly_m2BC2F609E676482B932FD23007E05D5DF8F43AAE_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Add_m68620F0AB8EF3F6BA7B609510D8BDC208B2D9BA3_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Add_m68620F0AB8EF3F6BA7B609510D8BDC208B2D9BA3_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Contains_m20D0659301A309EED5B5C1FA6A66FEF9F343594C_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (bool)L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_CopyTo_mA59BB8171EB72E0E47A524C589AF3411489AD34D_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___array0;
		int32_t L_3 = ___arrayIndex1;
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_4 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_4);
		int32_t L_5;
		L_5 = ((  int32_t (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_1, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray * L_1 = ___array0;
		NullCheck((RuntimeArray *)L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_RuntimeMethod_var)));
	}

IL_001c:
	{
	}

IL_001d:
	try
	{// begin try (depth: 1)
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_4 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4->get_values_1();
		RuntimeArray * L_6 = ___array0;
		int32_t L_7 = ___index1;
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_8 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_8);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, (int32_t)0, (RuntimeArray *)L_6, (int32_t)L_7, (int32_t)L_9, /*hidden argument*/NULL);
		goto IL_004e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_10, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_004e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Insert(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Insert_m65FAD5E5D08DEE21CA029F283584C886FF00874F_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Insert_m65FAD5E5D08DEE21CA029F283584C886FF00874F_RuntimeMethod_var)));
	}
}
// TValue System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueList_get_Item_mE0C010DA8897C2A69BE684EA96642284AC7ECF7B_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		int32_t L_1 = ___index0;
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0);
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject *)L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::set_Item(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_set_Item_m4E06D887E6E7A3B53FDB39BEC8AC56F5C506D100_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_set_Item_m4E06D887E6E7A3B53FDB39BEC8AC56F5C506D100_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_GetEnumerator_m619CAA3A285B021F020342B6C3E187AB80093E89_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 * L_1 = (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *, SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_IEnumerable_GetEnumerator_mBE8C836112D2F86587E748A624AEA02C909B4F75_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 * L_1 = (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *, SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::IndexOf(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_IndexOf_mA4182BD6326394C75B7017C142BBE8AF59676C9D_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		RuntimeObject * L_2 = ___value0;
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_3 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1, (RuntimeObject *)L_2, (int32_t)0, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (int32_t)L_5;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Remove_mDDF5D0F6A35CABC20698B79551345F19DC8F8E1C_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Remove_mDDF5D0F6A35CABC20698B79551345F19DC8F8E1C_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_RuntimeMethod_var)));
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
// System.Void System.ValueTuple`2<System.Object,System.Boolean>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m048D63CDB7084AEC874B1A762649AF39AAC80F8D_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		bool L_1 = ___item21;
		__this->set_Item2_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_2__ctor_m048D63CDB7084AEC874B1A762649AF39AAC80F8D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	ValueTuple_2__ctor_m048D63CDB7084AEC874B1A762649AF39AAC80F8D(_thisAdjusted, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_2_Equals_mAD2AB81B40B7BEA1BA86A9F3369CD1F062EE1FB6((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this, (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mAD2AB81B40B7BEA1BA86A9F3369CD1F062EE1FB6_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_5;
		L_5 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		bool L_6 = (bool)__this->get_Item2_1();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_7 = ___other0;
		bool L_8 = (bool)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_5);
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_5, (bool)L_6, (bool)L_8);
		return (bool)L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mAD2AB81B40B7BEA1BA86A9F3369CD1F062EE1FB6_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mAD2AB81B40B7BEA1BA86A9F3369CD1F062EE1FB6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		bool L_9 = (bool)__this->get_Item2_1();
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_10);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_12 = V_0;
		bool L_13 = (bool)L_12.get_Item2_1();
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_14);
		NullCheck((RuntimeObject*)L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		return (bool)L_16;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = (*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_3 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_mE81191215F74EAB4A105FC4171306C2048870F3F((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this, (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mE81191215F74EAB4A105FC4171306C2048870F3F_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * L_7;
		L_7 = ((  Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		bool L_8 = (bool)__this->get_Item2_1();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_9 = ___other0;
		bool L_10 = (bool)L_9.get_Item2_1();
		NullCheck((Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, bool, bool >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Boolean>::Compare(T,T) */, (Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_7, (bool)L_8, (bool)L_10);
		return (int32_t)L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mE81191215F74EAB4A105FC4171306C2048870F3F_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mE81191215F74EAB4A105FC4171306C2048870F3F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = (*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_3 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		bool L_18 = (bool)__this->get_Item2_1();
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_19);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_21 = V_0;
		bool L_22 = (bool)L_21.get_Item2_1();
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_23);
		NullCheck((RuntimeObject*)L_17);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		bool* L_5 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_5;
		G_B7_1 = G_B4_0;
		goto IL_005f;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		bool L_7 = (*(bool*)G_B5_0);
		V_1 = (bool)L_7;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		goto IL_005f;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)G_B8_1, (int32_t)G_B8_0, /*hidden argument*/NULL);
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		bool L_4 = (bool)__this->get_Item2_1();
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_5);
		NullCheck((RuntimeObject*)L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		int32_t L_8;
		L_8 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)L_2, (int32_t)L_7, /*hidden argument*/NULL);
		return (int32_t)L_8;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`2<System.Object,System.Boolean>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		bool* L_10 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_10;
		G_B7_1 = 3;
		G_B7_2 = L_9;
		G_B7_3 = L_9;
		goto IL_007a;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		bool L_12 = (*(bool*)G_B5_0);
		V_1 = (bool)L_12;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_007a;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		String_t* L_14;
		L_14 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15, /*hidden argument*/NULL);
		return (String_t*)L_16;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mBABF7EBF37F40A20153104D68C2BD6FB6A777D20_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_2__ctor_mBABF7EBF37F40A20153104D68C2BD6FB6A777D20_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	ValueTuple_2__ctor_mBABF7EBF37F40A20153104D68C2BD6FB6A777D20(_thisAdjusted, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_2_Equals_mAF40CEE3BE0047064506BD2EBFDD05D0E0155286((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mAF40CEE3BE0047064506BD2EBFDD05D0E0155286_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		return (bool)L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mAF40CEE3BE0047064506BD2EBFDD05D0E0155286_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mAF40CEE3BE0047064506BD2EBFDD05D0E0155286(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return (bool)L_12;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = (*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_3 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_mC72DD49B650A20080C35B93DC9D8F20B49503251((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mC72DD49B650A20080C35B93DC9D8F20B49503251_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		return (int32_t)L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mC72DD49B650A20080C35B93DC9D8F20B49503251_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mC72DD49B650A20080C35B93DC9D8F20B49503251(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = (*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_3 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		return (int32_t)L_21;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)G_B8_1, (int32_t)G_B8_0, /*hidden argument*/NULL);
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6;
		L_6 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return (int32_t)L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15, /*hidden argument*/NULL);
		return (String_t*)L_16;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mF414A72FECC73997DCDF19A7AA6270F0F5522A75_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m3A3D1C1E3B210B1C7A4B04670BFE91427026321D_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mE5E8D6ADDCEDE96B370E65753F39F8A0C0CEDBDD_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m594DCC37C543ABDFD0B4E28564ADF6B885D7BD5C_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_m9B2D91B445245AE2614D777AE33792AE230C7986_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
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
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m53573212F7876F6BD2C970D8D31B378A76928584_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m91B13EE23652B507A1FB0FFC1A899D74B02BC2CC_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_m8EE565E449EC7ED5A956B6A2B06EB01C953D25DE_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
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
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mDC96B7EB196AB4B26C70F6F471D1E9B813FF14A5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m509D78F4A94AB4B514AD94A736432B44752D3EF3_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Added_1();
		return (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m41A4427A98AD75DDB1F4F6A811CDDBBC45F1A3E1_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Updated_2();
		return (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_added_m6456F0BBC036D0E05F521F8236BCB0DF711F85EC_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_0 = (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )__this->get_m_Added_1();
		return (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  TrackableChanges_1_get_updated_mADD0CC56A6804C70B29E682486318F9E02FF5853_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  L_0 = (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )__this->get_m_Updated_2();
		return (NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mBE38A6863EC0DF6C3D6596328163619CCCF6B05F_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m1CE55C472182950E8B678F956732464DA63F6246_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m1F45B9CCC075A809DCCB539C05C3177B75507C26_gshared_inline (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_m22E74E1A1CE39909D3CE413DC3D4257DC71EF221_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Added_1();
		return (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mA1631D460A042E78DF5341363C5C5DDED83B82AA_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Updated_2();
		return (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mFC317C477989C173EAA9775AA11F779B8E6FCC86_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Added_1();
		return (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_m504DA194BB674A1C4CA84E39B11EE8E60FEDF1B4_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Updated_2();
		return (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_added_m91304D532A125A91DA032D30A1102C5728C44961_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_0 = (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )__this->get_m_Added_1();
		return (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  TrackableChanges_1_get_updated_mD44ECCE6DFA4658ACA7E130DF6B8E68F805F5E62_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  L_0 = (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )__this->get_m_Updated_2();
		return (NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m5AEA71BD82CC210CF004B8CC44A08383E3D582EB_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m1A192528B8C6BF1DE6A86F6DE39C1A7737406719_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m90A74A5148892FB8FD43CF3E21655A9DADE58611_gshared_inline (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_m92FFA2F1D627E210024C9ECE37704B201A879B39_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Added_1();
		return (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mB2E61C1D2F427172E76D12A93136B19627D32CC3_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Updated_2();
		return (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_mF35E319657A0930BB3AFBDDFDC344BB2610F94DF_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Added_1();
		return (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m978EBE9AC9EA2B7A7D8A3AD21CF43F69DF937865_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Updated_2();
		return (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_added_mDE26C62D5F166E06CE2A2C9CB08FCC7C44A1C475_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_0 = (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )__this->get_m_Added_1();
		return (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  TrackableChanges_1_get_updated_m1465025B1228F225EE7DBA0DF451EE8116E2CB6B_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  L_0 = (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )__this->get_m_Updated_2();
		return (NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DB61959C97EFB7FD0864432150198B5882D9E_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mC31F354755B30ADB0236DD951A2EF34A3F96D902_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m58F95C94433EF1A239974598FF0BC412494D4BF6_gshared_inline (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
