#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>
struct Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8;
// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>
struct Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0;
// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>
struct Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62;
// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>
struct Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE;
// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>
struct List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem[]
struct XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4;
// UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane[]
struct WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.XR.WindowsMR.Input.HololensHand
struct HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.InputSystem.InputControl
struct InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.WindowsMR.Input.WMRHMD
struct WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C;
// UnityEngine.XR.WindowsMR.Input.WMRSpatialController
struct WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6;
// UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem
struct WindowsMRAnchorSubsystem_tE962138F79B0AF72A7C5C94DB1EED4FE90931505;
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem
struct WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60;
// UnityEngine.XR.WindowsMR.WindowsMRGestures
struct WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73;
// UnityEngine.XR.WindowsMRInternals.WindowsMRInternal
struct WindowsMRInternal_t8BB8B69C90AD776FD3E0E9C1F261D6F00CA575A5;
// UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem
struct WindowsMRSessionSubsystem_t0DC9CB38AEA08D13E9FD29331BC3C4F38522FFB6;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B;
// UnityEngine.InputSystem.XR.XRController
struct XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E;
// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5;
// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem
struct XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02;
// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider
struct WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623;
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider
struct WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB;
// UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider
struct WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider
struct Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction
struct GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRExtensions_t03F9C7C197F339DE39B5DCB2D3C60968A0A39EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128;
IL2CPP_EXTERN_C String_t* _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral1C6BCDE6F2C3205604A72A2EA201E54D3A58F62C;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9BC2C776D045C8AE166A942A9E637A7CADE7E5;
IL2CPP_EXTERN_C String_t* _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54;
IL2CPP_EXTERN_C String_t* _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A;
IL2CPP_EXTERN_C String_t* _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80;
IL2CPP_EXTERN_C String_t* _stringLiteral3030ED4011F9E6A7E9CD83BE2066BB0860FDAAED;
IL2CPP_EXTERN_C String_t* _stringLiteral31EB844B5DB2AFC2BB5C3386E66A98F918CE490B;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral33A590A44A8F05101AA561BA701C8743D97E1BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral3FC595BCDF0EDDCFF17ED258709E1FFD1BE2C400;
IL2CPP_EXTERN_C String_t* _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822;
IL2CPP_EXTERN_C String_t* _stringLiteral4346CB4DD6FC6AAE50ED00B87DAE598BB8024E24;
IL2CPP_EXTERN_C String_t* _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC;
IL2CPP_EXTERN_C String_t* _stringLiteral439424494B122F8A43C5E2CE203E9D7A54C56C1B;
IL2CPP_EXTERN_C String_t* _stringLiteral462E007647F39394D37B1FAFEC8DABC4954BC8C9;
IL2CPP_EXTERN_C String_t* _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D;
IL2CPP_EXTERN_C String_t* _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9;
IL2CPP_EXTERN_C String_t* _stringLiteral642AFE13E6C1E54CBB0B2425340FC04D65F8CEFF;
IL2CPP_EXTERN_C String_t* _stringLiteral65B80478B4986CA2ECE4D5671099F13088F27472;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB285741C33824C27024778C8BEE281153B4786;
IL2CPP_EXTERN_C String_t* _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C;
IL2CPP_EXTERN_C String_t* _stringLiteral7136CF12AA44B92AF3F0430F07DE6A8D86C08CE2;
IL2CPP_EXTERN_C String_t* _stringLiteral791956718283C9837F3ED95D7886E3C88855114B;
IL2CPP_EXTERN_C String_t* _stringLiteral807A163EA977B5F41E26A5E2D7FE6CE32CF3A19D;
IL2CPP_EXTERN_C String_t* _stringLiteral827E09C11A4BC48DE84AF1E4A6E0A987CD39CC68;
IL2CPP_EXTERN_C String_t* _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590;
IL2CPP_EXTERN_C String_t* _stringLiteral9ECF5AF5757D08BA14B006319D50E67F26DEB149;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45;
IL2CPP_EXTERN_C String_t* _stringLiteralBFB19B1FB8349FCE4C1C7C8E9BC4209762A5BA7B;
IL2CPP_EXTERN_C String_t* _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32;
IL2CPP_EXTERN_C String_t* _stringLiteralCBBFC4C431D1377097F43DB7AD87C8D6E24DAC85;
IL2CPP_EXTERN_C String_t* _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB8A52452E37B8D0251ECC49D113331FFA380822;
IL2CPP_EXTERN_C String_t* _stringLiteralE5569F82A803CAF3A71C6057CEC72AA620041016;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE;
IL2CPP_EXTERN_C String_t* _stringLiteralF13567104D38779E2ED560579293AAB6F638685C;
IL2CPP_EXTERN_C String_t* _stringLiteralF64BD2E3B35D211DDDF5000ED8CE421EA8EDD07A;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m65323523B049E0768F948A5EFFA6B0DB6D06D074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m67BBA67A3DEA53DA403B86EC67B6C68535F34CDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9C4661BC9D71CD305F4FEB4691392F58AF1644CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mDCD8EF0323C03E1A7184B25088D8F6001FA2CC6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFD7CC159D962B9561167BAF34C7471F7F5624711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m088939BD8F7D84F884B2AE89235E8942D00F622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8AC7EE6A198878AB6DF6B636B1542A4BF6047904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEC346847783F5028A5AA5735EEAC790F94A12DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF7AA9629638AB4D06B022E461CB4FC8AB1F6BFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFE962FA0C0006E48845D4375EB3079E25252F7A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1EFAD531E0995E03D3C1350EFB3F21BED21684C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23000C7F15B52654FDA86A66F41689CE1FFA4E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m372F4CAF688C292AFBC27A10896E20B7302E5106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m573DC24E07895CD055E98449EFCAD15C1DFB9F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m83CAF3CE6AEDCD565AAE7BA61A133D50E996E088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0484FB93B75E8B35D626B071D35098A7727025E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5C97AEDACA34E2B51FB8D2DB17ECB6182C2CF114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m89A23C940A233C73C2BB503315D36C01ED9EE7F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAF6B5EEF80DC47DA190A052EE696245953380428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC1A36C69B672DC7BAD61BD8B94DC5D13F64807D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mFA556ED010B117E44F21659A13788CB2F9F1198E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m066835015A187AF6EE8FE17D115AE95030DEE73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m624B3B8CD66244E356A0D7D759673FFE33C0609E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeApi_UnityWindowsMR_GesturesGetHoldGestureEventsPtr_m30D46DEE46BFAC99AE11CE3FCB8752D483A68326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeApi_UnityWindowsMR_GesturesGetManipulationGestureEventsPtr_m9BFCD33223844DA1054DD66EB942E0A6D57FDA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeApi_UnityWindowsMR_GesturesGetNavigationGestureEventsPtr_m1C933271B3A5F272FC1DA33D2C827B08EC28FE82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeApi_UnityWindowsMR_GesturesGetTappedGestureEventsPtr_m20E33A67B333A9417298FB9D00C026EADAD39EC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m1643E2216FD39974C9F926E11F1B1764F367850E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m3989E064980C448A43F098167B7BFBA39738EB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m54900597F0C31907698B17FD5B21751A364640B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_mF3BE0E6FB3FA2B685A36396071E7266526461D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m98E60584C28C2829CB213CED3ADDF18756449AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m0AB7E3BD2A32B35CE4834A48F5D82D81CBFE2CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02_m31920ADB8BDE6FD6418A8F36FCF8A34D27BEA66B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_CopyFrom_m07D7DB0F41CA9698585349E4EF80F351720C6B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMRAnchorSubsystem_tE962138F79B0AF72A7C5C94DB1EED4FE90931505_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMRSessionSubsystem_t0DC9CB38AEA08D13E9FD29331BC3C4F38522FFB6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
struct WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0C6A181D8FE60479BE7418C18D308CD00363B587 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>
struct List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9, ____items_1)); }
	inline XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4* get__items_1() const { return ____items_1; }
	inline XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9_StaticFields, ____emptyArray_5)); }
	inline XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRGestureSubsystemU5BU5D_t4FE3467A6E8CACBE628F992DF4826C8A1D5B09E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.FeatureApi
struct FeatureApi_t53B95CB484F9FF05454468D50689FC4A6A5BEBA6  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.Native
struct Native_t558849F3C2B4DC5969DEE6CCB9AC2945D7F93965  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.NativeApi
struct NativeApi_tED86D6EEEB849DFB4E49896148A28584D4245151  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Subsystem
struct Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_SubsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4, ___m_SubsystemDescriptor_0)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_0() const { return ___m_SubsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_0() { return &___m_SubsystemDescriptor_0; }
	inline void set_m_SubsystemDescriptor_0(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
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

// UnityEngine.XR.WindowsMR.WindowsMREnvironment
struct WindowsMREnvironment_t5C00ADF14A3C070B2DE414AFCB0D84E3A4CCC32A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRExtensions
struct WindowsMRExtensions_t03F9C7C197F339DE39B5DCB2D3C60968A0A39EC1  : public RuntimeObject
{
public:

public:
};

struct WindowsMRExtensions_t03F9C7C197F339DE39B5DCB2D3C60968A0A39EC1_StaticFields
{
public:
	// UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane[] UnityEngine.XR.WindowsMR.WindowsMRExtensions::wmrp
	WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F* ___wmrp_0;

public:
	inline static int32_t get_offset_of_wmrp_0() { return static_cast<int32_t>(offsetof(WindowsMRExtensions_t03F9C7C197F339DE39B5DCB2D3C60968A0A39EC1_StaticFields, ___wmrp_0)); }
	inline WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F* get_wmrp_0() const { return ___wmrp_0; }
	inline WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F** get_address_of_wmrp_0() { return &___wmrp_0; }
	inline void set_wmrp_0(WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F* value)
	{
		___wmrp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wmrp_0), (void*)value);
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRInput
struct WindowsMRInput_t5EDB8246AE09F91332639AB2D8D0D962C79734C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMRInternals.WindowsMRInternal
struct WindowsMRInternal_t8BB8B69C90AD776FD3E0E9C1F261D6F00CA575A5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRExtensions/NativeApi
struct NativeApi_t8FD1DE10BA51F3BEFE275F05940B1BEA29A71621  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi
struct NativeApi_tC4AE1A31B9B5FD81CCADF8AFEDB89F93B35872AF  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRInput/NativeApi
struct NativeApi_t5F77BA8AF1BBDB28AE8B5329CDDBCB21D6574EF2  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi
struct NativeApi_t6FF278009F52EC03C540F965E53F82D8698D6DE5  : public RuntimeObject
{
public:

public:
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


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>
struct Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A, ___list_0)); }
	inline List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * get_list_0() const { return ___list_0; }
	inline List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A, ___current_3)); }
	inline XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * get_current_3() const { return ___current_3; }
	inline XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A, ___firstValue_1)); }
	inline InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t5FE9D20C88845C162EBF94ECD6ECF57F68FB5147 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tE30F50AD314FD6180510BD62709AF67BD0050D7C* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C, ___firstValue_1)); }
	inline InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t6A178AD7B8E8747692B56C8DAD90852D71FE6223 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tAEB710A6314153A2D5FCA363B9D7C9982B2066AC* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1, ___firstValue_1)); }
	inline InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tDEBCEB196547BCEFD0B07DDB401095455A84D880 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tDC09201FBB640F2F85B93FB5FBEC3C5813347ED1* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA, ___firstValue_1)); }
	inline InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t08D68EA72483838DB44126946DC571CE8586FDDB * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t48B97D0FB674AED4A200E90F84A5051091C941A2* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2, ___firstValue_1)); }
	inline InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tF380E4928431948FEAEA0B3B16BF6C2EDAB042B6 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t65158FF056DD8E8BF584554B1AD1EF2B315A9875* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32>
struct InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.Subsystem`1<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor>
struct Subsystem_1_t56D88B317016EC2FF380261B659BB963F1D9EDE6  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.XR.InteractionSubsystems.GestureId
struct GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 
{
public:
	// System.UInt64 UnityEngine.XR.InteractionSubsystems.GestureId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.InteractionSubsystems.GestureId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_StaticFields
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.InteractionSubsystems.GestureId::s_InvalidId
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_StaticFields, ___s_InvalidId_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___s_InvalidId_0 = value;
	}
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


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox
struct WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454 
{
public:
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::cx
	float ___cx_0;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::cy
	float ___cy_1;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::cz
	float ___cz_2;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::ex
	float ___ex_3;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::ey
	float ___ey_4;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::ez
	float ___ez_5;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::ox
	float ___ox_6;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::oy
	float ___oy_7;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::oz
	float ___oz_8;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox::ow
	float ___ow_9;

public:
	inline static int32_t get_offset_of_cx_0() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___cx_0)); }
	inline float get_cx_0() const { return ___cx_0; }
	inline float* get_address_of_cx_0() { return &___cx_0; }
	inline void set_cx_0(float value)
	{
		___cx_0 = value;
	}

	inline static int32_t get_offset_of_cy_1() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___cy_1)); }
	inline float get_cy_1() const { return ___cy_1; }
	inline float* get_address_of_cy_1() { return &___cy_1; }
	inline void set_cy_1(float value)
	{
		___cy_1 = value;
	}

	inline static int32_t get_offset_of_cz_2() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___cz_2)); }
	inline float get_cz_2() const { return ___cz_2; }
	inline float* get_address_of_cz_2() { return &___cz_2; }
	inline void set_cz_2(float value)
	{
		___cz_2 = value;
	}

	inline static int32_t get_offset_of_ex_3() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___ex_3)); }
	inline float get_ex_3() const { return ___ex_3; }
	inline float* get_address_of_ex_3() { return &___ex_3; }
	inline void set_ex_3(float value)
	{
		___ex_3 = value;
	}

	inline static int32_t get_offset_of_ey_4() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___ey_4)); }
	inline float get_ey_4() const { return ___ey_4; }
	inline float* get_address_of_ey_4() { return &___ey_4; }
	inline void set_ey_4(float value)
	{
		___ey_4 = value;
	}

	inline static int32_t get_offset_of_ez_5() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___ez_5)); }
	inline float get_ez_5() const { return ___ez_5; }
	inline float* get_address_of_ez_5() { return &___ez_5; }
	inline void set_ez_5(float value)
	{
		___ez_5 = value;
	}

	inline static int32_t get_offset_of_ox_6() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___ox_6)); }
	inline float get_ox_6() const { return ___ox_6; }
	inline float* get_address_of_ox_6() { return &___ox_6; }
	inline void set_ox_6(float value)
	{
		___ox_6 = value;
	}

	inline static int32_t get_offset_of_oy_7() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___oy_7)); }
	inline float get_oy_7() const { return ___oy_7; }
	inline float* get_address_of_oy_7() { return &___oy_7; }
	inline void set_oy_7(float value)
	{
		___oy_7 = value;
	}

	inline static int32_t get_offset_of_oz_8() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___oz_8)); }
	inline float get_oz_8() const { return ___oz_8; }
	inline float* get_address_of_oz_8() { return &___oz_8; }
	inline void set_oz_8(float value)
	{
		___oz_8 = value;
	}

	inline static int32_t get_offset_of_ow_9() { return static_cast<int32_t>(offsetof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454, ___ow_9)); }
	inline float get_ow_9() const { return ___ow_9; }
	inline float* get_address_of_ow_9() { return &___ow_9; }
	inline void set_ow_9(float value)
	{
		___ow_9 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane
struct WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F 
{
public:
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane::d
	float ___d_0;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane::nx
	float ___nx_1;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane::ny
	float ___ny_2;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane::nz
	float ___nz_3;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F, ___d_0)); }
	inline float get_d_0() const { return ___d_0; }
	inline float* get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(float value)
	{
		___d_0 = value;
	}

	inline static int32_t get_offset_of_nx_1() { return static_cast<int32_t>(offsetof(WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F, ___nx_1)); }
	inline float get_nx_1() const { return ___nx_1; }
	inline float* get_address_of_nx_1() { return &___nx_1; }
	inline void set_nx_1(float value)
	{
		___nx_1 = value;
	}

	inline static int32_t get_offset_of_ny_2() { return static_cast<int32_t>(offsetof(WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F, ___ny_2)); }
	inline float get_ny_2() const { return ___ny_2; }
	inline float* get_address_of_ny_2() { return &___ny_2; }
	inline void set_ny_2(float value)
	{
		___ny_2 = value;
	}

	inline static int32_t get_offset_of_nz_3() { return static_cast<int32_t>(offsetof(WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F, ___nz_3)); }
	inline float get_nz_3() const { return ___nz_3; }
	inline float* get_address_of_nz_3() { return &___nz_3; }
	inline void set_nz_3(float value)
	{
		___nz_3 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRSphere
struct WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4 
{
public:
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRSphere::cx
	float ___cx_0;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRSphere::cy
	float ___cy_1;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRSphere::cz
	float ___cz_2;
	// System.Single UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRSphere::r
	float ___r_3;

public:
	inline static int32_t get_offset_of_cx_0() { return static_cast<int32_t>(offsetof(WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4, ___cx_0)); }
	inline float get_cx_0() const { return ___cx_0; }
	inline float* get_address_of_cx_0() { return &___cx_0; }
	inline void set_cx_0(float value)
	{
		___cx_0 = value;
	}

	inline static int32_t get_offset_of_cy_1() { return static_cast<int32_t>(offsetof(WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4, ___cy_1)); }
	inline float get_cy_1() const { return ___cy_1; }
	inline float* get_address_of_cy_1() { return &___cy_1; }
	inline void set_cy_1(float value)
	{
		___cy_1 = value;
	}

	inline static int32_t get_offset_of_cz_2() { return static_cast<int32_t>(offsetof(WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4, ___cz_2)); }
	inline float get_cz_2() const { return ___cz_2; }
	inline float* get_address_of_cz_2() { return &___cz_2; }
	inline void set_cz_2(float value)
	{
		___cz_2 = value;
	}

	inline static int32_t get_offset_of_r_3() { return static_cast<int32_t>(offsetof(WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4, ___r_3)); }
	inline float get_r_3() const { return ___r_3; }
	inline float* get_address_of_r_3() { return &___r_3; }
	inline void set_r_3(float value)
	{
		___r_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo
struct Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 
{
public:
	// System.String UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo
struct Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo
struct Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CproviderTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_3() const { return ___U3CproviderTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_3() { return &___U3CproviderTypeU3Ek__BackingField_3; }
	inline void set_U3CproviderTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemTypeOverrideU3Ek__BackingField_4)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_4() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_5() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1  : public SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2
{
public:

public:
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

// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InteractionSubsystems.GestureState
struct GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557 
{
public:
	// System.Int32 UnityEngine.XR.InteractionSubsystems.GestureState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatBit_2)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatSBit_4)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatInt_6)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatUInt_8)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatShort_10)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatUShort_12)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatByte_14)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatSByte_16)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatLong_18)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatULong_20)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatFloat_22)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatDouble_24)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector2_26)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector3_27)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_t8191D744C98F4FFF94F64AAC5338EEA27196E3FA  value)
	{
		___FormatVector3Byte_32 = value;
	}
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


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
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


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
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


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.WindowsMR.WindowsMRUsages
struct WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86  : public RuntimeObject
{
public:

public:
};

struct WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Unity.XR.WindowsMR.WindowsMRUsages::PointerPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Unity.XR.WindowsMR.WindowsMRUsages::PointerRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___PointerRotation_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> Unity.XR.WindowsMR.WindowsMRUsages::SourceLossRisk
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___SourceLossRisk_2;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Unity.XR.WindowsMR.WindowsMRUsages::SourceMitigationDirection
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___SourceMitigationDirection_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.WindowsMR.WindowsMRUsages::AirTap
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___AirTap_4;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Unity.XR.WindowsMR.WindowsMRUsages::EyeGazePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___EyeGazePosition_5;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Unity.XR.WindowsMR.WindowsMRUsages::EyeGazeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___EyeGazeRotation_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.WindowsMR.WindowsMRUsages::EyeGazeAvailable
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___EyeGazeAvailable_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.WindowsMR.WindowsMRUsages::EyeGazeTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___EyeGazeTracked_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.UInt32> Unity.XR.WindowsMR.WindowsMRUsages::PositionAccuracy
	InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  ___PositionAccuracy_9;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_SourceLossRisk_2() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___SourceLossRisk_2)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_SourceLossRisk_2() const { return ___SourceLossRisk_2; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_SourceLossRisk_2() { return &___SourceLossRisk_2; }
	inline void set_SourceLossRisk_2(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___SourceLossRisk_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SourceLossRisk_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_SourceMitigationDirection_3() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___SourceMitigationDirection_3)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_SourceMitigationDirection_3() const { return ___SourceMitigationDirection_3; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_SourceMitigationDirection_3() { return &___SourceMitigationDirection_3; }
	inline void set_SourceMitigationDirection_3(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___SourceMitigationDirection_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SourceMitigationDirection_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_AirTap_4() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___AirTap_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_AirTap_4() const { return ___AirTap_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_AirTap_4() { return &___AirTap_4; }
	inline void set_AirTap_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___AirTap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___AirTap_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_EyeGazePosition_5() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___EyeGazePosition_5)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_EyeGazePosition_5() const { return ___EyeGazePosition_5; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_EyeGazePosition_5() { return &___EyeGazePosition_5; }
	inline void set_EyeGazePosition_5(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___EyeGazePosition_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EyeGazePosition_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_EyeGazeRotation_6() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___EyeGazeRotation_6)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_EyeGazeRotation_6() const { return ___EyeGazeRotation_6; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_EyeGazeRotation_6() { return &___EyeGazeRotation_6; }
	inline void set_EyeGazeRotation_6(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___EyeGazeRotation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EyeGazeRotation_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_EyeGazeAvailable_7() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___EyeGazeAvailable_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_EyeGazeAvailable_7() const { return ___EyeGazeAvailable_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_EyeGazeAvailable_7() { return &___EyeGazeAvailable_7; }
	inline void set_EyeGazeAvailable_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___EyeGazeAvailable_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EyeGazeAvailable_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_EyeGazeTracked_8() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___EyeGazeTracked_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_EyeGazeTracked_8() const { return ___EyeGazeTracked_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_EyeGazeTracked_8() { return &___EyeGazeTracked_8; }
	inline void set_EyeGazeTracked_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___EyeGazeTracked_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EyeGazeTracked_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PositionAccuracy_9() { return static_cast<int32_t>(offsetof(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields, ___PositionAccuracy_9)); }
	inline InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  get_PositionAccuracy_9() const { return ___PositionAccuracy_9; }
	inline InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23 * get_address_of_PositionAccuracy_9() { return &___PositionAccuracy_9; }
	inline void set_PositionAccuracy_9(InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  value)
	{
		___PositionAccuracy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PositionAccuracy_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem
struct XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02  : public Subsystem_1_t56D88B317016EC2FF380261B659BB963F1D9EDE6
{
public:
	// System.Boolean UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem::m_Provider
	Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02, ___m_Provider_2)); }
	inline Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_t3E4FD31C61BFE0691D66D074BE537D4B2FB49B17 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_t3E4FD31C61BFE0691D66D074BE537D4B2FB49B17, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t1F31BA18251A5E57CB4BBB797F72FE78C1B73045 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t1F31BA18251A5E57CB4BBB797F72FE78C1B73045, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tA98A64E5A47B95C2C8CE09CE2F588B4633DB9E3F 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tA98A64E5A47B95C2C8CE09CE2F588B4633DB9E3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2  : public SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>
struct NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
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


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>
struct NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>
struct NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>
struct NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent
struct ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent::m_State
	int32_t ___m_State_1;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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


// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem
struct WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60  : public XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02
{
public:
	// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::m_WindowsMRProvider
	WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * ___m_WindowsMRProvider_4;

public:
	inline static int32_t get_offset_of_m_WindowsMRProvider_4() { return static_cast<int32_t>(offsetof(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60, ___m_WindowsMRProvider_4)); }
	inline WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * get_m_WindowsMRProvider_4() const { return ___m_WindowsMRProvider_4; }
	inline WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB ** get_address_of_m_WindowsMRProvider_4() { return &___m_WindowsMRProvider_4; }
	inline void set_m_WindowsMRProvider_4(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * value)
	{
		___m_WindowsMRProvider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WindowsMRProvider_4), (void*)value);
	}
};

struct WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::s_NextGUID
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___s_NextGUID_3;

public:
	inline static int32_t get_offset_of_s_NextGUID_3() { return static_cast<int32_t>(offsetof(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields, ___s_NextGUID_3)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_s_NextGUID_3() const { return ___s_NextGUID_3; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_s_NextGUID_3() { return &___s_NextGUID_3; }
	inline void set_s_NextGUID_3(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___s_NextGUID_3 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent
struct WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::m_State
	int32_t ___m_State_1;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent
struct WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::m_State
	int32_t ___m_State_1;
	// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::m_CumulativeDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CumulativeDelta_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_2() { return static_cast<int32_t>(offsetof(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD, ___m_CumulativeDelta_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CumulativeDelta_2() const { return ___m_CumulativeDelta_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CumulativeDelta_2() { return &___m_CumulativeDelta_2; }
	inline void set_m_CumulativeDelta_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CumulativeDelta_2 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent
struct WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::m_State
	int32_t ___m_State_1;
	// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::m_NormalizedOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NormalizedOffset_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_2() { return static_cast<int32_t>(offsetof(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9, ___m_NormalizedOffset_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NormalizedOffset_2() const { return ___m_NormalizedOffset_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NormalizedOffset_2() { return &___m_NormalizedOffset_2; }
	inline void set_m_NormalizedOffset_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NormalizedOffset_2 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent
struct WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_State
	int32_t ___m_State_1;
	// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_TappedCount
	int32_t ___m_TappedCount_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}

	inline static int32_t get_offset_of_m_TappedCount_2() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90, ___m_TappedCount_2)); }
	inline int32_t get_m_TappedCount_2() const { return ___m_TappedCount_2; }
	inline int32_t* get_address_of_m_TappedCount_2() { return &___m_TappedCount_2; }
	inline void set_m_TappedCount_2(int32_t value)
	{
		___m_TappedCount_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7  : public TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider
struct WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623  : public Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider
struct WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372  : public Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A
{
public:

public:
};


// System.Action`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>
struct Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>
struct Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>
struct Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>
struct Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>
struct Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006, ___m_Array_0)); }
	inline NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>
struct Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404, ___m_Array_0)); }
	inline NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>
struct Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86, ___m_Array_0)); }
	inline NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>
struct Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F, ___m_Array_0)); }
	inline NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7, ___m_Array_0)); }
	inline NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Added_1)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Updated_2)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdescriptorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CdescriptorU3Ek__BackingField_0)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_U3CdescriptorU3Ek__BackingField_0() const { return ___U3CdescriptorU3Ek__BackingField_0; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_U3CdescriptorU3Ek__BackingField_0() { return &___U3CdescriptorU3Ek__BackingField_0; }
	inline void set_U3CdescriptorU3Ek__BackingField_0(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___U3CdescriptorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CfeaturesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CfeaturesU3Ek__BackingField_1)); }
	inline uint64_t get_U3CfeaturesU3Ek__BackingField_1() const { return ___U3CfeaturesU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CfeaturesU3Ek__BackingField_1() { return &___U3CfeaturesU3Ek__BackingField_1; }
	inline void set_U3CfeaturesU3Ek__BackingField_1(uint64_t value)
	{
		___U3CfeaturesU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_StateBlock_0)); }
	inline InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tA12715BD5A173D533001BEBCD01FB04F795C28C3  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Name_1)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Layout_7)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Variants_8)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Device_9)); }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_Parent_10)); }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_DefaultState_18)); }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_MinValue_19)); }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022, ___m_MaxValue_20)); }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t823599A10D47492D1A303E6F8D5394951F79F77D  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem
struct WindowsMRAnchorSubsystem_tE962138F79B0AF72A7C5C94DB1EED4FE90931505  : public XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};


// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider
struct Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058  : public RuntimeObject
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent> UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider::m_ActivateGestureEvents
	NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  ___m_ActivateGestureEvents_0;

public:
	inline static int32_t get_offset_of_m_ActivateGestureEvents_0() { return static_cast<int32_t>(offsetof(Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058, ___m_ActivateGestureEvents_0)); }
	inline NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  get_m_ActivateGestureEvents_0() const { return ___m_ActivateGestureEvents_0; }
	inline NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * get_address_of_m_ActivateGestureEvents_0() { return &___m_ActivateGestureEvents_0; }
	inline void set_m_ActivateGestureEvents_0(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  value)
	{
		___m_ActivateGestureEvents_0 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction
struct GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_tBBA1E258299FA8251D80D922F3A5FF8291AD95F5  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tBBA1E258299FA8251D80D922F3A5FF8291AD95F5, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t1E8E973C9909EAC1D2DD5DC2AE05EC2B3D7A328A  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t8A05BCA52404D2D00FCB899FE0A4BFE98A746ABE  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t8A05BCA52404D2D00FCB899FE0A4BFE98A746ABE, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tC46824240B53C7BA196CEBABCAB9F763E45A5A6C  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tCEFC6B2B9010D098E9202A04D2559FBC43D6B096  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tCEFC6B2B9010D098E9202A04D2559FBC43D6B096, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t3846DFB4D8DB2A5CF2157D9885689E35C5DB4BE1  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tFF9A76816217BF65BC073EB718F408427089B005  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tFF9A76816217BF65BC073EB718F408427089B005, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tF881B4FB101C1F7E5C6303B65CCD7E0792AA83BA  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tAC3938D6DEBEB3383EC43B895AA1F6329E02113D  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tAC3938D6DEBEB3383EC43B895AA1F6329E02113D, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t44AF1E62AF31475F023E2DAAE329932E88CF39E2  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 
{
public:
	// T System.Nullable`1::value
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___value_0)); }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  get_value_0() const { return ___value_0; }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14  : public InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_Description_28)); }
	inline InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_t2F1C53F99FB81DF14FB166F635D1C8BBF74F054E  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_tB7206AF6AEEC429BBCE3756171A9F8894A34EFFA* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider
struct WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB  : public Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058
{
public:
	// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_Subsystem
	WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___m_Subsystem_1;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_HoldGestureEvents
	NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  ___m_HoldGestureEvents_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_ManipulationGestureEvents
	NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  ___m_ManipulationGestureEvents_3;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_NavigationGestureEvents
	NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  ___m_NavigationGestureEvents_4;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_TappedGestureEvents
	NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  ___m_TappedGestureEvents_5;

public:
	inline static int32_t get_offset_of_m_Subsystem_1() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_Subsystem_1)); }
	inline WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * get_m_Subsystem_1() const { return ___m_Subsystem_1; }
	inline WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 ** get_address_of_m_Subsystem_1() { return &___m_Subsystem_1; }
	inline void set_m_Subsystem_1(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * value)
	{
		___m_Subsystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Subsystem_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoldGestureEvents_2() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_HoldGestureEvents_2)); }
	inline NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  get_m_HoldGestureEvents_2() const { return ___m_HoldGestureEvents_2; }
	inline NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * get_address_of_m_HoldGestureEvents_2() { return &___m_HoldGestureEvents_2; }
	inline void set_m_HoldGestureEvents_2(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  value)
	{
		___m_HoldGestureEvents_2 = value;
	}

	inline static int32_t get_offset_of_m_ManipulationGestureEvents_3() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_ManipulationGestureEvents_3)); }
	inline NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  get_m_ManipulationGestureEvents_3() const { return ___m_ManipulationGestureEvents_3; }
	inline NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * get_address_of_m_ManipulationGestureEvents_3() { return &___m_ManipulationGestureEvents_3; }
	inline void set_m_ManipulationGestureEvents_3(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  value)
	{
		___m_ManipulationGestureEvents_3 = value;
	}

	inline static int32_t get_offset_of_m_NavigationGestureEvents_4() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_NavigationGestureEvents_4)); }
	inline NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  get_m_NavigationGestureEvents_4() const { return ___m_NavigationGestureEvents_4; }
	inline NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * get_address_of_m_NavigationGestureEvents_4() { return &___m_NavigationGestureEvents_4; }
	inline void set_m_NavigationGestureEvents_4(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  value)
	{
		___m_NavigationGestureEvents_4 = value;
	}

	inline static int32_t get_offset_of_m_TappedGestureEvents_5() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_TappedGestureEvents_5)); }
	inline NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  get_m_TappedGestureEvents_5() const { return ___m_TappedGestureEvents_5; }
	inline NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * get_address_of_m_TappedGestureEvents_5() { return &___m_TappedGestureEvents_5; }
	inline void set_m_TappedGestureEvents_5(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  value)
	{
		___m_TappedGestureEvents_5 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E  : public InputControl_1_tCEFC6B2B9010D098E9202A04D2559FBC43D6B096
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;

public:
	inline static int32_t get_offset_of_clamp_22() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clamp_22)); }
	inline int32_t get_clamp_22() const { return ___clamp_22; }
	inline int32_t* get_address_of_clamp_22() { return &___clamp_22; }
	inline void set_clamp_22(int32_t value)
	{
		___clamp_22 = value;
	}

	inline static int32_t get_offset_of_clampMin_23() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clampMin_23)); }
	inline float get_clampMin_23() const { return ___clampMin_23; }
	inline float* get_address_of_clampMin_23() { return &___clampMin_23; }
	inline void set_clampMin_23(float value)
	{
		___clampMin_23 = value;
	}

	inline static int32_t get_offset_of_clampMax_24() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clampMax_24)); }
	inline float get_clampMax_24() const { return ___clampMax_24; }
	inline float* get_address_of_clampMax_24() { return &___clampMax_24; }
	inline void set_clampMax_24(float value)
	{
		___clampMax_24 = value;
	}

	inline static int32_t get_offset_of_clampConstant_25() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___clampConstant_25)); }
	inline float get_clampConstant_25() const { return ___clampConstant_25; }
	inline float* get_address_of_clampConstant_25() { return &___clampConstant_25; }
	inline void set_clampConstant_25(float value)
	{
		___clampConstant_25 = value;
	}

	inline static int32_t get_offset_of_invert_26() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___invert_26)); }
	inline bool get_invert_26() const { return ___invert_26; }
	inline bool* get_address_of_invert_26() { return &___invert_26; }
	inline void set_invert_26(bool value)
	{
		___invert_26 = value;
	}

	inline static int32_t get_offset_of_normalize_27() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalize_27)); }
	inline bool get_normalize_27() const { return ___normalize_27; }
	inline bool* get_address_of_normalize_27() { return &___normalize_27; }
	inline void set_normalize_27(bool value)
	{
		___normalize_27 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_28() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalizeMin_28)); }
	inline float get_normalizeMin_28() const { return ___normalizeMin_28; }
	inline float* get_address_of_normalizeMin_28() { return &___normalizeMin_28; }
	inline void set_normalizeMin_28(float value)
	{
		___normalizeMin_28 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_29() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalizeMax_29)); }
	inline float get_normalizeMax_29() const { return ___normalizeMax_29; }
	inline float* get_address_of_normalizeMax_29() { return &___normalizeMax_29; }
	inline void set_normalizeMax_29(float value)
	{
		___normalizeMax_29 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_30() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___normalizeZero_30)); }
	inline float get_normalizeZero_30() const { return ___normalizeZero_30; }
	inline float* get_address_of_normalizeZero_30() { return &___normalizeZero_30; }
	inline void set_normalizeZero_30(float value)
	{
		___normalizeZero_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___scale_31)); }
	inline bool get_scale_31() const { return ___scale_31; }
	inline bool* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(bool value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_32() { return static_cast<int32_t>(offsetof(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E, ___scaleFactor_32)); }
	inline float get_scaleFactor_32() const { return ___scaleFactor_32; }
	inline float* get_address_of_scaleFactor_32() { return &___scaleFactor_32; }
	inline void set_scaleFactor_32(float value)
	{
		___scaleFactor_32 = value;
	}
};


// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF  : public InputControl_1_tBBA1E258299FA8251D80D922F3A5FF8291AD95F5
{
public:

public:
};


// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525  : public InputControl_1_t8A05BCA52404D2D00FCB899FE0A4BFE98A746ABE
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CwU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525, ___U3CwU3Ek__BackingField_25)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CwU3Ek__BackingField_25() const { return ___U3CwU3Ek__BackingField_25; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CwU3Ek__BackingField_25() { return &___U3CwU3Ek__BackingField_25; }
	inline void set_U3CwU3Ek__BackingField_25(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CwU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwU3Ek__BackingField_25), (void*)value);
	}
};


// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0  : public InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CtrackingStateU3Ek__BackingField_39)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_39() const { return ___U3CtrackingStateU3Ek__BackingField_39; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_39() { return &___U3CtrackingStateU3Ek__BackingField_39; }
	inline void set_U3CtrackingStateU3Ek__BackingField_39(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CisTrackedU3Ek__BackingField_40)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_40() const { return ___U3CisTrackedU3Ek__BackingField_40; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_40() { return &___U3CisTrackedU3Ek__BackingField_40; }
	inline void set_U3CisTrackedU3Ek__BackingField_40(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CdevicePositionU3Ek__BackingField_41)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_41() const { return ___U3CdevicePositionU3Ek__BackingField_41; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_41() { return &___U3CdevicePositionU3Ek__BackingField_41; }
	inline void set_U3CdevicePositionU3Ek__BackingField_41(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0, ___U3CdeviceRotationU3Ek__BackingField_42)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_42() const { return ___U3CdeviceRotationU3Ek__BackingField_42; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_42() { return &___U3CdeviceRotationU3Ek__BackingField_42; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_42(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_42), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429  : public InputControl_1_tFF9A76816217BF65BC073EB718F408427089B005
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CyU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E  : public InputControl_1_tAC3938D6DEBEB3383EC43B895AA1F6329E02113D
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CzU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRGestures
struct WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem UnityEngine.XR.WindowsMR.WindowsMRGestures::<gestureSubsystem>k__BackingField
	WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___U3CgestureSubsystemU3Ek__BackingField_4;
	// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestures::onHoldChanged
	Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * ___onHoldChanged_5;
	// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestures::onManipulationChanged
	Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * ___onManipulationChanged_6;
	// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestures::onNavigationChanged
	Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * ___onNavigationChanged_7;
	// System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestures::onTappedChanged
	Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * ___onTappedChanged_8;
	// System.Action`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestures::onActivate
	Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * ___onActivate_9;
	// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestures::enableNavigationGesture
	bool ___enableNavigationGesture_10;
	// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestures::enableManipulationGesture
	bool ___enableManipulationGesture_11;

public:
	inline static int32_t get_offset_of_U3CgestureSubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___U3CgestureSubsystemU3Ek__BackingField_4)); }
	inline WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * get_U3CgestureSubsystemU3Ek__BackingField_4() const { return ___U3CgestureSubsystemU3Ek__BackingField_4; }
	inline WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 ** get_address_of_U3CgestureSubsystemU3Ek__BackingField_4() { return &___U3CgestureSubsystemU3Ek__BackingField_4; }
	inline void set_U3CgestureSubsystemU3Ek__BackingField_4(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * value)
	{
		___U3CgestureSubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgestureSubsystemU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_onHoldChanged_5() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___onHoldChanged_5)); }
	inline Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * get_onHoldChanged_5() const { return ___onHoldChanged_5; }
	inline Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 ** get_address_of_onHoldChanged_5() { return &___onHoldChanged_5; }
	inline void set_onHoldChanged_5(Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * value)
	{
		___onHoldChanged_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHoldChanged_5), (void*)value);
	}

	inline static int32_t get_offset_of_onManipulationChanged_6() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___onManipulationChanged_6)); }
	inline Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * get_onManipulationChanged_6() const { return ___onManipulationChanged_6; }
	inline Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 ** get_address_of_onManipulationChanged_6() { return &___onManipulationChanged_6; }
	inline void set_onManipulationChanged_6(Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * value)
	{
		___onManipulationChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onManipulationChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_onNavigationChanged_7() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___onNavigationChanged_7)); }
	inline Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * get_onNavigationChanged_7() const { return ___onNavigationChanged_7; }
	inline Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE ** get_address_of_onNavigationChanged_7() { return &___onNavigationChanged_7; }
	inline void set_onNavigationChanged_7(Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * value)
	{
		___onNavigationChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNavigationChanged_7), (void*)value);
	}

	inline static int32_t get_offset_of_onTappedChanged_8() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___onTappedChanged_8)); }
	inline Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * get_onTappedChanged_8() const { return ___onTappedChanged_8; }
	inline Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D ** get_address_of_onTappedChanged_8() { return &___onTappedChanged_8; }
	inline void set_onTappedChanged_8(Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * value)
	{
		___onTappedChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTappedChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_onActivate_9() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___onActivate_9)); }
	inline Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * get_onActivate_9() const { return ___onActivate_9; }
	inline Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 ** get_address_of_onActivate_9() { return &___onActivate_9; }
	inline void set_onActivate_9(Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * value)
	{
		___onActivate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onActivate_9), (void*)value);
	}

	inline static int32_t get_offset_of_enableNavigationGesture_10() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___enableNavigationGesture_10)); }
	inline bool get_enableNavigationGesture_10() const { return ___enableNavigationGesture_10; }
	inline bool* get_address_of_enableNavigationGesture_10() { return &___enableNavigationGesture_10; }
	inline void set_enableNavigationGesture_10(bool value)
	{
		___enableNavigationGesture_10 = value;
	}

	inline static int32_t get_offset_of_enableManipulationGesture_11() { return static_cast<int32_t>(offsetof(WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73, ___enableManipulationGesture_11)); }
	inline bool get_enableManipulationGesture_11() const { return ___enableManipulationGesture_11; }
	inline bool* get_address_of_enableManipulationGesture_11() { return &___enableManipulationGesture_11; }
	inline void set_enableManipulationGesture_11(bool value)
	{
		___enableManipulationGesture_11 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F
{
public:
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_ConfigurationChooser_6;

public:
	inline static int32_t get_offset_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___U3CcurrentConfigurationU3Ek__BackingField_4)); }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  get_U3CcurrentConfigurationU3Ek__BackingField_4() const { return ___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 * get_address_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return &___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline void set_U3CcurrentConfigurationU3Ek__BackingField_4(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  value)
	{
		___U3CcurrentConfigurationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_DefaultConfigurationChooser_5)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_DefaultConfigurationChooser_5() const { return ___m_DefaultConfigurationChooser_5; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_DefaultConfigurationChooser_5() { return &___m_DefaultConfigurationChooser_5; }
	inline void set_m_DefaultConfigurationChooser_5(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_DefaultConfigurationChooser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_6() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_ConfigurationChooser_6)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_ConfigurationChooser_6() const { return ___m_ConfigurationChooser_6; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_ConfigurationChooser_6() { return &___m_ConfigurationChooser_6; }
	inline void set_m_ConfigurationChooser_6(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_ConfigurationChooser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_6), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2  : public AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;

public:
	inline static int32_t get_offset_of_pressPoint_33() { return static_cast<int32_t>(offsetof(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2, ___pressPoint_33)); }
	inline float get_pressPoint_33() const { return ___pressPoint_33; }
	inline float* get_address_of_pressPoint_33() { return &___pressPoint_33; }
	inline void set_pressPoint_33(float value)
	{
		___pressPoint_33 = value;
	}
};

struct ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_34() { return static_cast<int32_t>(offsetof(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_StaticFields, ___s_GlobalDefaultButtonPressPoint_34)); }
	inline float get_s_GlobalDefaultButtonPressPoint_34() const { return ___s_GlobalDefaultButtonPressPoint_34; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_34() { return &___s_GlobalDefaultButtonPressPoint_34; }
	inline void set_s_GlobalDefaultButtonPressPoint_34(float value)
	{
		___s_GlobalDefaultButtonPressPoint_34 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_35() { return static_cast<int32_t>(offsetof(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_35)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_35() const { return ___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_35() { return &___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_35(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_35 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem
struct WindowsMRSessionSubsystem_t0DC9CB38AEA08D13E9FD29331BC3C4F38522FFB6  : public XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD
{
public:

public:
};


// UnityEngine.InputSystem.XR.XRController
struct XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E  : public TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0
{
public:

public:
};


// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2  : public TrackedDevice_t9CC7239E4FE23193A710E51D80C0F82F214EE9C0
{
public:
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<leftEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CleftEyePositionU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CleftEyeRotationU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<rightEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CrightEyePositionU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CrightEyeRotationU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<centerEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CcenterEyePositionU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CcenterEyeRotationU3Ek__BackingField_48;

public:
	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CleftEyePositionU3Ek__BackingField_43)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CleftEyePositionU3Ek__BackingField_43() const { return ___U3CleftEyePositionU3Ek__BackingField_43; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CleftEyePositionU3Ek__BackingField_43() { return &___U3CleftEyePositionU3Ek__BackingField_43; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_43(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CleftEyeRotationU3Ek__BackingField_44)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CleftEyeRotationU3Ek__BackingField_44() const { return ___U3CleftEyeRotationU3Ek__BackingField_44; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_44() { return &___U3CleftEyeRotationU3Ek__BackingField_44; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_44(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CrightEyePositionU3Ek__BackingField_45)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CrightEyePositionU3Ek__BackingField_45() const { return ___U3CrightEyePositionU3Ek__BackingField_45; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CrightEyePositionU3Ek__BackingField_45() { return &___U3CrightEyePositionU3Ek__BackingField_45; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_45(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CrightEyeRotationU3Ek__BackingField_46)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CrightEyeRotationU3Ek__BackingField_46() const { return ___U3CrightEyeRotationU3Ek__BackingField_46; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_46() { return &___U3CrightEyeRotationU3Ek__BackingField_46; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_46(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CcenterEyePositionU3Ek__BackingField_47)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CcenterEyePositionU3Ek__BackingField_47() const { return ___U3CcenterEyePositionU3Ek__BackingField_47; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_47() { return &___U3CcenterEyePositionU3Ek__BackingField_47; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_47(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2, ___U3CcenterEyeRotationU3Ek__BackingField_48)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CcenterEyeRotationU3Ek__BackingField_48() const { return ___U3CcenterEyeRotationU3Ek__BackingField_48; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_48() { return &___U3CcenterEyeRotationU3Ek__BackingField_48; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_48(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_48), (void*)value);
	}
};


// UnityEngine.XR.WindowsMR.Input.HololensHand
struct HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022  : public XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.HololensHand::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.HololensHand::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.HololensHand::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.HololensHand::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.HololensHand::<deviceVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceVelocityU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.HololensHand::<airTap>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CairTapU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.HololensHand::<sourceLossRisk>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CsourceLossRiskU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.HololensHand::<sourceLossMitigationDirection>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CsourceLossMitigationDirectionU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.HololensHand::<positionAccuracy>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CpositionAccuracyU3Ek__BackingField_51;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CtrackingStateU3Ek__BackingField_43)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_43() const { return ___U3CtrackingStateU3Ek__BackingField_43; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_43() { return &___U3CtrackingStateU3Ek__BackingField_43; }
	inline void set_U3CtrackingStateU3Ek__BackingField_43(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CisTrackedU3Ek__BackingField_44)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_44() const { return ___U3CisTrackedU3Ek__BackingField_44; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_44() { return &___U3CisTrackedU3Ek__BackingField_44; }
	inline void set_U3CisTrackedU3Ek__BackingField_44(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CdevicePositionU3Ek__BackingField_45)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_45() const { return ___U3CdevicePositionU3Ek__BackingField_45; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_45() { return &___U3CdevicePositionU3Ek__BackingField_45; }
	inline void set_U3CdevicePositionU3Ek__BackingField_45(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CdeviceRotationU3Ek__BackingField_46)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_46() const { return ___U3CdeviceRotationU3Ek__BackingField_46; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_46() { return &___U3CdeviceRotationU3Ek__BackingField_46; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_46(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceVelocityU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CdeviceVelocityU3Ek__BackingField_47)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceVelocityU3Ek__BackingField_47() const { return ___U3CdeviceVelocityU3Ek__BackingField_47; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceVelocityU3Ek__BackingField_47() { return &___U3CdeviceVelocityU3Ek__BackingField_47; }
	inline void set_U3CdeviceVelocityU3Ek__BackingField_47(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceVelocityU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceVelocityU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CairTapU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CairTapU3Ek__BackingField_48)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CairTapU3Ek__BackingField_48() const { return ___U3CairTapU3Ek__BackingField_48; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CairTapU3Ek__BackingField_48() { return &___U3CairTapU3Ek__BackingField_48; }
	inline void set_U3CairTapU3Ek__BackingField_48(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CairTapU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CairTapU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourceLossRiskU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CsourceLossRiskU3Ek__BackingField_49)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CsourceLossRiskU3Ek__BackingField_49() const { return ___U3CsourceLossRiskU3Ek__BackingField_49; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CsourceLossRiskU3Ek__BackingField_49() { return &___U3CsourceLossRiskU3Ek__BackingField_49; }
	inline void set_U3CsourceLossRiskU3Ek__BackingField_49(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CsourceLossRiskU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceLossRiskU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourceLossMitigationDirectionU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CsourceLossMitigationDirectionU3Ek__BackingField_50)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CsourceLossMitigationDirectionU3Ek__BackingField_50() const { return ___U3CsourceLossMitigationDirectionU3Ek__BackingField_50; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CsourceLossMitigationDirectionU3Ek__BackingField_50() { return &___U3CsourceLossMitigationDirectionU3Ek__BackingField_50; }
	inline void set_U3CsourceLossMitigationDirectionU3Ek__BackingField_50(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CsourceLossMitigationDirectionU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceLossMitigationDirectionU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionAccuracyU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022, ___U3CpositionAccuracyU3Ek__BackingField_51)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CpositionAccuracyU3Ek__BackingField_51() const { return ___U3CpositionAccuracyU3Ek__BackingField_51; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CpositionAccuracyU3Ek__BackingField_51() { return &___U3CpositionAccuracyU3Ek__BackingField_51; }
	inline void set_U3CpositionAccuracyU3Ek__BackingField_51(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CpositionAccuracyU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionAccuracyU3Ek__BackingField_51), (void*)value);
	}
};


// UnityEngine.XR.WindowsMR.Input.WMRHMD
struct WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C  : public XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<userPresence>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CuserPresenceU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::<leftEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CleftEyePositionU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CleftEyeRotationU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::<rightEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CrightEyePositionU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CrightEyeRotationU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::<centerEyePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CcenterEyePositionU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CcenterEyeRotationU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRHMD::<positionAccuracy>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CpositionAccuracyU3Ek__BackingField_60;

public:
	inline static int32_t get_offset_of_U3CuserPresenceU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CuserPresenceU3Ek__BackingField_49)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CuserPresenceU3Ek__BackingField_49() const { return ___U3CuserPresenceU3Ek__BackingField_49; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CuserPresenceU3Ek__BackingField_49() { return &___U3CuserPresenceU3Ek__BackingField_49; }
	inline void set_U3CuserPresenceU3Ek__BackingField_49(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CuserPresenceU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuserPresenceU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CtrackingStateU3Ek__BackingField_50)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_50() const { return ___U3CtrackingStateU3Ek__BackingField_50; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_50() { return &___U3CtrackingStateU3Ek__BackingField_50; }
	inline void set_U3CtrackingStateU3Ek__BackingField_50(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CisTrackedU3Ek__BackingField_51)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_51() const { return ___U3CisTrackedU3Ek__BackingField_51; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_51() { return &___U3CisTrackedU3Ek__BackingField_51; }
	inline void set_U3CisTrackedU3Ek__BackingField_51(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CdevicePositionU3Ek__BackingField_52)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_52() const { return ___U3CdevicePositionU3Ek__BackingField_52; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_52() { return &___U3CdevicePositionU3Ek__BackingField_52; }
	inline void set_U3CdevicePositionU3Ek__BackingField_52(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CdeviceRotationU3Ek__BackingField_53)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_53() const { return ___U3CdeviceRotationU3Ek__BackingField_53; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_53() { return &___U3CdeviceRotationU3Ek__BackingField_53; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_53(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CleftEyePositionU3Ek__BackingField_54)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CleftEyePositionU3Ek__BackingField_54() const { return ___U3CleftEyePositionU3Ek__BackingField_54; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CleftEyePositionU3Ek__BackingField_54() { return &___U3CleftEyePositionU3Ek__BackingField_54; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_54(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CleftEyeRotationU3Ek__BackingField_55)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CleftEyeRotationU3Ek__BackingField_55() const { return ___U3CleftEyeRotationU3Ek__BackingField_55; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_55() { return &___U3CleftEyeRotationU3Ek__BackingField_55; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_55(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CrightEyePositionU3Ek__BackingField_56)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CrightEyePositionU3Ek__BackingField_56() const { return ___U3CrightEyePositionU3Ek__BackingField_56; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CrightEyePositionU3Ek__BackingField_56() { return &___U3CrightEyePositionU3Ek__BackingField_56; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_56(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CrightEyeRotationU3Ek__BackingField_57)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CrightEyeRotationU3Ek__BackingField_57() const { return ___U3CrightEyeRotationU3Ek__BackingField_57; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_57() { return &___U3CrightEyeRotationU3Ek__BackingField_57; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_57(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CcenterEyePositionU3Ek__BackingField_58)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CcenterEyePositionU3Ek__BackingField_58() const { return ___U3CcenterEyePositionU3Ek__BackingField_58; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_58() { return &___U3CcenterEyePositionU3Ek__BackingField_58; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_58(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CcenterEyeRotationU3Ek__BackingField_59)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CcenterEyeRotationU3Ek__BackingField_59() const { return ___U3CcenterEyeRotationU3Ek__BackingField_59; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_59() { return &___U3CcenterEyeRotationU3Ek__BackingField_59; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_59(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionAccuracyU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C, ___U3CpositionAccuracyU3Ek__BackingField_60)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CpositionAccuracyU3Ek__BackingField_60() const { return ___U3CpositionAccuracyU3Ek__BackingField_60; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CpositionAccuracyU3Ek__BackingField_60() { return &___U3CpositionAccuracyU3Ek__BackingField_60; }
	inline void set_U3CpositionAccuracyU3Ek__BackingField_60(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CpositionAccuracyU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionAccuracyU3Ek__BackingField_60), (void*)value);
	}
};


// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5  : public XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E
{
public:

public:
};


// UnityEngine.XR.WindowsMR.Input.WMRSpatialController
struct WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6  : public XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<joystick>k__BackingField
	Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___U3CjoystickU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<touchpad>k__BackingField
	Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___U3CtouchpadU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<grip>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CgripU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<gripPressed>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CgripPressedU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<menu>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CmenuU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<trigger>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CtriggerU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<triggerPressed>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CtriggerPressedU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<joystickClicked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CjoystickClickedU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<touchpadClicked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CtouchpadClickedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<touchpadTouched>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CtouchpadTouchedU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<trackingState>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CtrackingStateU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<isTracked>k__BackingField
	ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___U3CisTrackedU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<devicePosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdevicePositionU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<deviceRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CdeviceRotationU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<deviceVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceVelocityU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<deviceAngularVelocity>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CdeviceAngularVelocityU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<batteryLevel>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CbatteryLevelU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<sourceLossRisk>k__BackingField
	AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___U3CsourceLossRiskU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<sourceLossMitigationDirection>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CsourceLossMitigationDirectionU3Ek__BackingField_61;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<pointerPosition>k__BackingField
	Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___U3CpointerPositionU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<pointerRotation>k__BackingField
	QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___U3CpointerRotationU3Ek__BackingField_63;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::<positionAccuracy>k__BackingField
	IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___U3CpositionAccuracyU3Ek__BackingField_64;

public:
	inline static int32_t get_offset_of_U3CjoystickU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CjoystickU3Ek__BackingField_43)); }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * get_U3CjoystickU3Ek__BackingField_43() const { return ___U3CjoystickU3Ek__BackingField_43; }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 ** get_address_of_U3CjoystickU3Ek__BackingField_43() { return &___U3CjoystickU3Ek__BackingField_43; }
	inline void set_U3CjoystickU3Ek__BackingField_43(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * value)
	{
		___U3CjoystickU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CjoystickU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CtouchpadU3Ek__BackingField_44)); }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * get_U3CtouchpadU3Ek__BackingField_44() const { return ___U3CtouchpadU3Ek__BackingField_44; }
	inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 ** get_address_of_U3CtouchpadU3Ek__BackingField_44() { return &___U3CtouchpadU3Ek__BackingField_44; }
	inline void set_U3CtouchpadU3Ek__BackingField_44(Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * value)
	{
		___U3CtouchpadU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CgripU3Ek__BackingField_45)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CgripU3Ek__BackingField_45() const { return ___U3CgripU3Ek__BackingField_45; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CgripU3Ek__BackingField_45() { return &___U3CgripU3Ek__BackingField_45; }
	inline void set_U3CgripU3Ek__BackingField_45(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CgripU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripPressedU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CgripPressedU3Ek__BackingField_46)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CgripPressedU3Ek__BackingField_46() const { return ___U3CgripPressedU3Ek__BackingField_46; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CgripPressedU3Ek__BackingField_46() { return &___U3CgripPressedU3Ek__BackingField_46; }
	inline void set_U3CgripPressedU3Ek__BackingField_46(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CgripPressedU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripPressedU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmenuU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CmenuU3Ek__BackingField_47)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CmenuU3Ek__BackingField_47() const { return ___U3CmenuU3Ek__BackingField_47; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CmenuU3Ek__BackingField_47() { return &___U3CmenuU3Ek__BackingField_47; }
	inline void set_U3CmenuU3Ek__BackingField_47(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CmenuU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmenuU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CtriggerU3Ek__BackingField_48)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CtriggerU3Ek__BackingField_48() const { return ___U3CtriggerU3Ek__BackingField_48; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CtriggerU3Ek__BackingField_48() { return &___U3CtriggerU3Ek__BackingField_48; }
	inline void set_U3CtriggerU3Ek__BackingField_48(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CtriggerU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CtriggerPressedU3Ek__BackingField_49)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CtriggerPressedU3Ek__BackingField_49() const { return ___U3CtriggerPressedU3Ek__BackingField_49; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CtriggerPressedU3Ek__BackingField_49() { return &___U3CtriggerPressedU3Ek__BackingField_49; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_49(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjoystickClickedU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CjoystickClickedU3Ek__BackingField_50)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CjoystickClickedU3Ek__BackingField_50() const { return ___U3CjoystickClickedU3Ek__BackingField_50; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CjoystickClickedU3Ek__BackingField_50() { return &___U3CjoystickClickedU3Ek__BackingField_50; }
	inline void set_U3CjoystickClickedU3Ek__BackingField_50(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CjoystickClickedU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CjoystickClickedU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadClickedU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CtouchpadClickedU3Ek__BackingField_51)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CtouchpadClickedU3Ek__BackingField_51() const { return ___U3CtouchpadClickedU3Ek__BackingField_51; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CtouchpadClickedU3Ek__BackingField_51() { return &___U3CtouchpadClickedU3Ek__BackingField_51; }
	inline void set_U3CtouchpadClickedU3Ek__BackingField_51(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CtouchpadClickedU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadClickedU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadTouchedU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CtouchpadTouchedU3Ek__BackingField_52)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CtouchpadTouchedU3Ek__BackingField_52() const { return ___U3CtouchpadTouchedU3Ek__BackingField_52; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CtouchpadTouchedU3Ek__BackingField_52() { return &___U3CtouchpadTouchedU3Ek__BackingField_52; }
	inline void set_U3CtouchpadTouchedU3Ek__BackingField_52(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CtouchpadTouchedU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadTouchedU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CtrackingStateU3Ek__BackingField_53)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CtrackingStateU3Ek__BackingField_53() const { return ___U3CtrackingStateU3Ek__BackingField_53; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CtrackingStateU3Ek__BackingField_53() { return &___U3CtrackingStateU3Ek__BackingField_53; }
	inline void set_U3CtrackingStateU3Ek__BackingField_53(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CtrackingStateU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CisTrackedU3Ek__BackingField_54)); }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * get_U3CisTrackedU3Ek__BackingField_54() const { return ___U3CisTrackedU3Ek__BackingField_54; }
	inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 ** get_address_of_U3CisTrackedU3Ek__BackingField_54() { return &___U3CisTrackedU3Ek__BackingField_54; }
	inline void set_U3CisTrackedU3Ek__BackingField_54(ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * value)
	{
		___U3CisTrackedU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CdevicePositionU3Ek__BackingField_55)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdevicePositionU3Ek__BackingField_55() const { return ___U3CdevicePositionU3Ek__BackingField_55; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdevicePositionU3Ek__BackingField_55() { return &___U3CdevicePositionU3Ek__BackingField_55; }
	inline void set_U3CdevicePositionU3Ek__BackingField_55(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdevicePositionU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CdeviceRotationU3Ek__BackingField_56)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CdeviceRotationU3Ek__BackingField_56() const { return ___U3CdeviceRotationU3Ek__BackingField_56; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_56() { return &___U3CdeviceRotationU3Ek__BackingField_56; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_56(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceVelocityU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CdeviceVelocityU3Ek__BackingField_57)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceVelocityU3Ek__BackingField_57() const { return ___U3CdeviceVelocityU3Ek__BackingField_57; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceVelocityU3Ek__BackingField_57() { return &___U3CdeviceVelocityU3Ek__BackingField_57; }
	inline void set_U3CdeviceVelocityU3Ek__BackingField_57(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceVelocityU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceVelocityU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CdeviceAngularVelocityU3Ek__BackingField_58)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CdeviceAngularVelocityU3Ek__BackingField_58() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_58; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_58() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_58; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_58(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbatteryLevelU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CbatteryLevelU3Ek__BackingField_59)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CbatteryLevelU3Ek__BackingField_59() const { return ___U3CbatteryLevelU3Ek__BackingField_59; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CbatteryLevelU3Ek__BackingField_59() { return &___U3CbatteryLevelU3Ek__BackingField_59; }
	inline void set_U3CbatteryLevelU3Ek__BackingField_59(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CbatteryLevelU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbatteryLevelU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourceLossRiskU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CsourceLossRiskU3Ek__BackingField_60)); }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * get_U3CsourceLossRiskU3Ek__BackingField_60() const { return ___U3CsourceLossRiskU3Ek__BackingField_60; }
	inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E ** get_address_of_U3CsourceLossRiskU3Ek__BackingField_60() { return &___U3CsourceLossRiskU3Ek__BackingField_60; }
	inline void set_U3CsourceLossRiskU3Ek__BackingField_60(AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * value)
	{
		___U3CsourceLossRiskU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceLossRiskU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourceLossMitigationDirectionU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CsourceLossMitigationDirectionU3Ek__BackingField_61)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CsourceLossMitigationDirectionU3Ek__BackingField_61() const { return ___U3CsourceLossMitigationDirectionU3Ek__BackingField_61; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CsourceLossMitigationDirectionU3Ek__BackingField_61() { return &___U3CsourceLossMitigationDirectionU3Ek__BackingField_61; }
	inline void set_U3CsourceLossMitigationDirectionU3Ek__BackingField_61(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CsourceLossMitigationDirectionU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourceLossMitigationDirectionU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerPositionU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CpointerPositionU3Ek__BackingField_62)); }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * get_U3CpointerPositionU3Ek__BackingField_62() const { return ___U3CpointerPositionU3Ek__BackingField_62; }
	inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E ** get_address_of_U3CpointerPositionU3Ek__BackingField_62() { return &___U3CpointerPositionU3Ek__BackingField_62; }
	inline void set_U3CpointerPositionU3Ek__BackingField_62(Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * value)
	{
		___U3CpointerPositionU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerPositionU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerRotationU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CpointerRotationU3Ek__BackingField_63)); }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * get_U3CpointerRotationU3Ek__BackingField_63() const { return ___U3CpointerRotationU3Ek__BackingField_63; }
	inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 ** get_address_of_U3CpointerRotationU3Ek__BackingField_63() { return &___U3CpointerRotationU3Ek__BackingField_63; }
	inline void set_U3CpointerRotationU3Ek__BackingField_63(QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * value)
	{
		___U3CpointerRotationU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerRotationU3Ek__BackingField_63), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionAccuracyU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6, ___U3CpositionAccuracyU3Ek__BackingField_64)); }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * get_U3CpositionAccuracyU3Ek__BackingField_64() const { return ___U3CpositionAccuracyU3Ek__BackingField_64; }
	inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF ** get_address_of_U3CpositionAccuracyU3Ek__BackingField_64() { return &___U3CpositionAccuracyU3Ek__BackingField_64; }
	inline void set_U3CpositionAccuracyU3Ek__BackingField_64(IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * value)
	{
		___U3CpositionAccuracyU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionAccuracyU3Ek__BackingField_64), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRPlane[]
struct WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F  m_Items[1];

public:
	inline WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WMRPlane_t145DDAE58819337C56015603B976FAE8AE1A577F  value)
	{
		m_Items[index] = value;
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
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


// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404  NativeArray_1_GetEnumerator_m1643E2216FD39974C9F926E11F1B1764F367850E_gshared (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  Enumerator_get_Current_m89A23C940A233C73C2BB503315D36C01ED9EE7F9_gshared (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m9C4661BC9D71CD305F4FEB4691392F58AF1644CB_gshared (Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * __this, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  ___obj0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1EFAD531E0995E03D3C1350EFB3F21BED21684C4_gshared (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE962FA0C0006E48845D4375EB3079E25252F7A5_gshared (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86  NativeArray_1_GetEnumerator_m54900597F0C31907698B17FD5B21751A364640B4_gshared (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  Enumerator_get_Current_m0484FB93B75E8B35D626B071D35098A7727025E0_gshared (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mFD7CC159D962B9561167BAF34C7471F7F5624711_gshared (Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * __this, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  ___obj0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m372F4CAF688C292AFBC27A10896E20B7302E5106_gshared (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEC346847783F5028A5AA5735EEAC790F94A12DB0_gshared (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F  NativeArray_1_GetEnumerator_mF3BE0E6FB3FA2B685A36396071E7266526461D3E_gshared (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  Enumerator_get_Current_mC1A36C69B672DC7BAD61BD8B94DC5D13F64807D4_gshared (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m65323523B049E0768F948A5EFFA6B0DB6D06D074_gshared (Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * __this, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  ___obj0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m83CAF3CE6AEDCD565AAE7BA61A133D50E996E088_gshared (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m088939BD8F7D84F884B2AE89235E8942D00F622C_gshared (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7  NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA_gshared (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C_gshared (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mDCD8EF0323C03E1A7184B25088D8F6001FA2CC6F_gshared (Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * __this, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  ___obj0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402_gshared (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F_gshared (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006  NativeArray_1_GetEnumerator_m3989E064980C448A43F098167B7BFBA39738EB45_gshared (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  Enumerator_get_Current_mAF6B5EEF80DC47DA190A052EE696245953380428_gshared (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m67BBA67A3DEA53DA403B86EC67B6C68535F34CDD_gshared (Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * __this, ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  ___obj0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m573DC24E07895CD055E98449EFCAD15C1DFB9F51_gshared (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8AC7EE6A198878AB6DF6B636B1542A4BF6047904_gshared (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_gshared (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_gshared (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_gshared (InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mFA556ED010B117E44F21659A13788CB2F9F1198E_gshared (InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRAnchor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF_gshared (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.TrackableId>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m98E60584C28C2829CB213CED3ADDF18756449AB3_gshared (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::CopyFrom(Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  TrackableChanges_1_CopyFrom_m07D7DB0F41CA9698585349E4EF80F351720C6B5D_gshared (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___added0, NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___updated1, NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___removed2, int32_t ___allocator3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_gshared (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_gshared (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94_gshared (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E_gshared (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165_gshared (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931_gshared (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * ___gestureEvents1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * ___gestureEvents1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * ___gestureEvents1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * ___gestureEvents1, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC_gshared (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03_gshared (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2_gshared (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5_gshared (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A_gshared (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA_gshared (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2_gshared (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3_gshared (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE_gshared (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69_gshared (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517_gshared (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB * Promise_1_CreateResolvedPromise_mCFFF13C64441B2D042C6CC8F3399C999B928B7F0_gshared (int32_t ___result0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_gshared (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);

// System.Void UnityEngine.InputSystem.XR.XRController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController_FinishSetup_m2D73A4DE4C5AF7CB4AB8C4EEEA2BAA6189E2A8B6 (XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_airTap(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_airTap_mD76A1F21FB88A0E798D08ABF8F792338414E9A45_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_trackingState_m9E145AEC39B7197FA7D42CDEC8F7F3A26AAF5A51_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_isTracked_mB8F8ACCBA6313BB406FC1BA89BCF815835895F41_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_devicePosition_mA8B23495D517C25573842AE84EA35F1E1C2ADD29_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_deviceRotation_m4C4864381A83797DA0F80B40E39636ADE99988C8_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_deviceVelocity_mC3D795321AD7C28FDC1CC326626B823E9ACF6FC2_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.AxisControl>(System.String)
inline AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_sourceLossRisk(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_sourceLossRisk_m7F9E12F8CC963EE97D563296D0FDCB013FE38D38_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_sourceLossMitigationDirection(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_sourceLossMitigationDirection_m78B4BE4F335BD40EC9049D67F04CE14D9D821D74_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_positionAccuracy(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_positionAccuracy_m39DCC8F5A8EE64A8DBA93CC4504204FCB7C1E02A_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController__ctor_m66809170B52E4A3E20BEDC54CA8D46CDD182057B (XRController_tB4E4AE731873CAAAE0C04DFBBE690F385EDF081E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD_FinishSetup_mFA083256B40891104F2B70E2802F0FD4B27AE99C (XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_userPresence_m6A58AA1EDABDF0984DC9422D04949E43F36E7530_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_trackingState_m7570BA3B82AD38031A7D37E31D0AE7414B1A371A_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_isTracked_m25680C361DD83BD311C1F47B472713BC5B005003_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_devicePosition_mC6549F4009B66D12391049CC0F699E0B119B2CE0_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_deviceRotation_m3C4A6F18E2E21511732881C35010DB9DC14B3164_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_leftEyePosition_mBB585B9FB933923AD50154774562E592C4D7E332_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_leftEyeRotation_m5C06DB9C4AF90D4D9948DE5CD0C15320AA974D3D_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_rightEyePosition_m09989F30957D48D3F6F78143ECE14475B65EA5EB_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_rightEyeRotation_mBF7EEB6CC37E166833A98816371D34956B61E9BC_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_centerEyePosition_mE824E4C413E30493A4E53CAAC941D2A18B2C5B91_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_centerEyeRotation_mE1FCA23DEED0B0DC0AFACE4464FD358D8AA8BDFD_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_positionAccuracy(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_positionAccuracy_m963683B089DF49286E2A66F3060579F2F2739090_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD__ctor_m5219C151479C24B8AC88CF76AF908C25227E240D (XRHMD_tD24BED27EDE2B7B11FE8F5CC34346650A42AC5F2 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector2Control>(System.String)
inline Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062 (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * (*) (InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m9EBCDC6C554DED4DC95DE73260882258A07609D2_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_joystick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_joystick_m43CDB2579A1844942E1EE7B698EF0E9FDC5836DB_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_trigger_mFE74869FBC515D3DDB21329EB3696F0257423192_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpad_m46CFBA6A76419A66F50047515F8DC139E5B2FE2F_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_grip_m32D70F2CE6DEB907295027EEBE60CF769C2473F0_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_gripPressed_m8028F9E39EC53EB6706C966275F5539C149CB4AC_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_menu(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_menu_mB51CC6DD51E7A60A9EDA2FEB172FD37899452CED_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_joystickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_joystickClicked_m1F99F94E33610E33A8B032AE333AA66413D6AF76_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_triggerPressed_mFFE76D8BB9983376A10346E3636FBEBB71B1893F_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpadClicked_m9F8CAE8D9523C1D4F93F571903F5644A6B2FCA17_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpadTouched_m36780109F3A9CB8DEC797CAF13D919866A45F828_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_trackingState_m73DC0784EEDC0D2A1A4CFA4BD786F6750DE551DB_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_isTracked_m485238D8DF970F398D87EB7E94576F82F8FE86BB_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_devicePosition_m385501795277CDB1EBF9F8B1BF6377DEBB6961C4_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceRotation_m2D6D9506FBC8F917081B2986027894636AC39202_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceVelocity_m71359CEAAFEF272B92613FABAA2DBB8168EB3DF4_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceAngularVelocity_m4C2CDFFEA021435F74C584C446509F1CC0A5FB3D_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_batteryLevel(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_batteryLevel_m4C17A2DC480E60AD26FAA40917AC657DE524515C_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_sourceLossRisk(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_sourceLossRisk_m8DE499FDF98EE56888A9E42D7FEF69412ACA274E_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_sourceLossMitigationDirection(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_sourceLossMitigationDirection_m62041F0243D5ED74DB2C1F975FC9A8ADA0774981_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_pointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_pointerPosition_m162EF7814C4C69C62DF310FC88337D41E2292C02_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_pointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_pointerRotation_m544C1999B5AD6A3D0D30979AD5F56793AD0C8A68_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_positionAccuracy(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_positionAccuracy_mBD0085A4F701FEBCC93CF05DDBC66C905458D58E_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRControllerWithRumble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRControllerWithRumble__ctor_m0FBE065D60AEF3D7E19F29A6F392EB5819D13EBB (XRControllerWithRumble_tEECDD4DA81A5133D1F15234762C5CB2C2CD53DB5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_mD547D79334975B1BA72225A073D2576E207A092D (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.WindowsMR.Native::GetOriginSpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_GetOriginSpatialCoordinateSystem_m85DB25E883ACB50378D3B964626B8D2C03E0C264 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.WindowsMR.Native::GetCurrentHolographicRenderFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_GetCurrentHolographicRenderFrame_m6CBBB8AB5777A7B64B1535BD42EDF48D3F7455E3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions/NativeApi::SetBoundingVolumeOrientedBox(UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_SetBoundingVolumeOrientedBox_m2821434E67A1D0BA2C2F16B3E7BFF866BB4A557F (WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454  ___planes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions/NativeApi::SetBoundingVolumeSphere(UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRSphere)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_SetBoundingVolumeSphere_m31F3940FA5DAF794120200A6B08969D0C40D9270 (WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4  ___planes0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_holdGestureEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  WindowsMRGestureProvider_get_holdGestureEvents_mC4F61F0F923190C315A7C1FF4EC47FC9E848CE75_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_manipulationGestureEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  WindowsMRGestureProvider_get_manipulationGestureEvents_mF3C0B8F022717BA75E60B4D25D5AFE3BBD7499D1_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_navigationGestureEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  WindowsMRGestureProvider_get_navigationGestureEvents_m4396B2839123D403BC77F706BD35C75CF2C48739_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_tappedGestureEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  WindowsMRGestureProvider_get_tappedGestureEvents_m536D1C5781E7879B343D029B81F8F024153D3704_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::.ctor(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider__ctor_mA04198031707F3B34AF35CA504A75CAC7689CE35 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___subsystem0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::SetEnableManipulationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureProvider_SetEnableManipulationGesture_m648642E50116C3D6C0196DD6DC930EEC5FC64BC4 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, bool ___enable0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::SetEnableNavigationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureProvider_SetEnableNavigationGesture_mA9956AD7DB20A6E09BDE5A5BC465A609F2FE683C (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, bool ___enable0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mE23FF76031CA3903EF8F85D49DBF7407DC6E5DFB_inline (Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m5965A6CDF66B1D7AF30028F3822077B1788A78B8_inline (Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.InteractionSubsystems.XRGestureSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGestureSubsystemDescriptor_RegisterDescriptor_m6E4C08D32E73627CB924AC8B245B271E477F6E80 (Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227  ___cinfo0, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.InteractionSubsystems.GestureId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t GestureId_get_subId1_m547C714F376171ADAA9449F4E35F2E6161DB9364_inline (GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.GestureId::set_subId1(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureId_set_subId1_m666DE846D8E289BBCE2CFD8DCE41E294EC1BC00C_inline (GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGestureSubsystem__ctor_m971245C11BB0663140CA8A073EC87000071E1F0E (XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.GestureId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureId__ctor_mF83271CB44FEC441DD9FF00ED3FD7EF0D49087CE (GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem UnityEngine.XR.WindowsMR.WindowsMRGestures::get_gestureSubsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44_inline (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>::.ctor()
inline void List_1__ctor_m624B3B8CD66244E356A0D7D759673FFE33C0609E (List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02_m31920ADB8BDE6FD6418A8F36FCF8A34D27BEA66B (List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>::GetEnumerator()
inline Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A  List_1_GetEnumerator_m066835015A187AF6EE8FE17D115AE95030DEE73A (List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A  (*) (List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>::get_Current()
inline XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * Enumerator_get_Current_m5C97AEDACA34E2B51FB8D2DB17ECB6182C2CF114_inline (Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A * __this, const RuntimeMethod* method)
{
	return ((  XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * (*) (Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::set_gestureSubsystem(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMRGestures_set_gestureSubsystem_m2F5C44E348B4AB1E27D3EECEF2FCDE70BC23261D_inline (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m23000C7F15B52654FDA86A66F41689CE1FFA4E53 (Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem>::Dispose()
inline void Enumerator_Dispose_mF7AA9629638AB4D06B022E461CB4FC8AB1F6BFA0 (Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_OnValidate_m6DE1F642001DB8E048D3CAD1838A73D8C8C8DDF7 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::SetEnableNavigationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureSubsystem_SetEnableNavigationGesture_m98AF0437167F3412FD251777B4935CBDBB97A1A2 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, bool ___enable0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::SetEnableManipulationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureSubsystem_SetEnableManipulationGesture_m2B953B6D34239BE33C9DAE745368CFB3804E8ACE (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, bool ___enable0, const RuntimeMethod* method);
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem UnityEngine.XR.WindowsMR.WindowsMRGestures::GetGestureSubsystemIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * WindowsMRGestures_GetGestureSubsystemIfNeeded_m94F38F8C2A43A68E7A0A0D48D9E270128A7B9944 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGestureSubsystem_Update_mBCCB8C6A494652FC3F495ABA94B79CB73FF5D7EE (XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_holdGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  WindowsMRGestureSubsystem_get_holdGestureEvents_m835C1731B08A0D7E64B701795E08668402007DDC (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::GetEnumerator()
inline Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404  NativeArray_1_GetEnumerator_m1643E2216FD39974C9F926E11F1B1764F367850E (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404  (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m1643E2216FD39974C9F926E11F1B1764F367850E_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::get_Current()
inline WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  Enumerator_get_Current_m89A23C940A233C73C2BB503315D36C01ED9EE7F9 (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 * __this, const RuntimeMethod* method)
{
	return ((  WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  (*) (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 *, const RuntimeMethod*))Enumerator_get_Current_m89A23C940A233C73C2BB503315D36C01ED9EE7F9_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Invoke(!0)
inline void Action_1_Invoke_m9C4661BC9D71CD305F4FEB4691392F58AF1644CB (Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * __this, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C , const RuntimeMethod*))Action_1_Invoke_m9C4661BC9D71CD305F4FEB4691392F58AF1644CB_gshared)(__this, ___obj0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::MoveNext()
inline bool Enumerator_MoveNext_m1EFAD531E0995E03D3C1350EFB3F21BED21684C4 (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 *, const RuntimeMethod*))Enumerator_MoveNext_m1EFAD531E0995E03D3C1350EFB3F21BED21684C4_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Dispose()
inline void Enumerator_Dispose_mFE962FA0C0006E48845D4375EB3079E25252F7A5 (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 *, const RuntimeMethod*))Enumerator_Dispose_mFE962FA0C0006E48845D4375EB3079E25252F7A5_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_manipulationGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  WindowsMRGestureSubsystem_get_manipulationGestureEvents_mDE2A52E9C69598DEE55022F803BA7ABC59C22B49 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::GetEnumerator()
inline Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86  NativeArray_1_GetEnumerator_m54900597F0C31907698B17FD5B21751A364640B4 (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86  (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m54900597F0C31907698B17FD5B21751A364640B4_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::get_Current()
inline WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  Enumerator_get_Current_m0484FB93B75E8B35D626B071D35098A7727025E0 (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 * __this, const RuntimeMethod* method)
{
	return ((  WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  (*) (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 *, const RuntimeMethod*))Enumerator_get_Current_m0484FB93B75E8B35D626B071D35098A7727025E0_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Invoke(!0)
inline void Action_1_Invoke_mFD7CC159D962B9561167BAF34C7471F7F5624711 (Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * __this, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD , const RuntimeMethod*))Action_1_Invoke_mFD7CC159D962B9561167BAF34C7471F7F5624711_gshared)(__this, ___obj0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::MoveNext()
inline bool Enumerator_MoveNext_m372F4CAF688C292AFBC27A10896E20B7302E5106 (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 *, const RuntimeMethod*))Enumerator_MoveNext_m372F4CAF688C292AFBC27A10896E20B7302E5106_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Dispose()
inline void Enumerator_Dispose_mEC346847783F5028A5AA5735EEAC790F94A12DB0 (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 *, const RuntimeMethod*))Enumerator_Dispose_mEC346847783F5028A5AA5735EEAC790F94A12DB0_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_navigationGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  WindowsMRGestureSubsystem_get_navigationGestureEvents_mDF579B8A385FF11EEC092D843B66ABA238975894 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::GetEnumerator()
inline Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F  NativeArray_1_GetEnumerator_mF3BE0E6FB3FA2B685A36396071E7266526461D3E (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F  (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_mF3BE0E6FB3FA2B685A36396071E7266526461D3E_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::get_Current()
inline WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  Enumerator_get_Current_mC1A36C69B672DC7BAD61BD8B94DC5D13F64807D4 (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F * __this, const RuntimeMethod* method)
{
	return ((  WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  (*) (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F *, const RuntimeMethod*))Enumerator_get_Current_mC1A36C69B672DC7BAD61BD8B94DC5D13F64807D4_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Invoke(!0)
inline void Action_1_Invoke_m65323523B049E0768F948A5EFFA6B0DB6D06D074 (Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * __this, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 , const RuntimeMethod*))Action_1_Invoke_m65323523B049E0768F948A5EFFA6B0DB6D06D074_gshared)(__this, ___obj0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::MoveNext()
inline bool Enumerator_MoveNext_m83CAF3CE6AEDCD565AAE7BA61A133D50E996E088 (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F *, const RuntimeMethod*))Enumerator_MoveNext_m83CAF3CE6AEDCD565AAE7BA61A133D50E996E088_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Dispose()
inline void Enumerator_Dispose_m088939BD8F7D84F884B2AE89235E8942D00F622C (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F *, const RuntimeMethod*))Enumerator_Dispose_m088939BD8F7D84F884B2AE89235E8942D00F622C_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_tappedGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  WindowsMRGestureSubsystem_get_tappedGestureEvents_mFE3FCB3D4D018C45864ABABE64CE78D976E7554E (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetEnumerator()
inline Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7  NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7  (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_Current()
inline WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 * __this, const RuntimeMethod* method)
{
	return ((  WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  (*) (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *, const RuntimeMethod*))Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Invoke(!0)
inline void Action_1_Invoke_mDCD8EF0323C03E1A7184B25088D8F6001FA2CC6F (Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * __this, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 , const RuntimeMethod*))Action_1_Invoke_mDCD8EF0323C03E1A7184B25088D8F6001FA2CC6F_gshared)(__this, ___obj0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::MoveNext()
inline bool Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402 (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *, const RuntimeMethod*))Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
inline void Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *, const RuntimeMethod*))Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent> UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem::get_activateGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  XRGestureSubsystem_get_activateGestureEvents_m8D6A34660BC3A5E8438138BF705710F1B6D5D3C6 (XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::GetEnumerator()
inline Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006  NativeArray_1_GetEnumerator_m3989E064980C448A43F098167B7BFBA39738EB45 (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006  (*) (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m3989E064980C448A43F098167B7BFBA39738EB45_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::get_Current()
inline ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  Enumerator_get_Current_mAF6B5EEF80DC47DA190A052EE696245953380428 (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 * __this, const RuntimeMethod* method)
{
	return ((  ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  (*) (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 *, const RuntimeMethod*))Enumerator_get_Current_mAF6B5EEF80DC47DA190A052EE696245953380428_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::Invoke(!0)
inline void Action_1_Invoke_m67BBA67A3DEA53DA403B86EC67B6C68535F34CDD (Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * __this, ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *, ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337 , const RuntimeMethod*))Action_1_Invoke_m67BBA67A3DEA53DA403B86EC67B6C68535F34CDD_gshared)(__this, ___obj0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::MoveNext()
inline bool Enumerator_MoveNext_m573DC24E07895CD055E98449EFCAD15C1DFB9F51 (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 *, const RuntimeMethod*))Enumerator_MoveNext_m573DC24E07895CD055E98449EFCAD15C1DFB9F51_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::Dispose()
inline void Enumerator_Dispose_m8AC7EE6A198878AB6DF6B636B1542A4BF6047904 (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 *, const RuntimeMethod*))Enumerator_Dispose_m8AC7EE6A198878AB6DF6B636B1542A4BF6047904_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRHoldGestureEvent_get_id_m6D8F5DE158524197B3E9A921C2274C29D8ED6AF3_inline (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRHoldGestureEvent_get_state_mEE42F56DDE2EC21257E7122B992E55BB062C2D4F_inline (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRHoldGestureEvent_ToString_m87D4381289ADC2F1A251700BC84E5968B2E01DC6 (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRHoldGestureEvent_Equals_mEAD4A09537B715ECABF41E2F6AA5C7DCDCC64F33 (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRHoldGestureEvent_Equals_m56B218188024BACAE6C47C5CDD088801D9313C6E (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InteractionSubsystems.GestureId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureId_GetHashCode_mA995D0A5FE0A2D84EAD74678AED691BF0764A859 (GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRHoldGestureEvent_GetHashCode_m8F2502D512F5C48BB9DF4DB25ADDCF1408B27F7A (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InteractionSubsystems.GestureId::Equals(UnityEngine.XR.InteractionSubsystems.GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureId_Equals_m51FF986A93535F81A252748A33865636E9FB9698 (GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * __this, GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___other0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRInput/NativeApi::GetCountOfSourceStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCountOfSourceStates_mABBFF7052B8B3EC6270F26A42BAE0D9DC144E7FD (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRInput/NativeApi::GetAllSourceStates(System.IntPtr[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_GetAllSourceStates_mA6A2FE622961D26D78A6CA4835B914AB7E3569B3 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___sourceStates0, int32_t ___countSourceStates1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::GetObjectForIUnknown(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetObjectForIUnknown_m3F7D121FBDDEE97D58FCAD6F58F77D36924BC66F (intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRInput/NativeApi::ReleaseAllSourceStates(System.IntPtr[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_ReleaseAllSourceStates_m708167F26A3A19F5D78FFE10C1014E7AC2281AF6 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___sourceStates0, int32_t ___countSourceStates1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMRInternals.WindowsMRInternal::UnityWindowsMR_EmulationLibs_SetPluginFolderPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRInternal_UnityWindowsMR_EmulationLibs_SetPluginFolderPaths_mE37640D7D9074C17C5E9D81C350AFD8DEC347247 (String_t* ___pluginFolderPath_x86_640, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRManipulationGestureEvent_get_id_mA4D42C442AE74BDCB6C2A3AE10096458C86B0F00_inline (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRManipulationGestureEvent_get_state_mAE0B1DD206F527881FD05F5C0A02A13D0BB3D8C7_inline (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::get_cumulativeDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F_inline (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRManipulationGestureEvent_ToString_mB763E2D65DD38FC5F7AFA42824D023FF5943179D (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRManipulationGestureEvent_Equals_m6D3678EC3350E411E4CE20F74A060431A4B3BC4D (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRManipulationGestureEvent_Equals_mE627F94BCC8D89061D669A4E151B55DD85A862BE (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRManipulationGestureEvent_GetHashCode_mFEECAF5AB7081A6C3B49FCEAAA48BBA6455D8EA4 (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRNavigationGestureEvent_get_id_m6AA1C10874F845A4832FCB7352A8E4A200737A4F_inline (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRNavigationGestureEvent_get_state_m85B727B4B39939571352B5FBC1BEBBDF2723895F_inline (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::get_normalizedOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRNavigationGestureEvent_get_normalizedOffset_m10CD89AAAA3020E56E087B2D349790C82005A343_inline (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRNavigationGestureEvent_ToString_m62E7AC359CD0C94B843B0348297C742CE9DB596E (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRNavigationGestureEvent_Equals_mF04C6DDC5E5A614DB2DD168E32645870E13C99BF (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRNavigationGestureEvent_Equals_m2BC1623B58B628CF58FBB637A43E22812F397269 (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRNavigationGestureEvent_GetHashCode_m7319B536FE9E03BE170744D0A5025A3C666F98FD (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m0A22D56BDA43123B323F300C2ABF6F2504C3C02F (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRTappedGestureEvent_get_id_mCF2F486894D4DDF592B5CFFE918F3F1E764911F9_inline (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method);
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_inline (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::get_tappedCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_get_tappedCount_m1C3775FCF65723A87630119978CCA1AB81769136_inline (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRTappedGestureEvent_ToString_m26DC834236CF0F10B818A2565D06207A18C9D9DE (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRTappedGestureEvent_Equals_mABD39CE8DD91E3D967199BF869FA47F3B70CE439 (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRTappedGestureEvent_Equals_mD86527B1974A47F50042CC65CE6E0CE93655680B (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_GetHashCode_mB512A915C951F132527EE4B0E6DE7EE073841C48 (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465 (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693 (InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mFA556ED010B117E44F21659A13788CB2F9F1198E (InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mFA556ED010B117E44F21659A13788CB2F9F1198E_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_start_m49E1973B8B410C727C6D72BFFCA127FF09F853F6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_stop_m686111933810C4445A604CF2A4B4EA0051967DF1 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_onDestroy_m5FF02C57FB9EE6BC4DD59796200E1203CE5DF959 (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityWindowsMR_refPoints_acquireChanges_mA59F376A8C950361DB9E004D3FA25C86ED10B332 (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRAnchor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  (*) (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF_gshared)(___defaultT0, ___source1, ___sourceElementSize2, ___length3, ___allocator4, method);
}
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.TrackableId>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m98E60584C28C2829CB213CED3ADDF18756449AB3 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m98E60584C28C2829CB213CED3ADDF18756449AB3_gshared)(___defaultT0, ___source1, ___sourceElementSize2, ___length3, ___allocator4, method);
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::CopyFrom(Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<!0>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
inline TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  TrackableChanges_1_CopyFrom_m07D7DB0F41CA9698585349E4EF80F351720C6B5D (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___added0, NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___updated1, NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___removed2, int32_t ___allocator3, const RuntimeMethod* method)
{
	return ((  TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  (*) (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 , NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 , NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 , int32_t, const RuntimeMethod*))TrackableChanges_1_CopyFrom_m07D7DB0F41CA9698585349E4EF80F351720C6B5D_gshared)(___added0, ___updated1, ___removed2, ___allocator3, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
inline void NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *, const RuntimeMethod*))NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *, const RuntimeMethod*))NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_releaseChanges_m7EAC6A95338EBDBD12E9A039AEA6DE4CDD32DDCE (void* ___changes0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_tryAdd(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_refPoints_tryAdd_mF657AA1FE93EDF94D027E27C56460EDE34BB72B7 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_tryRemove(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_refPoints_tryRemove_m8F3903E29CFA9A450B5CA2649DD1F352C571C749 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___anchorId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94 (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165 (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931 (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m36D6E0EA17A1FFCC01D5ADFE398F6B42E128282B (Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesStart_mD15B5D7C73858AB87BC976C1530EC43A3DC5AA14 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesStop_mA3B2988831FDE63BDFA8DAD8956F7F39A02B1283 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesUpdate_mDF9D58D90862ECFA0E652002FC347DBB7F356436 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveAllGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveAllGestureEvents_m54B05DFA5B516E1274EB32F16CE8BC79BCCAF2D5 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetGestureEventsPtrFunction__ctor_m33C2C1337DA78792600E4A26B47DAD9AB10DE5DB (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
inline void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * ___gestureEvents1, const RuntimeMethod* method)
{
	((  void (*) (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB *, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *, NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, const RuntimeMethod*))WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730_gshared)(__this, ___getGestureEventsPtrFunction0, ___gestureEvents1, method);
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
inline void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * ___gestureEvents1, const RuntimeMethod* method)
{
	((  void (*) (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB *, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *, NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, const RuntimeMethod*))WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B_gshared)(__this, ___getGestureEventsPtrFunction0, ___gestureEvents1, method);
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
inline void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * ___gestureEvents1, const RuntimeMethod* method)
{
	((  void (*) (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB *, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *, NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, const RuntimeMethod*))WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E_gshared)(__this, ___getGestureEventsPtrFunction0, ___gestureEvents1, method);
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
inline void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * ___gestureEvents1, const RuntimeMethod* method)
{
	((  void (*) (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB *, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *, NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, const RuntimeMethod*))WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9_gshared)(__this, ___getGestureEventsPtrFunction0, ___gestureEvents1, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03 (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *, const RuntimeMethod*))NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2 (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::GetNextGUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRGestureSubsystem_GetNextGUID_m7F46777B6B24775A4941C17EF123522206CDB54A (const RuntimeMethod* method);
// System.Void UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent::.ctor(UnityEngine.XR.InteractionSubsystems.GestureId,UnityEngine.XR.InteractionSubsystems.GestureState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateGestureEvent__ctor_m7F6889967D16929F4C531763135BBABBF6679B34 (ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337 * __this, GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___id0, int32_t ___state1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesDestroy_m84D2AA609A0B5422DED5FCBD5AE4BEB14B858146 (const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5 (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, const RuntimeMethod*))NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2 (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, const RuntimeMethod*))NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3 (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, const RuntimeMethod*))NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69 (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517 (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, const RuntimeMethod*))NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m74F556AB8D3570C080F37A85F08E81964726962A (Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesSetEnableManipulationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_GesturesSetEnableManipulationGesture_mFF2F312FA39B91FBAA9448DBF3F4C43A9A6EF0CF (bool ___enable0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesSetEnableNavigationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_GesturesSetEnableNavigationGesture_mF29AE1D27ECA752AFB228C7230171808B9A61A6B (bool ___enable0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_construct_mA759BF21A6479DB12E6693C551FC62118178D312 (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(!0)
inline Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Promise_1_CreateResolvedPromise_m0AB7E3BD2A32B35CE4834A48F5D82D81CBFE2CEF (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mCFFF13C64441B2D042C6CC8F3399C999B928B7F0_gshared)(___result0, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_getTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityWindowsMR_session_getTrackingState_mC0EFE8A6102DD5DF5E2D5B1D9128653EE8C0DABF (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_getNotTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityWindowsMR_session_getNotTrackingReason_m7759EF196D0808003BE25123DB20B79E0FEBE1B6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_destroy_mC51B60FB07A5F3070CD69136332A784937CE48A4 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_pause_m830A1D704419F88B632BCFD44CC17D001783DFD0 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_resume_m86C55334A25E3B42D05046DCD2447E69DFCFB7F6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_reset_m9B279F995916B562A1E9325C5F7A0B768914FE4F (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.WindowsMR.FeatureApi::get_RequestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureApi_get_RequestedFeatures_mAFB4D96A03DC17515D654028C3ACC5A4939B0848 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.FeatureApi::SetFeatureRequested(UnityEngine.XR.ARSubsystems.Feature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureApi_SetFeatureRequested_m7C3058BF2C80DFA2A0940DB12CE669720D933B3C (uint64_t ___feature0, bool ___requested1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440 (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::.ctor(System.IntPtr,UnityEngine.XR.ARSubsystems.Feature,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationDescriptor__ctor_m4EE8BAE7AF1CE6855C9C8B1AA541928A5450E8FA (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, intptr_t ___identifier0, uint64_t ___capabilities1, int32_t ___rank2, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_feature_setFeatureRequested(uint64_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL UnityWindowsMR_feature_getRequestedFeatures();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetOriginSpatialCoordinateSystem();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetCurrentHolographicRenderFrame();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_refPoints_start();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_refPoints_stop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_refPoints_onDestroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityWindowsMR_refPoints_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_refPoints_releaseChanges(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityWindowsMR_refPoints_tryAdd(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityWindowsMR_refPoints_tryRemove(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_EmulationLibs_SetPluginFolderPaths(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetBoundingVolumeOrientedBox(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454 );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetBoundingVolumeSphere(WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4 );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_GesturesUpdate();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_GesturesStart();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_GesturesDestroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_GesturesStop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityWindowsMR_GesturesGetHoldGestureEventsPtr(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityWindowsMR_GesturesGetManipulationGestureEventsPtr(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityWindowsMR_GesturesGetNavigationGestureEventsPtr(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityWindowsMR_GesturesGetTappedGestureEventsPtr(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityWindowsMR_GesturesSetEnableManipulationGesture(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityWindowsMR_GesturesSetEnableNavigationGesture(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetCountOfSourceStates();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetAllSourceStates(intptr_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ReleaseAllSourceStates(intptr_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_session_construct();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_session_destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_session_pause();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_session_resume();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityWindowsMR_session_reset();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityWindowsMR_session_getTrackingState();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityWindowsMR_session_getNotTrackingReason();
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
// System.Void UnityEngine.XR.WindowsMR.FeatureApi::SetFeatureRequested(UnityEngine.XR.ARSubsystems.Feature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureApi_SetFeatureRequested_m7C3058BF2C80DFA2A0940DB12CE669720D933B3C (uint64_t ___feature0, bool ___requested1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_feature_setFeatureRequested", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_feature_setFeatureRequested)(___feature0, static_cast<int32_t>(___requested1));
	#else
	il2cppPInvokeFunc(___feature0, static_cast<int32_t>(___requested1));
	#endif

}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.WindowsMR.FeatureApi::get_RequestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureApi_get_RequestedFeatures_mAFB4D96A03DC17515D654028C3ACC5A4939B0848 (const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_feature_getRequestedFeatures", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_feature_getRequestedFeatures)();
	#else
	uint64_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.HololensHand::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * HololensHand_get_trackingState_mD114E501043B1FAAD8FA65EE1D6A0FC6190F4E31 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_trackingState_m9E145AEC39B7197FA7D42CDEC8F7F3A26AAF5A51 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_43(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.HololensHand::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * HololensHand_get_isTracked_mC2DA846E48EADC63DA17169E8C48882B2C16BCDC (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_isTracked_mB8F8ACCBA6313BB406FC1BA89BCF815835895F41 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.HololensHand::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * HololensHand_get_devicePosition_m4B0A1D0E86B925DFE0697F8EC975591FEC2C767B (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_devicePosition_mA8B23495D517C25573842AE84EA35F1E1C2ADD29 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.HololensHand::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * HololensHand_get_deviceRotation_mB83C53076F3D01AA3E3BADF5076647850D0DB40C (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_deviceRotation_m4C4864381A83797DA0F80B40E39636ADE99988C8 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.HololensHand::get_deviceVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * HololensHand_get_deviceVelocity_mFC95A6447ED648D9E3146DB1F76A217109008A07 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceVelocityU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_deviceVelocity_mC3D795321AD7C28FDC1CC326626B823E9ACF6FC2 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_47(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.HololensHand::get_airTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * HololensHand_get_airTap_m6E9B73B88520F9A7252105314797287625210723 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl airTap { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CairTapU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_airTap(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_airTap_mD76A1F21FB88A0E798D08ABF8F792338414E9A45 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl airTap { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CairTapU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.HololensHand::get_sourceLossRisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * HololensHand_get_sourceLossRisk_mBFF9BB258093926C741D8FE021A034659A061E8B (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl sourceLossRisk { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CsourceLossRiskU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_sourceLossRisk(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_sourceLossRisk_m7F9E12F8CC963EE97D563296D0FDCB013FE38D38 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl sourceLossRisk { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CsourceLossRiskU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.HololensHand::get_sourceLossMitigationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * HololensHand_get_sourceLossMitigationDirection_mE48EFCEAA1302481AD23033DB88C0F58BE15D0F5 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control sourceLossMitigationDirection { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CsourceLossMitigationDirectionU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_sourceLossMitigationDirection(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_sourceLossMitigationDirection_m78B4BE4F335BD40EC9049D67F04CE14D9D821D74 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control sourceLossMitigationDirection { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CsourceLossMitigationDirectionU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.HololensHand::get_positionAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * HololensHand_get_positionAccuracy_m5ED8452618BC1618CF13B409B45A7BA47C642768 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CpositionAccuracyU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::set_positionAccuracy(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_set_positionAccuracy_m39DCC8F5A8EE64A8DBA93CC4504204FCB7C1E02A (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CpositionAccuracyU3Ek__BackingField_51(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand_FinishSetup_m8972EC9CBA3497720BC52314983E23B0D8AB69C7 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6BCDE6F2C3205604A72A2EA201E54D3A58F62C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D9BC2C776D045C8AE166A942A9E637A7CADE7E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral827E09C11A4BC48DE84AF1E4A6E0A987CD39CC68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13567104D38779E2ED560579293AAB6F638685C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_m2D73A4DE4C5AF7CB4AB8C4EEEA2BAA6189E2A8B6(__this, /*hidden argument*/NULL);
		// airTap = GetChildControl<ButtonControl>("airTap");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralF13567104D38779E2ED560579293AAB6F638685C, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		HololensHand_set_airTap_mD76A1F21FB88A0E798D08ABF8F792338414E9A45_inline(__this, L_0, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_1;
		L_1 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		HololensHand_set_trackingState_m9E145AEC39B7197FA7D42CDEC8F7F3A26AAF5A51_inline(__this, L_1, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		HololensHand_set_isTracked_mB8F8ACCBA6313BB406FC1BA89BCF815835895F41_inline(__this, L_2, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_3;
		L_3 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		HololensHand_set_devicePosition_mA8B23495D517C25573842AE84EA35F1E1C2ADD29_inline(__this, L_3, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_4;
		L_4 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		HololensHand_set_deviceRotation_m4C4864381A83797DA0F80B40E39636ADE99988C8_inline(__this, L_4, /*hidden argument*/NULL);
		// deviceVelocity = GetChildControl<Vector3Control>("deviceVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_5;
		L_5 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		HololensHand_set_deviceVelocity_mC3D795321AD7C28FDC1CC326626B823E9ACF6FC2_inline(__this, L_5, /*hidden argument*/NULL);
		// sourceLossRisk = GetChildControl<AxisControl>("sourceLossRisk");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_6;
		L_6 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral827E09C11A4BC48DE84AF1E4A6E0A987CD39CC68, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		HololensHand_set_sourceLossRisk_m7F9E12F8CC963EE97D563296D0FDCB013FE38D38_inline(__this, L_6, /*hidden argument*/NULL);
		// sourceLossMitigationDirection = GetChildControl<Vector3Control>("sourceLossMitigationDirection");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_7;
		L_7 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral1D9BC2C776D045C8AE166A942A9E637A7CADE7E5, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		HololensHand_set_sourceLossMitigationDirection_m78B4BE4F335BD40EC9049D67F04CE14D9D821D74_inline(__this, L_7, /*hidden argument*/NULL);
		// positionAccuracy = GetChildControl<IntegerControl>("positionAccuracy");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_8;
		L_8 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteral1C6BCDE6F2C3205604A72A2EA201E54D3A58F62C, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		HololensHand_set_positionAccuracy_m39DCC8F5A8EE64A8DBA93CC4504204FCB7C1E02A_inline(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.HololensHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensHand__ctor_m34D09C7823D96317C371127A37E9F8944CD1C3A9 (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, const RuntimeMethod* method)
{
	{
		XRController__ctor_m66809170B52E4A3E20BEDC54CA8D46CDD182057B(__this, /*hidden argument*/NULL);
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
// System.IntPtr UnityEngine.XR.WindowsMR.Native::GetOriginSpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_GetOriginSpatialCoordinateSystem_m85DB25E883ACB50378D3B964626B8D2C03E0C264 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "GetOriginSpatialCoordinateSystem", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetOriginSpatialCoordinateSystem)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr UnityEngine.XR.WindowsMR.Native::GetCurrentHolographicRenderFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_GetCurrentHolographicRenderFrame_m6CBBB8AB5777A7B64B1535BD42EDF48D3F7455E3 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "GetCurrentHolographicRenderFrame", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetCurrentHolographicRenderFrame)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_start_m49E1973B8B410C727C6D72BFFCA127FF09F853F6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_refPoints_start", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_refPoints_start)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_stop_m686111933810C4445A604CF2A4B4EA0051967DF1 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_refPoints_stop", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_refPoints_stop)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_onDestroy_m5FF02C57FB9EE6BC4DD59796200E1203CE5DF959 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_refPoints_onDestroy", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_refPoints_onDestroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void* UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityWindowsMR_refPoints_acquireChanges_mA59F376A8C950361DB9E004D3FA25C86ED10B332 (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void**) + sizeof(int32_t*) + sizeof(void**) + sizeof(int32_t*) + sizeof(void**) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_refPoints_acquireChanges", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_refPoints_acquireChanges)(____addedPtr0_marshaled, ___addedCount1, ____updatedPtr2_marshaled, ___updatedCount3, ____removedPtr4_marshaled, ___removedCount5, ___elementSize6);
	#else
	void* returnValue = il2cppPInvokeFunc(____addedPtr0_marshaled, ___addedCount1, ____updatedPtr2_marshaled, ___updatedCount3, ____removedPtr4_marshaled, ___removedCount5, ___elementSize6);
	#endif

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_refPoints_releaseChanges_m7EAC6A95338EBDBD12E9A039AEA6DE4CDD32DDCE (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_refPoints_releaseChanges", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_refPoints_releaseChanges)(___changes0);
	#else
	il2cppPInvokeFunc(___changes0);
	#endif

}
// System.Boolean UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_tryAdd(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_refPoints_tryAdd_mF657AA1FE93EDF94D027E27C56460EDE34BB72B7 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A ) + sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_refPoints_tryAdd", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_refPoints_tryAdd)(___pose0, ___anchor1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pose0, ___anchor1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.WindowsMR.NativeApi::UnityWindowsMR_refPoints_tryRemove(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_refPoints_tryRemove_m8F3903E29CFA9A450B5CA2649DD1F352C571C749 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___anchorId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_refPoints_tryRemove", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_refPoints_tryRemove)(___anchorId0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___anchorId0);
	#endif

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_userPresence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRHMD_get_userPresence_m040FBD9F6EED34DB466A852DD168B3D529CC2FCF (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CuserPresenceU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_userPresence_m6A58AA1EDABDF0984DC9422D04949E43F36E7530 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * WMRHMD_get_trackingState_mA7EF8976EB5F834920357236C22D9F56F6863362 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_trackingState_m7570BA3B82AD38031A7D37E31D0AE7414B1A371A (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRHMD_get_isTracked_m3C58DDBBA7689EC8B812FAB562418D1179819291 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_isTracked_m25680C361DD83BD311C1F47B472713BC5B005003 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRHMD_get_devicePosition_m5405AF719A36D8E45ED6A44877DED533E6F08822 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_devicePosition_mC6549F4009B66D12391049CC0F699E0B119B2CE0 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * WMRHMD_get_deviceRotation_m213F0BCB14007DA2E60BCC98ABD49A7629241499 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_deviceRotation_m3C4A6F18E2E21511732881C35010DB9DC14B3164 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::get_leftEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRHMD_get_leftEyePosition_m1BAAEA3F081DB350F84808918145EF88E13C73B7 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CleftEyePositionU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_leftEyePosition_mBB585B9FB933923AD50154774562E592C4D7E332 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_leftEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * WMRHMD_get_leftEyeRotation_m21F50B5786524BBEAF742DB6B2858BF30BA17C1E (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CleftEyeRotationU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_leftEyeRotation_m5C06DB9C4AF90D4D9948DE5CD0C15320AA974D3D (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::get_rightEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRHMD_get_rightEyePosition_m2F4DD8EFD99F557E9B974CDF0B9FCF1D008FEF6A (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CrightEyePositionU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_rightEyePosition_m09989F30957D48D3F6F78143ECE14475B65EA5EB (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_rightEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * WMRHMD_get_rightEyeRotation_m382C3722BBF4816B35D61D95604CB971D567264F (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CrightEyeRotationU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_rightEyeRotation_mBF7EEB6CC37E166833A98816371D34956B61E9BC (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRHMD::get_centerEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRHMD_get_centerEyePosition_m44DCDB0DE72767BAB60AF45AB769072E43E0C0FB (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CcenterEyePositionU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_centerEyePosition_mE824E4C413E30493A4E53CAAC941D2A18B2C5B91 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_centerEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * WMRHMD_get_centerEyeRotation_m916B1D73E59CB4923C3A1DA8FC0DCA0E7E2CF2DC (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CcenterEyeRotationU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_centerEyeRotation_mE1FCA23DEED0B0DC0AFACE4464FD358D8AA8BDFD (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRHMD::get_positionAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * WMRHMD_get_positionAccuracy_mEB13EE962883662ED31E4F2FD0A41D1DF50D1D2E (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CpositionAccuracyU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::set_positionAccuracy(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_set_positionAccuracy_m963683B089DF49286E2A66F3060579F2F2739090 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CpositionAccuracyU3Ek__BackingField_60(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD_FinishSetup_m17F7620B18EA41DA7F8529D66C7B3879968A0A1C (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6BCDE6F2C3205604A72A2EA201E54D3A58F62C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral791956718283C9837F3ED95D7886E3C88855114B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRHMD_FinishSetup_mFA083256B40891104F2B70E2802F0FD4B27AE99C(__this, /*hidden argument*/NULL);
		// userPresence = GetChildControl<ButtonControl>("userPresence");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRHMD_set_userPresence_m6A58AA1EDABDF0984DC9422D04949E43F36E7530_inline(__this, L_0, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_1;
		L_1 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		WMRHMD_set_trackingState_m7570BA3B82AD38031A7D37E31D0AE7414B1A371A_inline(__this, L_1, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRHMD_set_isTracked_m25680C361DD83BD311C1F47B472713BC5B005003_inline(__this, L_2, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_3;
		L_3 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRHMD_set_devicePosition_mC6549F4009B66D12391049CC0F699E0B119B2CE0_inline(__this, L_3, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_4;
		L_4 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		WMRHMD_set_deviceRotation_m3C4A6F18E2E21511732881C35010DB9DC14B3164_inline(__this, L_4, /*hidden argument*/NULL);
		// leftEyePosition = GetChildControl<Vector3Control>("leftEyePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_5;
		L_5 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRHMD_set_leftEyePosition_mBB585B9FB933923AD50154774562E592C4D7E332_inline(__this, L_5, /*hidden argument*/NULL);
		// leftEyeRotation = GetChildControl<QuaternionControl>("leftEyeRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_6;
		L_6 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		WMRHMD_set_leftEyeRotation_m5C06DB9C4AF90D4D9948DE5CD0C15320AA974D3D_inline(__this, L_6, /*hidden argument*/NULL);
		// rightEyePosition = GetChildControl<Vector3Control>("rightEyePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_7;
		L_7 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRHMD_set_rightEyePosition_m09989F30957D48D3F6F78143ECE14475B65EA5EB_inline(__this, L_7, /*hidden argument*/NULL);
		// rightEyeRotation = GetChildControl<QuaternionControl>("rightEyeRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_8;
		L_8 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		WMRHMD_set_rightEyeRotation_mBF7EEB6CC37E166833A98816371D34956B61E9BC_inline(__this, L_8, /*hidden argument*/NULL);
		// centerEyePosition = GetChildControl<Vector3Control>("centerEyePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_9;
		L_9 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral791956718283C9837F3ED95D7886E3C88855114B, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRHMD_set_centerEyePosition_mE824E4C413E30493A4E53CAAC941D2A18B2C5B91_inline(__this, L_9, /*hidden argument*/NULL);
		// centerEyeRotation = GetChildControl<QuaternionControl>("centerEyeRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_10;
		L_10 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		WMRHMD_set_centerEyeRotation_mE1FCA23DEED0B0DC0AFACE4464FD358D8AA8BDFD_inline(__this, L_10, /*hidden argument*/NULL);
		// positionAccuracy = GetChildControl<IntegerControl>("positionAccuracy");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_11;
		L_11 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteral1C6BCDE6F2C3205604A72A2EA201E54D3A58F62C, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		WMRHMD_set_positionAccuracy_m963683B089DF49286E2A66F3060579F2F2739090_inline(__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRHMD__ctor_m80AF3356D8275092C4F5651A0274AEE55DD75570 (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, const RuntimeMethod* method)
{
	{
		XRHMD__ctor_m5219C151479C24B8AC88CF76AF908C25227E240D(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_joystick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * WMRSpatialController_get_joystick_m32F2DA80237EC404084BC6DD425547649EA4B22E (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control joystick { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = __this->get_U3CjoystickU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_joystick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_joystick_m43CDB2579A1844942E1EE7B698EF0E9FDC5836DB (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control joystick { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CjoystickU3Ek__BackingField_43(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * WMRSpatialController_get_touchpad_m163F940A1019FEFDF6C3FE099D40FAEEF4771A87 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpad_m46CFBA6A76419A66F50047515F8DC139E5B2FE2F (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_grip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * WMRSpatialController_get_grip_mE5AEBECC141D50AE19BE1B9D02E343F9A455ACF9 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CgripU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_grip_m32D70F2CE6DEB907295027EEBE60CF769C2473F0 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_gripPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRSpatialController_get_gripPressed_m94B1DDA38458F9C758BD4952957A028E2668A233 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CgripPressedU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_gripPressed_m8028F9E39EC53EB6706C966275F5539C149CB4AC (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRSpatialController_get_menu_mF1C722F932F50F0979A332DEC16A8D8363471111 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl menu { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CmenuU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_menu(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_menu_mB51CC6DD51E7A60A9EDA2FEB172FD37899452CED (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl menu { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CmenuU3Ek__BackingField_47(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * WMRSpatialController_get_trigger_m0845D6D1B211D7D38A2400168072FE2FCB39DD5A (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CtriggerU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_trigger_mFE74869FBC515D3DDB21329EB3696F0257423192 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRSpatialController_get_triggerPressed_mBFE64FA0EE2AECD3C65432384D90B142605F3344 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_triggerPressed_mFFE76D8BB9983376A10346E3636FBEBB71B1893F (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_joystickClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRSpatialController_get_joystickClicked_m1B96D1D450F141A8D4643D948BE3F78ABB1B19BD (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl joystickClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CjoystickClickedU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_joystickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_joystickClicked_m1F99F94E33610E33A8B032AE333AA66413D6AF76 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl joystickClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CjoystickClickedU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_touchpadClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRSpatialController_get_touchpadClicked_m0EA25094F8B97653811A623A15999176A39C6B11 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CtouchpadClickedU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpadClicked_m9F8CAE8D9523C1D4F93F571903F5644A6B2FCA17 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_touchpadTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRSpatialController_get_touchpadTouched_m47ED61EE9E143063B7EACD7BC59D41898BC9C22F (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CtouchpadTouchedU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpadTouched_m36780109F3A9CB8DEC797CAF13D919866A45F828 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * WMRSpatialController_get_trackingState_mEEA7156969F61823C5385BD80327EDE9E902F7A6 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_trackingState_m73DC0784EEDC0D2A1A4CFA4BD786F6750DE551DB (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * WMRSpatialController_get_isTracked_mAEDCF7365D72894CFD2BB26E897A105A89A3B762 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_isTracked_m485238D8DF970F398D87EB7E94576F82F8FE86BB (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRSpatialController_get_devicePosition_mC820D6FCEF06694A71B6224B1E08F2BA4440B000 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_devicePosition_m385501795277CDB1EBF9F8B1BF6377DEBB6961C4 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * WMRSpatialController_get_deviceRotation_mA2ABC6F0456B171C838748D0D55ADCDBC04C434B (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceRotation_m2D6D9506FBC8F917081B2986027894636AC39202 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_deviceVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRSpatialController_get_deviceVelocity_m11D9E47AC28A3355665DD85442F7ED623A0D698D (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceVelocityU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceVelocity_m71359CEAAFEF272B92613FABAA2DBB8168EB3DF4 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRSpatialController_get_deviceAngularVelocity_m3B054E747F1D8C437DCDADF4AC654FB122C85D5C (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceAngularVelocity_m4C2CDFFEA021435F74C584C446509F1CC0A5FB3D (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_batteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * WMRSpatialController_get_batteryLevel_mE666AFCF77AC9E7D9644AB198C6942665F91982B (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl batteryLevel { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CbatteryLevelU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_batteryLevel(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_batteryLevel_m4C17A2DC480E60AD26FAA40917AC657DE524515C (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl batteryLevel { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CbatteryLevelU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_sourceLossRisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * WMRSpatialController_get_sourceLossRisk_m7CAE60BC3BB6866DF546E77A5B033B7F6D36EDFF (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl sourceLossRisk { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = __this->get_U3CsourceLossRiskU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_sourceLossRisk(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_sourceLossRisk_m8DE499FDF98EE56888A9E42D7FEF69412ACA274E (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl sourceLossRisk { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CsourceLossRiskU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_sourceLossMitigationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRSpatialController_get_sourceLossMitigationDirection_mDA33002D8A0B4CE28FB924080D9DB873F6A2CD9D (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control sourceLossMitigationDirection { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CsourceLossMitigationDirectionU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_sourceLossMitigationDirection(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_sourceLossMitigationDirection_m62041F0243D5ED74DB2C1F975FC9A8ADA0774981 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control sourceLossMitigationDirection { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CsourceLossMitigationDirectionU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_pointerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * WMRSpatialController_get_pointerPosition_m80BEA68C99AFDD609B9355F7799C3E8C85427448 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = __this->get_U3CpointerPositionU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_pointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_pointerPosition_m162EF7814C4C69C62DF310FC88337D41E2292C02 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CpointerPositionU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_pointerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * WMRSpatialController_get_pointerRotation_m2426E211A98A3DD3FF4ED1B3A2F0B85164EDFB1B (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = __this->get_U3CpointerRotationU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_pointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_pointerRotation_m544C1999B5AD6A3D0D30979AD5F56793AD0C8A68 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CpointerRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.WindowsMR.Input.WMRSpatialController::get_positionAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * WMRSpatialController_get_positionAccuracy_m819C40E6C5D6C78148B4096544E89F7900C21E87 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = __this->get_U3CpositionAccuracyU3Ek__BackingField_64();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::set_positionAccuracy(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_set_positionAccuracy_mBD0085A4F701FEBCC93CF05DDBC66C905458D58E (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CpositionAccuracyU3Ek__BackingField_64(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController_FinishSetup_mF521FA5201A0D54A0C5E5A4957B0C71AC4C38B78 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6BCDE6F2C3205604A72A2EA201E54D3A58F62C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D9BC2C776D045C8AE166A942A9E637A7CADE7E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462E007647F39394D37B1FAFEC8DABC4954BC8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral827E09C11A4BC48DE84AF1E4A6E0A987CD39CC68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64BD2E3B35D211DDDF5000ED8CE421EA8EDD07A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_m2D73A4DE4C5AF7CB4AB8C4EEEA2BAA6189E2A8B6(__this, /*hidden argument*/NULL);
		// joystick = GetChildControl<Vector2Control>("joystick");
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0;
		L_0 = InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062(__this, _stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		WMRSpatialController_set_joystick_m43CDB2579A1844942E1EE7B698EF0E9FDC5836DB_inline(__this, L_0, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_1;
		L_1 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		WMRSpatialController_set_trigger_mFE74869FBC515D3DDB21329EB3696F0257423192_inline(__this, L_1, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_2;
		L_2 = InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429_m5813DF3857555CBE9910B641C447D748F0952062_RuntimeMethod_var);
		WMRSpatialController_set_touchpad_m46CFBA6A76419A66F50047515F8DC139E5B2FE2F_inline(__this, L_2, /*hidden argument*/NULL);
		// grip = GetChildControl<AxisControl>("grip");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_3;
		L_3 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		WMRSpatialController_set_grip_m32D70F2CE6DEB907295027EEBE60CF769C2473F0_inline(__this, L_3, /*hidden argument*/NULL);
		// gripPressed = GetChildControl<ButtonControl>("gripPressed");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRSpatialController_set_gripPressed_m8028F9E39EC53EB6706C966275F5539C149CB4AC_inline(__this, L_4, /*hidden argument*/NULL);
		// menu = GetChildControl<ButtonControl>("menu");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRSpatialController_set_menu_mB51CC6DD51E7A60A9EDA2FEB172FD37899452CED_inline(__this, L_5, /*hidden argument*/NULL);
		// joystickClicked = GetChildControl<ButtonControl>("joystickClicked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_6;
		L_6 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral462E007647F39394D37B1FAFEC8DABC4954BC8C9, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRSpatialController_set_joystickClicked_m1F99F94E33610E33A8B032AE333AA66413D6AF76_inline(__this, L_6, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRSpatialController_set_triggerPressed_mFFE76D8BB9983376A10346E3636FBEBB71B1893F_inline(__this, L_7, /*hidden argument*/NULL);
		// touchpadClicked = GetChildControl<ButtonControl>("touchpadClicked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_8;
		L_8 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRSpatialController_set_touchpadClicked_m9F8CAE8D9523C1D4F93F571903F5644A6B2FCA17_inline(__this, L_8, /*hidden argument*/NULL);
		// touchpadTouched = GetChildControl<ButtonControl>("touchPadTouched");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_9;
		L_9 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteralF64BD2E3B35D211DDDF5000ED8CE421EA8EDD07A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRSpatialController_set_touchpadTouched_m36780109F3A9CB8DEC797CAF13D919866A45F828_inline(__this, L_9, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_10;
		L_10 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		WMRSpatialController_set_trackingState_m73DC0784EEDC0D2A1A4CFA4BD786F6750DE551DB_inline(__this, L_10, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_11;
		L_11 = InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2_m27DE2FB3FA95057BB435FEE6A5496B459E2AE3CF_RuntimeMethod_var);
		WMRSpatialController_set_isTracked_m485238D8DF970F398D87EB7E94576F82F8FE86BB_inline(__this, L_11, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_12;
		L_12 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRSpatialController_set_devicePosition_m385501795277CDB1EBF9F8B1BF6377DEBB6961C4_inline(__this, L_12, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_13;
		L_13 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		WMRSpatialController_set_deviceRotation_m2D6D9506FBC8F917081B2986027894636AC39202_inline(__this, L_13, /*hidden argument*/NULL);
		// deviceVelocity = GetChildControl<Vector3Control>("deviceVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_14;
		L_14 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRSpatialController_set_deviceVelocity_m71359CEAAFEF272B92613FABAA2DBB8168EB3DF4_inline(__this, L_14, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_15;
		L_15 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRSpatialController_set_deviceAngularVelocity_m4C2CDFFEA021435F74C584C446509F1CC0A5FB3D_inline(__this, L_15, /*hidden argument*/NULL);
		// batteryLevel = GetChildControl<AxisControl>("batteryLevel");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_16;
		L_16 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		WMRSpatialController_set_batteryLevel_m4C17A2DC480E60AD26FAA40917AC657DE524515C_inline(__this, L_16, /*hidden argument*/NULL);
		// sourceLossRisk = GetChildControl<AxisControl>("sourceLossRisk");
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_17;
		L_17 = InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041(__this, _stringLiteral827E09C11A4BC48DE84AF1E4A6E0A987CD39CC68, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E_m8403C78C5C70760C92C48AAECA02C2882E4CC041_RuntimeMethod_var);
		WMRSpatialController_set_sourceLossRisk_m8DE499FDF98EE56888A9E42D7FEF69412ACA274E_inline(__this, L_17, /*hidden argument*/NULL);
		// sourceLossMitigationDirection = GetChildControl<Vector3Control>("sourceLossMitigationDirection");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_18;
		L_18 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteral1D9BC2C776D045C8AE166A942A9E637A7CADE7E5, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRSpatialController_set_sourceLossMitigationDirection_m62041F0243D5ED74DB2C1F975FC9A8ADA0774981_inline(__this, L_18, /*hidden argument*/NULL);
		// pointerPosition = GetChildControl<Vector3Control>("pointerPosition");
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_19;
		L_19 = InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E(__this, _stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E_m5329087147B479B4D200097BDA7B74A5AA95A63E_RuntimeMethod_var);
		WMRSpatialController_set_pointerPosition_m162EF7814C4C69C62DF310FC88337D41E2292C02_inline(__this, L_19, /*hidden argument*/NULL);
		// pointerRotation = GetChildControl<QuaternionControl>("pointerRotation");
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_20;
		L_20 = InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5(__this, _stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525_mF8250E687C30FBDE8ED2BB27D1431961AE1428E5_RuntimeMethod_var);
		WMRSpatialController_set_pointerRotation_m544C1999B5AD6A3D0D30979AD5F56793AD0C8A68_inline(__this, L_20, /*hidden argument*/NULL);
		// positionAccuracy = GetChildControl<IntegerControl>("positionAccuracy");
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_21;
		L_21 = InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6(__this, _stringLiteral1C6BCDE6F2C3205604A72A2EA201E54D3A58F62C, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF_m1C9499B6CB148D1E712D090A41E96A664F41B2C6_RuntimeMethod_var);
		WMRSpatialController_set_positionAccuracy_mBD0085A4F701FEBCC93CF05DDBC66C905458D58E_inline(__this, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.Input.WMRSpatialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WMRSpatialController__ctor_m44214281530DB29E911EE81B4EEAB775E9737AC7 (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, const RuntimeMethod* method)
{
	{
		XRControllerWithRumble__ctor_m0FBE065D60AEF3D7E19F29A6F392EB5819D13EBB(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRAnchorSubsystem_RegisterDescriptor_m622B0FDAB749A2E7E5B7D2C64F6CEC7286239762 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRAnchorSubsystem_tE962138F79B0AF72A7C5C94DB1EED4FE90931505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB8A52452E37B8D0251ECC49D113331FFA380822);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             XRAnchorSubsystemDescriptor.Create(new XRAnchorSubsystemDescriptor.Cinfo
		//             {
		//                 id = "Windows Mixed Reality Anchor",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(WindowsMRProvider),
		//                 subsystemTypeOverride = typeof(WindowsMRAnchorSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(WindowsMRAnchorSubsystem),
		// #endif
		//                 supportsTrackableAttachments = false
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 ));
		Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), _stringLiteralDB8A52452E37B8D0251ECC49D113331FFA380822, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (WindowsMRAnchorSubsystem_tE962138F79B0AF72A7C5C94DB1EED4FE90931505_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_4 = V_0;
		XRAnchorSubsystemDescriptor_Create_mD547D79334975B1BA72225A073D2576E207A092D(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRAnchorSubsystem__ctor_m57630B41DD7A72E0B5989DD4C0C4B2A090C0C914 (WindowsMRAnchorSubsystem_tE962138F79B0AF72A7C5C94DB1EED4FE90931505 * __this, const RuntimeMethod* method)
{
	{
		XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A(__this, /*hidden argument*/NULL);
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
// System.IntPtr UnityEngine.XR.WindowsMR.WindowsMREnvironment::get_OriginSpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsMREnvironment_get_OriginSpatialCoordinateSystem_m859414B32A2C3F6CDE96CDF19F33B9C647B37CE2 (const RuntimeMethod* method)
{
	{
		// return Native.GetOriginSpatialCoordinateSystem();
		intptr_t L_0;
		L_0 = Native_GetOriginSpatialCoordinateSystem_m85DB25E883ACB50378D3B964626B8D2C03E0C264(/*hidden argument*/NULL);
		return (intptr_t)L_0;
	}
}
// System.IntPtr UnityEngine.XR.WindowsMR.WindowsMREnvironment::get_CurrentHolographicRenderFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsMREnvironment_get_CurrentHolographicRenderFrame_m4322FF86B8E8291478FD9BA7B689D9E6CA2745AB (const RuntimeMethod* method)
{
	{
		// return Native.GetCurrentHolographicRenderFrame();
		intptr_t L_0;
		L_0 = Native_GetCurrentHolographicRenderFrame_m6CBBB8AB5777A7B64B1535BD42EDF48D3F7455E3(/*hidden argument*/NULL);
		return (intptr_t)L_0;
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
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions::SetBoundingVolumeOrientedBox(UnityEngine.XR.XRMeshSubsystem,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRExtensions_SetBoundingVolumeOrientedBox_m0B5F6D03569446F7AAB92F2D436D7316CBA2220A (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshing0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___extents2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation3, const RuntimeMethod* method)
{
	WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// obb.cx = center.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___center1;
		float L_1 = L_0.get_x_2();
		(&V_0)->set_cx_0(L_1);
		// obb.cy = center.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___center1;
		float L_3 = L_2.get_y_3();
		(&V_0)->set_cy_1(L_3);
		// obb.cz = center.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___center1;
		float L_5 = L_4.get_z_4();
		(&V_0)->set_cz_2(L_5);
		// obb.ex = extents.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___extents2;
		float L_7 = L_6.get_x_2();
		(&V_0)->set_ex_3(L_7);
		// obb.ey = extents.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___extents2;
		float L_9 = L_8.get_y_3();
		(&V_0)->set_ey_4(L_9);
		// obb.ez = extents.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___extents2;
		float L_11 = L_10.get_z_4();
		(&V_0)->set_ez_5(L_11);
		// obb.ox = orientation.x;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = ___orientation3;
		float L_13 = L_12.get_x_0();
		(&V_0)->set_ox_6(L_13);
		// obb.oy = orientation.y;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = ___orientation3;
		float L_15 = L_14.get_y_1();
		(&V_0)->set_oy_7(L_15);
		// obb.oz = orientation.z;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = ___orientation3;
		float L_17 = L_16.get_z_2();
		(&V_0)->set_oz_8(L_17);
		// obb.ow = orientation.w;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = ___orientation3;
		float L_19 = L_18.get_w_3();
		(&V_0)->set_ow_9(L_19);
		// NativeApi.SetBoundingVolumeOrientedBox(obb);
		WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454  L_20 = V_0;
		NativeApi_SetBoundingVolumeOrientedBox_m2821434E67A1D0BA2C2F16B3E7BFF866BB4A557F(L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions::SetBoundingVolumeSphere(UnityEngine.XR.XRMeshSubsystem,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRExtensions_SetBoundingVolumeSphere_m2CBD159AF165170D5C5E2F3D84EFA2EAC8DA3821 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshing0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center1, float ___radius2, const RuntimeMethod* method)
{
	WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// sbb.cx = center.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___center1;
		float L_1 = L_0.get_x_2();
		(&V_0)->set_cx_0(L_1);
		// sbb.cy = center.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___center1;
		float L_3 = L_2.get_y_3();
		(&V_0)->set_cy_1(L_3);
		// sbb.cz = center.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___center1;
		float L_5 = L_4.get_z_4();
		(&V_0)->set_cz_2(L_5);
		// sbb.r = radius;
		float L_6 = ___radius2;
		(&V_0)->set_r_3(L_6);
		// NativeApi.SetBoundingVolumeSphere(sbb);
		WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4  L_7 = V_0;
		NativeApi_SetBoundingVolumeSphere_m31F3940FA5DAF794120200A6B08969D0C40D9270(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRExtensions__cctor_mCDC06D4601A7388DC23EAB40D995929F652CE361 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRExtensions_t03F9C7C197F339DE39B5DCB2D3C60968A0A39EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static WMRPlane[] wmrp = new WMRPlane[6];
		WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F* L_0 = (WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F*)(WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F*)SZArrayNew(WMRPlaneU5BU5D_tC28080B40113E442BC0C9D74D326973B2C2E136F_il2cpp_TypeInfo_var, (uint32_t)6);
		((WindowsMRExtensions_t03F9C7C197F339DE39B5DCB2D3C60968A0A39EC1_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRExtensions_t03F9C7C197F339DE39B5DCB2D3C60968A0A39EC1_il2cpp_TypeInfo_var))->set_wmrp_0(L_0);
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
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_holdGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  WindowsMRGestureSubsystem_get_holdGestureEvents_m835C1731B08A0D7E64B701795E08668402007DDC (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRHoldGestureEvent> holdGestureEvents { get { return m_WindowsMRProvider.holdGestureEvents; } }
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_0 = __this->get_m_WindowsMRProvider_4();
		NullCheck(L_0);
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_1;
		L_1 = WindowsMRGestureProvider_get_holdGestureEvents_mC4F61F0F923190C315A7C1FF4EC47FC9E848CE75_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_manipulationGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  WindowsMRGestureSubsystem_get_manipulationGestureEvents_mDE2A52E9C69598DEE55022F803BA7ABC59C22B49 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRManipulationGestureEvent> manipulationGestureEvents { get { return m_WindowsMRProvider.manipulationGestureEvents; } }
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_0 = __this->get_m_WindowsMRProvider_4();
		NullCheck(L_0);
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_1;
		L_1 = WindowsMRGestureProvider_get_manipulationGestureEvents_mF3C0B8F022717BA75E60B4D25D5AFE3BBD7499D1_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_navigationGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  WindowsMRGestureSubsystem_get_navigationGestureEvents_mDF579B8A385FF11EEC092D843B66ABA238975894 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRNavigationGestureEvent> navigationGestureEvents { get { return m_WindowsMRProvider.navigationGestureEvents; } }
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_0 = __this->get_m_WindowsMRProvider_4();
		NullCheck(L_0);
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_1;
		L_1 = WindowsMRGestureProvider_get_navigationGestureEvents_m4396B2839123D403BC77F706BD35C75CF2C48739_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::get_tappedGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  WindowsMRGestureSubsystem_get_tappedGestureEvents_mFE3FCB3D4D018C45864ABABE64CE78D976E7554E (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRTappedGestureEvent> tappedGestureEvents { get { return m_WindowsMRProvider.tappedGestureEvents; } }
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_0 = __this->get_m_WindowsMRProvider_4();
		NullCheck(L_0);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_1;
		L_1 = WindowsMRGestureProvider_get_tappedGestureEvents_m536D1C5781E7879B343D029B81F8F024153D3704_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 * WindowsMRGestureSubsystem_CreateProvider_mCE1AAC022D7EDF4101B43AB479CA8665967E7E02 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_WindowsMRProvider = new WindowsMRGestureProvider(this);
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_0 = (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB *)il2cpp_codegen_object_new(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB_il2cpp_TypeInfo_var);
		WindowsMRGestureProvider__ctor_mA04198031707F3B34AF35CA504A75CAC7689CE35(L_0, __this, /*hidden argument*/NULL);
		__this->set_m_WindowsMRProvider_4(L_0);
		// return m_WindowsMRProvider;
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_1 = __this->get_m_WindowsMRProvider_4();
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::SetEnableManipulationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureSubsystem_SetEnableManipulationGesture_m2B953B6D34239BE33C9DAE745368CFB3804E8ACE (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		// return m_WindowsMRProvider.SetEnableManipulationGesture(enable);
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_0 = __this->get_m_WindowsMRProvider_4();
		bool L_1 = ___enable0;
		NullCheck(L_0);
		bool L_2;
		L_2 = WindowsMRGestureProvider_SetEnableManipulationGesture_m648642E50116C3D6C0196DD6DC930EEC5FC64BC4(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::SetEnableNavigationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureSubsystem_SetEnableNavigationGesture_m98AF0437167F3412FD251777B4935CBDBB97A1A2 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		// return m_WindowsMRProvider.SetEnableNavigationGesture(enable);
		WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * L_0 = __this->get_m_WindowsMRProvider_4();
		bool L_1 = ___enable0;
		NullCheck(L_0);
		bool L_2;
		L_2 = WindowsMRGestureProvider_SetEnableNavigationGesture_mA9956AD7DB20A6E09BDE5A5BC465A609F2FE683C(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureSubsystem_RegisterDescriptor_m8991CA10F2BF26140C60AFAEE456F728C5B2473D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B80478B4986CA2ECE4D5671099F13088F27472);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRGestureSubsystemDescriptor.RegisterDescriptor(
		//     new XRGestureSubsystemDescriptor.Cinfo
		//     {
		//         id = "Windows Mixed Reality Gesture",
		//         subsystemImplementationType = typeof(WindowsMRGestureSubsystem)
		//     }
		// );
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 ));
		Cinfo_set_id_mE23FF76031CA3903EF8F85D49DBF7407DC6E5DFB_inline((Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 *)(&V_0), _stringLiteral65B80478B4986CA2ECE4D5671099F13088F27472, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m5965A6CDF66B1D7AF30028F3822077B1788A78B8_inline((Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227  L_2 = V_0;
		XRGestureSubsystemDescriptor_RegisterDescriptor_m6E4C08D32E73627CB924AC8B245B271E477F6E80(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::GetNextGUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRGestureSubsystem_GetNextGUID_m7F46777B6B24775A4941C17EF123522206CDB54A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_NextGUID.subId1 += 1;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = (((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var))->get_address_of_s_NextGUID_3());
		uint64_t L_1;
		L_1 = GestureId_get_subId1_m547C714F376171ADAA9449F4E35F2E6161DB9364_inline((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, /*hidden argument*/NULL);
		GestureId_set_subId1_m666DE846D8E289BBCE2CFD8DCE41E294EC1BC00C_inline((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, ((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)((int64_t)((int64_t)1)))), /*hidden argument*/NULL);
		// if (s_NextGUID.subId1 != 0) return s_NextGUID;
		uint64_t L_2;
		L_2 = GestureId_get_subId1_m547C714F376171ADAA9449F4E35F2E6161DB9364_inline((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)(((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var))->get_address_of_s_NextGUID_3()), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// if (s_NextGUID.subId1 != 0) return s_NextGUID;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_3 = ((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var))->get_s_NextGUID_3();
		return L_3;
	}

IL_0025:
	{
		// s_NextGUID.subId1 += 1;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_4 = (((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var))->get_address_of_s_NextGUID_3());
		uint64_t L_5;
		L_5 = GestureId_get_subId1_m547C714F376171ADAA9449F4E35F2E6161DB9364_inline((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_4, /*hidden argument*/NULL);
		GestureId_set_subId1_m666DE846D8E289BBCE2CFD8DCE41E294EC1BC00C_inline((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_4, ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((int64_t)1)))), /*hidden argument*/NULL);
		// return s_NextGUID;
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_6 = ((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var))->get_s_NextGUID_3();
		return L_6;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureSubsystem__ctor_m78B5BEE872561E8D35E1755385B098112528D2C3 (WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * __this, const RuntimeMethod* method)
{
	{
		XRGestureSubsystem__ctor_m971245C11BB0663140CA8A073EC87000071E1F0E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureSubsystem__cctor_mA5BFD87C01AC3AA95BBF79BC2A14AA46E2D312D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static GestureId s_NextGUID = new GestureId(1, 0);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0;
		memset((&L_0), 0, sizeof(L_0));
		GestureId__ctor_mF83271CB44FEC441DD9FF00ED3FD7EF0D49087CE((&L_0), ((int64_t)((int64_t)1)), ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var))->set_s_NextGUID_3(L_0);
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
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem UnityEngine.XR.WindowsMR.WindowsMRGestures::get_gestureSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method)
{
	{
		// public WindowsMRGestureSubsystem gestureSubsystem { get; private set; }
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_0 = __this->get_U3CgestureSubsystemU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::set_gestureSubsystem(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_set_gestureSubsystem_m2F5C44E348B4AB1E27D3EECEF2FCDE70BC23261D (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___value0, const RuntimeMethod* method)
{
	{
		// public WindowsMRGestureSubsystem gestureSubsystem { get; private set; }
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_0 = ___value0;
		__this->set_U3CgestureSubsystemU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::add_onHoldChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_add_onHoldChanged_m328A5433CB0D2E89E4DDB4A647F251700839873F (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * V_0 = NULL;
	Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * V_1 = NULL;
	Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * V_2 = NULL;
	{
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_0 = __this->get_onHoldChanged_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_2 = V_1;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0_il2cpp_TypeInfo_var));
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 ** L_5 = __this->get_address_of_onHoldChanged_5();
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_6 = V_2;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_7 = V_1;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *>((Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_9 = V_0;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *)L_9) == ((RuntimeObject*)(Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::remove_onHoldChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_remove_onHoldChanged_m47A0A57066419050A94DE0885E1D3FB32D4A5FCA (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * V_0 = NULL;
	Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * V_1 = NULL;
	Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * V_2 = NULL;
	{
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_0 = __this->get_onHoldChanged_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_2 = V_1;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0_il2cpp_TypeInfo_var));
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 ** L_5 = __this->get_address_of_onHoldChanged_5();
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_6 = V_2;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_7 = V_1;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *>((Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_9 = V_0;
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *)L_9) == ((RuntimeObject*)(Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::add_onManipulationChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_add_onManipulationChanged_m9BAC67C47F466F99CF772330FCFF8F4A998A71D3 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * V_0 = NULL;
	Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * V_1 = NULL;
	Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * V_2 = NULL;
	{
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_0 = __this->get_onManipulationChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_2 = V_1;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62_il2cpp_TypeInfo_var));
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 ** L_5 = __this->get_address_of_onManipulationChanged_6();
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_6 = V_2;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_7 = V_1;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *>((Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_9 = V_0;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *)L_9) == ((RuntimeObject*)(Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::remove_onManipulationChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_remove_onManipulationChanged_m38EB412593B1C979BBF541F4C3EAD5E29C78B0F4 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * V_0 = NULL;
	Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * V_1 = NULL;
	Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * V_2 = NULL;
	{
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_0 = __this->get_onManipulationChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_2 = V_1;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62_il2cpp_TypeInfo_var));
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 ** L_5 = __this->get_address_of_onManipulationChanged_6();
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_6 = V_2;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_7 = V_1;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *>((Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_9 = V_0;
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *)L_9) == ((RuntimeObject*)(Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::add_onNavigationChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_add_onNavigationChanged_m23678825E6CA8718C536EF895C107D1B8CFEAF98 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * V_0 = NULL;
	Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * V_1 = NULL;
	Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * V_2 = NULL;
	{
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_0 = __this->get_onNavigationChanged_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_2 = V_1;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *)CastclassSealed((RuntimeObject*)L_4, Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE_il2cpp_TypeInfo_var));
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE ** L_5 = __this->get_address_of_onNavigationChanged_7();
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_6 = V_2;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_7 = V_1;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *>((Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_9 = V_0;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *)L_9) == ((RuntimeObject*)(Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::remove_onNavigationChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_remove_onNavigationChanged_mA720579EA3F7260C18788D8400420C6FE3E441D9 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * V_0 = NULL;
	Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * V_1 = NULL;
	Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * V_2 = NULL;
	{
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_0 = __this->get_onNavigationChanged_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_2 = V_1;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *)CastclassSealed((RuntimeObject*)L_4, Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE_il2cpp_TypeInfo_var));
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE ** L_5 = __this->get_address_of_onNavigationChanged_7();
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_6 = V_2;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_7 = V_1;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *>((Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_9 = V_0;
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *)L_9) == ((RuntimeObject*)(Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::add_onTappedChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_add_onTappedChanged_mA5EFD4421826488C4579C0B27A2E09B5F355F965 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * V_0 = NULL;
	Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * V_1 = NULL;
	Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * V_2 = NULL;
	{
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_0 = __this->get_onTappedChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_1 = V_0;
		V_1 = L_1;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_2 = V_1;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *)CastclassSealed((RuntimeObject*)L_4, Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D_il2cpp_TypeInfo_var));
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D ** L_5 = __this->get_address_of_onTappedChanged_8();
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_6 = V_2;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_7 = V_1;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *>((Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_9 = V_0;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *)L_9) == ((RuntimeObject*)(Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::remove_onTappedChanged(System.Action`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_remove_onTappedChanged_mFF97BB3820F3B2CB25F3459BCD92E80A9BFAB581 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * V_0 = NULL;
	Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * V_1 = NULL;
	Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * V_2 = NULL;
	{
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_0 = __this->get_onTappedChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_1 = V_0;
		V_1 = L_1;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_2 = V_1;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *)CastclassSealed((RuntimeObject*)L_4, Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D_il2cpp_TypeInfo_var));
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D ** L_5 = __this->get_address_of_onTappedChanged_8();
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_6 = V_2;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_7 = V_1;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *>((Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_9 = V_0;
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *)L_9) == ((RuntimeObject*)(Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::add_onActivate(System.Action`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_add_onActivate_mC6028A20DADE8043E02706671EC3CA004BCD7B3D (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * V_0 = NULL;
	Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * V_1 = NULL;
	Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * V_2 = NULL;
	{
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_0 = __this->get_onActivate_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_2 = V_1;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8_il2cpp_TypeInfo_var));
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 ** L_5 = __this->get_address_of_onActivate_9();
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_6 = V_2;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_7 = V_1;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *>((Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_9 = V_0;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *)L_9) == ((RuntimeObject*)(Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::remove_onActivate(System.Action`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_remove_onActivate_m9968E16BE11A2F6F500DDA24BC28D75E18E6894B (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * V_0 = NULL;
	Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * V_1 = NULL;
	Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * V_2 = NULL;
	{
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_0 = __this->get_onActivate_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_2 = V_1;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8_il2cpp_TypeInfo_var));
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 ** L_5 = __this->get_address_of_onActivate_9();
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_6 = V_2;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_7 = V_1;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *>((Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_9 = V_0;
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *)L_9) == ((RuntimeObject*)(Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem UnityEngine.XR.WindowsMR.WindowsMRGestures::GetGestureSubsystemIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * WindowsMRGestures_GetGestureSubsystemIfNeeded_m94F38F8C2A43A68E7A0A0D48D9E270128A7B9944 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7AA9629638AB4D06B022E461CB4FC8AB1F6BFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23000C7F15B52654FDA86A66F41689CE1FFA4E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5C97AEDACA34E2B51FB8D2DB17ECB6182C2CF114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m066835015A187AF6EE8FE17D115AE95030DEE73A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m624B3B8CD66244E356A0D7D759673FFE33C0609E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02_m31920ADB8BDE6FD6418A8F36FCF8A34D27BEA66B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (gestureSubsystem == null)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_0;
		L_0 = WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0059;
		}
	}
	{
		// List<XRGestureSubsystem> gestureSubsystems = new List<XRGestureSubsystem>();
		List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * L_1 = (List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 *)il2cpp_codegen_object_new(List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9_il2cpp_TypeInfo_var);
		List_1__ctor_m624B3B8CD66244E356A0D7D759673FFE33C0609E(L_1, /*hidden argument*/List_1__ctor_m624B3B8CD66244E356A0D7D759673FFE33C0609E_RuntimeMethod_var);
		// SubsystemManager.GetInstances<XRGestureSubsystem>(gestureSubsystems);
		List_1_t86B6EB3AFC41E3E8AD70B489F16B52BDD14E19C9 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02_m31920ADB8BDE6FD6418A8F36FCF8A34D27BEA66B(L_2, /*hidden argument*/SubsystemManager_GetInstances_TisXRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02_m31920ADB8BDE6FD6418A8F36FCF8A34D27BEA66B_RuntimeMethod_var);
		// foreach (var subsystem in gestureSubsystems)
		NullCheck(L_2);
		Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A  L_3;
		L_3 = List_1_GetEnumerator_m066835015A187AF6EE8FE17D115AE95030DEE73A(L_2, /*hidden argument*/List_1_GetEnumerator_m066835015A187AF6EE8FE17D115AE95030DEE73A_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_001b:
		{
			// foreach (var subsystem in gestureSubsystems)
			XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * L_4;
			L_4 = Enumerator_get_Current_m5C97AEDACA34E2B51FB8D2DB17ECB6182C2CF114_inline((Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5C97AEDACA34E2B51FB8D2DB17ECB6182C2CF114_RuntimeMethod_var);
			V_1 = L_4;
			// if (subsystem != null && subsystem is WindowsMRGestureSubsystem)
			XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_0026:
		{
			XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * L_6 = V_1;
			if (!((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 *)IsInstSealed((RuntimeObject*)L_6, WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var)))
			{
				goto IL_003a;
			}
		}

IL_002e:
		{
			// gestureSubsystem = subsystem as WindowsMRGestureSubsystem;
			XRGestureSubsystem_t9CE9DF7141C4363F8917D3F006EBB9FAE322AF02 * L_7 = V_1;
			WindowsMRGestures_set_gestureSubsystem_m2F5C44E348B4AB1E27D3EECEF2FCDE70BC23261D_inline(__this, ((WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 *)IsInstSealed((RuntimeObject*)L_7, WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_003a:
		{
			// foreach (var subsystem in gestureSubsystems)
			bool L_8;
			L_8 = Enumerator_MoveNext_m23000C7F15B52654FDA86A66F41689CE1FFA4E53((Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m23000C7F15B52654FDA86A66F41689CE1FFA4E53_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF7AA9629638AB4D06B022E461CB4FC8AB1F6BFA0((Enumerator_t79E879576CBB89EC8D235FAC963B504A7636020A *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF7AA9629638AB4D06B022E461CB4FC8AB1F6BFA0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// OnValidate();
		WindowsMRGestures_OnValidate_m6DE1F642001DB8E048D3CAD1838A73D8C8C8DDF7(__this, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// return gestureSubsystem;
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_9;
		L_9 = WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44_inline(__this, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_Start_m016B42743DACA6F7279E2085FE435194DCE38F24 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_OnValidate_m6DE1F642001DB8E048D3CAD1838A73D8C8C8DDF7 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method)
{
	{
		// if (gestureSubsystem != null)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_0;
		L_0 = WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// gestureSubsystem.SetEnableNavigationGesture(enableNavigationGesture);
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_1;
		L_1 = WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44_inline(__this, /*hidden argument*/NULL);
		bool L_2 = __this->get_enableNavigationGesture_10();
		NullCheck(L_1);
		bool L_3;
		L_3 = WindowsMRGestureSubsystem_SetEnableNavigationGesture_m98AF0437167F3412FD251777B4935CBDBB97A1A2(L_1, L_2, /*hidden argument*/NULL);
		// gestureSubsystem.SetEnableManipulationGesture(enableManipulationGesture);
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_4;
		L_4 = WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44_inline(__this, /*hidden argument*/NULL);
		bool L_5 = __this->get_enableManipulationGesture_11();
		NullCheck(L_4);
		bool L_6;
		L_6 = WindowsMRGestureSubsystem_SetEnableManipulationGesture_m2B953B6D34239BE33C9DAE745368CFB3804E8ACE(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures_Update_mC8282BB806EC1FCD84197E222C281CECE5CC1932 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m65323523B049E0768F948A5EFFA6B0DB6D06D074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m67BBA67A3DEA53DA403B86EC67B6C68535F34CDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m9C4661BC9D71CD305F4FEB4691392F58AF1644CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mDCD8EF0323C03E1A7184B25088D8F6001FA2CC6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFD7CC159D962B9561167BAF34C7471F7F5624711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m088939BD8F7D84F884B2AE89235E8942D00F622C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8AC7EE6A198878AB6DF6B636B1542A4BF6047904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEC346847783F5028A5AA5735EEAC790F94A12DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFE962FA0C0006E48845D4375EB3079E25252F7A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1EFAD531E0995E03D3C1350EFB3F21BED21684C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m372F4CAF688C292AFBC27A10896E20B7302E5106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m573DC24E07895CD055E98449EFCAD15C1DFB9F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m83CAF3CE6AEDCD565AAE7BA61A133D50E996E088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0484FB93B75E8B35D626B071D35098A7727025E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89A23C940A233C73C2BB503315D36C01ED9EE7F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAF6B5EEF80DC47DA190A052EE696245953380428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC1A36C69B672DC7BAD61BD8B94DC5D13F64807D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m1643E2216FD39974C9F926E11F1B1764F367850E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m3989E064980C448A43F098167B7BFBA39738EB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m54900597F0C31907698B17FD5B21751A364640B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_mF3BE0E6FB3FA2B685A36396071E7266526461D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * V_0 = NULL;
	Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  V_2;
	memset((&V_2), 0, sizeof(V_2));
	WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  V_5;
	memset((&V_5), 0, sizeof(V_5));
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F  V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  V_8;
	memset((&V_8), 0, sizeof(V_8));
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7  V_10;
	memset((&V_10), 0, sizeof(V_10));
	NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  V_11;
	memset((&V_11), 0, sizeof(V_11));
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006  V_13;
	memset((&V_13), 0, sizeof(V_13));
	NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  V_14;
	memset((&V_14), 0, sizeof(V_14));
	ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		// var gesturesSub = GetGestureSubsystemIfNeeded();
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_0;
		L_0 = WindowsMRGestures_GetGestureSubsystemIfNeeded_m94F38F8C2A43A68E7A0A0D48D9E270128A7B9944(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (gesturesSub == null || !gesturesSub.running)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.Subsystem::get_running() */, L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		// return;
		return;
	}

IL_0013:
	{
		// gesturesSub.Update();
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_4 = V_0;
		NullCheck(L_4);
		XRGestureSubsystem_Update_mBCCB8C6A494652FC3F495ABA94B79CB73FF5D7EE(L_4, /*hidden argument*/NULL);
		// if (onHoldChanged != null)
		Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_5 = __this->get_onHoldChanged_5();
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (var holdGestureEvent in gesturesSub.holdGestureEvents)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_6 = V_0;
		NullCheck(L_6);
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_7;
		L_7 = WindowsMRGestureSubsystem_get_holdGestureEvents_m835C1731B08A0D7E64B701795E08668402007DDC(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404  L_8;
		L_8 = NativeArray_1_GetEnumerator_m1643E2216FD39974C9F926E11F1B1764F367850E((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)(&V_2), /*hidden argument*/NativeArray_1_GetEnumerator_m1643E2216FD39974C9F926E11F1B1764F367850E_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_0032:
		{
			// foreach (var holdGestureEvent in gesturesSub.holdGestureEvents)
			WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  L_9;
			L_9 = Enumerator_get_Current_m89A23C940A233C73C2BB503315D36C01ED9EE7F9((Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m89A23C940A233C73C2BB503315D36C01ED9EE7F9_RuntimeMethod_var);
			V_3 = L_9;
			// onHoldChanged(holdGestureEvent);
			Action_1_t73C9A7D5EFA3B3D03B7E0BB20C32DF8C42ECFAE0 * L_10 = __this->get_onHoldChanged_5();
			WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  L_11 = V_3;
			NullCheck(L_10);
			Action_1_Invoke_m9C4661BC9D71CD305F4FEB4691392F58AF1644CB(L_10, L_11, /*hidden argument*/Action_1_Invoke_m9C4661BC9D71CD305F4FEB4691392F58AF1644CB_RuntimeMethod_var);
		}

IL_0046:
		{
			// foreach (var holdGestureEvent in gesturesSub.holdGestureEvents)
			bool L_12;
			L_12 = Enumerator_MoveNext_m1EFAD531E0995E03D3C1350EFB3F21BED21684C4((Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1EFAD531E0995E03D3C1350EFB3F21BED21684C4_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0032;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFE962FA0C0006E48845D4375EB3079E25252F7A5((Enumerator_t8E276935E3573A2C9A6D45FBC4348DC3F0943404 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFE962FA0C0006E48845D4375EB3079E25252F7A5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		// if (onManipulationChanged != null)
		Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_13 = __this->get_onManipulationChanged_6();
		if (!L_13)
		{
			goto IL_00a9;
		}
	}
	{
		// foreach (var manipulationGestureEvent in gesturesSub.manipulationGestureEvents)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_14 = V_0;
		NullCheck(L_14);
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_15;
		L_15 = WindowsMRGestureSubsystem_get_manipulationGestureEvents_mDE2A52E9C69598DEE55022F803BA7ABC59C22B49(L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86  L_16;
		L_16 = NativeArray_1_GetEnumerator_m54900597F0C31907698B17FD5B21751A364640B4((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)(&V_5), /*hidden argument*/NativeArray_1_GetEnumerator_m54900597F0C31907698B17FD5B21751A364640B4_RuntimeMethod_var);
		V_4 = L_16;
	}

IL_0078:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_007a:
		{
			// foreach (var manipulationGestureEvent in gesturesSub.manipulationGestureEvents)
			WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  L_17;
			L_17 = Enumerator_get_Current_m0484FB93B75E8B35D626B071D35098A7727025E0((Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m0484FB93B75E8B35D626B071D35098A7727025E0_RuntimeMethod_var);
			V_6 = L_17;
			// onManipulationChanged(manipulationGestureEvent);
			Action_1_tF3020183D71BC218BD8379D1E59A2A4181FC3E62 * L_18 = __this->get_onManipulationChanged_6();
			WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  L_19 = V_6;
			NullCheck(L_18);
			Action_1_Invoke_mFD7CC159D962B9561167BAF34C7471F7F5624711(L_18, L_19, /*hidden argument*/Action_1_Invoke_mFD7CC159D962B9561167BAF34C7471F7F5624711_RuntimeMethod_var);
		}

IL_0090:
		{
			// foreach (var manipulationGestureEvent in gesturesSub.manipulationGestureEvents)
			bool L_20;
			L_20 = Enumerator_MoveNext_m372F4CAF688C292AFBC27A10896E20B7302E5106((Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m372F4CAF688C292AFBC27A10896E20B7302E5106_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_007a;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xA9, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEC346847783F5028A5AA5735EEAC790F94A12DB0((Enumerator_t88A6D236FBBADCD6B589295CF180F89EDFEB4C86 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mEC346847783F5028A5AA5735EEAC790F94A12DB0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(155)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA9, IL_00a9)
	}

IL_00a9:
	{
		// if (onNavigationChanged != null)
		Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_21 = __this->get_onNavigationChanged_7();
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		// foreach (var navigationGestureEvent in gesturesSub.navigationGestureEvents)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_22 = V_0;
		NullCheck(L_22);
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_23;
		L_23 = WindowsMRGestureSubsystem_get_navigationGestureEvents_mDF579B8A385FF11EEC092D843B66ABA238975894(L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F  L_24;
		L_24 = NativeArray_1_GetEnumerator_mF3BE0E6FB3FA2B685A36396071E7266526461D3E((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)(&V_8), /*hidden argument*/NativeArray_1_GetEnumerator_mF3BE0E6FB3FA2B685A36396071E7266526461D3E_RuntimeMethod_var);
		V_7 = L_24;
	}

IL_00c2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00da;
		}

IL_00c4:
		{
			// foreach (var navigationGestureEvent in gesturesSub.navigationGestureEvents)
			WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  L_25;
			L_25 = Enumerator_get_Current_mC1A36C69B672DC7BAD61BD8B94DC5D13F64807D4((Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F *)(&V_7), /*hidden argument*/Enumerator_get_Current_mC1A36C69B672DC7BAD61BD8B94DC5D13F64807D4_RuntimeMethod_var);
			V_9 = L_25;
			// onNavigationChanged(navigationGestureEvent);
			Action_1_t6E7B6A7A2E9E0074FC39F0DE79553455C2DC11BE * L_26 = __this->get_onNavigationChanged_7();
			WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  L_27 = V_9;
			NullCheck(L_26);
			Action_1_Invoke_m65323523B049E0768F948A5EFFA6B0DB6D06D074(L_26, L_27, /*hidden argument*/Action_1_Invoke_m65323523B049E0768F948A5EFFA6B0DB6D06D074_RuntimeMethod_var);
		}

IL_00da:
		{
			// foreach (var navigationGestureEvent in gesturesSub.navigationGestureEvents)
			bool L_28;
			L_28 = Enumerator_MoveNext_m83CAF3CE6AEDCD565AAE7BA61A133D50E996E088((Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m83CAF3CE6AEDCD565AAE7BA61A133D50E996E088_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_00c4;
			}
		}

IL_00e3:
		{
			IL2CPP_LEAVE(0xF3, FINALLY_00e5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e5;
	}

FINALLY_00e5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m088939BD8F7D84F884B2AE89235E8942D00F622C((Enumerator_t01C2C74C619753D25EA1257236502AF87E58373F *)(&V_7), /*hidden argument*/Enumerator_Dispose_m088939BD8F7D84F884B2AE89235E8942D00F622C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(229)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(229)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF3, IL_00f3)
	}

IL_00f3:
	{
		// if (onTappedChanged != null)
		Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_29 = __this->get_onTappedChanged_8();
		if (!L_29)
		{
			goto IL_013d;
		}
	}
	{
		// foreach (var tappedGestureEvent in gesturesSub.tappedGestureEvents)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_30 = V_0;
		NullCheck(L_30);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_31;
		L_31 = WindowsMRGestureSubsystem_get_tappedGestureEvents_mFE3FCB3D4D018C45864ABABE64CE78D976E7554E(L_30, /*hidden argument*/NULL);
		V_11 = L_31;
		Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7  L_32;
		L_32 = NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)(&V_11), /*hidden argument*/NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA_RuntimeMethod_var);
		V_10 = L_32;
	}

IL_010c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0124;
		}

IL_010e:
		{
			// foreach (var tappedGestureEvent in gesturesSub.tappedGestureEvents)
			WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  L_33;
			L_33 = Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C((Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *)(&V_10), /*hidden argument*/Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C_RuntimeMethod_var);
			V_12 = L_33;
			// onTappedChanged(tappedGestureEvent);
			Action_1_t30F433DC87338E8C363AAF5AE7DC5A7CB631F28D * L_34 = __this->get_onTappedChanged_8();
			WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  L_35 = V_12;
			NullCheck(L_34);
			Action_1_Invoke_mDCD8EF0323C03E1A7184B25088D8F6001FA2CC6F(L_34, L_35, /*hidden argument*/Action_1_Invoke_mDCD8EF0323C03E1A7184B25088D8F6001FA2CC6F_RuntimeMethod_var);
		}

IL_0124:
		{
			// foreach (var tappedGestureEvent in gesturesSub.tappedGestureEvents)
			bool L_36;
			L_36 = Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402((Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *)(&V_10), /*hidden argument*/Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_010e;
			}
		}

IL_012d:
		{
			IL2CPP_LEAVE(0x13D, FINALLY_012f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012f;
	}

FINALLY_012f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F((Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *)(&V_10), /*hidden argument*/Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(303)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(303)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13D, IL_013d)
	}

IL_013d:
	{
		// if (onActivate != null)
		Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_37 = __this->get_onActivate_9();
		if (!L_37)
		{
			goto IL_0187;
		}
	}
	{
		// foreach (var activateGestureEvent in gesturesSub.activateGestureEvents)
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_38 = V_0;
		NullCheck(L_38);
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  L_39;
		L_39 = XRGestureSubsystem_get_activateGestureEvents_m8D6A34660BC3A5E8438138BF705710F1B6D5D3C6(L_38, /*hidden argument*/NULL);
		V_14 = L_39;
		Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006  L_40;
		L_40 = NativeArray_1_GetEnumerator_m3989E064980C448A43F098167B7BFBA39738EB45((NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *)(&V_14), /*hidden argument*/NativeArray_1_GetEnumerator_m3989E064980C448A43F098167B7BFBA39738EB45_RuntimeMethod_var);
		V_13 = L_40;
	}

IL_0156:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016e;
		}

IL_0158:
		{
			// foreach (var activateGestureEvent in gesturesSub.activateGestureEvents)
			ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  L_41;
			L_41 = Enumerator_get_Current_mAF6B5EEF80DC47DA190A052EE696245953380428((Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 *)(&V_13), /*hidden argument*/Enumerator_get_Current_mAF6B5EEF80DC47DA190A052EE696245953380428_RuntimeMethod_var);
			V_15 = L_41;
			// onActivate(activateGestureEvent);
			Action_1_t8449C51FE9FCCB2FF0A192EC12D9EEEE95A985D8 * L_42 = __this->get_onActivate_9();
			ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  L_43 = V_15;
			NullCheck(L_42);
			Action_1_Invoke_m67BBA67A3DEA53DA403B86EC67B6C68535F34CDD(L_42, L_43, /*hidden argument*/Action_1_Invoke_m67BBA67A3DEA53DA403B86EC67B6C68535F34CDD_RuntimeMethod_var);
		}

IL_016e:
		{
			// foreach (var activateGestureEvent in gesturesSub.activateGestureEvents)
			bool L_44;
			L_44 = Enumerator_MoveNext_m573DC24E07895CD055E98449EFCAD15C1DFB9F51((Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 *)(&V_13), /*hidden argument*/Enumerator_MoveNext_m573DC24E07895CD055E98449EFCAD15C1DFB9F51_RuntimeMethod_var);
			if (L_44)
			{
				goto IL_0158;
			}
		}

IL_0177:
		{
			IL2CPP_LEAVE(0x187, FINALLY_0179);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0179;
	}

FINALLY_0179:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8AC7EE6A198878AB6DF6B636B1542A4BF6047904((Enumerator_tEFEA45F055B7BC089CD6351AB362C80A5370F006 *)(&V_13), /*hidden argument*/Enumerator_Dispose_m8AC7EE6A198878AB6DF6B636B1542A4BF6047904_RuntimeMethod_var);
		IL2CPP_END_FINALLY(377)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(377)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x187, IL_0187)
	}

IL_0187:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestures__ctor_m8D1EA29967E87CA55E90B31A58742F7FC527D8F7 (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRHoldGestureEvent_get_id_m6D8F5DE158524197B3E9A921C2274C29D8ED6AF3 (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRHoldGestureEvent_get_id_m6D8F5DE158524197B3E9A921C2274C29D8ED6AF3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * _thisAdjusted = reinterpret_cast<WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *>(__this + _offset);
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  _returnValue;
	_returnValue = WindowsMRHoldGestureEvent_get_id_m6D8F5DE158524197B3E9A921C2274C29D8ED6AF3_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRHoldGestureEvent_get_state_mEE42F56DDE2EC21257E7122B992E55BB062C2D4F (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRHoldGestureEvent_get_state_mEE42F56DDE2EC21257E7122B992E55BB062C2D4F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * _thisAdjusted = reinterpret_cast<WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRHoldGestureEvent_get_state_mEE42F56DDE2EC21257E7122B992E55BB062C2D4F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRHoldGestureEvent_ToString_m87D4381289ADC2F1A251700BC84E5968B2E01DC6 (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5569F82A803CAF3A71C6057CEC72AA620041016);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//     "Hold Gesture:\n\tgestureId: {0}\n\tgestureState: {1}",
		//     id, state);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0;
		L_0 = WindowsMRHoldGestureEvent_get_id_m6D8F5DE158524197B3E9A921C2274C29D8ED6AF3_inline((WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)__this, /*hidden argument*/NULL);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1 = L_0;
		RuntimeObject * L_2 = Box(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = WindowsMRHoldGestureEvent_get_state_mEE42F56DDE2EC21257E7122B992E55BB062C2D4F_inline((WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteralE5569F82A803CAF3A71C6057CEC72AA620041016, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* WindowsMRHoldGestureEvent_ToString_m87D4381289ADC2F1A251700BC84E5968B2E01DC6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * _thisAdjusted = reinterpret_cast<WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = WindowsMRHoldGestureEvent_ToString_m87D4381289ADC2F1A251700BC84E5968B2E01DC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRHoldGestureEvent_Equals_m56B218188024BACAE6C47C5CDD088801D9313C6E (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// return obj is WindowsMRHoldGestureEvent && Equals((WindowsMRHoldGestureEvent)obj);
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = WindowsMRHoldGestureEvent_Equals_mEAD4A09537B715ECABF41E2F6AA5C7DCDCC64F33((WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)__this, ((*(WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)((WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)UnBox(L_2, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRHoldGestureEvent_Equals_m56B218188024BACAE6C47C5CDD088801D9313C6E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * _thisAdjusted = reinterpret_cast<WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRHoldGestureEvent_Equals_m56B218188024BACAE6C47C5CDD088801D9313C6E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRHoldGestureEvent_GetHashCode_m8F2502D512F5C48BB9DF4DB25ADDCF1408B27F7A (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = m_Id.GetHashCode();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		int32_t L_1;
		L_1 = GestureId_GetHashCode_mA995D0A5FE0A2D84EAD74678AED691BF0764A859((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * k_HashCodeMultiplier) + ((int)m_State).GetHashCode();
		int32_t L_2 = __this->get_m_State_1();
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRHoldGestureEvent_GetHashCode_m8F2502D512F5C48BB9DF4DB25ADDCF1408B27F7A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * _thisAdjusted = reinterpret_cast<WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRHoldGestureEvent_GetHashCode_m8F2502D512F5C48BB9DF4DB25ADDCF1408B27F7A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRHoldGestureEvent_Equals_mEAD4A09537B715ECABF41E2F6AA5C7DCDCC64F33 (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Id.Equals(other.id) &&
		//     m_State == other.state;
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1;
		L_1 = WindowsMRHoldGestureEvent_get_id_m6D8F5DE158524197B3E9A921C2274C29D8ED6AF3_inline((WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = GestureId_Equals_m51FF986A93535F81A252748A33865636E9FB9698((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = __this->get_m_State_1();
		int32_t L_4;
		L_4 = WindowsMRHoldGestureEvent_get_state_mEE42F56DDE2EC21257E7122B992E55BB062C2D4F_inline((WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRHoldGestureEvent_Equals_mEAD4A09537B715ECABF41E2F6AA5C7DCDCC64F33_AdjustorThunk (RuntimeObject * __this, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * _thisAdjusted = reinterpret_cast<WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRHoldGestureEvent_Equals_mEAD4A09537B715ECABF41E2F6AA5C7DCDCC64F33(_thisAdjusted, ___other0, method);
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
// System.Void UnityEngine.XR.WindowsMR.WindowsMRInput::GetCurrentSourceStates(UnityEngine.XR.XRInputSubsystem,System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRInput_GetCurrentSourceStates_m965C98ACA800D195C1F0E93223EB0C66753B493C (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___input0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___states1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_1 = NULL;
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_2 = NULL;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (states == null)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___states1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// states.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___states1;
		NullCheck(L_1);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_1, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// int count = NativeApi.GetCountOfSourceStates();
		int32_t L_2;
		L_2 = NativeApi_GetCountOfSourceStates_mABBFF7052B8B3EC6270F26A42BAE0D9DC144E7FD(/*hidden argument*/NULL);
		V_0 = L_2;
		// if (count > 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// IntPtr[] ptrs = new IntPtr[count];
		int32_t L_4 = V_0;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_5 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// NativeApi.GetAllSourceStates(ptrs, count);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_6 = V_1;
		int32_t L_7 = V_0;
		NativeApi_GetAllSourceStates_mA6A2FE622961D26D78A6CA4835B914AB7E3569B3(L_6, L_7, /*hidden argument*/NULL);
		// foreach (var ip in ptrs)
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_8 = V_1;
		V_2 = L_8;
		V_3 = 0;
		goto IL_004c;
	}

IL_0028:
	{
		// foreach (var ip in ptrs)
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		intptr_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = (intptr_t)L_12;
		// if (ip != IntPtr.Zero)
		intptr_t L_13 = V_4;
		bool L_14;
		L_14 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_13, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		// states.Add(Marshal.GetObjectForIUnknown(ip));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_15 = ___states1;
		intptr_t L_16 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_17;
		L_17 = Marshal_GetObjectForIUnknown_m3F7D121FBDDEE97D58FCAD6F58F77D36924BC66F((intptr_t)L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_15, L_17, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_0048:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004c:
	{
		// foreach (var ip in ptrs)
		int32_t L_19 = V_3;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		// NativeApi.ReleaseAllSourceStates(ptrs, states.Count);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_21 = V_1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_22 = ___states1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_22, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		NativeApi_ReleaseAllSourceStates_m708167F26A3A19F5D78FFE10C1014E7AC2281AF6(L_21, L_23, /*hidden argument*/NULL);
	}

IL_005e:
	{
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
// System.Void UnityEngine.XR.WindowsMRInternals.WindowsMRInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRInternal__cctor_mFA13AE5DDE465F5282EABE88F669AA80270C445B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string pluginFolderPathBase = "";
		// UnityWindowsMR_EmulationLibs_SetPluginFolderPaths(pluginFolderPathBase);
		WindowsMRInternal_UnityWindowsMR_EmulationLibs_SetPluginFolderPaths_mE37640D7D9074C17C5E9D81C350AFD8DEC347247(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMRInternals.WindowsMRInternal::UnityWindowsMR_EmulationLibs_SetPluginFolderPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRInternal_UnityWindowsMR_EmulationLibs_SetPluginFolderPaths_mE37640D7D9074C17C5E9D81C350AFD8DEC347247 (String_t* ___pluginFolderPath_x86_640, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_EmulationLibs_SetPluginFolderPaths", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pluginFolderPath_x86_640' to native representation
	Il2CppChar* ____pluginFolderPath_x86_640_marshaled = NULL;
	if (___pluginFolderPath_x86_640 != NULL)
	{
		____pluginFolderPath_x86_640_marshaled = ___pluginFolderPath_x86_640->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_EmulationLibs_SetPluginFolderPaths)(____pluginFolderPath_x86_640_marshaled);
	#else
	il2cppPInvokeFunc(____pluginFolderPath_x86_640_marshaled);
	#endif

}
// System.Void UnityEngine.XR.WindowsMRInternals.WindowsMRInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRInternal__ctor_m038CD74CFF61AA75CD38B1295C037D0265A309C4 (WindowsMRInternal_t8BB8B69C90AD776FD3E0E9C1F261D6F00CA575A5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRManipulationGestureEvent_get_id_mA4D42C442AE74BDCB6C2A3AE10096458C86B0F00 (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRManipulationGestureEvent_get_id_mA4D42C442AE74BDCB6C2A3AE10096458C86B0F00_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * _thisAdjusted = reinterpret_cast<WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *>(__this + _offset);
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  _returnValue;
	_returnValue = WindowsMRManipulationGestureEvent_get_id_mA4D42C442AE74BDCB6C2A3AE10096458C86B0F00_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRManipulationGestureEvent_get_state_mAE0B1DD206F527881FD05F5C0A02A13D0BB3D8C7 (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRManipulationGestureEvent_get_state_mAE0B1DD206F527881FD05F5C0A02A13D0BB3D8C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * _thisAdjusted = reinterpret_cast<WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRManipulationGestureEvent_get_state_mAE0B1DD206F527881FD05F5C0A02A13D0BB3D8C7_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::get_cumulativeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 cumulativeDelta { get { return m_CumulativeDelta; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_CumulativeDelta_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * _thisAdjusted = reinterpret_cast<WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRManipulationGestureEvent_ToString_mB763E2D65DD38FC5F7AFA42824D023FF5943179D (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral807A163EA977B5F41E26A5E2D7FE6CE32CF3A19D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//     "Manipulation Gesture:\n\tgestureId: {0}\n\tgestureState: {1}\n\tcumulativeDelta: {2}",
		//     id, state, cumulativeDelta);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0;
		L_0 = WindowsMRManipulationGestureEvent_get_id_mA4D42C442AE74BDCB6C2A3AE10096458C86B0F00_inline((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)__this, /*hidden argument*/NULL);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1 = L_0;
		RuntimeObject * L_2 = Box(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = WindowsMRManipulationGestureEvent_get_state_mAE0B1DD206F527881FD05F5C0A02A13D0BB3D8C7_inline((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var, &L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F_inline((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteral807A163EA977B5F41E26A5E2D7FE6CE32CF3A19D, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* WindowsMRManipulationGestureEvent_ToString_mB763E2D65DD38FC5F7AFA42824D023FF5943179D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * _thisAdjusted = reinterpret_cast<WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = WindowsMRManipulationGestureEvent_ToString_mB763E2D65DD38FC5F7AFA42824D023FF5943179D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRManipulationGestureEvent_Equals_mE627F94BCC8D89061D669A4E151B55DD85A862BE (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// return obj is WindowsMRManipulationGestureEvent && Equals((WindowsMRManipulationGestureEvent)obj);
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = WindowsMRManipulationGestureEvent_Equals_m6D3678EC3350E411E4CE20F74A060431A4B3BC4D((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)__this, ((*(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)UnBox(L_2, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRManipulationGestureEvent_Equals_mE627F94BCC8D89061D669A4E151B55DD85A862BE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * _thisAdjusted = reinterpret_cast<WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRManipulationGestureEvent_Equals_mE627F94BCC8D89061D669A4E151B55DD85A862BE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRManipulationGestureEvent_GetHashCode_mFEECAF5AB7081A6C3B49FCEAAA48BBA6455D8EA4 (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var hashCode = m_Id.GetHashCode();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		int32_t L_1;
		L_1 = GestureId_GetHashCode_mA995D0A5FE0A2D84EAD74678AED691BF0764A859((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * k_HashCodeMultiplier) + ((int)m_State).GetHashCode();
		int32_t L_2 = __this->get_m_State_1();
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * k_HashCodeMultiplier) + (int)cumulativeDelta.GetHashCode();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F_inline((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRManipulationGestureEvent_GetHashCode_mFEECAF5AB7081A6C3B49FCEAAA48BBA6455D8EA4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * _thisAdjusted = reinterpret_cast<WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRManipulationGestureEvent_GetHashCode_mFEECAF5AB7081A6C3B49FCEAAA48BBA6455D8EA4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRManipulationGestureEvent_Equals_m6D3678EC3350E411E4CE20F74A060431A4B3BC4D (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Id.Equals(other.id) &&
		//     m_State == other.state &&
		//     m_CumulativeDelta == other.cumulativeDelta;
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1;
		L_1 = WindowsMRManipulationGestureEvent_get_id_mA4D42C442AE74BDCB6C2A3AE10096458C86B0F00_inline((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = GestureId_Equals_m51FF986A93535F81A252748A33865636E9FB9698((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = __this->get_m_State_1();
		int32_t L_4;
		L_4 = WindowsMRManipulationGestureEvent_get_state_mAE0B1DD206F527881FD05F5C0A02A13D0BB3D8C7_inline((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0036;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_m_CumulativeDelta_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F_inline((WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)(&___other0), /*hidden argument*/NULL);
		bool L_7;
		L_7 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0036:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRManipulationGestureEvent_Equals_m6D3678EC3350E411E4CE20F74A060431A4B3BC4D_AdjustorThunk (RuntimeObject * __this, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * _thisAdjusted = reinterpret_cast<WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRManipulationGestureEvent_Equals_m6D3678EC3350E411E4CE20F74A060431A4B3BC4D(_thisAdjusted, ___other0, method);
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
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRNavigationGestureEvent_get_id_m6AA1C10874F845A4832FCB7352A8E4A200737A4F (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRNavigationGestureEvent_get_id_m6AA1C10874F845A4832FCB7352A8E4A200737A4F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * _thisAdjusted = reinterpret_cast<WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *>(__this + _offset);
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  _returnValue;
	_returnValue = WindowsMRNavigationGestureEvent_get_id_m6AA1C10874F845A4832FCB7352A8E4A200737A4F_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRNavigationGestureEvent_get_state_m85B727B4B39939571352B5FBC1BEBBDF2723895F (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRNavigationGestureEvent_get_state_m85B727B4B39939571352B5FBC1BEBBDF2723895F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * _thisAdjusted = reinterpret_cast<WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRNavigationGestureEvent_get_state_m85B727B4B39939571352B5FBC1BEBBDF2723895F_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::get_normalizedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRNavigationGestureEvent_get_normalizedOffset_m10CD89AAAA3020E56E087B2D349790C82005A343 (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 normalizedOffset { get { return m_NormalizedOffset; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NormalizedOffset_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRNavigationGestureEvent_get_normalizedOffset_m10CD89AAAA3020E56E087B2D349790C82005A343_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * _thisAdjusted = reinterpret_cast<WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = WindowsMRNavigationGestureEvent_get_normalizedOffset_m10CD89AAAA3020E56E087B2D349790C82005A343_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRNavigationGestureEvent_ToString_m62E7AC359CD0C94B843B0348297C742CE9DB596E (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ECF5AF5757D08BA14B006319D50E67F26DEB149);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//     "Navigation Gesture:\n\tgestureId: {0}\n\tgestureState: {1}\n\tnormalizedOffset: {2}",
		//     id, state, normalizedOffset);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0;
		L_0 = WindowsMRNavigationGestureEvent_get_id_m6AA1C10874F845A4832FCB7352A8E4A200737A4F_inline((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)__this, /*hidden argument*/NULL);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1 = L_0;
		RuntimeObject * L_2 = Box(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = WindowsMRNavigationGestureEvent_get_state_m85B727B4B39939571352B5FBC1BEBBDF2723895F_inline((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var, &L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = WindowsMRNavigationGestureEvent_get_normalizedOffset_m10CD89AAAA3020E56E087B2D349790C82005A343_inline((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteral9ECF5AF5757D08BA14B006319D50E67F26DEB149, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* WindowsMRNavigationGestureEvent_ToString_m62E7AC359CD0C94B843B0348297C742CE9DB596E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * _thisAdjusted = reinterpret_cast<WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = WindowsMRNavigationGestureEvent_ToString_m62E7AC359CD0C94B843B0348297C742CE9DB596E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRNavigationGestureEvent_Equals_m2BC1623B58B628CF58FBB637A43E22812F397269 (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// return obj is WindowsMRNavigationGestureEvent && Equals((WindowsMRNavigationGestureEvent)obj);
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = WindowsMRNavigationGestureEvent_Equals_mF04C6DDC5E5A614DB2DD168E32645870E13C99BF((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)__this, ((*(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)UnBox(L_2, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRNavigationGestureEvent_Equals_m2BC1623B58B628CF58FBB637A43E22812F397269_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * _thisAdjusted = reinterpret_cast<WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRNavigationGestureEvent_Equals_m2BC1623B58B628CF58FBB637A43E22812F397269(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRNavigationGestureEvent_GetHashCode_m7319B536FE9E03BE170744D0A5025A3C666F98FD (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = m_Id.GetHashCode();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		int32_t L_1;
		L_1 = GestureId_GetHashCode_mA995D0A5FE0A2D84EAD74678AED691BF0764A859((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * k_HashCodeMultiplier) + ((int)m_State).GetHashCode();
		int32_t L_2 = __this->get_m_State_1();
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * k_HashCodeMultiplier) + (int)m_NormalizedOffset.GetHashCode();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_m_NormalizedOffset_2();
		int32_t L_5;
		L_5 = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRNavigationGestureEvent_GetHashCode_m7319B536FE9E03BE170744D0A5025A3C666F98FD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * _thisAdjusted = reinterpret_cast<WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRNavigationGestureEvent_GetHashCode_m7319B536FE9E03BE170744D0A5025A3C666F98FD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRNavigationGestureEvent_Equals_mF04C6DDC5E5A614DB2DD168E32645870E13C99BF (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Id.Equals(other.id) &&
		//     m_State == other.state &&
		//     m_NormalizedOffset == other.normalizedOffset;
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1;
		L_1 = WindowsMRNavigationGestureEvent_get_id_m6AA1C10874F845A4832FCB7352A8E4A200737A4F_inline((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = GestureId_Equals_m51FF986A93535F81A252748A33865636E9FB9698((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = __this->get_m_State_1();
		int32_t L_4;
		L_4 = WindowsMRNavigationGestureEvent_get_state_m85B727B4B39939571352B5FBC1BEBBDF2723895F_inline((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0036;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_m_NormalizedOffset_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = WindowsMRNavigationGestureEvent_get_normalizedOffset_m10CD89AAAA3020E56E087B2D349790C82005A343_inline((WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)(&___other0), /*hidden argument*/NULL);
		bool L_7;
		L_7 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0036:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRNavigationGestureEvent_Equals_mF04C6DDC5E5A614DB2DD168E32645870E13C99BF_AdjustorThunk (RuntimeObject * __this, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * _thisAdjusted = reinterpret_cast<WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRNavigationGestureEvent_Equals_mF04C6DDC5E5A614DB2DD168E32645870E13C99BF(_thisAdjusted, ___other0, method);
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
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRSessionSubsystem_RegisterDescriptor_mDADE156CFC20A9C114BBB51A368258E5EA826BF5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRSessionSubsystem_t0DC9CB38AEA08D13E9FD29331BC3C4F38522FFB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31EB844B5DB2AFC2BB5C3386E66A98F918CE490B);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
		//             {
		//                 id = "Windows Mixed Reality Session",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(WindowsMRProvider),
		//                 subsystemTypeOverride = typeof(WindowsMRSessionSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(WindowsMRSessionSubsystem),
		// #endif
		//                 supportsInstall = false
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A ));
		Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), _stringLiteral31EB844B5DB2AFC2BB5C3386E66A98F918CE490B, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (WindowsMRSessionSubsystem_t0DC9CB38AEA08D13E9FD29331BC3C4F38522FFB6_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_4 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m0A22D56BDA43123B323F300C2ABF6F2504C3C02F(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRSessionSubsystem__ctor_mD15A2CD789E730766104A1A6E765EA7C60F8CFED (WindowsMRSessionSubsystem_t0DC9CB38AEA08D13E9FD29331BC3C4F38522FFB6 * __this, const RuntimeMethod* method)
{
	{
		XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRTappedGestureEvent_get_id_mCF2F486894D4DDF592B5CFFE918F3F1E764911F9 (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRTappedGestureEvent_get_id_mCF2F486894D4DDF592B5CFFE918F3F1E764911F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * _thisAdjusted = reinterpret_cast<WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *>(__this + _offset);
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  _returnValue;
	_returnValue = WindowsMRTappedGestureEvent_get_id_mCF2F486894D4DDF592B5CFFE918F3F1E764911F9_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52 (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * _thisAdjusted = reinterpret_cast<WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::get_tappedCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_get_tappedCount_m1C3775FCF65723A87630119978CCA1AB81769136 (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	{
		// public int tappedCount { get { return m_TappedCount; } }
		int32_t L_0 = __this->get_m_TappedCount_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRTappedGestureEvent_get_tappedCount_m1C3775FCF65723A87630119978CCA1AB81769136_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * _thisAdjusted = reinterpret_cast<WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRTappedGestureEvent_get_tappedCount_m1C3775FCF65723A87630119978CCA1AB81769136_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMRTappedGestureEvent_ToString_m26DC834236CF0F10B818A2565D06207A18C9D9DE (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33A590A44A8F05101AA561BA701C8743D97E1BF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//     "Tapped Gesture:\n\tgestureId: {0}\n\tgestureState: {1}\n\ttappedCount: {2}",
		//     id, state, tappedCount);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0;
		L_0 = WindowsMRTappedGestureEvent_get_id_mCF2F486894D4DDF592B5CFFE918F3F1E764911F9_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)__this, /*hidden argument*/NULL);
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1 = L_0;
		RuntimeObject * L_2 = Box(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = WindowsMRTappedGestureEvent_get_tappedCount_m1C3775FCF65723A87630119978CCA1AB81769136_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteral33A590A44A8F05101AA561BA701C8743D97E1BF8, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* WindowsMRTappedGestureEvent_ToString_m26DC834236CF0F10B818A2565D06207A18C9D9DE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * _thisAdjusted = reinterpret_cast<WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = WindowsMRTappedGestureEvent_ToString_m26DC834236CF0F10B818A2565D06207A18C9D9DE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRTappedGestureEvent_Equals_mD86527B1974A47F50042CC65CE6E0CE93655680B (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// return obj is WindowsMRTappedGestureEvent && Equals((WindowsMRTappedGestureEvent)obj);
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = WindowsMRTappedGestureEvent_Equals_mABD39CE8DD91E3D967199BF869FA47F3B70CE439((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)__this, ((*(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)UnBox(L_2, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRTappedGestureEvent_Equals_mD86527B1974A47F50042CC65CE6E0CE93655680B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * _thisAdjusted = reinterpret_cast<WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRTappedGestureEvent_Equals_mD86527B1974A47F50042CC65CE6E0CE93655680B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_GetHashCode_mB512A915C951F132527EE4B0E6DE7EE073841C48 (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = m_Id.GetHashCode();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		int32_t L_1;
		L_1 = GestureId_GetHashCode_mA995D0A5FE0A2D84EAD74678AED691BF0764A859((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * k_HashCodeMultiplier) + ((int)m_State).GetHashCode();
		int32_t L_2 = __this->get_m_State_1();
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * k_HashCodeMultiplier) + m_TappedCount.GetHashCode();
		int32_t* L_4 = __this->get_address_of_m_TappedCount_2();
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_4, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t WindowsMRTappedGestureEvent_GetHashCode_mB512A915C951F132527EE4B0E6DE7EE073841C48_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * _thisAdjusted = reinterpret_cast<WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WindowsMRTappedGestureEvent_GetHashCode_mB512A915C951F132527EE4B0E6DE7EE073841C48(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::Equals(UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRTappedGestureEvent_Equals_mABD39CE8DD91E3D967199BF869FA47F3B70CE439 (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Id.Equals(other.id) &&
		//     m_State == other.state &&
		//     m_TappedCount == other.tappedCount;
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * L_0 = __this->get_address_of_m_Id_0();
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_1;
		L_1 = WindowsMRTappedGestureEvent_get_id_mCF2F486894D4DDF592B5CFFE918F3F1E764911F9_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = GestureId_Equals_m51FF986A93535F81A252748A33865636E9FB9698((GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 *)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->get_m_State_1();
		int32_t L_4;
		L_4 = WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = __this->get_m_TappedCount_2();
		int32_t L_6;
		L_6 = WindowsMRTappedGestureEvent_get_tappedCount_m1C3775FCF65723A87630119978CCA1AB81769136_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool WindowsMRTappedGestureEvent_Equals_mABD39CE8DD91E3D967199BF869FA47F3B70CE439_AdjustorThunk (RuntimeObject * __this, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * _thisAdjusted = reinterpret_cast<WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *>(__this + _offset);
	bool _returnValue;
	_returnValue = WindowsMRTappedGestureEvent_Equals_mABD39CE8DD91E3D967199BF869FA47F3B70CE439(_thisAdjusted, ___other0, method);
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
// System.Void Unity.XR.WindowsMR.WindowsMRUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRUsages__cctor_m990245F947D21588301F414F796371061DD0C4DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mFA556ED010B117E44F21659A13788CB2F9F1198E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3030ED4011F9E6A7E9CD83BE2066BB0860FDAAED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FC595BCDF0EDDCFF17ED258709E1FFD1BE2C400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4346CB4DD6FC6AAE50ED00B87DAE598BB8024E24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral439424494B122F8A43C5E2CE203E9D7A54C56C1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral642AFE13E6C1E54CBB0B2425340FC04D65F8CEFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB285741C33824C27024778C8BEE281153B4786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7136CF12AA44B92AF3F0430F07DE6A8D86C08CE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFB19B1FB8349FCE4C1C7C8E9BC4209762A5BA7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBBFC4C431D1377097F43DB7AD87C8D6E24DAC85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputFeatureUsage<Vector3> PointerPosition = new InputFeatureUsage<Vector3>("PointerPosition");
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_0), _stringLiteral6EB285741C33824C27024778C8BEE281153B4786, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_PointerPosition_0(L_0);
		// public static InputFeatureUsage<Quaternion> PointerRotation = new InputFeatureUsage<Quaternion>("PointerRotation");
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_1), _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_PointerRotation_1(L_1);
		// public static InputFeatureUsage<float> SourceLossRisk = new InputFeatureUsage<float>("SourceLossRisk");
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_2), _stringLiteral3030ED4011F9E6A7E9CD83BE2066BB0860FDAAED, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_SourceLossRisk_2(L_2);
		// public static InputFeatureUsage<Vector3> SourceMitigationDirection = new InputFeatureUsage<Vector3>("SourceMitigationDirection");
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_3), _stringLiteral642AFE13E6C1E54CBB0B2425340FC04D65F8CEFF, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_SourceMitigationDirection_3(L_3);
		// public static InputFeatureUsage<bool> AirTap = new InputFeatureUsage<bool>("AirTap");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_4), _stringLiteral4346CB4DD6FC6AAE50ED00B87DAE598BB8024E24, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_AirTap_4(L_4);
		// public static InputFeatureUsage<Vector3> EyeGazePosition = new InputFeatureUsage<Vector3>("EyeGazePosition");
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_5;
		memset((&L_5), 0, sizeof(L_5));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_5), _stringLiteralBFB19B1FB8349FCE4C1C7C8E9BC4209762A5BA7B, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_EyeGazePosition_5(L_5);
		// public static InputFeatureUsage<Quaternion> EyeGazeRotation = new InputFeatureUsage<Quaternion>("EyeGazeRotation");
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_6;
		memset((&L_6), 0, sizeof(L_6));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_6), _stringLiteral7136CF12AA44B92AF3F0430F07DE6A8D86C08CE2, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_EyeGazeRotation_6(L_6);
		// public static InputFeatureUsage<bool> EyeGazeAvailable = new InputFeatureUsage<bool>("EyeGazeAvailable");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_7;
		memset((&L_7), 0, sizeof(L_7));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_7), _stringLiteralCBBFC4C431D1377097F43DB7AD87C8D6E24DAC85, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_EyeGazeAvailable_7(L_7);
		// public static InputFeatureUsage<bool> EyeGazeTracked = new InputFeatureUsage<bool>("EyeGazeTracked");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_8;
		memset((&L_8), 0, sizeof(L_8));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_8), _stringLiteral439424494B122F8A43C5E2CE203E9D7A54C56C1B, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_EyeGazeTracked_8(L_8);
		// public static InputFeatureUsage<uint> PositionAccuracy = new InputFeatureUsage<uint>("PositionAccuracy");
		InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  L_9;
		memset((&L_9), 0, sizeof(L_9));
		InputFeatureUsage_1__ctor_mFA556ED010B117E44F21659A13788CB2F9F1198E((&L_9), _stringLiteral3FC595BCDF0EDDCFF17ED258709E1FFD1BE2C400, /*hidden argument*/InputFeatureUsage_1__ctor_mFA556ED010B117E44F21659A13788CB2F9F1198E_RuntimeMethod_var);
		((WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMRUsages_tA98D93A2FF54C5BF07398DA38B80925441B8EE86_il2cpp_TypeInfo_var))->set_PositionAccuracy_9(L_9);
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
// System.Void UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_Start_m24FCDC8D6DE5ED818DCFFC935A99CB8C856D0DAC (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623 * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_refPoints_start();
		NativeApi_UnityWindowsMR_refPoints_start_m49E1973B8B410C727C6D72BFFCA127FF09F853F6(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_Stop_m3D898745F14BE48639CA64C4885B8821234706D9 (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623 * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_refPoints_stop();
		NativeApi_UnityWindowsMR_refPoints_stop_m686111933810C4445A604CF2A4B4EA0051967DF1(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_Destroy_m00461C208F6734C01EFB5B7EA37FD6F393B6806C (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623 * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_refPoints_onDestroy();
		NativeApi_UnityWindowsMR_refPoints_onDestroy_m5FF02C57FB9EE6BC4DD59796200E1203CE5DF959(/*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRAnchor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  WindowsMRProvider_GetChanges_mFDCD5B8A8DE642AA77A49A693A689D30D9D92043 (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623 * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___defaultAnchor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m98E60584C28C2829CB213CED3ADDF18756449AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_CopyFrom_m07D7DB0F41CA9698585349E4EF80F351720C6B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  V_10;
	memset((&V_10), 0, sizeof(V_10));
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  V_11;
	memset((&V_11), 0, sizeof(V_11));
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = NativeApi.UnityWindowsMR_refPoints_acquireChanges(
		//     out addedPtr, out addedCount,
		//     out updatedPtr, out updatedCount,
		//     out removedPtr, out removedCount,
		//     out elementSize);
		void* L_0;
		L_0 = NativeApi_UnityWindowsMR_refPoints_acquireChanges_mA59F376A8C950361DB9E004D3FA25C86ED10B332((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// var added = NativeCopyUtility.PtrToNativeArrayWithDefault<XRAnchor>(defaultAnchor, addedPtr, elementSize, addedCount, allocator);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_1 = ___defaultAnchor0;
		void* L_2 = V_4;
		int32_t L_3 = V_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___allocator1;
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_6;
		L_6 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF(L_1, (void*)(void*)L_2, L_3, L_4, L_5, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF_RuntimeMethod_var);
		V_8 = L_6;
		// var updated = NativeCopyUtility.PtrToNativeArrayWithDefault<XRAnchor>(defaultAnchor, updatedPtr, elementSize, updatedCount, allocator);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_7 = ___defaultAnchor0;
		void* L_8 = V_5;
		int32_t L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = ___allocator1;
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_12;
		L_12 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF(L_7, (void*)(void*)L_8, L_9, L_10, L_11, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m243924C1BAD0F6E7302004DC219F0094EA56A0AF_RuntimeMethod_var);
		V_9 = L_12;
		// var removed = NativeCopyUtility.PtrToNativeArrayWithDefault<TrackableId>(default(TrackableId), removedPtr, elementSize, removedCount, allocator);
		il2cpp_codegen_initobj((&V_11), sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B ));
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_13 = V_11;
		void* L_14 = V_6;
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		int32_t L_17 = ___allocator1;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_18;
		L_18 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m98E60584C28C2829CB213CED3ADDF18756449AB3(L_13, (void*)(void*)L_14, L_15, L_16, L_17, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m98E60584C28C2829CB213CED3ADDF18756449AB3_RuntimeMethod_var);
		V_10 = L_18;
		// var ret = TrackableChanges<XRAnchor>.CopyFrom(
		//     added,
		//     updated,
		//     removed,
		//     allocator);
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_19 = V_8;
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_20 = V_9;
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_21 = V_10;
		int32_t L_22 = ___allocator1;
		TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  L_23;
		L_23 = TrackableChanges_1_CopyFrom_m07D7DB0F41CA9698585349E4EF80F351720C6B5D(L_19, L_20, L_21, L_22, /*hidden argument*/TrackableChanges_1_CopyFrom_m07D7DB0F41CA9698585349E4EF80F351720C6B5D_RuntimeMethod_var);
		// added.Dispose();
		NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC((NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)(&V_8), /*hidden argument*/NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_RuntimeMethod_var);
		// updated.Dispose();
		NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC((NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)(&V_9), /*hidden argument*/NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_RuntimeMethod_var);
		// removed.Dispose();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(&V_10), /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
		// return ret;
		V_12 = L_23;
		IL2CPP_LEAVE(0x72, FINALLY_006a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		// NativeApi.UnityWindowsMR_refPoints_releaseChanges(context);
		void* L_24 = V_7;
		NativeApi_UnityWindowsMR_refPoints_releaseChanges_m7EAC6A95338EBDBD12E9A039AEA6DE4CDD32DDCE((void*)(void*)L_24, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
	}

IL_0072:
	{
		// }
		TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  L_25 = V_12;
		return L_25;
	}
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRProvider_TryAddAnchor_m9CF29D14BC115E65D6BAB77AEF296914D06A6E9B (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor1, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityWindowsMR_refPoints_tryAdd(pose, out anchor);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___pose0;
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_1 = ___anchor1;
		bool L_2;
		L_2 = NativeApi_UnityWindowsMR_refPoints_tryAdd_mF657AA1FE93EDF94D027E27C56460EDE34BB72B7(L_0, (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRProvider_TryRemoveAnchor_mFA91393D3E9B94E9196B80D8C68BF6819B000385 (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___anchorId0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityWindowsMR_refPoints_tryRemove(anchorId);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___anchorId0;
		bool L_1;
		L_1 = NativeApi_UnityWindowsMR_refPoints_tryRemove_m8F3903E29CFA9A450B5CA2649DD1F352C571C749(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRAnchorSubsystem/WindowsMRProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider__ctor_mDA307C80111BC8B089C5B052FB8D1DD4DA9F24EC (WindowsMRProvider_t0708C0E005C51441383DEEC382BA5427FFDB3623 * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions/NativeApi::SetBoundingVolumeOrientedBox(UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMROrientedBox)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_SetBoundingVolumeOrientedBox_m2821434E67A1D0BA2C2F16B3E7BFF866BB4A557F (WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454  ___planes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454 );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(WMROrientedBox_t89B9CFE40A5BDF457D8CE1D54F09F73446D68454 );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "SetBoundingVolumeOrientedBox", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBoundingVolumeOrientedBox)(___planes0);
	#else
	il2cppPInvokeFunc(___planes0);
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions/NativeApi::SetBoundingVolumeSphere(UnityEngine.XR.WindowsMR.WindowsMRExtensions/WMRSphere)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_SetBoundingVolumeSphere_m31F3940FA5DAF794120200A6B08969D0C40D9270 (WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4  ___planes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4 );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(WMRSphere_t8587086CFF4EB326D562ECD887085F5D5CEB3BB4 );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "SetBoundingVolumeSphere", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBoundingVolumeSphere)(___planes0);
	#else
	il2cppPInvokeFunc(___planes0);
	#endif

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
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesUpdate_mDF9D58D90862ECFA0E652002FC347DBB7F356436 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesUpdate", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesUpdate)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesStart_mD15B5D7C73858AB87BC976C1530EC43A3DC5AA14 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesStart", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesStart)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesDestroy_m84D2AA609A0B5422DED5FCBD5AE4BEB14B858146 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesDestroy", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesDestroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_GesturesStop_mA3B2988831FDE63BDFA8DAD8956F7F39A02B1283 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesStop", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesStop)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void* UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesGetHoldGestureEventsPtr(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityWindowsMR_GesturesGetHoldGestureEventsPtr_m30D46DEE46BFAC99AE11CE3FCB8752D483A68326 (int32_t* ___gesturesLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesGetHoldGestureEventsPtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesGetHoldGestureEventsPtr)(___gesturesLength0, ___elementSize1);
	#else
	void* returnValue = il2cppPInvokeFunc(___gesturesLength0, ___elementSize1);
	#endif

	return returnValue;
}
// System.Void* UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesGetManipulationGestureEventsPtr(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityWindowsMR_GesturesGetManipulationGestureEventsPtr_m9BFCD33223844DA1054DD66EB942E0A6D57FDA66 (int32_t* ___gesturesLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesGetManipulationGestureEventsPtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesGetManipulationGestureEventsPtr)(___gesturesLength0, ___elementSize1);
	#else
	void* returnValue = il2cppPInvokeFunc(___gesturesLength0, ___elementSize1);
	#endif

	return returnValue;
}
// System.Void* UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesGetNavigationGestureEventsPtr(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityWindowsMR_GesturesGetNavigationGestureEventsPtr_m1C933271B3A5F272FC1DA33D2C827B08EC28FE82 (int32_t* ___gesturesLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesGetNavigationGestureEventsPtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesGetNavigationGestureEventsPtr)(___gesturesLength0, ___elementSize1);
	#else
	void* returnValue = il2cppPInvokeFunc(___gesturesLength0, ___elementSize1);
	#endif

	return returnValue;
}
// System.Void* UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesGetTappedGestureEventsPtr(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityWindowsMR_GesturesGetTappedGestureEventsPtr_m20E33A67B333A9417298FB9D00C026EADAD39EC7 (int32_t* ___gesturesLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesGetTappedGestureEventsPtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesGetTappedGestureEventsPtr)(___gesturesLength0, ___elementSize1);
	#else
	void* returnValue = il2cppPInvokeFunc(___gesturesLength0, ___elementSize1);
	#endif

	return returnValue;
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesSetEnableManipulationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_GesturesSetEnableManipulationGesture_mFF2F312FA39B91FBAA9448DBF3F4C43A9A6EF0CF (bool ___enable0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesSetEnableManipulationGesture", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesSetEnableManipulationGesture)(static_cast<int32_t>(___enable0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/NativeApi::UnityWindowsMR_GesturesSetEnableNavigationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityWindowsMR_GesturesSetEnableNavigationGesture_mF29AE1D27ECA752AFB228C7230171808B9A61A6B (bool ___enable0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_GesturesSetEnableNavigationGesture", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_GesturesSetEnableNavigationGesture)(static_cast<int32_t>(___enable0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::.ctor(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider__ctor_mA04198031707F3B34AF35CA504A75CAC7689CE35 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___subsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeArray<WindowsMRHoldGestureEvent> m_HoldGestureEvents = new NativeArray<WindowsMRHoldGestureEvent>(0, Allocator.Persistent);
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_0;
		memset((&L_0), 0, sizeof(L_0));
		NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94((&L_0), 0, 4, 1, /*hidden argument*/NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94_RuntimeMethod_var);
		__this->set_m_HoldGestureEvents_2(L_0);
		// NativeArray<WindowsMRManipulationGestureEvent> m_ManipulationGestureEvents = new NativeArray<WindowsMRManipulationGestureEvent>(0, Allocator.Persistent);
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E((&L_1), 0, 4, 1, /*hidden argument*/NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E_RuntimeMethod_var);
		__this->set_m_ManipulationGestureEvents_3(L_1);
		// NativeArray<WindowsMRNavigationGestureEvent> m_NavigationGestureEvents = new NativeArray<WindowsMRNavigationGestureEvent>(0, Allocator.Persistent);
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165((&L_2), 0, 4, 1, /*hidden argument*/NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165_RuntimeMethod_var);
		__this->set_m_NavigationGestureEvents_4(L_2);
		// NativeArray<WindowsMRTappedGestureEvent> m_TappedGestureEvents = new NativeArray<WindowsMRTappedGestureEvent>(0, Allocator.Persistent);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931((&L_3), 0, 4, 1, /*hidden argument*/NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931_RuntimeMethod_var);
		__this->set_m_TappedGestureEvents_5(L_3);
		// public WindowsMRGestureProvider(WindowsMRGestureSubsystem subsystem)
		Provider__ctor_m36D6E0EA17A1FFCC01D5ADFE398F6B42E128282B(__this, /*hidden argument*/NULL);
		// m_Subsystem = subsystem;
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_4 = ___subsystem0;
		__this->set_m_Subsystem_1(L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_Start_m71387CF62855FEEEBE2CB46B8BA66716D7BF4D8F (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_GesturesStart();
		NativeApi_UnityWindowsMR_GesturesStart_mD15B5D7C73858AB87BC976C1530EC43A3DC5AA14(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_Stop_mDA357182AB707168E52D59A2816764E295091927 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_GesturesStop();
		NativeApi_UnityWindowsMR_GesturesStop_mA3B2988831FDE63BDFA8DAD8956F7F39A02B1283(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_Update_mC450709588DAEAB57ADA028AC5B6D155FA9C3C86 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_GesturesUpdate();
		NativeApi_UnityWindowsMR_GesturesUpdate_mDF9D58D90862ECFA0E652002FC347DBB7F356436(/*hidden argument*/NULL);
		// RetrieveAllGestureEvents();
		WindowsMRGestureProvider_RetrieveAllGestureEvents_m54B05DFA5B516E1274EB32F16CE8BC79BCCAF2D5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveAllGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveAllGestureEvents_m54B05DFA5B516E1274EB32F16CE8BC79BCCAF2D5 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_UnityWindowsMR_GesturesGetHoldGestureEventsPtr_m30D46DEE46BFAC99AE11CE3FCB8752D483A68326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_UnityWindowsMR_GesturesGetManipulationGestureEventsPtr_m9BFCD33223844DA1054DD66EB942E0A6D57FDA66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_UnityWindowsMR_GesturesGetNavigationGestureEventsPtr_m1C933271B3A5F272FC1DA33D2C827B08EC28FE82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_UnityWindowsMR_GesturesGetTappedGestureEventsPtr_m20E33A67B333A9417298FB9D00C026EADAD39EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// RetrieveGestureEvents(NativeApi.UnityWindowsMR_GesturesGetHoldGestureEventsPtr, ref m_HoldGestureEvents);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_0 = (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)il2cpp_codegen_object_new(GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82_il2cpp_TypeInfo_var);
		GetGestureEventsPtrFunction__ctor_m33C2C1337DA78792600E4A26B47DAD9AB10DE5DB(L_0, NULL, (intptr_t)((intptr_t)NativeApi_UnityWindowsMR_GesturesGetHoldGestureEventsPtr_m30D46DEE46BFAC99AE11CE3FCB8752D483A68326_RuntimeMethod_var), /*hidden argument*/NULL);
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_1 = __this->get_address_of_m_HoldGestureEvents_2();
		WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730(__this, L_0, (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_1, /*hidden argument*/WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730_RuntimeMethod_var);
		// RetrieveGestureEvents(NativeApi.UnityWindowsMR_GesturesGetManipulationGestureEventsPtr, ref m_ManipulationGestureEvents);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_2 = (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)il2cpp_codegen_object_new(GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82_il2cpp_TypeInfo_var);
		GetGestureEventsPtrFunction__ctor_m33C2C1337DA78792600E4A26B47DAD9AB10DE5DB(L_2, NULL, (intptr_t)((intptr_t)NativeApi_UnityWindowsMR_GesturesGetManipulationGestureEventsPtr_m9BFCD33223844DA1054DD66EB942E0A6D57FDA66_RuntimeMethod_var), /*hidden argument*/NULL);
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_3 = __this->get_address_of_m_ManipulationGestureEvents_3();
		WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B(__this, L_2, (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_3, /*hidden argument*/WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B_RuntimeMethod_var);
		// RetrieveGestureEvents(NativeApi.UnityWindowsMR_GesturesGetNavigationGestureEventsPtr, ref m_NavigationGestureEvents);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_4 = (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)il2cpp_codegen_object_new(GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82_il2cpp_TypeInfo_var);
		GetGestureEventsPtrFunction__ctor_m33C2C1337DA78792600E4A26B47DAD9AB10DE5DB(L_4, NULL, (intptr_t)((intptr_t)NativeApi_UnityWindowsMR_GesturesGetNavigationGestureEventsPtr_m1C933271B3A5F272FC1DA33D2C827B08EC28FE82_RuntimeMethod_var), /*hidden argument*/NULL);
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_5 = __this->get_address_of_m_NavigationGestureEvents_4();
		WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E(__this, L_4, (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_5, /*hidden argument*/WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E_RuntimeMethod_var);
		// RetrieveGestureEvents(NativeApi.UnityWindowsMR_GesturesGetTappedGestureEventsPtr, ref m_TappedGestureEvents);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_6 = (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)il2cpp_codegen_object_new(GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82_il2cpp_TypeInfo_var);
		GetGestureEventsPtrFunction__ctor_m33C2C1337DA78792600E4A26B47DAD9AB10DE5DB(L_6, NULL, (intptr_t)((intptr_t)NativeApi_UnityWindowsMR_GesturesGetTappedGestureEventsPtr_m20E33A67B333A9417298FB9D00C026EADAD39EC7_RuntimeMethod_var), /*hidden argument*/NULL);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_7 = __this->get_address_of_m_TappedGestureEvents_5();
		WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9(__this, L_6, (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_7, /*hidden argument*/WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9_RuntimeMethod_var);
		// if (m_TappedGestureEvents.Length == 0)
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_8 = __this->get_address_of_m_TappedGestureEvents_5();
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_8)->___m_Length_1);
		if (L_9)
		{
			goto IL_00a5;
		}
	}
	{
		// if (m_ActivateGestureEvents.Length > 0)
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * L_10 = ((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->get_address_of_m_ActivateGestureEvents_0();
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *)L_10)->___m_Length_1);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0131;
		}
	}
	{
		// if (m_ActivateGestureEvents.IsCreated)
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * L_12 = ((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->get_address_of_m_ActivateGestureEvents_0();
		bool L_13;
		L_13 = NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC((NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *)L_12, /*hidden argument*/NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		// m_ActivateGestureEvents.Dispose();
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * L_14 = ((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->get_address_of_m_ActivateGestureEvents_0();
		NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03((NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *)L_14, /*hidden argument*/NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03_RuntimeMethod_var);
	}

IL_0096:
	{
		// m_ActivateGestureEvents = new NativeArray<ActivateGestureEvent>(0, Allocator.Persistent);
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2((&L_15), 0, 4, 1, /*hidden argument*/NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2_RuntimeMethod_var);
		((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->set_m_ActivateGestureEvents_0(L_15);
		// }
		return;
	}

IL_00a5:
	{
		// if (m_ActivateGestureEvents.IsCreated)
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * L_16 = ((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->get_address_of_m_ActivateGestureEvents_0();
		bool L_17;
		L_17 = NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC((NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *)L_16, /*hidden argument*/NativeArray_1_get_IsCreated_mB7CE36711B1D0EBEA7A07A6913BE01D2393FFCEC_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00bd;
		}
	}
	{
		// m_ActivateGestureEvents.Dispose();
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * L_18 = ((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->get_address_of_m_ActivateGestureEvents_0();
		NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03((NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *)L_18, /*hidden argument*/NativeArray_1_Dispose_m565A4AE590F9F3682391E46334F82FF3284BBD03_RuntimeMethod_var);
	}

IL_00bd:
	{
		// m_ActivateGestureEvents = new NativeArray<ActivateGestureEvent>(m_TappedGestureEvents.Length, Allocator.Persistent);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_19 = __this->get_address_of_m_TappedGestureEvents_5();
		int32_t L_20;
		L_20 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_19)->___m_Length_1);
		NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  L_21;
		memset((&L_21), 0, sizeof(L_21));
		NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2((&L_21), L_20, 4, 1, /*hidden argument*/NativeArray_1__ctor_m85C76CF5D67D240F2DBE8ECEE3C209C3E8A1A0F2_RuntimeMethod_var);
		((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->set_m_ActivateGestureEvents_0(L_21);
		// int iActivateGestureEvent = 0;
		V_0 = 0;
		// foreach (var gestureEvent in m_TappedGestureEvents)
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_22 = __this->get_address_of_m_TappedGestureEvents_5();
		Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7  L_23;
		L_23 = NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_22, /*hidden argument*/NativeArray_1_GetEnumerator_m616E7A5B2D4309F4039721743073666EF12C7BEA_RuntimeMethod_var);
		V_1 = L_23;
	}

IL_00e3:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0118;
		}

IL_00e5:
		{
			// foreach (var gestureEvent in m_TappedGestureEvents)
			WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  L_24;
			L_24 = Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C((Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m99BF192EC2E3E66059F32F47963F763ADAFDE53C_RuntimeMethod_var);
			V_2 = L_24;
			// if (gestureEvent.state == GestureState.Started)
			int32_t L_25;
			L_25 = WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)(&V_2), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_25) == ((uint32_t)3))))
			{
				goto IL_0118;
			}
		}

IL_00f7:
		{
			// m_ActivateGestureEvents[iActivateGestureEvent++] =
			//     new ActivateGestureEvent(GetNextGUID(), gestureEvent.state);
			NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * L_26 = ((Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058 *)__this)->get_address_of_m_ActivateGestureEvents_0();
			int32_t L_27 = V_0;
			int32_t L_28 = L_27;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60_il2cpp_TypeInfo_var);
			GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_29;
			L_29 = WindowsMRGestureSubsystem_GetNextGUID_m7F46777B6B24775A4941C17EF123522206CDB54A(/*hidden argument*/NULL);
			int32_t L_30;
			L_30 = WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_inline((WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)(&V_2), /*hidden argument*/NULL);
			ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337  L_31;
			memset((&L_31), 0, sizeof(L_31));
			ActivateGestureEvent__ctor_m7F6889967D16929F4C531763135BBABBF6679B34((&L_31), L_29, L_30, /*hidden argument*/NULL);
			IL2CPP_NATIVEARRAY_SET_ITEM(ActivateGestureEvent_tE62B374FD7C61FB39DBE074BAC40308F033D4337 , ((NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 *)L_26)->___m_Buffer_0, L_28, (L_31));
		}

IL_0118:
		{
			// foreach (var gestureEvent in m_TappedGestureEvents)
			bool L_32;
			L_32 = Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402((Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mC4C29FC7D0FAC552EB1C7EDE0EE26E61DD932402_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_00e5;
			}
		}

IL_0121:
		{
			IL2CPP_LEAVE(0x131, FINALLY_0123);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0123;
	}

FINALLY_0123:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F((Enumerator_tAD38167252C41EAB969D4252F37514E0CEC918D7 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mB26443B14E36AF6080CBC10C87086E03EE08997F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(291)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x131, IL_0131)
	}

IL_0131:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_Destroy_mC91404D26F033BB2B7C7A14FD7E3A35E253FC5FE (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeApi.UnityWindowsMR_GesturesDestroy();
		NativeApi_UnityWindowsMR_GesturesDestroy_m84D2AA609A0B5422DED5FCBD5AE4BEB14B858146(/*hidden argument*/NULL);
		// if (m_HoldGestureEvents.IsCreated)
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_0 = __this->get_address_of_m_HoldGestureEvents_2();
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_0, /*hidden argument*/NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// m_HoldGestureEvents.Dispose();
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_2 = __this->get_address_of_m_HoldGestureEvents_2();
		NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_2, /*hidden argument*/NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A_RuntimeMethod_var);
	}

IL_001d:
	{
		// if (m_ManipulationGestureEvents.IsCreated)
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_3 = __this->get_address_of_m_ManipulationGestureEvents_3();
		bool L_4;
		L_4 = NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_3, /*hidden argument*/NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// m_ManipulationGestureEvents.Dispose();
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_5 = __this->get_address_of_m_ManipulationGestureEvents_3();
		NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_5, /*hidden argument*/NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2_RuntimeMethod_var);
	}

IL_0035:
	{
		// if (m_NavigationGestureEvents.IsCreated)
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_6 = __this->get_address_of_m_NavigationGestureEvents_4();
		bool L_7;
		L_7 = NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_6, /*hidden argument*/NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// m_NavigationGestureEvents.Dispose();
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_8 = __this->get_address_of_m_NavigationGestureEvents_4();
		NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_8, /*hidden argument*/NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE_RuntimeMethod_var);
	}

IL_004d:
	{
		// if (m_TappedGestureEvents.IsCreated)
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_9 = __this->get_address_of_m_TappedGestureEvents_5();
		bool L_10;
		L_10 = NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_9, /*hidden argument*/NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		// m_TappedGestureEvents.Dispose();
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_11 = __this->get_address_of_m_TappedGestureEvents_5();
		NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_11, /*hidden argument*/NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517_RuntimeMethod_var);
	}

IL_0065:
	{
		// base.Destroy();
		Provider_Destroy_m74F556AB8D3570C080F37A85F08E81964726962A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::SetEnableManipulationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureProvider_SetEnableManipulationGesture_m648642E50116C3D6C0196DD6DC930EEC5FC64BC4 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityWindowsMR_GesturesSetEnableManipulationGesture(enable);
		bool L_0 = ___enable0;
		bool L_1;
		L_1 = NativeApi_UnityWindowsMR_GesturesSetEnableManipulationGesture_mFF2F312FA39B91FBAA9448DBF3F4C43A9A6EF0CF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::SetEnableNavigationGesture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMRGestureProvider_SetEnableNavigationGesture_mA9956AD7DB20A6E09BDE5A5BC465A609F2FE683C (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityWindowsMR_GesturesSetEnableNavigationGesture(enable);
		bool L_0 = ___enable0;
		bool L_1;
		L_1 = NativeApi_UnityWindowsMR_GesturesSetEnableNavigationGesture_mF29AE1D27ECA752AFB228C7230171808B9A61A6B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_holdGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  WindowsMRGestureProvider_get_holdGestureEvents_mC4F61F0F923190C315A7C1FF4EC47FC9E848CE75 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRHoldGestureEvent> holdGestureEvents { get { return m_HoldGestureEvents; } }
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_0 = __this->get_m_HoldGestureEvents_2();
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_manipulationGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  WindowsMRGestureProvider_get_manipulationGestureEvents_mF3C0B8F022717BA75E60B4D25D5AFE3BBD7499D1 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRManipulationGestureEvent> manipulationGestureEvents { get { return m_ManipulationGestureEvents; } }
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_0 = __this->get_m_ManipulationGestureEvents_3();
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_navigationGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  WindowsMRGestureProvider_get_navigationGestureEvents_m4396B2839123D403BC77F706BD35C75CF2C48739 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRNavigationGestureEvent> navigationGestureEvents { get { return m_NavigationGestureEvents; } }
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_0 = __this->get_m_NavigationGestureEvents_4();
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::get_tappedGestureEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  WindowsMRGestureProvider_get_tappedGestureEvents_m536D1C5781E7879B343D029B81F8F024153D3704 (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRTappedGestureEvent> tappedGestureEvents { get { return m_TappedGestureEvents; } }
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_0 = __this->get_m_TappedGestureEvents_5();
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
// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRInput/NativeApi::GetCountOfSourceStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCountOfSourceStates_mABBFF7052B8B3EC6270F26A42BAE0D9DC144E7FD (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "GetCountOfSourceStates", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetCountOfSourceStates)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRInput/NativeApi::GetAllSourceStates(System.IntPtr[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_GetAllSourceStates_mA6A2FE622961D26D78A6CA4835B914AB7E3569B3 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___sourceStates0, int32_t ___countSourceStates1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "GetAllSourceStates", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___sourceStates0' to native representation
	intptr_t* ____sourceStates0_marshaled = NULL;
	if (___sourceStates0 != NULL)
	{
		____sourceStates0_marshaled = reinterpret_cast<intptr_t*>((___sourceStates0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetAllSourceStates)(____sourceStates0_marshaled, ___countSourceStates1);
	#else
	il2cppPInvokeFunc(____sourceStates0_marshaled, ___countSourceStates1);
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRInput/NativeApi::ReleaseAllSourceStates(System.IntPtr[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_ReleaseAllSourceStates_m708167F26A3A19F5D78FFE10C1014E7AC2281AF6 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___sourceStates0, int32_t ___countSourceStates1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "ReleaseAllSourceStates", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___sourceStates0' to native representation
	intptr_t* ____sourceStates0_marshaled = NULL;
	if (___sourceStates0 != NULL)
	{
		____sourceStates0_marshaled = reinterpret_cast<intptr_t*>((___sourceStates0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(ReleaseAllSourceStates)(____sourceStates0_marshaled, ___countSourceStates1);
	#else
	il2cppPInvokeFunc(____sourceStates0_marshaled, ___countSourceStates1);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_construct_mA759BF21A6479DB12E6693C551FC62118178D312 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_session_construct", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_session_construct)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_destroy_mC51B60FB07A5F3070CD69136332A784937CE48A4 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_session_destroy", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_session_destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_pause_m830A1D704419F88B632BCFD44CC17D001783DFD0 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_session_pause", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_session_pause)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_resume_m86C55334A25E3B42D05046DCD2447E69DFCFB7F6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_session_resume", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_session_resume)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityWindowsMR_session_reset_m9B279F995916B562A1E9325C5F7A0B768914FE4F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_session_reset", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityWindowsMR_session_reset)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_getTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityWindowsMR_session_getTrackingState_mC0EFE8A6102DD5DF5E2D5B1D9128653EE8C0DABF (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_session_getTrackingState", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_session_getTrackingState)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/NativeApi::UnityWindowsMR_session_getNotTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityWindowsMR_session_getNotTrackingReason_m7759EF196D0808003BE25123DB20B79E0FEBE1B6 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WindowsMRXRSDK"), "UnityWindowsMR_session_getNotTrackingReason", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WindowsMRXRSDK_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityWindowsMR_session_getNotTrackingReason)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider__ctor_m4A3FF4D4655B462A0071F46643E7BA4092A2E9D2 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// public WindowsMRProvider()
		Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE(__this, /*hidden argument*/NULL);
		// NativeApi.UnityWindowsMR_session_construct();
		NativeApi_UnityWindowsMR_session_construct_mA759BF21A6479DB12E6693C551FC62118178D312(/*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * WindowsMRProvider_GetAvailabilityAsync_m53FA642CFCA72479E1C201A5A914CF6024BB2561 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_m0AB7E3BD2A32B35CE4834A48F5D82D81CBFE2CEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var availability =
		// SessionAvailability.Installed | SessionAvailability.Supported;
		// return Promise<SessionAvailability>.CreateResolvedPromise(availability);
		Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * L_0;
		L_0 = Promise_1_CreateResolvedPromise_m0AB7E3BD2A32B35CE4834A48F5D82D81CBFE2CEF(6, /*hidden argument*/Promise_1_CreateResolvedPromise_m0AB7E3BD2A32B35CE4834A48F5D82D81CBFE2CEF_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRProvider_get_trackingState_mB83B60D84CDD264A1DCF84FE4C1D1D7F450905CB (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityWindowsMR_session_getTrackingState();
		int32_t L_0;
		L_0 = NativeApi_UnityWindowsMR_session_getTrackingState_mC0EFE8A6102DD5DF5E2D5B1D9128653EE8C0DABF(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMRProvider_get_notTrackingReason_m2B5E3A4B952885ED10C738020E392E53284703B1 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityWindowsMR_session_getNotTrackingReason();
		int32_t L_0;
		L_0 = NativeApi_UnityWindowsMR_session_getNotTrackingReason_m7759EF196D0808003BE25123DB20B79E0FEBE1B6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_Destroy_m3483C848E702BDCB773CDA06EB3A80D2347938EB (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_session_destroy();
		NativeApi_UnityWindowsMR_session_destroy_mC51B60FB07A5F3070CD69136332A784937CE48A4(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_Stop_m5C2A414212AABD3B3757124E6DEF12A6070A0C73 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_session_pause();
		NativeApi_UnityWindowsMR_session_pause_m830A1D704419F88B632BCFD44CC17D001783DFD0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_Start_m1ADCFD1C8E426AC99AB4FF97BBD1B915B31E56E5 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_session_resume();
		NativeApi_UnityWindowsMR_session_resume_m86C55334A25E3B42D05046DCD2447E69DFCFB7F6(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_Reset_m0EE77F20778AEA40B270F34A5D5D10AA70667895 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityWindowsMR_session_reset();
		NativeApi_UnityWindowsMR_session_reset_m9B279F995916B562A1E9325C5F7A0B768914FE4F(/*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WindowsMRProvider_get_requestedFeatures_mCD8BEFE1EAB16E348DC2F9BE4103E2EBA54D4355 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// public override Feature requestedFeatures => FeatureApi.RequestedFeatures;
		uint64_t L_0;
		L_0 = FeatureApi_get_RequestedFeatures_mAFB4D96A03DC17515D654028C3ACC5A4939B0848(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WindowsMRProvider_get_requestedTrackingMode_m4026DE438DCD67C1A3573A52AC310DD333AF5A64 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	{
		// get => FeatureApi.RequestedFeatures;
		uint64_t L_0;
		L_0 = FeatureApi_get_RequestedFeatures_mAFB4D96A03DC17515D654028C3ACC5A4939B0848(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRProvider_set_requestedTrackingMode_mDF1576DD78C9D8F332BA26FC76B6A0A22E6EE5F5 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// FeatureApi.SetFeatureRequested(Feature.AnyTrackingMode, false);
		FeatureApi_SetFeatureRequested_m7C3058BF2C80DFA2A0940DB12CE669720D933B3C(((int64_t)((int64_t)((int32_t)12))), (bool)0, /*hidden argument*/NULL);
		// FeatureApi.SetFeatureRequested(value, true);
		uint64_t L_0 = ___value0;
		FeatureApi_SetFeatureRequested_m7C3058BF2C80DFA2A0940DB12CE669720D933B3C(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WindowsMRProvider_get_currentTrackingMode_m479CB3BF04B2658E7E2219D5B6A3651228E62E38 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (trackingState == TrackingState.Tracking)
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		// switch (notTrackingReason)
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason() */, __this);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// return Feature.RotationOnly;
		return (uint64_t)(((int64_t)((int64_t)4)));
	}

IL_001a:
	{
		// return Feature.PositionAndRotation;
		return (uint64_t)(((int64_t)((int64_t)8)));
	}

IL_001d:
	{
		// return Feature.None;
		return (uint64_t)(((int64_t)((int64_t)0)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.WindowsMR.WindowsMRSessionSubsystem/WindowsMRProvider::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  WindowsMRProvider_GetConfigurationDescriptors_mBD1E8AB093A51E6685E8916AC39747838DC11077 (WindowsMRProvider_t12F88C5F666DCD9EEED65B9C0CA6C3755F673372 * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var descriptors = new NativeArray<ConfigurationDescriptor>(1, allocator);
		int32_t L_0 = ___allocator0;
		NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440((NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA *)(&V_0), 1, L_0, 1, /*hidden argument*/NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_RuntimeMethod_var);
		// descriptors[0] = new ConfigurationDescriptor(
		//     new IntPtr(1),
		//     Feature.Meshing | Feature.PositionAndRotation,
		//     0);
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097((&L_1), 1, /*hidden argument*/NULL);
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ConfigurationDescriptor__ctor_m4EE8BAE7AF1CE6855C9C8B1AA541928A5450E8FA((&L_2), (intptr_t)L_1, ((int64_t)((int64_t)((int32_t)4194312))), 0, /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 , ((NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA *)(&V_0))->___m_Buffer_0, 0, (L_2));
		// return descriptors;
		NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  L_3 = V_0;
		return L_3;
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
IL2CPP_EXTERN_C  void* DelegatePInvokeWrapper_GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * __this, int32_t* ___gesturesLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc)(int32_t*, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	void* returnValue = il2cppPInvokeFunc(___gesturesLength0, ___elementSize1);

	return returnValue;
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetGestureEventsPtrFunction__ctor_m33C2C1337DA78792600E4A26B47DAD9AB10DE5DB (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void* UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction::Invoke(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* GetGestureEventsPtrFunction_Invoke_m9183A48EEB89837ED13990399767C664E943AA4E (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * __this, int32_t* ___gesturesLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	void* result = NULL;
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
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
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
				typedef void* (*FunctionPointerType) (int32_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___gesturesLength0, ___elementSize1, targetMethod);
			}
			else
			{
				// closed
				typedef void* (*FunctionPointerType) (void*, int32_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___gesturesLength0, ___elementSize1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(targetMethod, targetThis, ___gesturesLength0, ___elementSize1);
					else
						result = GenericVirtFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(targetMethod, targetThis, ___gesturesLength0, ___elementSize1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___gesturesLength0, ___elementSize1);
					else
						result = VirtFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___gesturesLength0, ___elementSize1);
				}
			}
			else
			{
				typedef void* (*FunctionPointerType) (void*, int32_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___gesturesLength0, ___elementSize1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction::BeginInvoke(System.Int32&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetGestureEventsPtrFunction_BeginInvoke_m1AAE64ECB80C91BD2A96E96A8BDE5FBC17D1742D (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * __this, int32_t* ___gesturesLength0, int32_t* ___elementSize1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___gesturesLength0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___elementSize1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void* UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction::EndInvoke(System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* GetGestureEventsPtrFunction_EndInvoke_m27E0BAC2A76C7237349C47306B57DE3B350E5630 (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * __this, int32_t* ___gesturesLength0, int32_t* ___elementSize1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___gesturesLength0,
	___elementSize1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return (void*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_airTap_mD76A1F21FB88A0E798D08ABF8F792338414E9A45_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl airTap { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CairTapU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_trackingState_m9E145AEC39B7197FA7D42CDEC8F7F3A26AAF5A51_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_isTracked_mB8F8ACCBA6313BB406FC1BA89BCF815835895F41_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_devicePosition_mA8B23495D517C25573842AE84EA35F1E1C2ADD29_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_deviceRotation_m4C4864381A83797DA0F80B40E39636ADE99988C8_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_deviceVelocity_mC3D795321AD7C28FDC1CC326626B823E9ACF6FC2_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_sourceLossRisk_m7F9E12F8CC963EE97D563296D0FDCB013FE38D38_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl sourceLossRisk { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CsourceLossRiskU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_sourceLossMitigationDirection_m78B4BE4F335BD40EC9049D67F04CE14D9D821D74_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control sourceLossMitigationDirection { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CsourceLossMitigationDirectionU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HololensHand_set_positionAccuracy_m39DCC8F5A8EE64A8DBA93CC4504204FCB7C1E02A_inline (HololensHand_t95681D1B89FD7FB988895CB96106B5BAE993D022 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CpositionAccuracyU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_userPresence_m6A58AA1EDABDF0984DC9422D04949E43F36E7530_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_trackingState_m7570BA3B82AD38031A7D37E31D0AE7414B1A371A_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_isTracked_m25680C361DD83BD311C1F47B472713BC5B005003_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_devicePosition_mC6549F4009B66D12391049CC0F699E0B119B2CE0_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_deviceRotation_m3C4A6F18E2E21511732881C35010DB9DC14B3164_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_leftEyePosition_mBB585B9FB933923AD50154774562E592C4D7E332_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_leftEyeRotation_m5C06DB9C4AF90D4D9948DE5CD0C15320AA974D3D_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_rightEyePosition_m09989F30957D48D3F6F78143ECE14475B65EA5EB_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_rightEyeRotation_mBF7EEB6CC37E166833A98816371D34956B61E9BC_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_centerEyePosition_mE824E4C413E30493A4E53CAAC941D2A18B2C5B91_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_centerEyeRotation_mE1FCA23DEED0B0DC0AFACE4464FD358D8AA8BDFD_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRHMD_set_positionAccuracy_m963683B089DF49286E2A66F3060579F2F2739090_inline (WMRHMD_t383FD84EEB4BA62C04C8023721C130C5CC05AA0C * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CpositionAccuracyU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_joystick_m43CDB2579A1844942E1EE7B698EF0E9FDC5836DB_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control joystick { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CjoystickU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_trigger_mFE74869FBC515D3DDB21329EB3696F0257423192_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpad_m46CFBA6A76419A66F50047515F8DC139E5B2FE2F_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t58F58AF5A8B5A5A67E95AB8182767F47BAD0A429 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_grip_m32D70F2CE6DEB907295027EEBE60CF769C2473F0_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_gripPressed_m8028F9E39EC53EB6706C966275F5539C149CB4AC_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_menu_mB51CC6DD51E7A60A9EDA2FEB172FD37899452CED_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl menu { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CmenuU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_joystickClicked_m1F99F94E33610E33A8B032AE333AA66413D6AF76_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl joystickClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CjoystickClickedU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_triggerPressed_mFFE76D8BB9983376A10346E3636FBEBB71B1893F_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpadClicked_m9F8CAE8D9523C1D4F93F571903F5644A6B2FCA17_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_touchpadTouched_m36780109F3A9CB8DEC797CAF13D919866A45F828_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_trackingState_m73DC0784EEDC0D2A1A4CFA4BD786F6750DE551DB_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_isTracked_m485238D8DF970F398D87EB7E94576F82F8FE86BB_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_tEA30264B8E83AD91CD0A3B3A039E6B61AB5AB3E2 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_devicePosition_m385501795277CDB1EBF9F8B1BF6377DEBB6961C4_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceRotation_m2D6D9506FBC8F917081B2986027894636AC39202_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceVelocity_m71359CEAAFEF272B92613FABAA2DBB8168EB3DF4_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_deviceAngularVelocity_m4C2CDFFEA021435F74C584C446509F1CC0A5FB3D_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_batteryLevel_m4C17A2DC480E60AD26FAA40917AC657DE524515C_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl batteryLevel { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CbatteryLevelU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_sourceLossRisk_m8DE499FDF98EE56888A9E42D7FEF69412ACA274E_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl sourceLossRisk { get; private set; }
		AxisControl_t02CF5F5CACB41598E564257B66BCDDECACB1968E * L_0 = ___value0;
		__this->set_U3CsourceLossRiskU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_sourceLossMitigationDirection_m62041F0243D5ED74DB2C1F975FC9A8ADA0774981_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control sourceLossMitigationDirection { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CsourceLossMitigationDirectionU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_pointerPosition_m162EF7814C4C69C62DF310FC88337D41E2292C02_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_tA0F3D996FF33E565EB5B92D31125C9A2C68AA56E * L_0 = ___value0;
		__this->set_U3CpointerPositionU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_pointerRotation_m544C1999B5AD6A3D0D30979AD5F56793AD0C8A68_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_tA4F8DBF572B5900EFF7F25813A8EF243B083F525 * L_0 = ___value0;
		__this->set_U3CpointerRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WMRSpatialController_set_positionAccuracy_mBD0085A4F701FEBCC93CF05DDBC66C905458D58E_inline (WMRSpatialController_t41CF610FC58697A3F5D3070E0D2A5557915901C6 * __this, IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl positionAccuracy { get; private set; }
		IntegerControl_t79982C881F51584F0C7F50E3022D9655F1A398EF * L_0 = ___value0;
		__this->set_U3CpositionAccuracyU3Ek__BackingField_64(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  WindowsMRGestureProvider_get_holdGestureEvents_mC4F61F0F923190C315A7C1FF4EC47FC9E848CE75_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRHoldGestureEvent> holdGestureEvents { get { return m_HoldGestureEvents; } }
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_0 = __this->get_m_HoldGestureEvents_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  WindowsMRGestureProvider_get_manipulationGestureEvents_mF3C0B8F022717BA75E60B4D25D5AFE3BBD7499D1_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRManipulationGestureEvent> manipulationGestureEvents { get { return m_ManipulationGestureEvents; } }
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_0 = __this->get_m_ManipulationGestureEvents_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  WindowsMRGestureProvider_get_navigationGestureEvents_m4396B2839123D403BC77F706BD35C75CF2C48739_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRNavigationGestureEvent> navigationGestureEvents { get { return m_NavigationGestureEvents; } }
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_0 = __this->get_m_NavigationGestureEvents_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  WindowsMRGestureProvider_get_tappedGestureEvents_m536D1C5781E7879B343D029B81F8F024153D3704_inline (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<WindowsMRTappedGestureEvent> tappedGestureEvents { get { return m_TappedGestureEvents; } }
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_0 = __this->get_m_TappedGestureEvents_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mE23FF76031CA3903EF8F85D49DBF7407DC6E5DFB_inline (Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m5965A6CDF66B1D7AF30028F3822077B1788A78B8_inline (Cinfo_t54ECED2FE09846D0F2F1981C3232E3DB2A87F227 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t GestureId_get_subId1_m547C714F376171ADAA9449F4E35F2E6161DB9364_inline (GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SubId1; }
		uint64_t L_0 = __this->get_m_SubId1_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureId_set_subId1_m666DE846D8E289BBCE2CFD8DCE41E294EC1BC00C_inline (GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SubId1 = value; }
		uint64_t L_0 = ___value0;
		__this->set_m_SubId1_1(L_0);
		// set { m_SubId1 = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * WindowsMRGestures_get_gestureSubsystem_mCB77A743ECC56D5A40ECFBC2EDCAAB106C16FE44_inline (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, const RuntimeMethod* method)
{
	{
		// public WindowsMRGestureSubsystem gestureSubsystem { get; private set; }
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_0 = __this->get_U3CgestureSubsystemU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMRGestures_set_gestureSubsystem_m2F5C44E348B4AB1E27D3EECEF2FCDE70BC23261D_inline (WindowsMRGestures_t21669F9A9F15DB28BD28EC3E13E23F081B30AF73 * __this, WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___value0, const RuntimeMethod* method)
{
	{
		// public WindowsMRGestureSubsystem gestureSubsystem { get; private set; }
		WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * L_0 = ___value0;
		__this->set_U3CgestureSubsystemU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRHoldGestureEvent_get_id_m6D8F5DE158524197B3E9A921C2274C29D8ED6AF3_inline (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRHoldGestureEvent_get_state_mEE42F56DDE2EC21257E7122B992E55BB062C2D4F_inline (WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRManipulationGestureEvent_get_id_mA4D42C442AE74BDCB6C2A3AE10096458C86B0F00_inline (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRManipulationGestureEvent_get_state_mAE0B1DD206F527881FD05F5C0A02A13D0BB3D8C7_inline (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRManipulationGestureEvent_get_cumulativeDelta_m8159C668C6A2E207801668C9961ADCCEE03B383F_inline (WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 cumulativeDelta { get { return m_CumulativeDelta; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_CumulativeDelta_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRNavigationGestureEvent_get_id_m6AA1C10874F845A4832FCB7352A8E4A200737A4F_inline (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRNavigationGestureEvent_get_state_m85B727B4B39939571352B5FBC1BEBBDF2723895F_inline (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMRNavigationGestureEvent_get_normalizedOffset_m10CD89AAAA3020E56E087B2D349790C82005A343_inline (WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 normalizedOffset { get { return m_NormalizedOffset; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NormalizedOffset_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  WindowsMRTappedGestureEvent_get_id_mCF2F486894D4DDF592B5CFFE918F3F1E764911F9_inline (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	{
		// public GestureId id { get { return m_Id; } }
		GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_get_state_mF6039113078438AC618BDD0451A05A1F72566A52_inline (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	{
		// public GestureState state { get { return m_State; } }
		int32_t L_0 = __this->get_m_State_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMRTappedGestureEvent_get_tappedCount_m1C3775FCF65723A87630119978CCA1AB81769136_inline (WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 * __this, const RuntimeMethod* method)
{
	{
		// public int tappedCount { get { return m_TappedCount; } }
		int32_t L_0 = __this->get_m_TappedCount_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
