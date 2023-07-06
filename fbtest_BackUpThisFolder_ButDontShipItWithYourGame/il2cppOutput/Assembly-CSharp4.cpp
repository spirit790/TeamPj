﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE;
// System.Action`1<UnityEngine.AndroidJavaObject>
struct Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E;
// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49;
// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4;
// System.Action`2<System.Int32Enum,System.Boolean>
struct Action_2_tDAF49DC01D1289DFA5F837D90BCC3C9C08C024F9;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean>
struct Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>
struct Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState>
struct Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6;
// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E;
// System.Func`2<System.Boolean,System.Object>
struct Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_tEA17B83295B756EFB23F3357537A3AAC9B4D9732;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct KeyCollection_tA378CC5359EAE5A52276413B644AB21701CF32A6;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct ValueCollection_t1ACC8B8AB7C4F36DA5DA534EF772981729D14C24;
// System.Action`1<System.Boolean>[]
struct Action_1U5BU5D_tB4049DA1D39B30139817A3CFA2949CC0FFF2CA62;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,GooglePlayGames.BasicApi.SignInStatus>[]
struct EntryU5BU5D_t636D22DEC08114A9642837BF7342E92CC2E490F8;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t768B073D6DC6441E657126959F7E26272CE5A998;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// GooglePlayGames.Android.AndroidTokenClient
struct AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B;
// GooglePlayGames.Android.AndroidVideoClient
struct AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Suriyun.AnimatorController
struct AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener
struct CaptureOverlayStateListener_t28D06D8FFD23A0B65384088FFE605863AFD40AD5;
// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_tCD3678AA32D08217260B609FD2EE7F3E7270D94B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E;
// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GooglePlayGames.BasicApi.Events.Event
struct Event_t35DF2427C1F49CB119E897612BB4FABF4D731538;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_tEA3794D00B8FA3D00EA267F2174A0E86BB1E0DF5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_tA303E9DD8E277B5C4706952A74CC2EDE1CD20F9E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_t4FF3E7ABAE11AD7C1B7465E061F42B9334FAE061;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t2CB29BC933802DD7667C202D450D171D11F4A2DB;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_tCE3F8631B6CC4D2A868339617EEB8EB74E3D27E4;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_t91324CF06A2AC6F7B174C66117F51893B3659DBB;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t131F8FE87633785662CE1446FCC319E9E81D49AA;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t95B1CFEB3094570AFF240C7CDD61A3A5D0169E86;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3;
// GooglePlayGames.BasicApi.Video.IVideoClient
struct IVideoClient_t3D06A3F47409B59D4104A28D615C5015C16C6E67;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1;
// GooglePlayGames.OurUtils.Logger
struct Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// GooglePlayGames.OurUtils.NearbyHelperObject
struct NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// LayerLab.PanelControlSimpleCasual
struct PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF;
// LayerLab.PanelSimpleCasual
struct PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993;
// GooglePlayGames.BasicApi.Player
struct Player_tC6EBE8DB490DB6E864912AB1EA4C847C840AD785;
// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_tC19A28127264E07C834F4E422139AAA21B631BF1;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE;
// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GooglePlayGames.Android.AndroidTokenClient/<>c
struct U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B;
// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t17B5BABECA273D5142C5DDBAEBBFE26808495321;
// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tF81E721378ECF751181551BA3E8BD12E9932FCE5;
// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t91A6F48EB87CC7805712DFD41A97498B5610CEB4;
// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t33A5F5C2E3E729BD1276985E5A561EB33C40178F;
// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t4AD0554723A1FC43ECA283FBDE2DA032A57E079B;
// GooglePlayGames.Android.AndroidTokenClient/ResultCallbackProxy
struct ResultCallbackProxy_t133DFD028F5EF12607CD646FF9D3A34E420EDF44;
// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1;
// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC;
// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882;
// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy
struct OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6;
// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD;

IL2CPP_EXTERN_C RuntimeClass* Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaptureOverlayStateListener_t28D06D8FFD23A0B65384088FFE605863AFD40AD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INearbyConnectionClient_tCE3F8631B6CC4D2A868339617EEB8EB74E3D27E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInStatus_tEA604384246FE5BD10B6703AD004E7C780BAF714_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1003366035A114F03685FC092206E4A0C0754F01;
IL2CPP_EXTERN_C String_t* _stringLiteral120F94D6065CAF0D0F3DD64A963FBDA43A3F81AC;
IL2CPP_EXTERN_C String_t* _stringLiteral1372FD52604B6438A612C6D111E9EF3A2675FAA0;
IL2CPP_EXTERN_C String_t* _stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F;
IL2CPP_EXTERN_C String_t* _stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507;
IL2CPP_EXTERN_C String_t* _stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5;
IL2CPP_EXTERN_C String_t* _stringLiteral17698B1A5B3CA25CC9708FAF8FBB97619723B14F;
IL2CPP_EXTERN_C String_t* _stringLiteral22BA49AFD9A87003D02B059AC208947DAF29084B;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB;
IL2CPP_EXTERN_C String_t* _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
IL2CPP_EXTERN_C String_t* _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
IL2CPP_EXTERN_C String_t* _stringLiteral378BF88C92346490BA52EC1111E399A5E7AB5183;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1F6E4C11E72249474E2C48EB4662A7AC7ADB5F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral404DFB14BA6605D644114E20684ED60AA0759437;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral43C0FB3B7A68B702131E0AACF7A075DD50FF0384;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31;
IL2CPP_EXTERN_C String_t* _stringLiteral520545749907F16743D700A80C93EFA48118FDE2;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93;
IL2CPP_EXTERN_C String_t* _stringLiteral54BBC5A7505DB79E77AA0E8FE2EDF7EB2EA928B2;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral5B1C085F71C4070B0B7C0880C5020B683A6BFB83;
IL2CPP_EXTERN_C String_t* _stringLiteral606A1AABCD700AA996E7EBA6688387F0DBE20EF8;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF;
IL2CPP_EXTERN_C String_t* _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
IL2CPP_EXTERN_C String_t* _stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral6253CC983478A479C24262DF4DDBF2DAB16C463C;
IL2CPP_EXTERN_C String_t* _stringLiteral6742EC84DE7F9B91093751AE5287C5C1D90E57ED;
IL2CPP_EXTERN_C String_t* _stringLiteral7819FC375E0F52C351E985B53E2C825494EC3897;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral7BFFFD5E5A2B4420619D29806257E528B6964E43;
IL2CPP_EXTERN_C String_t* _stringLiteral7C451AC3EB5AB025342585D935B8CAF664FF385C;
IL2CPP_EXTERN_C String_t* _stringLiteral804A2CF82871B4F36D3881FCDE8C2C7F8726DEB6;
IL2CPP_EXTERN_C String_t* _stringLiteral86B61F86185DC25AC11B503EE1E0D6F709B4BD77;
IL2CPP_EXTERN_C String_t* _stringLiteral888EAA97FAA4CBFFEAEEE42DD7BB7FEBEBD470F1;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA;
IL2CPP_EXTERN_C String_t* _stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB17A217F6DB5267748F611C3A187AE848CA04E23;
IL2CPP_EXTERN_C String_t* _stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A5CAFB5426AD10E32B176352988E24E571AD10;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC28C5B6F212B87DD5D4BBE6BE111D3BF3692E70C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5762E217B22F581454705E13D4B8A8185479B21;
IL2CPP_EXTERN_C String_t* _stringLiteralC66C41931BF024C6C7E8BB259A45E8D53D7BA543;
IL2CPP_EXTERN_C String_t* _stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551;
IL2CPP_EXTERN_C String_t* _stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A;
IL2CPP_EXTERN_C String_t* _stringLiteralC815A6FEF415BAA9078EA2AB638E7B53F59A559D;
IL2CPP_EXTERN_C String_t* _stringLiteralC9861F4BC5A133A7EE9A138188A5EFC85D984782;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68;
IL2CPP_EXTERN_C String_t* _stringLiteralCE38144E371DD18AF923733A68E7D8175974B938;
IL2CPP_EXTERN_C String_t* _stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711;
IL2CPP_EXTERN_C String_t* _stringLiteralD1579554934634AF55E6B2C6726E0ACC04014BCE;
IL2CPP_EXTERN_C String_t* _stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37;
IL2CPP_EXTERN_C String_t* _stringLiteralDA75321DFBFD22359B263C653BD5A0C99D07334D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA787AC3068B0892B7FD21A67E78D21FF8BE5D7C;
IL2CPP_EXTERN_C String_t* _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8;
IL2CPP_EXTERN_C String_t* _stringLiteralDE3298FBB59A4FF58406912DE9FC212BF5689F5C;
IL2CPP_EXTERN_C String_t* _stringLiteralE025A661FB50E91883AAEEDA0318C05DD9C9A0A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A;
IL2CPP_EXTERN_C String_t* _stringLiteralF1307E7CD4CE5634DB752AA2E0A22C312E260865;
IL2CPP_EXTERN_C String_t* _stringLiteralF51C2D096ED0ED7BF8E8FA013B27A916E4B3F7E0;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF60DDE06C2C9D09E97ED4FEB8CA18A3747827F5;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_mB4062A6E48F4E8553BC74CA631E839BC717089E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidTaskUtils_AddOnSuccessListener_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5989481BDC01F0DDDD8B935341308F01B637BB7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C089188A00A8845C6BD826CE5F173BAC0C1A220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_m6AF894FC44EECE4AD3A00E20FBC9C81E086688D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_m4B29F48F0C9CB0D18425D9B562C73E4B5CD91C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisString_t_m3CC37B730079B7A0A95DC58F69516F7A8FB90867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_mA0FBFEDD94712971577C10D1A65DFD74D5C0862A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_m581374DDC3697BCC02BAC5351641E080A90AE08E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_GetSubsetBytes_m63F7794B80598A634D0049A011F8E61CC0663354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToLogMessageU3Eb__12_0_mF0E710E5F2B2A31A7ABF4B89846BB5744AAAEBD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA5758E56CB1B23A744CEEAC3EB46E9303FDD0077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_mD66DC02322E3F50E5D4AD5B23371EF04089DFC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3ConCaptureOverlayStateChangedU3Eb__0_m708AA0DB285E5E12F5DF32C5C61BC49F1AF68550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__0_m4E0E3218662E79E1FF5FEB3B7DBE86D13741C04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__1_m8DBF863527582635DA88F1A68D8DCCC063275BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__0_m7928765123103A94B8A9ABECE23CD652D3CCEE26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__1_mBCA05E5380125763D765C4ECEB801EA6A14EFE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__0_mD8EE3C2B721D5B4D9C6ACD0D68B1CC526167DA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__1_m89EEABB4A4D09C744A05BA02A337F49D0A691B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_mA5A0CBE09F5691D3C12CCB0057775A97E304340A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m5F859C2C9AECCC5BA69DC0D6289997609A1740A3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91;
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t636D22DEC08114A9642837BF7342E92CC2E490F8* ____entries_1;
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
	KeyCollection_tA378CC5359EAE5A52276413B644AB21701CF32A6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1ACC8B8AB7C4F36DA5DA534EF772981729D14C24* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_tB4049DA1D39B30139817A3CFA2949CC0FFF2CA62* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// GooglePlayGames.Android.AndroidTokenClient
struct AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.Android.AndroidTokenClient::requestEmail
	bool ___requestEmail_1;
	// System.Boolean GooglePlayGames.Android.AndroidTokenClient::requestAuthCode
	bool ___requestAuthCode_2;
	// System.Boolean GooglePlayGames.Android.AndroidTokenClient::requestIdToken
	bool ___requestIdToken_3;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.Android.AndroidTokenClient::oauthScopes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___oauthScopes_4;
	// System.String GooglePlayGames.Android.AndroidTokenClient::webClientId
	String_t* ___webClientId_5;
	// System.Boolean GooglePlayGames.Android.AndroidTokenClient::forceRefresh
	bool ___forceRefresh_6;
	// System.Boolean GooglePlayGames.Android.AndroidTokenClient::hidePopups
	bool ___hidePopups_7;
	// System.String GooglePlayGames.Android.AndroidTokenClient::accountName
	String_t* ___accountName_8;
	// UnityEngine.AndroidJavaObject GooglePlayGames.Android.AndroidTokenClient::account
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___account_9;
	// System.String GooglePlayGames.Android.AndroidTokenClient::email
	String_t* ___email_10;
	// System.String GooglePlayGames.Android.AndroidTokenClient::authCode
	String_t* ___authCode_11;
	// System.String GooglePlayGames.Android.AndroidTokenClient::idToken
	String_t* ___idToken_12;
};

// GooglePlayGames.Android.AndroidVideoClient
struct AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Android.AndroidVideoClient::mVideosClient
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___mVideosClient_0;
	// System.Boolean GooglePlayGames.Android.AndroidVideoClient::mIsCaptureSupported
	bool ___mIsCaptureSupported_1;
	// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy GooglePlayGames.Android.AndroidVideoClient::mOnCaptureOverlayStateListenerProxy
	OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* ___mOnCaptureOverlayStateListenerProxy_2;
};

// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_tCD3678AA32D08217260B609FD2EE7F3E7270D94B  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.Events.Event
struct Event_t35DF2427C1F49CB119E897612BB4FABF4D731538  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.Events.Event::mId
	String_t* ___mId_0;
	// System.String GooglePlayGames.BasicApi.Events.Event::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Events.Event::mDescription
	String_t* ___mDescription_2;
	// System.String GooglePlayGames.BasicApi.Events.Event::mImageUrl
	String_t* ___mImageUrl_3;
	// System.UInt64 GooglePlayGames.BasicApi.Events.Event::mCurrentCount
	uint64_t ___mCurrentCount_4;
	// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::mVisibility
	int32_t ___mVisibility_5;
};

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* ___mScores_7;
};

// GooglePlayGames.OurUtils.Logger
struct Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB  : public RuntimeObject
{
};

// GooglePlayGames.OurUtils.Misc
struct Misc_t1CCF1A73756ADD7891CA7918FD47E18DD742E06B  : public RuntimeObject
{
};

// GooglePlayGames.OurUtils.PlatformUtils
struct PlatformUtils_tCC150B99017044BADA662F50D44A893D17307F0F  : public RuntimeObject
{
};

// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mImage_5;
};

// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.PlayerStats::mValid
	bool ___mValid_1;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfPurchases
	int32_t ___mNumberOfPurchases_2;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mAvgSessionLength
	float ___mAvgSessionLength_3;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mDaysSinceLastPlayed
	int32_t ___mDaysSinceLastPlayed_4;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfSessions
	int32_t ___mNumberOfSessions_5;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSessPercentile
	float ___mSessPercentile_6;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendPercentile
	float ___mSpendPercentile_7;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendProbability
	float ___mSpendProbability_8;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mChurnProbability
	float ___mChurnProbability_9;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mHighSpenderProbability
	float ___mHighSpenderProbability_10;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mTotalSpendNext28Days
	float ___mTotalSpendNext28Days_11;
};

// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.ScorePageToken::mId
	String_t* ___mId_0;
	// System.Object GooglePlayGames.BasicApi.ScorePageToken::mInternalObject
	RuntimeObject* ___mInternalObject_1;
	// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::mCollection
	int32_t ___mCollection_2;
	// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::mTimespan
	int32_t ___mTimespan_3;
	// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::mDirection
	int32_t ___mDirection_4;
};

// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564  : public RuntimeObject
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsCameraSupported
	bool ___mIsCameraSupported_0;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsMicSupported
	bool ___mIsMicSupported_1;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsWriteStorageSupported
	bool ___mIsWriteStorageSupported_2;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mCaptureModesSupported
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___mCaptureModesSupported_3;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mQualityLevelsSupported
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___mQualityLevelsSupported_4;
};

// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsCapturing
	bool ___mIsCapturing_0;
	// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::mCaptureMode
	int32_t ___mCaptureMode_1;
	// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::mQualityLevel
	int32_t ___mQualityLevel_2;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsOverlayVisible
	bool ___mIsOverlayVisible_3;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsPaused
	bool ___mIsPaused_4;
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

// GooglePlayGames.Android.AndroidTokenClient/<>c
struct U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B  : public RuntimeObject
{
};

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t17B5BABECA273D5142C5DDBAEBBFE26808495321  : public RuntimeObject
{
	// GooglePlayGames.Android.AndroidTokenClient GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0::<>4__this
	AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* ___U3CU3E4__this_0;
	// System.Boolean GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0::silent
	bool ___silent_1;
	// System.Action`1<System.Int32> GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0::callback
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback_2;
};

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tF81E721378ECF751181551BA3E8BD12E9932FCE5  : public RuntimeObject
{
	// System.Action`1<GooglePlayGames.BasicApi.SignInStatus> GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0::callback
	Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* ___callback_0;
	// GooglePlayGames.Android.AndroidTokenClient GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0::<>4__this
	AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* ___U3CU3E4__this_1;
	// System.String[] GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0::scopes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___scopes_2;
};

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t91A6F48EB87CC7805712DFD41A97498B5610CEB4  : public RuntimeObject
{
	// GooglePlayGames.Android.AndroidTokenClient GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0::<>4__this
	AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* ___U3CU3E4__this_0;
	// System.Action`1<System.Int32> GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0::callback
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback_1;
};

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t33A5F5C2E3E729BD1276985E5A561EB33C40178F  : public RuntimeObject
{
	// GooglePlayGames.Android.AndroidTokenClient GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0::<>4__this
	AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* ___U3CU3E4__this_0;
	// System.Boolean GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0::reAuthenticateIfNeeded
	bool ___reAuthenticateIfNeeded_1;
	// System.Action`1<System.String> GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0::callback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback_2;
};

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t4AD0554723A1FC43ECA283FBDE2DA032A57E079B  : public RuntimeObject
{
	// System.Action`1<System.String> GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass30_0::callback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback_0;
};

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1  : public RuntimeObject
{
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities> GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0::callback
	Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* ___callback_0;
};

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC  : public RuntimeObject
{
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState> GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0::callback
	Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* ___callback_0;
};

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882  : public RuntimeObject
{
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean> GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0::callback
	Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* ___callback_0;
};

// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA  : public RuntimeObject
{
};

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49  : public RuntimeObject
{
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::msg
	String_t* ___msg_0;
};

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358  : public RuntimeObject
{
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::msg
	String_t* ___msg_0;
};

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903  : public RuntimeObject
{
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::msg
	String_t* ___msg_0;
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mScopes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___mScopes_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mHidePopups
	bool ___mHidePopups_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestEmail
	bool ___mRequestEmail_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestIdToken
	bool ___mRequestIdToken_6;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mAccountName
	String_t* ___mAccountName_7;
};

// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D  : public RuntimeObject
{
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::action
	RuntimeObject* ___action_0;
};

// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6  : public RuntimeObject
{
};

// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD  : public RuntimeObject
{
	// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::<>4__this
	OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* ___U3CU3E4__this_0;
	// System.Int32 GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::overlayState
	int32_t ___overlayState_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>
struct Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC 
{
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA 
{
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 
{
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA 
{
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mScopes_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mHidePopups
	bool ___mHidePopups_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestEmail
	bool ___mRequestEmail_6;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestIdToken
	bool ___mRequestIdToken_7;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mAccountName
	String_t* ___mAccountName_8;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	char** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	char* ___mAccountName_8;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	Il2CppChar** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	Il2CppChar* ___mAccountName_8;
};

// GooglePlayGames.BasicApi.Player
struct Player_tC6EBE8DB490DB6E864912AB1EA4C847C840AD785  : public PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993
{
};

// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_tC19A28127264E07C834F4E422139AAA21B631BF1  : public PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// GooglePlayGames.BasicApi.Achievement
struct Achievement_t768B073D6DC6441E657126959F7E26272CE5A998  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391 
{
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesScore::mLbId
	String_t* ___mLbId_0;
	// System.Int64 GooglePlayGames.PlayGamesScore::mValue
	int64_t ___mValue_1;
	// System.UInt64 GooglePlayGames.PlayGamesScore::mRank
	uint64_t ___mRank_2;
	// System.String GooglePlayGames.PlayGamesScore::mPlayerId
	String_t* ___mPlayerId_3;
	// System.String GooglePlayGames.PlayGamesScore::mMetadata
	String_t* ___mMetadata_4;
	// System.DateTime GooglePlayGames.PlayGamesScore::mDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___mDate_5;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// GooglePlayGames.Android.AndroidTokenClient/ResultCallbackProxy
struct ResultCallbackProxy_t133DFD028F5EF12607CD646FF9D3A34E420EDF44  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<UnityEngine.AndroidJavaObject> GooglePlayGames.Android.AndroidTokenClient/ResultCallbackProxy::mCallback
	Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___mCallback_4;
};

// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy
struct OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::mListener
	RuntimeObject* ___mListener_4;
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.AndroidJavaObject>
struct Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746  : public MulticastDelegate_t
{
};

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32Enum,System.Boolean>
struct Action_2_tDAF49DC01D1289DFA5F837D90BCC3C9C08C024F9  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F  : public MulticastDelegate_t
{
};

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean>
struct Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A  : public MulticastDelegate_t
{
};

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>
struct Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125  : public MulticastDelegate_t
{
};

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState>
struct Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC  : public MulticastDelegate_t
{
};

// System.Func`2<System.Boolean,System.String>
struct Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334  : public MulticastDelegate_t
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Suriyun.AnimatorController
struct AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator[] Suriyun.AnimatorController::animators
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* ___animators_4;
};

// GooglePlayGames.OurUtils.NearbyHelperObject
struct NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LayerLab.PanelControlSimpleCasual
struct PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LayerLab.PanelControlSimpleCasual::page
	int32_t ___page_4;
	// System.Boolean LayerLab.PanelControlSimpleCasual::isReady
	bool ___isReady_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LayerLab.PanelControlSimpleCasual::panelLight
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___panelLight_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LayerLab.PanelControlSimpleCasual::panelDark
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___panelDark_7;
	// TMPro.TextMeshProUGUI LayerLab.PanelControlSimpleCasual::textTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textTitle_8;
	// UnityEngine.Transform LayerLab.PanelControlSimpleCasual::panelTransformLight
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___panelTransformLight_9;
	// UnityEngine.Transform LayerLab.PanelControlSimpleCasual::panelTransformDark
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___panelTransformDark_10;
	// UnityEngine.UI.Button LayerLab.PanelControlSimpleCasual::buttonPrev
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonPrev_11;
	// UnityEngine.UI.Button LayerLab.PanelControlSimpleCasual::buttonNext
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonNext_12;
	// System.Boolean LayerLab.PanelControlSimpleCasual::isDarakMode
	bool ___isDarakMode_13;
};

// LayerLab.PanelSimpleCasual
struct PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] LayerLab.PanelSimpleCasual::otherPanels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___otherPanels_4;
};

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___localQueue_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>

// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_tB4049DA1D39B30139817A3CFA2949CC0FFF2CA62* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// GooglePlayGames.Android.AndroidTokenClient

// GooglePlayGames.Android.AndroidTokenClient

// GooglePlayGames.Android.AndroidVideoClient

// GooglePlayGames.Android.AndroidVideoClient

// GooglePlayGames.BasicApi.CommonTypesUtil

// GooglePlayGames.BasicApi.CommonTypesUtil

// GooglePlayGames.BasicApi.DummyClient

// GooglePlayGames.BasicApi.DummyClient

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient

// GooglePlayGames.BasicApi.Events.Event

// GooglePlayGames.BasicApi.Events.Event

// GooglePlayGames.BasicApi.LeaderboardScoreData

// GooglePlayGames.BasicApi.LeaderboardScoreData

// GooglePlayGames.OurUtils.Logger
struct Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields
{
	// System.Boolean GooglePlayGames.OurUtils.Logger::debugLogEnabled
	bool ___debugLogEnabled_0;
	// System.Boolean GooglePlayGames.OurUtils.Logger::warningLogEnabled
	bool ___warningLogEnabled_1;
};

// GooglePlayGames.OurUtils.Logger

// GooglePlayGames.OurUtils.Misc

// GooglePlayGames.OurUtils.Misc

// GooglePlayGames.OurUtils.PlatformUtils

// GooglePlayGames.OurUtils.PlatformUtils

// GooglePlayGames.PlayGamesUserProfile

// GooglePlayGames.PlayGamesUserProfile

// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields
{
	// System.Single GooglePlayGames.BasicApi.PlayerStats::UNSET_VALUE
	float ___UNSET_VALUE_0;
};

// GooglePlayGames.BasicApi.PlayerStats

// GooglePlayGames.BasicApi.ScorePageToken

// GooglePlayGames.BasicApi.ScorePageToken

// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields
{
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::True
	int32_t ___True_0;
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::False
	int32_t ___False_1;
};

// GooglePlayGames.BasicApi.SignInHelper

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// GooglePlayGames.BasicApi.Video.VideoCapabilities

// GooglePlayGames.BasicApi.Video.VideoCapabilities

// GooglePlayGames.BasicApi.Video.VideoCaptureState

// GooglePlayGames.BasicApi.Video.VideoCaptureState

// GooglePlayGames.Android.AndroidTokenClient/<>c
struct U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_StaticFields
{
	// GooglePlayGames.Android.AndroidTokenClient/<>c GooglePlayGames.Android.AndroidTokenClient/<>c::<>9
	U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B* ___U3CU3E9_0;
	// System.Action GooglePlayGames.Android.AndroidTokenClient/<>c::<>9__20_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__20_0_1;
};

// GooglePlayGames.Android.AndroidTokenClient/<>c

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass30_0

// GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass30_0

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0

// GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0

// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_StaticFields
{
	// GooglePlayGames.OurUtils.Logger/<>c GooglePlayGames.OurUtils.Logger/<>c::<>9
	U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA* ___U3CU3E9_0;
	// System.Action GooglePlayGames.OurUtils.Logger/<>c::<>9__12_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__12_0_1;
};

// GooglePlayGames.OurUtils.Logger/<>c

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder

// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0

// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0

// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields
{
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___U3CU3E9__14_1_2;
};

// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c

// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0

// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields
{
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyPayload_0;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// GooglePlayGames.BasicApi.Nearby.EndpointDetails

// GooglePlayGames.BasicApi.Nearby.EndpointDetails

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields
{
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___DefaultConfiguration_0;
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration

// GooglePlayGames.BasicApi.Player

// GooglePlayGames.BasicApi.Player

// GooglePlayGames.BasicApi.PlayerProfile

// GooglePlayGames.BasicApi.PlayerProfile

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// System.Void

// System.Void

// System.Nullable`1<System.TimeSpan>

// System.Nullable`1<System.TimeSpan>

// GooglePlayGames.BasicApi.Achievement
struct Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields
{
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_0;
};

// GooglePlayGames.BasicApi.Achievement

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// GooglePlayGames.PlayGamesScore

// GooglePlayGames.PlayGamesScore

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate

// GooglePlayGames.Android.AndroidTokenClient/ResultCallbackProxy

// GooglePlayGames.Android.AndroidTokenClient/ResultCallbackProxy

// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy

// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>

// System.Action`1<UnityEngine.AndroidJavaObject>

// System.Action`1<UnityEngine.AndroidJavaObject>

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>

// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>

// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Action`1<System.Int32Enum>

// System.Action`1<System.Int32Enum>

// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>

// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>

// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>

// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>

// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<GooglePlayGames.BasicApi.UIStatus>

// System.Action`1<GooglePlayGames.BasicApi.UIStatus>

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>

// System.Action`2<System.Int32Enum,System.Boolean>

// System.Action`2<System.Int32Enum,System.Boolean>

// System.Action`2<System.Int32Enum,System.Object>

// System.Action`2<System.Int32Enum,System.Object>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState>

// System.Func`2<System.Boolean,System.String>

// System.Func`2<System.Boolean,System.String>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Suriyun.AnimatorController

// Suriyun.AnimatorController

// GooglePlayGames.OurUtils.NearbyHelperObject
struct NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields
{
	// GooglePlayGames.OurUtils.NearbyHelperObject GooglePlayGames.OurUtils.NearbyHelperObject::instance
	NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* ___instance_4;
	// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::mAdvertisingRemaining
	double ___mAdvertisingRemaining_5;
	// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::mDiscoveryRemaining
	double ___mDiscoveryRemaining_6;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient GooglePlayGames.OurUtils.NearbyHelperObject::mClient
	RuntimeObject* ___mClient_7;
};

// GooglePlayGames.OurUtils.NearbyHelperObject

// LayerLab.PanelControlSimpleCasual

// LayerLab.PanelControlSimpleCasual

// LayerLab.PanelSimpleCasual

// LayerLab.PanelSimpleCasual

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields
{
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* ___instance_4;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_5;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___sQueue_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_8;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ___sPauseCallbackList_9;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ___sFocusCallbackList_10;
};

// GooglePlayGames.OurUtils.PlayGamesHelperObject

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91  : public RuntimeArray
{
	ALIGN_FIELD (8) Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* m_Items[1];

	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* m_Items[1];

	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759  : public RuntimeArray
{
	ALIGN_FIELD (8) Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* m_Items[1];

	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled);

// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisRuntimeObject_m23F2963F486BD5D58E540B8C970B0B397CE87F62_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Action`2<T1,T2> GooglePlayGames.Android.AndroidVideoClient::ToOnGameThread<System.Int32Enum,System.Object>(System.Action`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* AndroidVideoClient_ToOnGameThread_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_m4B01AFDC5D063768A6FE3456DA95D60A5E83F56A_gshared (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* ___0_toConvert, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidTaskUtils::AddOnSuccessListener<System.Object>(UnityEngine.AndroidJavaObject,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTaskUtils_AddOnSuccessListener_TisRuntimeObject_m1F92DC35E89238A18D58FB926A29B0C7B4D5D4A1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_task, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, const RuntimeMethod* method) ;
// System.Action`2<T1,T2> GooglePlayGames.Android.AndroidVideoClient::ToOnGameThread<System.Int32Enum,System.Boolean>(System.Action`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tDAF49DC01D1289DFA5F837D90BCC3C9C08C024F9* AndroidVideoClient_ToOnGameThread_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDAFE870DD00A1FF83E2CD48B1D2977916C976037_gshared (Action_2_tDAF49DC01D1289DFA5F837D90BCC3C9C08C024F9* ___0_toConvert, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidTaskUtils::AddOnSuccessListener<System.Boolean>(UnityEngine.AndroidJavaObject,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTaskUtils_AddOnSuccessListener_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5989481BDC01F0DDDD8B935341308F01B637BB7C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_task, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, int32_t ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m083FC47D435AFCCD45970CF9513A45291A17415D_gshared_inline (Action_2_tDAF49DC01D1289DFA5F837D90BCC3C9C08C024F9* __this, int32_t ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m794A187157001F642B5FE7C534F0E8E86D07B46B_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m9FA30F53765A643B7740AE4F2D0884EB983E7CA1_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFBEAB690C0784153A594218C5017CA665413FCF6_gshared (Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Boolean,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mF95F6B990DE60C893BA70F9FEA36473B95AE3265_gshared (RuntimeObject* ___0_source, Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B* ___1_selector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AndroidJavaObject>::Invoke(T)
inline void Action_1_Invoke_mF1A9E047B412B279EA3AC2BFF9E1754B2C45EA56_inline (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDDE0DDB36D92607F7D8378D1CC27B63E7D1C2198 (U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject GooglePlayGames.Android.AndroidHelperFragment::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidHelperFragment_GetActivity_m211499F14F3EE34DDD9B6213ADB3098EB6389266 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidTokenClient::DoFetchToken(System.Boolean,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTokenClient_DoFetchToken_m6A2F53377C4F582B130CAE67510E55312F77D04F (AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* __this, bool ___0_silent, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___1_callback, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::Invoke(T)
inline void Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline (Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___0_obj, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Union_TisString_t_m3CC37B730079B7A0A95DC58F69516F7A8FB90867 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m23F2963F486BD5D58E540B8C970B0B397CE87F62_gshared)(___0_first, ___1_second, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Boolean GooglePlayGames.OurUtils.Misc::IsApiException(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_IsApiException_mA83D12E5A06C002363254AF116BB965138F5B8E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_exception, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_m5748C4F8B1A800326408CC00159B464A738763C9 (String_t* ___0_msg, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___0_methodName, ___1_args, method);
}
// GooglePlayGames.BasicApi.SignInStatus GooglePlayGames.BasicApi.SignInHelper::ToSignInStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInHelper_ToSignInStatus_m0E8C3979445D4601F00D449CBA5B581E7A3C1696 (int32_t ___0_code, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___0_obj, method);
}
// System.Void GooglePlayGames.Android.AndroidTokenClient::DoGetAnotherServerAuthCode(System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTokenClient_DoGetAnotherServerAuthCode_m8C9B67A2647A3C4EC628A984AA360F88992DA818 (AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* __this, bool ___0_reAuthenticateIfNeeded, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_callback, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m1691790282ED30CF0F267F6B29F7FA9FA2FC10D9 (U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* __this, const RuntimeMethod* method) ;
// System.Action`2<T1,T2> GooglePlayGames.Android.AndroidVideoClient::ToOnGameThread<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>(System.Action`2<T1,T2>)
inline Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_m6AF894FC44EECE4AD3A00E20FBC9C81E086688D3 (Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* ___0_toConvert, const RuntimeMethod* method)
{
	return ((  Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* (*) (Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125*, const RuntimeMethod*))AndroidVideoClient_ToOnGameThread_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_m4B01AFDC5D063768A6FE3456DA95D60A5E83F56A_gshared)(___0_toConvert, method);
}
// System.Void System.Action`1<UnityEngine.AndroidJavaObject>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAD4F64E1D47B76FC413CEBA12F172E968C83AD04 (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GooglePlayGames.Android.AndroidTaskUtils::AddOnSuccessListener<UnityEngine.AndroidJavaObject>(UnityEngine.AndroidJavaObject,System.Action`1<T>)
inline void AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_task, Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___1_callback, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*, const RuntimeMethod*))AndroidTaskUtils_AddOnSuccessListener_TisRuntimeObject_m1F92DC35E89238A18D58FB926A29B0C7B4D5D4A1_gshared)(___0_task, ___1_callback, method);
}
// System.Void GooglePlayGames.Android.AndroidTaskUtils::AddOnFailureListener(UnityEngine.AndroidJavaObject,System.Action`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTaskUtils_AddOnFailureListener_m78A49762F18B0114DCFE08F7DCF597E3EDA0E9EC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_task, Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___1_callback, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidHelperFragment::ShowCaptureOverlayUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHelperFragment_ShowCaptureOverlayUI_m3531C5D30693571CE8BF591BF952B5CD6B8A3EDB (const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m19EACD68D9B0C8521587EEDE30D7C5FA7F8C40D3 (U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* __this, const RuntimeMethod* method) ;
// System.Action`2<T1,T2> GooglePlayGames.Android.AndroidVideoClient::ToOnGameThread<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState>(System.Action`2<T1,T2>)
inline Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_m4B29F48F0C9CB0D18425D9B562C73E4B5CD91C1F (Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* ___0_toConvert, const RuntimeMethod* method)
{
	return ((  Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* (*) (Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC*, const RuntimeMethod*))AndroidVideoClient_ToOnGameThread_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_m4B01AFDC5D063768A6FE3456DA95D60A5E83F56A_gshared)(___0_toConvert, method);
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m3859F1DA2A77F417F62FEDE600306569FD12BFBA (U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* __this, const RuntimeMethod* method) ;
// System.Action`2<T1,T2> GooglePlayGames.Android.AndroidVideoClient::ToOnGameThread<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean>(System.Action`2<T1,T2>)
inline Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C089188A00A8845C6BD826CE5F173BAC0C1A220 (Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* ___0_toConvert, const RuntimeMethod* method)
{
	return ((  Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* (*) (Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A*, const RuntimeMethod*))AndroidVideoClient_ToOnGameThread_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDAFE870DD00A1FF83E2CD48B1D2977916C976037_gshared)(___0_toConvert, method);
}
// System.Int32 GooglePlayGames.Android.AndroidVideoClient::ToVideoCaptureMode(GooglePlayGames.BasicApi.VideoCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidVideoClient_ToVideoCaptureMode_m4CF8F016A6CEFE5776D1341782DFFD8B70CAAA80 (int32_t ___0_captureMode, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GooglePlayGames.Android.AndroidTaskUtils::AddOnSuccessListener<System.Boolean>(UnityEngine.AndroidJavaObject,System.Action`1<T>)
inline void AndroidTaskUtils_AddOnSuccessListener_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5989481BDC01F0DDDD8B935341308F01B637BB7C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_task, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))AndroidTaskUtils_AddOnSuccessListener_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5989481BDC01F0DDDD8B935341308F01B637BB7C_gshared)(___0_task, ___1_callback, method);
}
// System.Void GooglePlayGames.Android.AndroidVideoClient::UnregisterCaptureOverlayStateChangedListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient_UnregisterCaptureOverlayStateChangedListener_mAE4B23E18507228D7DB875F2412D957FBEBD209A (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::.ctor(GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureOverlayStateListenerProxy__ctor_m625F798E7AF72C9684B5FD9D3B9FCB972A9780E7 (OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.Android.AndroidVideoClient::FromVideoCaptureMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidVideoClient_FromVideoCaptureMode_mD421C62EB5A00BDD69D51273D9398350FB0A78E1 (int32_t ___0_captureMode, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.Android.AndroidVideoClient::FromVideoQualityLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidVideoClient_FromVideoQualityLevel_mF56A0E17D8FF574D3969638B470314D96FF99C96 (int32_t ___0_captureQualityJava, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Video.VideoCaptureState::.ctor(System.Boolean,GooglePlayGames.BasicApi.VideoCaptureMode,GooglePlayGames.BasicApi.VideoQualityLevel,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCaptureState__ctor_m2B2B27B6716AEE8A5DFA5CFA91402AD73F76E3A6 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, bool ___0_isCapturing, int32_t ___1_captureMode, int32_t ___2_qualityLevel, bool ___3_isOverlayVisible, bool ___4_isPaused, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean[]>(System.String,System.Object[])
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJavaObject_Call_TisBooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_mB4062A6E48F4E8553BC74CA631E839BC717089E0 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapabilities__ctor_mE8546E8B5CB6AF1F8919493CDD0177059A3290BA (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, bool ___0_isCameraSupported, bool ___1_isMicSupported, bool ___2_isWriteStorageSupported, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___3_captureModesSupported, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___4_qualityLevelsSupported, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mBC013A4931A07AF78D6E72DC826C4A753ECA8A47 (U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.VideoCaptureOverlayState GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::FromVideoCaptureOverlayState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnCaptureOverlayStateListenerProxy_FromVideoCaptureOverlayState_mAA823B357B482D101434A8D72FC8B453D9E13A73 (int32_t ___0_overlayState, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Video.VideoCapabilities GooglePlayGames.Android.AndroidVideoClient::CreateVideoCapabilities(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* AndroidVideoClient_CreateVideoCapabilities_m52EF4D055A682D3F0F3032EC6E3847F900049E8E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_videoCapabilities, const RuntimeMethod* method) ;
// System.Void System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>::Invoke(T1,T2)
inline void Action_2_Invoke_m11118BC5CF450239E1F68BF2B7AB1BAAEBD53BB5_inline (Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* __this, int32_t ___0_arg1, VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125*, int32_t, VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE*, const RuntimeMethod*))Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// GooglePlayGames.BasicApi.Video.VideoCaptureState GooglePlayGames.Android.AndroidVideoClient::CreateVideoCaptureState(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* AndroidVideoClient_CreateVideoCaptureState_m5C34C576DD7AA2236C0483D758CE8127CC00024E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_videoCaptureState, const RuntimeMethod* method) ;
// System.Void System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState>::Invoke(T1,T2)
inline void Action_2_Invoke_mCE94125A40120F258D04358EEF201950E1DAC4DF_inline (Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* __this, int32_t ___0_arg1, VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC*, int32_t, VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625*, const RuntimeMethod*))Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m6ACB65C7F4EDE12D35E5CE27CA05EECF5C86BCD3_inline (Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* __this, int32_t ___0_arg1, bool ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A*, int32_t, bool, const RuntimeMethod*))Action_2_Invoke_m083FC47D435AFCCD45970CF9513A45291A17415D_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m4600D1231080B5CFD1CDFA7CD226A075C95F0BCA (U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m82B0A4AD2E1F0180AEE5B636D62F99DF7603DAE3 (U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m48547E25E51C509C7FB7D8426418C3452C2BE180 (U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_mBE03F589BDBE3C251F02F9C49DD330C775A1AF29 (String_t* ___0_prefix, String_t* ___1_logType, String_t* ___2_msg, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m814253E010813D8248958EC40458CD628EF2D681 (U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.NearbyHelperObject>()
inline NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* GameObject_AddComponent_TisNearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_mA0FBFEDD94712971577C10D1A65DFD74D5C0862A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject__ctor_m4752EB0B699736087A424CA9FC6A9ABC767BBA7E (NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared)(__this, method);
}
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::ToSeconds(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NearbyHelperObject_ToSeconds_m701E5EAAD5A42E6B0CC5B59E73CD36870CB3D566 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_span, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// T UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.PlayGamesHelperObject>()
inline PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* GameObject_AddComponent_TisPlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_m581374DDC3697BCC02BAC5351641E080A90AE08E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_m510093F00BC54C0882CD0ED573C45C3DC216B209 (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m1CF8F97E7E3F842DC6BF7625557315C4135F3623 (U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// T System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25 (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783 (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::get_Current()
inline Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_inline (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50* __this, const RuntimeMethod* method)
{
	return ((  Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* (*) (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Contains(T)
inline bool List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9 (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Add(T)
inline void List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_inline (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Remove(T)
inline bool List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::.ctor()
inline void List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, int32_t ___7_kind, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB (const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mAB0533128A0477EC8C4509F5C037178C7B697717 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>::Invoke(T1,T2)
inline void Action_2_Invoke_mEBC67B5525DC5F926D0B31CA1F59A1633F0573A9_inline (Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4* __this, int32_t ___0_arg1, PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4*, int32_t, PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0*, const RuntimeMethod*))Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
inline void Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.Achievement[]>::Invoke(T)
inline void Action_1_Invoke_mF63F12CE9B293B09B751A8915C843D76C5C08921_inline (Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* __this, AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331*, AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.UIStatus>::Invoke(T)
inline void Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline (Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>::Invoke(T)
inline void Action_1_Invoke_m49F6F1412AB4F9E2431DB474E0491EDD938FE8C6_inline (Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>::Invoke(T)
inline void Action_1_Invoke_m571200EC8CC7971DC1D323B321014DD1A3FA7C6A_inline (Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___0_obj, method);
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___0_leaderboardId, int32_t ___1_status, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>::Invoke(T)
inline void Action_1_Invoke_mA5EC4282C4EA23662326D008075C6CC25A4D6EE9_inline (Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* __this, LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49*, LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE_inline (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::.ctor()
inline void List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::ToArray()
inline PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, const RuntimeMethod* method)
{
	return ((  PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::Add(T)
inline void List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_inline (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::get_Count()
inline int32_t List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_inline (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_mBBC149EB64BAFE2838EF119A948F121DA44F9D84 (PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993* __this, String_t* ___0_displayName, String_t* ___1_playerId, String_t* ___2_avatarUrl, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_m772E7C64FDB7474FD8C1940825C3486B1A8ADD66 (PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993* __this, String_t* ___0_displayName, String_t* ___1_playerId, String_t* ___2_avatarUrl, bool ___3_isFriend, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___0_builder, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableSavedGames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsHidingPopups()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingAuthCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsForcingRefresh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingEmail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingIdToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_AccountName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_Scopes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared)(___0_first, ___1_second, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::op_Equality(GooglePlayGames.BasicApi.PlayGamesClientConfiguration,GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___0_c1, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___1_c2, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayGamesClientConfiguration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::.ctor()
inline void Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, const RuntimeMethod*))Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::Add(TKey,TValue)
inline void Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683 (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m794A187157001F642B5FE7C534F0E8E86D07B46B_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88 (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9FA30F53765A643B7740AE4F2D0884EB983E7CA1_gshared)(__this, ___0_key, method);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mFBEAB690C0784153A594218C5017CA665413FCF6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Boolean,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3 (RuntimeObject* ___0_source, Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*, const RuntimeMethod*))Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mF95F6B990DE60C893BA70F9FEA36473B95AE3265_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___0_builder, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___0_value, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, String_t* ___0_description, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newPngCoverImage, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared)(__this, ___0_value, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_newPlayedTime, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, int32_t ___0_status, String_t* ___1_localEndpointName, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, String_t* ___0_endpointId, String_t* ___1_name, String_t* ___2_serviceId, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Byte[]>(T)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___0_value, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, String_t* ___0_remoteEndpointId, String_t* ___1_remoteEndpointName, String_t* ___2_serviceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, int32_t ___2_code, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
inline void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE*, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC, const RuntimeMethod*))Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline)(__this, ___0_obj, method);
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Rejected_m47E3012BD041A67DAD2622C0CF3ED5040FD5E270 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
inline void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E*, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA, const RuntimeMethod*))Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline)(__this, ___0_obj, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
inline Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___0_value, const RuntimeMethod* method)
{
	return ((  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* (*) (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___0_value, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___0_callback, int64_t ___1_localClientId, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void LayerLab.PanelControlSimpleCasual::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::SetMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetArrowActive_m92E6155F9B105F78CCE6DC447A9A9C335F480D9D (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidTokenClient/ResultCallbackProxy::.ctor(System.Action`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultCallbackProxy__ctor_m248205048A5149780D536226EFF1C6835708840A (ResultCallbackProxy_t133DFD028F5EF12607CD646FF9D3A34E420EDF44* __this, Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE025A661FB50E91883AAEEDA0318C05DD9C9A0A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com/google/android/gms/common/api/ResultCallback")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralE025A661FB50E91883AAEEDA0318C05DD9C9A0A2, NULL);
		// mCallback = callback;
		Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_0 = ___0_callback;
		__this->___mCallback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCallback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/ResultCallbackProxy::onResult(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultCallbackProxy_onResult_mBB0E677CF72A6271766DC6E3D3C3B48814267E04 (ResultCallbackProxy_t133DFD028F5EF12607CD646FF9D3A34E420EDF44* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_tokenResult, const RuntimeMethod* method) 
{
	{
		// mCallback(tokenResult);
		Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_0 = __this->___mCallback_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_tokenResult;
		NullCheck(L_0);
		Action_1_Invoke_mF1A9E047B412B279EA3AC2BFF9E1754B2C45EA56_inline(L_0, L_1, NULL);
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
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m76A7DE0FE00C9743E2BD7E6D35B4A6C3E699C408 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B* L_0 = (U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B*)il2cpp_codegen_object_new(U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDDE0DDB36D92607F7D8378D1CC27B63E7D1C2198(L_0, NULL);
		((U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDDE0DDB36D92607F7D8378D1CC27B63E7D1C2198 (U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c::<Signout>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSignoutU3Eb__20_0_m9BDD514D458B59D2CDC450B5E31AE1D9BFAB5D04 (U3CU3Ec_tFAE04DE430E515617AF914354AC547B60044CD2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378BF88C92346490BA52EC1111E399A5E7AB5183);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7819FC375E0F52C351E985B53E2C825494EC3897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1307E7CD4CE5634DB752AA2E0A22C312E260865);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Calling Signout in token client");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7819FC375E0F52C351E985B53E2C825494EC3897, NULL);
		// AndroidJavaClass cls = new AndroidJavaClass(HelperFragmentClass);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralF1307E7CD4CE5634DB752AA2E0A22C312E260865, NULL);
		// cls.CallStatic("signOut", AndroidHelperFragment.GetActivity());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidHelperFragment_GetActivity_m211499F14F3EE34DDD9B6213ADB3098EB6389266(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral378BF88C92346490BA52EC1111E399A5E7AB5183, L_2, NULL);
		// });
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
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mF60109F28C70BEB1931ED7B9E5D5A779DD7652E3 (U3CU3Ec__DisplayClass24_0_t17B5BABECA273D5142C5DDBAEBBFE26808495321* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass24_0::<FetchTokens>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CFetchTokensU3Eb__0_mE6A6702784043299F0212C4D728E67DF04C72719 (U3CU3Ec__DisplayClass24_0_t17B5BABECA273D5142C5DDBAEBBFE26808495321* __this, const RuntimeMethod* method) 
{
	{
		// PlayGamesHelperObject.RunOnGameThread(() => DoFetchToken(silent, callback));
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_0 = __this->___U3CU3E4__this_0;
		bool L_1 = __this->___silent_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = __this->___callback_2;
		NullCheck(L_0);
		AndroidTokenClient_DoFetchToken_m6A2F53377C4F582B130CAE67510E55312F77D04F(L_0, L_1, L_2, NULL);
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
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mB97CAB6D29B993672070AC327F6ECBD7C9E61D40 (U3CU3Ec__DisplayClass25_0_tF81E721378ECF751181551BA3E8BD12E9932FCE5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0::<RequestPermissions>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestPermissionsU3Eb__0_m34722275B965114FB0286355471E1B61763DAAC3 (U3CU3Ec__DisplayClass25_0_tF81E721378ECF751181551BA3E8BD12E9932FCE5* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_accountWithNewScopes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Union_TisString_t_m3CC37B730079B7A0A95DC58F69516F7A8FB90867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral120F94D6065CAF0D0F3DD64A963FBDA43A3F81AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC28C5B6F212B87DD5D4BBE6BE111D3BF3692E70C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE3298FBB59A4FF58406912DE9FC212BF5689F5C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accountWithNewScopes == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_accountWithNewScopes;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// callback(SignInStatus.InternalError);
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_1 = __this->___callback_0;
		NullCheck(L_1);
		Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline(L_1, 4, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// account = accountWithNewScopes;
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_2 = __this->___U3CU3E4__this_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___0_accountWithNewScopes;
		NullCheck(L_2);
		L_2->___account_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___account_9), (void*)L_3);
		// email = account.Call<string>("getEmail");
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_4 = __this->___U3CU3E4__this_1;
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = L_5->___account_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_8;
		L_8 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_6, _stringLiteralC28C5B6F212B87DD5D4BBE6BE111D3BF3692E70C, L_7, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___email_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___email_10), (void*)L_8);
		// idToken = account.Call<string>("getIdToken");
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_9 = __this->___U3CU3E4__this_1;
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_10 = __this->___U3CU3E4__this_1;
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = L_10->___account_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_13;
		L_13 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_11, _stringLiteralDE3298FBB59A4FF58406912DE9FC212BF5689F5C, L_12, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->___idToken_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___idToken_12), (void*)L_13);
		// authCode = account.Call<string>("getServerAuthCode");
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_14 = __this->___U3CU3E4__this_1;
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_15 = __this->___U3CU3E4__this_1;
		NullCheck(L_15);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = L_15->___account_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_18;
		L_18 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_16, _stringLiteral120F94D6065CAF0D0F3DD64A963FBDA43A3F81AC, L_17, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_14);
		L_14->___authCode_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___authCode_11), (void*)L_18);
		// oauthScopes = oauthScopes.Union(scopes).ToList();
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_19 = __this->___U3CU3E4__this_1;
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_20 = __this->___U3CU3E4__this_1;
		NullCheck(L_20);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = L_20->___oauthScopes_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = __this->___scopes_2;
		RuntimeObject* L_23;
		L_23 = Enumerable_Union_TisString_t_m3CC37B730079B7A0A95DC58F69516F7A8FB90867(L_21, (RuntimeObject*)L_22, Enumerable_Union_TisString_t_m3CC37B730079B7A0A95DC58F69516F7A8FB90867_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24;
		L_24 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_23, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		NullCheck(L_19);
		L_19->___oauthScopes_4 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___oauthScopes_4), (void*)L_24);
		// callback(SignInStatus.Success);
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_25 = __this->___callback_0;
		NullCheck(L_25);
		Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline(L_25, 0, NULL);
		// });
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass25_0::<RequestPermissions>b__1(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestPermissionsU3Eb__1_m2E5983A8CB13C795D0A91C934436BA820F5FB616 (U3CU3Ec__DisplayClass25_0_tF81E721378ECF751181551BA3E8BD12E9932FCE5* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInStatus_tEA604384246FE5BD10B6703AD004E7C780BAF714_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFFFD5E5A2B4420619D29806257E528B6964E43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral888EAA97FAA4CBFFEAEEE42DD7BB7FEBEBD470F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A5CAFB5426AD10E32B176352988E24E571AD10);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!Misc.IsApiException(e)) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_e;
		bool L_1;
		L_1 = Misc_IsApiException_mA83D12E5A06C002363254AF116BB965138F5B8E6(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// OurUtils.Logger.e("Exception requesting new permissions" +
		//     e.Call<string>("toString"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_e;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral888EAA97FAA4CBFFEAEEE42DD7BB7FEBEBD470F1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_e_m5748C4F8B1A800326408CC00159B464A738763C9(L_5, NULL);
		// return;
		return;
	}

IL_0028:
	{
		// var failCode = SignInHelper.ToSignInStatus(e.Call<int>("getStatusCode"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ___0_e;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_8;
		L_8 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_6, _stringLiteral7BFFFD5E5A2B4420619D29806257E528B6964E43, L_7, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = SignInHelper_ToSignInStatus_m0E8C3979445D4601F00D449CBA5B581E7A3C1696(L_8, NULL);
		V_0 = L_9;
		// OurUtils.Logger.e("Exception requesting new permissions: " + failCode);
		Il2CppFakeBox<int32_t> L_10(SignInStatus_tEA604384246FE5BD10B6703AD004E7C780BAF714_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC0A5CAFB5426AD10E32B176352988E24E571AD10, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_e_m5748C4F8B1A800326408CC00159B464A738763C9(L_12, NULL);
		// callback(failCode);
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_13 = __this->___callback_0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline(L_13, L_14, NULL);
		// });
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
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_mA04551C16CA682ACA54B9D74DFB8276E825360F3 (U3CU3Ec__DisplayClass27_0_t91A6F48EB87CC7805712DFD41A97498B5610CEB4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass27_0::<DoFetchToken>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CDoFetchTokenU3Eb__0_m83F7CCE9F58650BA19BC48FA6D80994E2FEC6927 (U3CU3Ec__DisplayClass27_0_t91A6F48EB87CC7805712DFD41A97498B5610CEB4* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_tokenResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1003366035A114F03685FC092206E4A0C0754F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral606A1AABCD700AA996E7EBA6688387F0DBE20EF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFFFD5E5A2B4420619D29806257E528B6964E43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC28C5B6F212B87DD5D4BBE6BE111D3BF3692E70C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE3298FBB59A4FF58406912DE9FC212BF5689F5C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// account = tokenResult.Call<AndroidJavaObject>("getAccount");
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_0 = __this->___U3CU3E4__this_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_tokenResult;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteral606A1AABCD700AA996E7EBA6688387F0DBE20EF8, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_0);
		L_0->___account_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___account_9), (void*)L_3);
		// authCode = tokenResult.Call<string>("getAuthCode");
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_4 = __this->___U3CU3E4__this_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ___0_tokenResult;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_7;
		L_7 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_5, _stringLiteral1003366035A114F03685FC092206E4A0C0754F01, L_6, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___authCode_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___authCode_11), (void*)L_7);
		// email = tokenResult.Call<string>("getEmail");
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_8 = __this->___U3CU3E4__this_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ___0_tokenResult;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_11;
		L_11 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_9, _stringLiteralC28C5B6F212B87DD5D4BBE6BE111D3BF3692E70C, L_10, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___email_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___email_10), (void*)L_11);
		// idToken = tokenResult.Call<string>("getIdToken");
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_12 = __this->___U3CU3E4__this_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = ___0_tokenResult;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_15;
		L_15 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_13, _stringLiteralDE3298FBB59A4FF58406912DE9FC212BF5689F5C, L_14, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->___idToken_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___idToken_12), (void*)L_15);
		// callback(tokenResult.Call<int>("getStatusCode"));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_16 = __this->___callback_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = ___0_tokenResult;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18;
		L_18 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_19;
		L_19 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_17, _stringLiteral7BFFFD5E5A2B4420619D29806257E528B6964E43, L_18, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		NullCheck(L_16);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_16, L_19, NULL);
		// }));
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
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mE56D0020E14B2891B7053E22EFC92F11C68052CE (U3CU3Ec__DisplayClass29_0_t33A5F5C2E3E729BD1276985E5A561EB33C40178F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass29_0::<GetAnotherServerAuthCode>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CGetAnotherServerAuthCodeU3Eb__0_mC3035F884B4917D31F0616B2EA76F463527B9A25 (U3CU3Ec__DisplayClass29_0_t33A5F5C2E3E729BD1276985E5A561EB33C40178F* __this, const RuntimeMethod* method) 
{
	{
		// PlayGamesHelperObject.RunOnGameThread(() => DoGetAnotherServerAuthCode(reAuthenticateIfNeeded, callback));
		AndroidTokenClient_t37AC9CBC49F0FF7ABAE23CED6F2AA557AE63106B* L_0 = __this->___U3CU3E4__this_0;
		bool L_1 = __this->___reAuthenticateIfNeeded_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = __this->___callback_2;
		NullCheck(L_0);
		AndroidTokenClient_DoGetAnotherServerAuthCode_m8C9B67A2647A3C4EC628A984AA360F88992DA818(L_0, L_1, L_2, NULL);
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
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mE979E399731DA0349DF0B75E5FA6E8368551BD8A (U3CU3Ec__DisplayClass30_0_t4AD0554723A1FC43ECA283FBDE2DA032A57E079B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTokenClient/<>c__DisplayClass30_0::<DoGetAnotherServerAuthCode>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CDoGetAnotherServerAuthCodeU3Eb__0_m5B174112395B2763F6D179915097C66309E9E3B7 (U3CU3Ec__DisplayClass30_0_t4AD0554723A1FC43ECA283FBDE2DA032A57E079B* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_tokenResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1003366035A114F03685FC092206E4A0C0754F01);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tokenResult => { callback(tokenResult.Call<string>("getAuthCode")); }));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___callback_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_tokenResult;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_1, _stringLiteral1003366035A114F03685FC092206E4A0C0754F01, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, L_3, NULL);
		// tokenResult => { callback(tokenResult.Call<string>("getAuthCode")); }));
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
// System.Void GooglePlayGames.Android.AndroidVideoClient::.ctor(System.Boolean,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient__ctor_m4F80C2B1F868BDF3AE07C15A84556C6190C3FF75 (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, bool ___0_isCaptureSupported, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_account, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43C0FB3B7A68B702131E0AACF7A075DD50FF0384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral520545749907F16743D700A80C93EFA48118FDE2);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
		// public AndroidVideoClient(bool isCaptureSupported, AndroidJavaObject account)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mIsCaptureSupported = isCaptureSupported;
		bool L_0 = ___0_isCaptureSupported;
		__this->___mIsCaptureSupported_1 = L_0;
		// using (var gamesClass = new AndroidJavaClass("com.google.android.gms.games.Games"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral43C0FB3B7A68B702131E0AACF7A075DD50FF0384, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0048;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// mVideosClient = gamesClass.CallStatic<AndroidJavaObject>("getVideosClient",
			//     AndroidHelperFragment.GetActivity(), account);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
			L_7 = AndroidHelperFragment_GetActivity_m211499F14F3EE34DDD9B6213ADB3098EB6389266(NULL);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ___1_account;
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
			L_10 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteral520545749907F16743D700A80C93EFA48118FDE2, L_8, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
			il2cpp_codegen_memory_barrier();
			__this->___mVideosClient_0 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___mVideosClient_0), (void*)L_10);
			// }
			goto IL_0049;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient::GetCaptureCapabilities(System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient_GetCaptureCapabilities_mEDFA371C943CD622E022C15C9B72983C7BA85B9D (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_m6AF894FC44EECE4AD3A00E20FBC9C81E086688D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__0_m4E0E3218662E79E1FF5FEB3B7DBE86D13741C04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__1_m8DBF863527582635DA88F1A68D8DCCC063275BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA75321DFBFD22359B263C653BD5A0C99D07334D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* L_0 = (U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m1691790282ED30CF0F267F6B29F7FA9FA2FC10D9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* L_1 = V_0;
		Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* L_2 = ___0_callback;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		// callback = ToOnGameThread(callback);
		U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* L_3 = V_0;
		U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* L_4 = V_0;
		NullCheck(L_4);
		Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* L_5 = L_4->___callback_0;
		Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* L_6;
		L_6 = AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_m6AF894FC44EECE4AD3A00E20FBC9C81E086688D3(L_5, AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_m6AF894FC44EECE4AD3A00E20FBC9C81E086688D3_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___callback_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_0), (void*)L_6);
		// using (var task = mVideosClient.Call<AndroidJavaObject>("getCaptureCapabilities"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = __this->___mVideosClient_0;
		il2cpp_codegen_memory_barrier();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteralDA75321DFBFD22359B263C653BD5A0C99D07334D, L_8, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_1;
					if (!L_10)
					{
						goto IL_0065;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// AndroidTaskUtils.AddOnSuccessListener<AndroidJavaObject>(
			//     task,
			//     videoCapabilities => callback(ResponseStatus.Success, CreateVideoCapabilities(videoCapabilities)));
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_1;
			U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* L_13 = V_0;
			Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_14 = (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*)il2cpp_codegen_object_new(Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			Action_1__ctor_mAD4F64E1D47B76FC413CEBA12F172E968C83AD04(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__0_m4E0E3218662E79E1FF5FEB3B7DBE86D13741C04A_RuntimeMethod_var), NULL);
			AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7(L_12, L_14, AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7_RuntimeMethod_var);
			// AndroidTaskUtils.AddOnFailureListener(
			//     task,
			//     exception => callback(ResponseStatus.InternalError, null));
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_1;
			U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* L_16 = V_0;
			Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_17 = (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*)il2cpp_codegen_object_new(Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
			NullCheck(L_17);
			Action_1__ctor_mAD4F64E1D47B76FC413CEBA12F172E968C83AD04(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__1_m8DBF863527582635DA88F1A68D8DCCC063275BDB_RuntimeMethod_var), NULL);
			AndroidTaskUtils_AddOnFailureListener_m78A49762F18B0114DCFE08F7DCF597E3EDA0E9EC(L_15, L_17, NULL);
			// }
			goto IL_0066;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient::ShowCaptureOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient_ShowCaptureOverlay_mE2FBC96A18B70BFD18EA38DBED438305491E0755 (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, const RuntimeMethod* method) 
{
	{
		// AndroidHelperFragment.ShowCaptureOverlayUI();
		AndroidHelperFragment_ShowCaptureOverlayUI_m3531C5D30693571CE8BF591BF952B5CD6B8A3EDB(NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient::GetCaptureState(System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCaptureState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient_GetCaptureState_mE5AAC7DF44F5F5FE48F12A693498C300844E8287 (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_m4B29F48F0C9CB0D18425D9B562C73E4B5CD91C1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__0_m7928765123103A94B8A9ABECE23CD652D3CCEE26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__1_mBCA05E5380125763D765C4ECEB801EA6A14EFE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC66C41931BF024C6C7E8BB259A45E8D53D7BA543);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* L_0 = (U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m19EACD68D9B0C8521587EEDE30D7C5FA7F8C40D3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* L_1 = V_0;
		Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* L_2 = ___0_callback;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		// callback = ToOnGameThread(callback);
		U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* L_3 = V_0;
		U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* L_4 = V_0;
		NullCheck(L_4);
		Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* L_5 = L_4->___callback_0;
		Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* L_6;
		L_6 = AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_m4B29F48F0C9CB0D18425D9B562C73E4B5CD91C1F(L_5, AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisVideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_m4B29F48F0C9CB0D18425D9B562C73E4B5CD91C1F_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___callback_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_0), (void*)L_6);
		// using (var task = mVideosClient.Call<AndroidJavaObject>("getCaptureState"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = __this->___mVideosClient_0;
		il2cpp_codegen_memory_barrier();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteralC66C41931BF024C6C7E8BB259A45E8D53D7BA543, L_8, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_1;
					if (!L_10)
					{
						goto IL_0065;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// AndroidTaskUtils.AddOnSuccessListener<AndroidJavaObject>(
			//     task,
			//     captureState =>
			//         callback(ResponseStatus.Success, CreateVideoCaptureState(captureState)));
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_1;
			U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* L_13 = V_0;
			Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_14 = (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*)il2cpp_codegen_object_new(Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			Action_1__ctor_mAD4F64E1D47B76FC413CEBA12F172E968C83AD04(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__0_m7928765123103A94B8A9ABECE23CD652D3CCEE26_RuntimeMethod_var), NULL);
			AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7(L_12, L_14, AndroidTaskUtils_AddOnSuccessListener_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA1A693D98F94AE6AC1432FCC99EAE3F983ABEDC7_RuntimeMethod_var);
			// AndroidTaskUtils.AddOnFailureListener(
			//     task,
			//     exception => callback(ResponseStatus.InternalError, null));
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_1;
			U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* L_16 = V_0;
			Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_17 = (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*)il2cpp_codegen_object_new(Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
			NullCheck(L_17);
			Action_1__ctor_mAD4F64E1D47B76FC413CEBA12F172E968C83AD04(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__1_mBCA05E5380125763D765C4ECEB801EA6A14EFE6D_RuntimeMethod_var), NULL);
			AndroidTaskUtils_AddOnFailureListener_m78A49762F18B0114DCFE08F7DCF597E3EDA0E9EC(L_15, L_17, NULL);
			// }
			goto IL_0066;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient::IsCaptureAvailable(GooglePlayGames.BasicApi.VideoCaptureMode,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient_IsCaptureAvailable_mF1E9D3EEFE536812978C8F9318496CFB26980987 (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, int32_t ___0_captureMode, Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidTaskUtils_AddOnSuccessListener_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5989481BDC01F0DDDD8B935341308F01B637BB7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C089188A00A8845C6BD826CE5F173BAC0C1A220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__0_mD8EE3C2B721D5B4D9C6ACD0D68B1CC526167DA96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__1_m89EEABB4A4D09C744A05BA02A337F49D0A691B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1579554934634AF55E6B2C6726E0ACC04014BCE);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* L_0 = (U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m3859F1DA2A77F417F62FEDE600306569FD12BFBA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* L_1 = V_0;
		Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* L_2 = ___1_callback;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		// callback = ToOnGameThread(callback);
		U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* L_3 = V_0;
		U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* L_4 = V_0;
		NullCheck(L_4);
		Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* L_5 = L_4->___callback_0;
		Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* L_6;
		L_6 = AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C089188A00A8845C6BD826CE5F173BAC0C1A220(L_5, AndroidVideoClient_ToOnGameThread_TisResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C089188A00A8845C6BD826CE5F173BAC0C1A220_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___callback_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_0), (void*)L_6);
		// using (var task =
		//     mVideosClient.Call<AndroidJavaObject>("isCaptureAvailable", ToVideoCaptureMode(captureMode)))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = __this->___mVideosClient_0;
		il2cpp_codegen_memory_barrier();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		int32_t L_10 = ___0_captureMode;
		int32_t L_11;
		L_11 = AndroidVideoClient_ToVideoCaptureMode_m4CF8F016A6CEFE5776D1341782DFFD8B70CAAA80(L_10, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteralD1579554934634AF55E6B2C6726E0ACC04014BCE, L_9, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_1;
					if (!L_15)
					{
						goto IL_0074;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_1;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_0074:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// AndroidTaskUtils.AddOnSuccessListener<bool>(
			//     task,
			//     isCaptureAvailable => callback(ResponseStatus.Success, isCaptureAvailable));
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_1;
			U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* L_18 = V_0;
			Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_19 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__0_mD8EE3C2B721D5B4D9C6ACD0D68B1CC526167DA96_RuntimeMethod_var), NULL);
			AndroidTaskUtils_AddOnSuccessListener_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5989481BDC01F0DDDD8B935341308F01B637BB7C(L_17, L_19, AndroidTaskUtils_AddOnSuccessListener_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5989481BDC01F0DDDD8B935341308F01B637BB7C_RuntimeMethod_var);
			// AndroidTaskUtils.AddOnFailureListener(
			//     task,
			//     exception => callback(ResponseStatus.InternalError, false));
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = V_1;
			U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* L_21 = V_0;
			Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_22 = (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*)il2cpp_codegen_object_new(Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594_il2cpp_TypeInfo_var);
			NullCheck(L_22);
			Action_1__ctor_mAD4F64E1D47B76FC413CEBA12F172E968C83AD04(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__1_m89EEABB4A4D09C744A05BA02A337F49D0A691B7C_RuntimeMethod_var), NULL);
			AndroidTaskUtils_AddOnFailureListener_m78A49762F18B0114DCFE08F7DCF597E3EDA0E9EC(L_20, L_22, NULL);
			// }
			goto IL_0075;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.Android.AndroidVideoClient::IsCaptureSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidVideoClient_IsCaptureSupported_mA83F3BDBC412643352542307A12A115D9282694E (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, const RuntimeMethod* method) 
{
	{
		// return mIsCaptureSupported;
		bool L_0 = __this->___mIsCaptureSupported_1;
		return L_0;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient::RegisterCaptureOverlayStateChangedListener(GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient_RegisterCaptureOverlayStateChangedListener_mBB838B59167A013AF8DF9F6BA27F9B5209B69B70 (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6742EC84DE7F9B91093751AE5287C5C1D90E57ED);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if (mOnCaptureOverlayStateListenerProxy != null)
		OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* L_0 = __this->___mOnCaptureOverlayStateListenerProxy_2;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UnregisterCaptureOverlayStateChangedListener();
		AndroidVideoClient_UnregisterCaptureOverlayStateChangedListener_mAE4B23E18507228D7DB875F2412D957FBEBD209A(__this, NULL);
	}

IL_000e:
	{
		// mOnCaptureOverlayStateListenerProxy = new OnCaptureOverlayStateListenerProxy(listener);
		RuntimeObject* L_1 = ___0_listener;
		OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* L_2 = (OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF*)il2cpp_codegen_object_new(OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OnCaptureOverlayStateListenerProxy__ctor_m625F798E7AF72C9684B5FD9D3B9FCB972A9780E7(L_2, L_1, NULL);
		__this->___mOnCaptureOverlayStateListenerProxy_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOnCaptureOverlayStateListenerProxy_2), (void*)L_2);
		// using (mVideosClient.Call<AndroidJavaObject>("registerOnCaptureOverlayStateChangedListener",
		//     mOnCaptureOverlayStateListenerProxy)) ;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___mVideosClient_0;
		il2cpp_codegen_memory_barrier();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* L_6 = __this->___mOnCaptureOverlayStateListenerProxy_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral6742EC84DE7F9B91093751AE5287C5C1D90E57ED, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
					if (!L_8)
					{
						goto IL_0047;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// mOnCaptureOverlayStateListenerProxy)) ;
			goto IL_0048;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient::UnregisterCaptureOverlayStateChangedListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVideoClient_UnregisterCaptureOverlayStateChangedListener_mAE4B23E18507228D7DB875F2412D957FBEBD209A (AndroidVideoClient_t59F650931D6BE68DC7D464C16A7C5B995975EB7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF51C2D096ED0ED7BF8E8FA013B27A916E4B3F7E0);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if (mOnCaptureOverlayStateListenerProxy != null)
		OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* L_0 = __this->___mOnCaptureOverlayStateListenerProxy_2;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		// using (mVideosClient.Call<AndroidJavaObject>("unregisterOnCaptureOverlayStateChangedListener",
		//     mOnCaptureOverlayStateListenerProxy)) ;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___mVideosClient_0;
		il2cpp_codegen_memory_barrier();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* L_4 = __this->___mOnCaptureOverlayStateListenerProxy_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteralF51C2D096ED0ED7BF8E8FA013B27A916E4B3F7E0, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0035;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// mOnCaptureOverlayStateListenerProxy)) ;
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// mOnCaptureOverlayStateListenerProxy = null;
		__this->___mOnCaptureOverlayStateListenerProxy_2 = (OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOnCaptureOverlayStateListenerProxy_2), (void*)(OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF*)NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.Android.AndroidVideoClient::FromVideoQualityLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidVideoClient_FromVideoQualityLevel_mF56A0E17D8FF574D3969638B470314D96FF99C96 (int32_t ___0_captureQualityJava, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_captureQualityJava;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_001c;
			}
			case 3:
			{
				goto IL_001e;
			}
		}
	}
	{
		goto IL_0020;
	}

IL_0018:
	{
		// return VideoQualityLevel.SD;
		return (int32_t)(0);
	}

IL_001a:
	{
		// return VideoQualityLevel.HD;
		return (int32_t)(1);
	}

IL_001c:
	{
		// return VideoQualityLevel.XHD;
		return (int32_t)(2);
	}

IL_001e:
	{
		// return VideoQualityLevel.FullHD;
		return (int32_t)(3);
	}

IL_0020:
	{
		// return VideoQualityLevel.Unknown;
		return (int32_t)((-1));
	}
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.Android.AndroidVideoClient::FromVideoCaptureMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidVideoClient_FromVideoCaptureMode_mD421C62EB5A00BDD69D51273D9398350FB0A78E1 (int32_t ___0_captureMode, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_captureMode;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___0_captureMode;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		goto IL_000d;
	}

IL_0009:
	{
		// return VideoCaptureMode.File;
		return (int32_t)(0);
	}

IL_000b:
	{
		// return VideoCaptureMode.Stream;
		return (int32_t)(1);
	}

IL_000d:
	{
		// return VideoCaptureMode.Unknown;
		return (int32_t)((-1));
	}
}
// System.Int32 GooglePlayGames.Android.AndroidVideoClient::ToVideoCaptureMode(GooglePlayGames.BasicApi.VideoCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidVideoClient_ToVideoCaptureMode_m4CF8F016A6CEFE5776D1341782DFFD8B70CAAA80 (int32_t ___0_captureMode, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_captureMode;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___0_captureMode;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		goto IL_000d;
	}

IL_0009:
	{
		// return 0; // CAPTURE_MODE_FILE
		return 0;
	}

IL_000b:
	{
		// return 1; // CAPTURE_MODE_STREAM
		return 1;
	}

IL_000d:
	{
		// return -1; // CAPTURE_MODE_UNKNOWN
		return (-1);
	}
}
// GooglePlayGames.BasicApi.Video.VideoCaptureState GooglePlayGames.Android.AndroidVideoClient::CreateVideoCaptureState(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* AndroidVideoClient_CreateVideoCaptureState_m5C34C576DD7AA2236C0483D758CE8127CC00024E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_videoCaptureState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22BA49AFD9A87003D02B059AC208947DAF29084B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1F6E4C11E72249474E2C48EB4662A7AC7ADB5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B61F86185DC25AC11B503EE1E0D6F709B4BD77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5762E217B22F581454705E13D4B8A8185479B21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA787AC3068B0892B7FD21A67E78D21FF8BE5D7C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// bool isCapturing = videoCaptureState.Call<bool>("isCapturing");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_videoCaptureState;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteralC5762E217B22F581454705E13D4B8A8185479B21, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		// VideoCaptureMode captureMode = FromVideoCaptureMode(videoCaptureState.Call<int>("getCaptureMode"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___0_videoCaptureState;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_3, _stringLiteral22BA49AFD9A87003D02B059AC208947DAF29084B, L_4, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		int32_t L_6;
		L_6 = AndroidVideoClient_FromVideoCaptureMode_mD421C62EB5A00BDD69D51273D9398350FB0A78E1(L_5, NULL);
		V_0 = L_6;
		// VideoQualityLevel qualityLevel = FromVideoQualityLevel(videoCaptureState.Call<int>("getCaptureQuality"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ___0_videoCaptureState;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_9;
		L_9 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_7, _stringLiteralDA787AC3068B0892B7FD21A67E78D21FF8BE5D7C, L_8, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		int32_t L_10;
		L_10 = AndroidVideoClient_FromVideoQualityLevel_mF56A0E17D8FF574D3969638B470314D96FF99C96(L_9, NULL);
		V_1 = L_10;
		// bool isOverlayVisible = videoCaptureState.Call<bool>("isOverlayVisible");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ___0_videoCaptureState;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_11);
		bool L_13;
		L_13 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_11, _stringLiteral3C1F6E4C11E72249474E2C48EB4662A7AC7ADB5F, L_12, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_2 = L_13;
		// bool isPaused = videoCaptureState.Call<bool>("isPaused");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = ___0_videoCaptureState;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_14);
		bool L_16;
		L_16 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_14, _stringLiteral86B61F86185DC25AC11B503EE1E0D6F709B4BD77, L_15, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_3 = L_16;
		// return new VideoCaptureState(isCapturing, captureMode,
		//     qualityLevel, isOverlayVisible, isPaused);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		bool L_19 = V_2;
		bool L_20 = V_3;
		VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* L_21 = (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625*)il2cpp_codegen_object_new(VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		VideoCaptureState__ctor_m2B2B27B6716AEE8A5DFA5CFA91402AD73F76E3A6(L_21, L_2, L_17, L_18, L_19, L_20, NULL);
		return L_21;
	}
}
// GooglePlayGames.BasicApi.Video.VideoCapabilities GooglePlayGames.Android.AndroidVideoClient::CreateVideoCapabilities(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* AndroidVideoClient_CreateVideoCapabilities_m52EF4D055A682D3F0F3032EC6E3847F900049E8E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_videoCapabilities, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_mB4062A6E48F4E8553BC74CA631E839BC717089E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1372FD52604B6438A612C6D111E9EF3A2675FAA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral404DFB14BA6605D644114E20684ED60AA0759437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB17A217F6DB5267748F611C3A187AE848CA04E23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC815A6FEF415BAA9078EA2AB638E7B53F59A559D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9861F4BC5A133A7EE9A138188A5EFC85D984782);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_2 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_3 = NULL;
	{
		// bool isCameraSupported = videoCapabilities.Call<bool>("isCameraSupported");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_videoCapabilities;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral1372FD52604B6438A612C6D111E9EF3A2675FAA0, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		// bool isMicSupported = videoCapabilities.Call<bool>("isMicSupported");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___0_videoCapabilities;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_3, _stringLiteralB17A217F6DB5267748F611C3A187AE848CA04E23, L_4, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_5;
		// bool isWriteStorageSupported = videoCapabilities.Call<bool>("isWriteStorageSupported");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ___0_videoCapabilities;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_8;
		L_8 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_6, _stringLiteralC9861F4BC5A133A7EE9A138188A5EFC85D984782, L_7, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_1 = L_8;
		// bool[] captureModesSupported = videoCapabilities.Call<bool[]>("getSupportedCaptureModes");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ___0_videoCapabilities;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11;
		L_11 = AndroidJavaObject_Call_TisBooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_mB4062A6E48F4E8553BC74CA631E839BC717089E0(L_9, _stringLiteral404DFB14BA6605D644114E20684ED60AA0759437, L_10, AndroidJavaObject_Call_TisBooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_mB4062A6E48F4E8553BC74CA631E839BC717089E0_RuntimeMethod_var);
		V_2 = L_11;
		// bool[] qualityLevelsSupported = videoCapabilities.Call<bool[]>("getSupportedQualityLevels");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___0_videoCapabilities;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_12);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14;
		L_14 = AndroidJavaObject_Call_TisBooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_mB4062A6E48F4E8553BC74CA631E839BC717089E0(L_12, _stringLiteralC815A6FEF415BAA9078EA2AB638E7B53F59A559D, L_13, AndroidJavaObject_Call_TisBooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_mB4062A6E48F4E8553BC74CA631E839BC717089E0_RuntimeMethod_var);
		V_3 = L_14;
		// return new VideoCapabilities(isCameraSupported, isMicSupported, isWriteStorageSupported,
		//     captureModesSupported, qualityLevelsSupported);
		bool L_15 = V_0;
		bool L_16 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = V_2;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_18 = V_3;
		VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* L_19 = (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE*)il2cpp_codegen_object_new(VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		VideoCapabilities__ctor_mE8546E8B5CB6AF1F8919493CDD0177059A3290BA(L_19, L_2, L_15, L_16, L_17, L_18, NULL);
		return L_19;
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
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::.ctor(GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureOverlayStateListenerProxy__ctor_m625F798E7AF72C9684B5FD9D3B9FCB972A9780E7 (OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17698B1A5B3CA25CC9708FAF8FBB97619723B14F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com/google/android/gms/games/VideosClient$OnCaptureOverlayStateListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral17698B1A5B3CA25CC9708FAF8FBB97619723B14F, NULL);
		// mListener = listener;
		RuntimeObject* L_0 = ___0_listener;
		__this->___mListener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mListener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::onCaptureOverlayStateChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureOverlayStateListenerProxy_onCaptureOverlayStateChanged_m738A7990422D3B4323E0CC174C3FDD71738FE362 (OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* __this, int32_t ___0_overlayState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3ConCaptureOverlayStateChangedU3Eb__0_m708AA0DB285E5E12F5DF32C5C61BC49F1AF68550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD* L_0 = (U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_mBC013A4931A07AF78D6E72DC826C4A753ECA8A47(L_0, NULL);
		U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD* L_2 = L_1;
		int32_t L_3 = ___0_overlayState;
		NullCheck(L_2);
		L_2->___overlayState_1 = L_3;
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     mListener.OnCaptureOverlayStateChanged(FromVideoCaptureOverlayState(overlayState))
		// );
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3ConCaptureOverlayStateChangedU3Eb__0_m708AA0DB285E5E12F5DF32C5C61BC49F1AF68550_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8(L_4, NULL);
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.VideoCaptureOverlayState GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::FromVideoCaptureOverlayState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnCaptureOverlayStateListenerProxy_FromVideoCaptureOverlayState_mAA823B357B482D101434A8D72FC8B453D9E13A73 (int32_t ___0_overlayState, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_overlayState;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_001e;
			}
			case 3:
			{
				goto IL_0020;
			}
		}
	}
	{
		goto IL_0022;
	}

IL_001a:
	{
		// return VideoCaptureOverlayState.Shown;
		return (int32_t)(1);
	}

IL_001c:
	{
		// return VideoCaptureOverlayState.Started;
		return (int32_t)(2);
	}

IL_001e:
	{
		// return VideoCaptureOverlayState.Stopped;
		return (int32_t)(3);
	}

IL_0020:
	{
		// return VideoCaptureOverlayState.Dismissed;
		return (int32_t)(4);
	}

IL_0022:
	{
		// return VideoCaptureOverlayState.Unknown;
		return (int32_t)((-1));
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
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mBC013A4931A07AF78D6E72DC826C4A753ECA8A47 (U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::<onCaptureOverlayStateChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3ConCaptureOverlayStateChangedU3Eb__0_m708AA0DB285E5E12F5DF32C5C61BC49F1AF68550 (U3CU3Ec__DisplayClass2_0_t3FF98F652F4345BEA99C510C0C49E74E448EF8AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureOverlayStateListener_t28D06D8FFD23A0B65384088FFE605863AFD40AD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mListener.OnCaptureOverlayStateChanged(FromVideoCaptureOverlayState(overlayState))
		OnCaptureOverlayStateListenerProxy_t9F54C37AE5F91B2E199304C4BFC3EC34A1AFD1FF* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___mListener_4;
		int32_t L_2 = __this->___overlayState_1;
		int32_t L_3;
		L_3 = OnCaptureOverlayStateListenerProxy_FromVideoCaptureOverlayState_mAA823B357B482D101434A8D72FC8B453D9E13A73(L_2, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener::OnCaptureOverlayStateChanged(GooglePlayGames.BasicApi.VideoCaptureOverlayState) */, CaptureOverlayStateListener_t28D06D8FFD23A0B65384088FFE605863AFD40AD5_il2cpp_TypeInfo_var, L_1, L_3);
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
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m1691790282ED30CF0F267F6B29F7FA9FA2FC10D9 (U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0::<GetCaptureCapabilities>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__0_m4E0E3218662E79E1FF5FEB3B7DBE86D13741C04A (U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_videoCapabilities, const RuntimeMethod* method) 
{
	{
		// videoCapabilities => callback(ResponseStatus.Success, CreateVideoCapabilities(videoCapabilities)));
		Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* L_0 = __this->___callback_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_videoCapabilities;
		VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* L_2;
		L_2 = AndroidVideoClient_CreateVideoCapabilities_m52EF4D055A682D3F0F3032EC6E3847F900049E8E(L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_m11118BC5CF450239E1F68BF2B7AB1BAAEBD53BB5_inline(L_0, 1, L_2, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass4_0::<GetCaptureCapabilities>b__1(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CGetCaptureCapabilitiesU3Eb__1_m8DBF863527582635DA88F1A68D8DCCC063275BDB (U3CU3Ec__DisplayClass4_0_t428BC2DD6B93FBE0E43A73DD462C89E5425125D1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_exception, const RuntimeMethod* method) 
{
	{
		// exception => callback(ResponseStatus.InternalError, null));
		Action_2_t001294AD4268EF8E0024EBAF0041A52CB790B125* L_0 = __this->___callback_0;
		NullCheck(L_0);
		Action_2_Invoke_m11118BC5CF450239E1F68BF2B7AB1BAAEBD53BB5_inline(L_0, ((int32_t)-2), (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE*)NULL, NULL);
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
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m19EACD68D9B0C8521587EEDE30D7C5FA7F8C40D3 (U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0::<GetCaptureState>b__0(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__0_m7928765123103A94B8A9ABECE23CD652D3CCEE26 (U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_captureState, const RuntimeMethod* method) 
{
	{
		// callback(ResponseStatus.Success, CreateVideoCaptureState(captureState)));
		Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* L_0 = __this->___callback_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_captureState;
		VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* L_2;
		L_2 = AndroidVideoClient_CreateVideoCaptureState_m5C34C576DD7AA2236C0483D758CE8127CC00024E(L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_mCE94125A40120F258D04358EEF201950E1DAC4DF_inline(L_0, 1, L_2, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass6_0::<GetCaptureState>b__1(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CGetCaptureStateU3Eb__1_mBCA05E5380125763D765C4ECEB801EA6A14EFE6D (U3CU3Ec__DisplayClass6_0_tD3F78808C08FF8B66D9FE7D0726EBEAADA99FFAC* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_exception, const RuntimeMethod* method) 
{
	{
		// exception => callback(ResponseStatus.InternalError, null));
		Action_2_tDFE4819753FF6430676EE53B6B9635997D0CFCEC* L_0 = __this->___callback_0;
		NullCheck(L_0);
		Action_2_Invoke_mCE94125A40120F258D04358EEF201950E1DAC4DF_inline(L_0, ((int32_t)-2), (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625*)NULL, NULL);
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
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m3859F1DA2A77F417F62FEDE600306569FD12BFBA (U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0::<IsCaptureAvailable>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__0_mD8EE3C2B721D5B4D9C6ACD0D68B1CC526167DA96 (U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* __this, bool ___0_isCaptureAvailable, const RuntimeMethod* method) 
{
	{
		// isCaptureAvailable => callback(ResponseStatus.Success, isCaptureAvailable));
		Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* L_0 = __this->___callback_0;
		bool L_1 = ___0_isCaptureAvailable;
		NullCheck(L_0);
		Action_2_Invoke_m6ACB65C7F4EDE12D35E5CE27CA05EECF5C86BCD3_inline(L_0, 1, L_1, NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/<>c__DisplayClass7_0::<IsCaptureAvailable>b__1(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CIsCaptureAvailableU3Eb__1_m89EEABB4A4D09C744A05BA02A337F49D0A691B7C (U3CU3Ec__DisplayClass7_0_tB949C23DF193E776F5EE9085C454E47AC9A70882* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_exception, const RuntimeMethod* method) 
{
	{
		// exception => callback(ResponseStatus.InternalError, false));
		Action_2_t567DBC0DE2C496786B4C1EC651875B2E2A52579A* L_0 = __this->___callback_0;
		NullCheck(L_0);
		Action_2_Invoke_m6ACB65C7F4EDE12D35E5CE27CA05EECF5C86BCD3_inline(L_0, ((int32_t)-2), (bool)0, NULL);
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
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_DebugLogEnabled_m43F2B04C64D7B885C844E23F84FC491B314EA52E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return debugLogEnabled; }
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___debugLogEnabled_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_DebugLogEnabled_m92D6697935D59302614127AD3D85A4410AA32F94 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { debugLogEnabled = value; }
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___debugLogEnabled_0 = L_0;
		// set { debugLogEnabled = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_WarningLogEnabled_mD458C06F923F20F74A22D1A9E27477018D2AC014 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return warningLogEnabled; }
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___warningLogEnabled_1;
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_WarningLogEnabled_m44067DF1EBD2EBFC4BE213A5B6395B5A1C10B302 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { warningLogEnabled = value; }
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___warningLogEnabled_1 = L_0;
		// set { warningLogEnabled = value; }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_mA5A0CBE09F5691D3C12CCB0057775A97E304340A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358* L_0 = (U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m4600D1231080B5CFD1CDFA7CD226A075C95F0BCA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358* L_1 = V_0;
		String_t* L_2 = ___0_msg;
		NullCheck(L_1);
		L_1->___msg_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___msg_0), (void*)L_2);
		// if (debugLogEnabled)
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___debugLogEnabled_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358* L_4 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_mA5A0CBE09F5691D3C12CCB0057775A97E304340A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8(L_5, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m5F859C2C9AECCC5BA69DC0D6289997609A1740A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903* L_0 = (U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m82B0A4AD2E1F0180AEE5B636D62F99DF7603DAE3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903* L_1 = V_0;
		String_t* L_2 = ___0_msg;
		NullCheck(L_1);
		L_1->___msg_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___msg_0), (void*)L_2);
		// if (warningLogEnabled)
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___warningLogEnabled_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903* L_4 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m5F859C2C9AECCC5BA69DC0D6289997609A1740A3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8(L_5, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_m5748C4F8B1A800326408CC00159B464A738763C9 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_mD66DC02322E3F50E5D4AD5B23371EF04089DFC7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49* L_0 = (U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_m48547E25E51C509C7FB7D8426418C3452C2BE180(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49* L_1 = V_0;
		String_t* L_2 = ___0_msg;
		NullCheck(L_1);
		L_1->___msg_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___msg_0), (void*)L_2);
		// if (warningLogEnabled)
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___warningLogEnabled_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49* L_4 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_mD66DC02322E3F50E5D4AD5B23371EF04089DFC7C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8(L_5, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_describe_m514F86A0E2DB4975DC472EE96C52E1D905D04525 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return b == null ? "(null)" : "byte[" + b.Length + "]";
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_b;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_b;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0, L_2, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return L_3;
	}

IL_001e:
	{
		return _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_mBE03F589BDBE3C251F02F9C49DD330C775A1AF29 (String_t* ___0_prefix, String_t* ___1_logType, String_t* ___2_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral804A2CF82871B4F36D3881FCDE8C2C7F8726DEB6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// string timeString = null;
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		// timeString = DateTime.Now.ToString("MM/dd/yy H:mm:ss zzz");
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A, NULL);
		V_0 = L_1;
		// }
		goto IL_0044;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		{
			// catch (Exception)
			// PlayGamesHelperObject.RunOnGameThread(() =>
			//     Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var)));
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var))))->___U3CU3E9__12_0_1;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
			G_B3_0 = L_3;
			if (L_3)
			{
				G_B4_0 = L_3;
				goto IL_0037;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var)));
			U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA* L_4 = ((U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var))))->___U3CU3E9_0;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CToLogMessageU3Eb__12_0_mF0E710E5F2B2A31A7ABF4B89846BB5744AAAEBD8_RuntimeMethod_var))), NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
			((U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var))))->___U3CU3E9__12_0_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var))))->___U3CU3E9__12_0_1), (void*)L_6);
			G_B4_0 = L_6;
		}

IL_0037:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var)));
			PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8(G_B4_0, NULL);
			// timeString = string.Empty;
			String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
			V_0 = L_7;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0044;
		}
	}// end catch (depth: 1)

IL_0044:
	{
		// return string.Format("{0} [Play Games Plugin " + PluginVersion.VersionString+ "] {1} {2}: {3}",
		//     prefix, timeString, logType, msg);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		String_t* L_10 = ___0_prefix;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		String_t* L_14 = ___1_logType;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		String_t* L_16 = ___2_msg;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral804A2CF82871B4F36D3881FCDE8C2C7F8726DEB6, L_15, NULL);
		return L_17;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m2394A2028A9B56A8EF3DC2AA1DFD40CB1CF154E4 (Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_m664F1720ADB0C779543E9ED403CC3EBA78CF16B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool debugLogEnabled = false;
		((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___debugLogEnabled_0 = (bool)0;
		// private static bool warningLogEnabled = true;
		((Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var))->___warningLogEnabled_1 = (bool)1;
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m4600D1231080B5CFD1CDFA7CD226A075C95F0BCA (U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::<d>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_mA5A0CBE09F5691D3C12CCB0057775A97E304340A (U3CU3Ec__DisplayClass8_0_t7EE4A8FDAB00E10DEEF994E9BA220B19C551A358* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		String_t* L_1 = __this->___msg_0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Logger_ToLogMessage_mBE03F589BDBE3C251F02F9C49DD330C775A1AF29(L_0, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m82B0A4AD2E1F0180AEE5B636D62F99DF7603DAE3 (U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::<w>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m5F859C2C9AECCC5BA69DC0D6289997609A1740A3 (U3CU3Ec__DisplayClass9_0_t8A0A71E6138DF6B82B69A4C7458D68AB112CA903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		String_t* L_0 = __this->___msg_0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_mBE03F589BDBE3C251F02F9C49DD330C775A1AF29(_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551, _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m48547E25E51C509C7FB7D8426418C3452C2BE180 (U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::<e>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_mD66DC02322E3F50E5D4AD5B23371EF04089DFC7C (U3CU3Ec__DisplayClass10_0_t0E47AA3AC30E04A2A0F73ADC3A579099D4F38E49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		String_t* L_0 = __this->___msg_0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_mBE03F589BDBE3C251F02F9C49DD330C775A1AF29(_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD5AD9A5FCFCEC5E56F44E5CD2D928E465FF2C6E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA* L_0 = (U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA*)il2cpp_codegen_object_new(U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m814253E010813D8248958EC40458CD628EF2D681(L_0, NULL);
		((U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m814253E010813D8248958EC40458CD628EF2D681 (U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::<ToLogMessage>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CToLogMessageU3Eb__12_0_mF0E710E5F2B2A31A7ABF4B89846BB5744AAAEBD8 (U3CU3Ec_tB4152AD70C1FCA46807D2A57880F8D5FFFFE24AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B1C085F71C4070B0B7C0880C5020B683A6BFB83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5B1C085F71C4070B0B7C0880C5020B683A6BFB83, NULL);
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
// System.Boolean GooglePlayGames.OurUtils.Misc::BuffersAreIdentical(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_BuffersAreIdentical_mC13FA19E5F870C0595BECB8091958E77D114DE66 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_a, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (a == b)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_a;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_b;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (a == null || b == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_a;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_b;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// if (a.Length != b.Length)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_a;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_b;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// for (int i = 0; i < a.Length; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_001c:
	{
		// if (a[i] != b[i])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_a;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_b;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_a;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Byte[] GooglePlayGames.OurUtils.Misc::GetSubsetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Misc_GetSubsetBytes_m63F7794B80598A634D0049A011F8E61CC0663354 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (array == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("array");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m63F7794B80598A634D0049A011F8E61CC0663354_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (offset < 0 || offset >= array.Length)
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		// throw new ArgumentOutOfRangeException("offset");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m63F7794B80598A634D0049A011F8E61CC0663354_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (length < 0 || (array.Length - offset) < length)
		int32_t L_6 = ___2_length;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_offset;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))) >= ((int32_t)L_9)))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		// throw new ArgumentOutOfRangeException("length");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m63F7794B80598A634D0049A011F8E61CC0663354_RuntimeMethod_var)));
	}

IL_003a:
	{
		// if (offset == 0 && length == array.Length)
		int32_t L_11 = ___1_offset;
		if (L_11)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_12 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_array;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		// return array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		return L_14;
	}

IL_0045:
	{
		// byte[] piece = new byte[length];
		int32_t L_15 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_0 = L_16;
		// Array.Copy(array, offset, piece, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_array;
		int32_t L_18 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		int32_t L_20 = ___2_length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, L_18, (RuntimeArray*)L_19, 0, L_20, NULL);
		// return piece;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		return L_21;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Misc::IsApiException(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_IsApiException_mA83D12E5A06C002363254AF116BB965138F5B8E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6253CC983478A479C24262DF4DDBF2DAB16C463C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var exceptionClassName = exception.Call<AndroidJavaObject>("getClass")
		//     .Call<String>("getName");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_exception;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		// return exceptionClassName == "com.google.android.gms.common.api.ApiException";
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral6253CC983478A479C24262DF4DDBF2DAB16C463C, NULL);
		return L_5;
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
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::CreateObject(GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_CreateObject_m180A182E845BF104E6A67CE211CB019BB00C091C (RuntimeObject* ___0_client, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_mA0FBFEDD94712971577C10D1A65DFD74D5C0862A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF60DDE06C2C9D09E97ED4FEB8CA18A3747827F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* L_0 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// mClient = client;
		RuntimeObject* L_2 = ___0_client;
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mClient_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mClient_7), (void*)L_2);
		// if (Application.isPlaying)
		bool L_3;
		L_3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// GameObject obj = new GameObject("PlayGames_NearbyHelper");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteralFF60DDE06C2C9D09E97ED4FEB8CA18A3747827F5, NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
		// instance = obj.AddComponent<NearbyHelperObject>();
		NullCheck(L_5);
		NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* L_6;
		L_6 = GameObject_AddComponent_TisNearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_mA0FBFEDD94712971577C10D1A65DFD74D5C0862A(L_5, GameObject_AddComponent_TisNearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_mA0FBFEDD94712971577C10D1A65DFD74D5C0862A_RuntimeMethod_var);
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4), (void*)L_6);
		return;
	}

IL_0036:
	{
		// instance = new NearbyHelperObject();
		NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* L_7 = (NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4*)il2cpp_codegen_object_new(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		NearbyHelperObject__ctor_m4752EB0B699736087A424CA9FC6A9ABC767BBA7E(L_7, NULL);
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4), (void*)L_7);
		// }
		return;
	}
}
// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::ToSeconds(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NearbyHelperObject_ToSeconds_m701E5EAAD5A42E6B0CC5B59E73CD36870CB3D566 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_span, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!span.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline((&___0_span), Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return 0;
		return (0.0);
	}

IL_0013:
	{
		// if (span.Value.TotalSeconds < 0)
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___0_span), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0037;
		}
	}
	{
		// return 0;
		return (0.0);
	}

IL_0037:
	{
		// return span.Value.TotalSeconds;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___0_span), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		V_0 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		return L_4;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::StartAdvertisingTimer(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_StartAdvertisingTimer_m0614EF5F428CAE1AB39B77BE4CE8DB9DD35FF4EF (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_span, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mAdvertisingRemaining = ToSeconds(span);
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = ___0_span;
		double L_1;
		L_1 = NearbyHelperObject_ToSeconds_m701E5EAAD5A42E6B0CC5B59E73CD36870CB3D566(L_0, NULL);
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5 = L_1;
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::StartDiscoveryTimer(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_StartDiscoveryTimer_m6D078E1795A004E2FE2BF7B0975BA0C3BB67F823 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_span, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mDiscoveryRemaining = ToSeconds(span);
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = ___0_span;
		double L_1;
		L_1 = NearbyHelperObject_ToSeconds_m701E5EAAD5A42E6B0CC5B59E73CD36870CB3D566(L_0, NULL);
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6 = L_1;
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_Awake_m52857F736931E0FF75F1AF3B3C608041DEF7FB5A (NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_OnDisable_m92DE829AD1CED0B4E54D199439B1D1B1E43A4957 (NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* L_0 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = null;
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4 = (NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___instance_4), (void*)(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4*)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_Update_mC83C4734AFC33E760749F35558D047BE7D9E928E (NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INearbyConnectionClient_tCE3F8631B6CC4D2A868339617EEB8EB74E3D27E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAdvertisingRemaining > 0)
		double L_0 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5;
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_003b;
		}
	}
	{
		// mAdvertisingRemaining -= Time.deltaTime;
		double L_1 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5 = ((double)il2cpp_codegen_subtract(L_1, ((double)L_2)));
		// if (mAdvertisingRemaining < 0)
		double L_3 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_003b;
		}
	}
	{
		// mClient.StopAdvertising();
		RuntimeObject* L_4 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mClient_7;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(5 /* System.Void GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::StopAdvertising() */, INearbyConnectionClient_tCE3F8631B6CC4D2A868339617EEB8EB74E3D27E4_il2cpp_TypeInfo_var, L_4);
	}

IL_003b:
	{
		// if (mDiscoveryRemaining > 0)
		double L_5 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6;
		if ((!(((double)L_5) > ((double)(0.0)))))
		{
			goto IL_0080;
		}
	}
	{
		// mDiscoveryRemaining -= Time.deltaTime;
		double L_6 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6 = ((double)il2cpp_codegen_subtract(L_6, ((double)L_7)));
		// if (mDiscoveryRemaining < 0)
		double L_8 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6;
		if ((!(((double)L_8) < ((double)(0.0)))))
		{
			goto IL_0080;
		}
	}
	{
		// mClient.StopDiscovery(mClient.GetServiceId());
		RuntimeObject* L_9 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mClient_7;
		RuntimeObject* L_10 = ((NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4_il2cpp_TypeInfo_var))->___mClient_7;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(14 /* System.String GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::GetServiceId() */, INearbyConnectionClient_tCE3F8631B6CC4D2A868339617EEB8EB74E3D27E4_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::StopDiscovery(System.String) */, INearbyConnectionClient_tCE3F8631B6CC4D2A868339617EEB8EB74E3D27E4_il2cpp_TypeInfo_var, L_9, L_11);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject__ctor_m4752EB0B699736087A424CA9FC6A9ABC767BBA7E (NearbyHelperObject_tCD9CF161830D93D5A769E439A10EF80C2AA243A4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean GooglePlayGames.OurUtils.PlatformUtils::get_Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformUtils_get_Supported_mEC9846CFD93BC03775A42A09B688D3E1D915E84F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// var ca = up.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// var packageManager = ca.Call<AndroidJavaObject>("getPackageManager");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_3;
		// AndroidJavaObject launchIntent = null;
		V_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
	}
	try
	{// begin try (depth: 1)
		//                    launchIntent =
		// packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage", "com.google.android.play.games");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_4, _stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882, L_6, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_7;
		// }
		goto IL_0047;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0042;
		}
		throw e;
	}

CATCH_0042:
	{// begin catch(System.Exception)
		// catch (Exception)
		// return false;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0047:
	{
		// return launchIntent != null;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
		return (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_004c:
	{
		// }
		bool L_9 = V_2;
		return L_9;
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::CreateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_CreateObject_m20B7481F71F952B70A88BC3C0D94D92D30957088 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_m581374DDC3697BCC02BAC5351641E080A90AE08E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// GameObject obj = new GameObject("PlayGames_QueueRunner");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1, NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
		// instance = obj.AddComponent<PlayGamesHelperObject>();
		NullCheck(L_4);
		PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* L_5;
		L_5 = GameObject_AddComponent_TisPlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_m581374DDC3697BCC02BAC5351641E080A90AE08E(L_4, GameObject_AddComponent_TisPlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_m581374DDC3697BCC02BAC5351641E080A90AE08E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4), (void*)L_5);
		return;
	}

IL_0030:
	{
		// instance = new PlayGamesHelperObject();
		PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* L_6 = (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3*)il2cpp_codegen_object_new(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PlayGamesHelperObject__ctor_m510093F00BC54C0882CD0ED573C45C3DC216B209(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4), (void*)L_6);
		// sIsDummy = true;
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sIsDummy_5 = (bool)1;
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Awake_mC14A15CCD7DE1F98CE4F5DAFC73D4D5196B18537 (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnDisable_mA961B0481C79ED04C7193CCBC0987DE213FA723F (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = null;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4 = (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4), (void*)(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3*)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunCoroutine_mC5F209A5CF82AAF993799B2B873D8CC5B4C5EC5A (RuntimeObject* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA5758E56CB1B23A744CEEAC3EB46E9303FDD0077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* L_0 = (U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_m1CF8F97E7E3F842DC6BF7625557315C4135F3623(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* L_1 = V_0;
		RuntimeObject* L_2 = ___0_action;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// if (instance != null)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* L_3 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA5758E56CB1B23A744CEEAC3EB46E9303FDD0077_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	{
		// if (action == null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayGamesHelperObject_RunOnGameThread_m3091BE8C6F3D137431E86545EB45F22D1C9ECAE8_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (sIsDummy)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		bool L_2 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sIsDummy_5;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// lock (sQueue)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueue_6;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0044;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_1), NULL);
			// sQueue.Add(action);
			il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueue_6;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___0_action;
			NullCheck(L_7);
			List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_7, L_8, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
			// sQueueEmpty = false;
			il2cpp_codegen_memory_barrier();
			((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueueEmpty_8 = (bool)0;
			// }
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Update_mA1E037BFBB1A6F5DB01BA34C75FD003E8EF93A5C (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (sIsDummy || sQueueEmpty)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sIsDummy_5;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		bool L_1 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueueEmpty_8;
		il2cpp_codegen_memory_barrier();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// localQueue.Clear();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = __this->___localQueue_7;
		NullCheck(L_2);
		List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_2, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		// lock (sQueue)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueue_6;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0059;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0059:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_1), NULL);
			// localQueue.AddRange(sQueue);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = __this->___localQueue_7;
			il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueue_6;
			NullCheck(L_7);
			List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D(L_7, L_8, List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
			// sQueue.Clear();
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_9 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueue_6;
			NullCheck(L_9);
			List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_9, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
			// sQueueEmpty = true;
			il2cpp_codegen_memory_barrier();
			((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueueEmpty_8 = (bool)1;
			// }
			goto IL_005a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		V_2 = 0;
		goto IL_0073;
	}

IL_005e:
	{
		// localQueue[i].Invoke();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_10 = __this->___localQueue_7;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12;
		L_12 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_10, L_11, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_12);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_12, NULL);
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0073:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_14 = V_2;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_15 = __this->___localQueue_7;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_15, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationFocus_m7E277C331301026B7B7131D859AA8D46C70F5A27 (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* __this, bool ___0_focused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// foreach (Action<bool> cb in sFocusCallbackList)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		NullCheck(L_0);
		Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 L_1;
		L_1 = List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25(L_0, List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783((&V_0), Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_000d_1:
			{
				// foreach (Action<bool> cb in sFocusCallbackList)
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2;
				L_2 = Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_inline((&V_0), Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
				V_1 = L_2;
			}
			try
			{// begin try (depth: 2)
				// cb(focused);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = V_1;
				bool L_4 = ___0_focused;
				NullCheck(L_3);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_3, L_4, NULL);
				// }
				goto IL_0041_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_001e_1;
				}
				throw e;
			}

CATCH_001e_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Logger.e("Exception in OnApplicationFocus:" +
				//                e.Message + "\n" + e.StackTrace);
				Exception_t* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
				Exception_t* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Exception::get_StackTrace() */, L_7);
				String_t* L_9;
				L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C451AC3EB5AB025342585D935B8CAF664FF385C)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var)));
				Logger_e_m5748C4F8B1A800326408CC00159B464A738763C9(L_9, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0041_1;
			}// end catch (depth: 2)

IL_0041_1:
			{
				// foreach (Action<bool> cb in sFocusCallbackList)
				bool L_10;
				L_10 = Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB((&V_0), Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationPause_mC5F8AE48932AD45463BAAC7666BD465A9ABFC3B0 (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* __this, bool ___0_paused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// foreach (Action<bool> cb in sPauseCallbackList)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		NullCheck(L_0);
		Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 L_1;
		L_1 = List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25(L_0, List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783((&V_0), Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_000d_1:
			{
				// foreach (Action<bool> cb in sPauseCallbackList)
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2;
				L_2 = Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_inline((&V_0), Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
				V_1 = L_2;
			}
			try
			{// begin try (depth: 2)
				// cb(paused);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = V_1;
				bool L_4 = ___0_paused;
				NullCheck(L_3);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_3, L_4, NULL);
				// }
				goto IL_0041_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_001e_1;
				}
				throw e;
			}

CATCH_001e_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Logger.e("Exception in OnApplicationPause:" +
				//                e.Message + "\n" + e.StackTrace);
				Exception_t* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
				Exception_t* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Exception::get_StackTrace() */, L_7);
				String_t* L_9;
				L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral54BBC5A7505DB79E77AA0E8FE2EDF7EB2EA928B2)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var)));
				Logger_e_m5748C4F8B1A800326408CC00159B464A738763C9(L_9, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0041_1;
			}// end catch (depth: 2)

IL_0041_1:
			{
				// foreach (Action<bool> cb in sPauseCallbackList)
				bool L_10;
				L_10 = Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB((&V_0), Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddFocusCallback_m784D3C6837CB73D35AFD8C7EC956955DFFB5BA24 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!sFocusCallbackList.Contains(callback))
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_callback;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9(L_0, L_1, List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// sFocusCallbackList.Add(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_3 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___0_callback;
		NullCheck(L_3);
		List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_inline(L_3, L_4, List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemoveFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemoveFocusCallback_m336A7C153DEBBA6B87EF0169F40490CA3569E195 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sFocusCallbackList.Remove(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_callback;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA(L_0, L_1, List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddPauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddPauseCallback_m8EB8CEE020C1716A68B79DF69BEF1F5C0460A049 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!sPauseCallbackList.Contains(callback))
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_callback;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9(L_0, L_1, List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// sPauseCallbackList.Add(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_3 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___0_callback;
		NullCheck(L_3);
		List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_inline(L_3, L_4, List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemovePauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemovePauseCallback_mDFD53E6C45E4FD664EF755B678C8E9CB7FDB3A1C (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sPauseCallbackList.Remove(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_callback;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA(L_0, L_1, List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_m510093F00BC54C0882CD0ED573C45C3DC216B209 (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<System.Action> localQueue = new List<System.Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___localQueue_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localQueue_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__cctor_m414C2B27DB36E857CF7F85504E7C39DEEB1D9F07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PlayGamesHelperObject instance = null;
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4 = (PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4), (void*)(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3*)NULL);
		// private static bool sIsDummy = false;
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sIsDummy_5 = (bool)0;
		// private static List<System.Action> sQueue = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueue_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueue_6), (void*)L_0);
		// private volatile static bool sQueueEmpty = true;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sQueueEmpty_8 = (bool)1;
		// private static List<Action<bool>> sPauseCallbackList =
		//     new List<Action<bool>>();
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_1 = (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*)il2cpp_codegen_object_new(List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC(L_1, List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var);
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sPauseCallbackList_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sPauseCallbackList_9), (void*)L_1);
		// private static List<Action<bool>> sFocusCallbackList =
		//     new List<Action<bool>>();
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_2 = (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*)il2cpp_codegen_object_new(List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC(L_2, List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var);
		((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sFocusCallbackList_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___sFocusCallbackList_10), (void*)L_2);
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m1CF8F97E7E3F842DC6BF7625557315C4135F3623 (U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::<RunCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA5758E56CB1B23A744CEEAC3EB46E9303FDD0077 (U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4;
		RuntimeObject* L_1 = __this->___action_0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
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
// System.String GooglePlayGames.BasicApi.Achievement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_ToString_mBA4EEDB90DB9657D7191B8ADEFCE34D309AEEC8E (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		// return string.Format(
		//     "[Achievement] id={0}, name={1}, desc={2}, type={3}, revealed={4}, unlocked={5}, steps={6}/{7}",
		//     mId, mName, mDescription, mIsIncremental ? "INCREMENTAL" : "STANDARD",
		//     mIsRevealed, mIsUnlocked, mCurrentSteps, mTotalSteps);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___mId_1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = __this->___mName_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = __this->___mDescription_7;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		bool L_8 = __this->___mIsIncremental_2;
		G_B1_0 = 3;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
		if (L_8)
		{
			G_B2_0 = 3;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
			goto IL_0037;
		}
	}
	{
		G_B3_0 = _stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_003c;
	}

IL_0037:
	{
		G_B3_0 = _stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_003c:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = G_B3_3;
		bool L_10 = __this->___mIsRevealed_3;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		bool L_14 = __this->___mIsUnlocked_4;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___mCurrentSteps_5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = __this->___mTotalSteps_6;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B3_4, L_21, NULL);
		return L_25;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m81B23637AFD073F39FAB60141A10FFAE465D6200 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_1), (void*)L_0);
		// private string mDescription = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mDescription_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_7), (void*)L_1);
		// private string mName = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mName_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_8), (void*)L_2);
		// public Achievement()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsIncremental()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m3E31E38C3F1F94636B626B9EC99A6EBEF88643D7 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsIncremental; }
		bool L_0 = __this->___mIsIncremental_2;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsIncremental(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsIncremental_mE0B2F14455AC911653C4F10427E725A8D6F67FA3 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mIsIncremental = value; }
		bool L_0 = ___0_value;
		__this->___mIsIncremental_2 = L_0;
		// set { mIsIncremental = value; }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_CurrentSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Achievement_get_CurrentSteps_mC4841B348137649A2769B152EAAA9FEEF154172A (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCurrentSteps; }
		int32_t L_0 = __this->___mCurrentSteps_5;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_CurrentSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_CurrentSteps_mBD209FCB6B0F266A4F4E41B651CDD747339AD640 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mCurrentSteps = value; }
		int32_t L_0 = ___0_value;
		__this->___mCurrentSteps_5 = L_0;
		// set { mCurrentSteps = value; }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_TotalSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_mF07FF15D5FC2CC49B21D3A2772A45F421A02DE97 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mTotalSteps; }
		int32_t L_0 = __this->___mTotalSteps_6;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_TotalSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_TotalSteps_mC13E10BBA2DE40D840F312FD8C315BCBDF5F3491 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mTotalSteps = value; }
		int32_t L_0 = ___0_value;
		__this->___mTotalSteps_6 = L_0;
		// set { mTotalSteps = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsUnlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsUnlocked_m26D60A8FCFE4DF4B06079E6FA6ACD914503A500F (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsUnlocked; }
		bool L_0 = __this->___mIsUnlocked_4;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsUnlocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsUnlocked_mEB08852D181A1C3FFB8440A8C3ECECA01837CF79 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mIsUnlocked = value; }
		bool L_0 = ___0_value;
		__this->___mIsUnlocked_4 = L_0;
		// set { mIsUnlocked = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsRevealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsRevealed_m34A5C4AFEBF9B9AA60507A350AA69DF27E06FCDC (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsRevealed; }
		bool L_0 = __this->___mIsRevealed_3;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsRevealed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsRevealed_m1AB9537756AAFDBB7F544823FB2547E035803B7D (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mIsRevealed = value; }
		bool L_0 = ___0_value;
		__this->___mIsRevealed_3 = L_0;
		// set { mIsRevealed = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m2DAB2B4ADC863F17330852B55FFECDF528BEB090 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_1;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Id_m7541D7AB71ED4CA0FE7B716894D8009FBC52DEAB (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mId = value; }
		String_t* L_0 = ___0_value;
		__this->___mId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_1), (void*)L_0);
		// set { mId = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Description_mA187FE8F00784BA5AB44346D766C5AC2646B60C2 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.mDescription; }
		String_t* L_0 = __this->___mDescription_7;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Description_m8D619A0B747EBF4DD2ED3C0E48F2C61C9A026C2B (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mDescription = value; }
		String_t* L_0 = ___0_value;
		__this->___mDescription_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_7), (void*)L_0);
		// set { mDescription = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Name_mE1FB7517DCD805C017A1ABC8FB135CBF7DD8010B (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.mName; }
		String_t* L_0 = __this->___mName_8;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Name_mD4C370733EC63C9FD8006092F3D60F8EC8788DC9 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mName = value; }
		String_t* L_0 = ___0_value;
		__this->___mName_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_8), (void*)L_0);
		// set { mName = value; }
		return;
	}
}
// System.DateTime GooglePlayGames.BasicApi.Achievement::get_LastModifiedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Achievement_get_LastModifiedTime_m557390DD2499668AE50FDDBDDB323FACE20FD116 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UnixEpoch.AddMilliseconds(mLastModifiedTime); }
		il2cpp_codegen_runtime_class_init_inline(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		int64_t L_0 = __this->___mLastModifiedTime_9;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&((Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var))->___UnixEpoch_0), ((double)L_0), NULL);
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_LastModifiedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_LastModifiedTime_m92B802B780D27BF528017337845DCB333D66F66A (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TimeSpan ts = value - UnixEpoch;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var))->___UnixEpoch_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		// mLastModifiedTime = (long) ts.TotalMilliseconds;
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_0), NULL);
		__this->___mLastModifiedTime_9 = il2cpp_codegen_cast_double_to_int<int64_t>(L_3);
		// }
		return;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Achievement::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Achievement_get_Points_m75BC401BFA25056C7DF6CDD3B7F2B43365127C92 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPoints; }
		uint64_t L_0 = __this->___mPoints_10;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Points(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Points_mBCC2F53C06A6A7661B10A3EDA768E917F2824431 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mPoints = value; }
		uint64_t L_0 = ___0_value;
		__this->___mPoints_10 = L_0;
		// set { mPoints = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_RevealedImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_RevealedImageUrl_mA487A6EB9D2DE579E68EFAA7F95B156E3A822C3D (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRevealedImageUrl; }
		String_t* L_0 = __this->___mRevealedImageUrl_11;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_RevealedImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_RevealedImageUrl_m1856B163BFE62F501758D4F7AF9951EBFB375DDA (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mRevealedImageUrl = value; }
		String_t* L_0 = ___0_value;
		__this->___mRevealedImageUrl_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRevealedImageUrl_11), (void*)L_0);
		// set { mRevealedImageUrl = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_UnlockedImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_UnlockedImageUrl_m6D4B95EE65D670898A20E22C40A8AD70FCDF4B40 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	{
		// get { return mUnlockedImageUrl; }
		String_t* L_0 = __this->___mUnlockedImageUrl_12;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_UnlockedImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_UnlockedImageUrl_m8E9F48076932E45D54A5F2A9B40D2B62BEDB6C27 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { mUnlockedImageUrl = value; }
		String_t* L_0 = ___0_value;
		__this->___mUnlockedImageUrl_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUnlockedImageUrl_12), (void*)L_0);
		// set { mUnlockedImageUrl = value; }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__cctor_mD391B167C2717391B28AC255B1C0CAF60E698FCB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly DateTime UnixEpoch =
		//     new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var))->___UnixEpoch_0 = L_0;
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
// System.Boolean GooglePlayGames.BasicApi.CommonTypesUtil::StatusIsSuccess(GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTypesUtil_StatusIsSuccess_m8FD3A3E9B50AC822E3BD8B62D55B31D3F4A7F8DB (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// return ((int) status) > 0;
		int32_t L_0 = ___0_status;
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void GooglePlayGames.BasicApi.CommonTypesUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTypesUtil__ctor_m5556F17EE788A9F22FB69AC612E9595087E4479A (CommonTypesUtil_tCD3678AA32D08217260B609FD2EE7F3E7270D94B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GooglePlayGames.BasicApi.DummyClient::Authenticate(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_Authenticate_m1F4FF8F183042E70FCD345EDCBC38AA5E07E322E (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, bool ___0_silent, Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_0 = ___1_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback(SignInStatus.Failed);
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_1 = ___1_callback;
		NullCheck(L_1);
		Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline(L_1, 7, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.DummyClient::IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DummyClient_IsAuthenticated_m404077DC8D6B78E1A56DC30F39C618B890E9F858 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SignOut_m94E8343C7C5725F0991902D5630100585782B02D (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetIdToken_m6820CB506BD5DF442809461CDC39A9D59595C0F0 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		return (String_t*)NULL;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserId_mF613B6B07626F97DFD783CCD9C4C3511F7A1EBD2 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE38144E371DD18AF923733A68E7D8175974B938);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return "DummyID";
		return _stringLiteralCE38144E371DD18AF923733A68E7D8175974B938;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetServerAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetServerAuthCode_m7459DBFA330F14C898A08F3D85802053EF7C8457 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetAnotherServerAuthCode(System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetAnotherServerAuthCode_m963F51A3B3ECDB178755588718B40B5DDB1E9BA7 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, bool ___0_reAuthenticateIfNeeded, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// callback(null);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___1_callback;
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserEmail_mEFB3DF9D77783D0B99E9320D4A5DC6B9353F3496 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetPlayerStats_mF62B3A74A122093822CC7FE4193DFD4D0B05DC28 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// callback(CommonStatusCodes.ApiNotConnected, new PlayerStats());
		Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4* L_0 = ___0_callback;
		PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* L_1 = (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0*)il2cpp_codegen_object_new(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlayerStats__ctor_mAB0533128A0477EC8C4509F5C037178C7B697717(L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_mEBC67B5525DC5F926D0B31CA1F59A1633F0573A9_inline(L_0, ((int32_t)17), L_1, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserDisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserDisplayName_mECA817DC3C06372C5E5F13FC0FE322846678E9F8 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return "Player";
		return _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserImageUrl_m1E322CD2ACAF1CCD73E22888E2F3E5E783F3B07B (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadUsers_m02BEFC5451C96C1E6E8646144C35A7102248C463 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_userIds, Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_0 = ___1_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(null);
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_1 = ___1_callback;
		NullCheck(L_1);
		Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline(L_1, (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)NULL, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadAchievements_mF4A8A78ACB9CA577475BEB0762881A70467ABD91 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* ___0_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* L_0 = ___0_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(null);
		Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* L_1 = ___0_callback;
		NullCheck(L_1);
		Action_1_Invoke_mF63F12CE9B293B09B751A8915C843D76C5C08921_inline(L_1, (AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91*)NULL, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_UnlockAchievement_mC170300CA443CBFE1E878BBF7DF0F56397A6E1F0 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_achId, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___1_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___1_callback;
		NullCheck(L_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_1, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::RevealAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_RevealAchievement_mE52BA8A6208DEE00BAC5DA037B91F6230D9421B9 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_achId, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___1_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___1_callback;
		NullCheck(L_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_1, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_IncrementAchievement_m2374559DD79A436F0D239412BE35686AADA96233 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_achId, int32_t ___1_steps, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___2_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___2_callback;
		NullCheck(L_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_1, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SetStepsAtLeast_m2C33A467E6694C177839AE365952911510810B6D (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_achId, int32_t ___1_steps, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___2_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___2_callback;
		NullCheck(L_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_1, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowAchievementsUI_m27409F4973EDE41516DF8FAAA452680A65E1FC0E (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___0_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___0_callback;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_1 = ___0_callback;
		NullCheck(L_1);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_1, ((int32_t)-4), NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::AskForLoadFriendsResolution(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_AskForLoadFriendsResolution_mB7CBB2A11400C0FA9CE1452E481315AE9CFAE1D9 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___0_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___0_callback;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_1 = ___0_callback;
		NullCheck(L_1);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_1, ((int32_t)-4), NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LoadFriendsStatus GooglePlayGames.BasicApi.DummyClient::GetLastLoadFriendsStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyClient_GetLastLoadFriendsStatus_m9007D4B3C4D988A9BB992ACF77C605C480CBC3C7 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return LoadFriendsStatus.Unknown;
		return (int32_t)(0);
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadFriends(System.Int32,System.Boolean,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadFriends_m1F515D11CFBFB0E87BAB90B8EC67F221E9CAF296 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, int32_t ___0_pageSize, bool ___1_forceReload, Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* ___2_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_0 = ___2_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(LoadFriendsStatus.Unknown);
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_1 = ___2_callback;
		NullCheck(L_1);
		Action_1_Invoke_m49F6F1412AB4F9E2431DB474E0491EDD938FE8C6_inline(L_1, 0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadMoreFriends(System.Int32,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadMoreFriends_m34A350FF0D2C2E701BBAB57DE76914D68E3C8A85 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, int32_t ___0_pageSize, Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_0 = ___1_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(LoadFriendsStatus.Unknown);
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_1 = ___1_callback;
		NullCheck(L_1);
		Action_1_Invoke_m49F6F1412AB4F9E2431DB474E0491EDD938FE8C6_inline(L_1, 0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowCompareProfileWithAlternativeNameHintsUI(System.String,System.String,System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowCompareProfileWithAlternativeNameHintsUI_mBF604084F6CB7548DF20851DF77009FA8748F581 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_userId, String_t* ___1_otherPlayerInGameName, String_t* ___2_currentPlayerInGameName, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___3_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___3_callback;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_1 = ___3_callback;
		NullCheck(L_1);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_1, ((int32_t)-4), NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetFriendsListVisibility(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetFriendsListVisibility_m06B19CDE0C7A04E8FFDBD49D7F0CFDF1483FED7D (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, bool ___0_forceReload, Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* L_0 = ___1_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(FriendsListVisibilityStatus.Unknown);
		Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* L_1 = ___1_callback;
		NullCheck(L_1);
		Action_1_Invoke_m571200EC8CC7971DC1D323B321014DD1A3FA7C6A_inline(L_1, 0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowLeaderboardUI_mA309BBD6060334F16AEB9A282119FB73052BCD4C (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_leaderboardId, int32_t ___1_span, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___2_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___2_callback;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_1 = ___2_callback;
		NullCheck(L_1);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_1, ((int32_t)-4), NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.DummyClient::LeaderboardMaxResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyClient_LeaderboardMaxResults_m52DD7B235C752D5CE9CA1CEF206D86BA4D1AF90A (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// return 25;
		return ((int32_t)25);
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadScores_m33F4A75D4480A300B2BF7605655BA27FE93A150F (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_leaderboardId, int32_t ___1_start, int32_t ___2_rowCount, int32_t ___3_collection, int32_t ___4_timeSpan, Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* ___5_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_0 = ___5_callback;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// callback(new LeaderboardScoreData(
		//     leaderboardId,
		//     ResponseStatus.LicenseCheckFailed));
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_1 = ___5_callback;
		String_t* L_2 = ___0_leaderboardId;
		LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* L_3 = (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1*)il2cpp_codegen_object_new(LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2(L_3, L_2, (-1), NULL);
		NullCheck(L_1);
		Action_1_Invoke_mA5EC4282C4EA23662326D008075C6CC25A4D6EE9_inline(L_1, L_3, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadMoreScores_m7CB299C28AED02AEA63EF3139AA71BA90E997653 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___0_token, int32_t ___1_rowCount, Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_0 = ___2_callback;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// callback(new LeaderboardScoreData(
		//     token.LeaderboardId,
		//     ResponseStatus.LicenseCheckFailed));
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_1 = ___2_callback;
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_2 = ___0_token;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE_inline(L_2, NULL);
		LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* L_4 = (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1*)il2cpp_codegen_object_new(LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2(L_4, L_3, (-1), NULL);
		NullCheck(L_1);
		Action_1_Invoke_mA5EC4282C4EA23662326D008075C6CC25A4D6EE9_inline(L_1, L_4, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SubmitScore_m6673F78E84A98523E9AD83252F0689BC669490AC (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_leaderboardId, int64_t ___1_score, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___2_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___2_callback;
		NullCheck(L_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_1, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SubmitScore_m3FEAE2EC8761232E1D5122D3AB080D6842349E08 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___0_leaderboardId, int64_t ___1_score, String_t* ___2_metadata, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___3_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___3_callback;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___3_callback;
		NullCheck(L_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_1, (bool)0, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::RequestPermissions(System.String[],System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_RequestPermissions_mF96C919D2AE870D536A15DF98877DB10D5609387 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_scopes, Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* ___1_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_0 = ___1_callback;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// callback.Invoke(SignInStatus.Failed);
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_1 = ___1_callback;
		NullCheck(L_1);
		Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline(L_1, 7, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.DummyClient::HasPermissions(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DummyClient_HasPermissions_mFC28C83A220A21AAAA4A9C904DF4FC833DC0617C (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_scopes, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return false;
		return (bool)0;
	}
}
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.BasicApi.DummyClient::GetSavedGameClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetSavedGameClient_mA97C4B1583994BAE53212859B2D8E3760CD68862 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.BasicApi.DummyClient::GetEventsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetEventsClient_mC6A16C372F31F33F27A6DD03EEBFD5A601407550 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// GooglePlayGames.BasicApi.Video.IVideoClient GooglePlayGames.BasicApi.DummyClient::GetVideoClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetVideoClient_m2762462F20D9579E180955F3D9850F1A828ACFC0 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadFriends(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadFriends_m36D9C43DA4F4F7FF120E21F603EEE5EE5B3AC5AF (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// callback(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___0_callback;
		NullCheck(L_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.BasicApi.DummyClient::GetFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* DummyClient_GetFriends_m3796A4A6E4E924FC631B60E701428703B0198A8E (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return new IUserProfile[0];
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_0 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)(IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)SZArrayNew(IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SetGravityForPopups(GooglePlayGames.BasicApi.Gravity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SetGravityForPopups_mE53CCBD3274BD4465C648E50D714C7722EE11F28 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, int32_t ___0_gravity, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Received method call on DummyClient - using stub implementation.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient__ctor_m4BA43F081AE5F10436AB3A716F60C8E8271BE2D1 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_mD05AFBA83BB41B1BBBE60C47F4FE93F0A61DA504 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___0_leaderboardId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlayGamesScore> mScores = new List<PlayGamesScore>();
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*)il2cpp_codegen_object_new(List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D(L_0, List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		__this->___mScores_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScores_7), (void*)L_0);
		// internal LeaderboardScoreData(string leaderboardId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = leaderboardId;
		String_t* L_1 = ___0_leaderboardId;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___0_leaderboardId, int32_t ___1_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlayGamesScore> mScores = new List<PlayGamesScore>();
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*)il2cpp_codegen_object_new(List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D(L_0, List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		__this->___mScores_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScores_7), (void*)L_0);
		// internal LeaderboardScoreData(string leaderboardId, ResponseStatus status)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = leaderboardId;
		String_t* L_1 = ___0_leaderboardId;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// mStatus = status;
		int32_t L_2 = ___1_status;
		__this->___mStatus_1 = L_2;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.LeaderboardScoreData::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeaderboardScoreData_get_Valid_m1465ED0DC3111B9D91A5FDEE99B1AE2C92496846 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// return mStatus == ResponseStatus.Success ||
		//        mStatus == ResponseStatus.SuccessWithStale;
		int32_t L_0 = __this->___mStatus_1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___mStatus_1;
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardScoreData_get_Status_m1BBD2C071F178ED54E12983867B1CA85BCFEC9EF (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_1;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Status(GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Status_m9E9BF09504EF2F4AB69D0FD27651B4ED07B16559 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { mStatus = value; }
		int32_t L_0 = ___0_value;
		__this->___mStatus_1 = L_0;
		// internal set { mStatus = value; }
		return;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::get_ApproximateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LeaderboardScoreData_get_ApproximateCount_m9B623727B19DCDAD437A446C816EB7BBED07F83A (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mApproxCount; }
		uint64_t L_0 = __this->___mApproxCount_2;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_ApproximateCount(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_ApproximateCount_m101D4006195679402B771F5A4EC51C44D0352F52 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { mApproxCount = value; }
		uint64_t L_0 = ___0_value;
		__this->___mApproxCount_2 = L_0;
		// internal set { mApproxCount = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Title_m367409AD344BA6352D83E348DD71DD575F05F943 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mTitle; }
		String_t* L_0 = __this->___mTitle_3;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Title_m7B6CF08A660B53CA61D21088EB33061DED35078B (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { mTitle = value; }
		String_t* L_0 = ___0_value;
		__this->___mTitle_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTitle_3), (void*)L_0);
		// internal set { mTitle = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Id_mB56B7158F68410BE0C0C8DE83EC8F7EA161D580D (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Id_mE882D7408522E45EE5FAB0D93E3E9A62819FDD43 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { mId = value; }
		String_t* L_0 = ___0_value;
		__this->___mId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_0);
		// internal set { mId = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::get_PlayerScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeaderboardScoreData_get_PlayerScore_mAAD8C397BC13D133101B8372E5F8D54E36A44D12 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_0 = __this->___mPlayerScore_4;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PlayerScore(UnityEngine.SocialPlatforms.IScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_PlayerScore_m120B2EF8BC2F619DBB0008B7AEF2619E40DC9B13 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { mPlayerScore = value; }
		RuntimeObject* L_0 = ___0_value;
		__this->___mPlayerScore_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPlayerScore_4), (void*)L_0);
		// internal set { mPlayerScore = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* LeaderboardScoreData_get_Scores_m3D99B12820227A8814806A8F49D0828F23BBC7A8 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_0 = NULL;
	{
		// get { return mScores.ToArray(); }
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = __this->___mScores_7;
		NullCheck(L_0);
		PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* L_1;
		L_1 = List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF(L_0, List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var);
		V_0 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_1;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_2 = V_0;
		return L_2;
	}
}
// System.Int32 GooglePlayGames.BasicApi.LeaderboardScoreData::AddScore(GooglePlayGames.PlayGamesScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardScoreData_AddScore_m68C7EF3D5D04BE529C543CCEF9AB5FF28F6C5501 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* ___0_score, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mScores.Add(score);
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = __this->___mScores_7;
		PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* L_1 = ___0_score;
		NullCheck(L_0);
		List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_inline(L_0, L_1, List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_RuntimeMethod_var);
		// return mScores.Count;
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_2 = __this->___mScores_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_inline(L_2, List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_RuntimeMethod_var);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_PrevPageToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* LeaderboardScoreData_get_PrevPageToken_mBE87B3D4972B143FE151B1C3D8F74ADD60BC9647 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPrevPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = __this->___mPrevPage_5;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PrevPageToken(GooglePlayGames.BasicApi.ScorePageToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_PrevPageToken_m4CD348FF9B4BAF59A45D7CEDFB1278589E14F0C5 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { mPrevPage = value; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = ___0_value;
		__this->___mPrevPage_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPrevPage_5), (void*)L_0);
		// internal set { mPrevPage = value; }
		return;
	}
}
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_NextPageToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* LeaderboardScoreData_get_NextPageToken_mB1461DDE84A1FD1FD9FA2B20E36F02A38278FDFD (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNextPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = __this->___mNextPage_6;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_NextPageToken(GooglePlayGames.BasicApi.ScorePageToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_NextPageToken_mB8391BDA87DADB759D169DDA9E2E457BAA36FE1D (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { mNextPage = value; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = ___0_value;
		__this->___mNextPage_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNextPage_6), (void*)L_0);
		// internal set { mNextPage = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_ToString_mCA57A14C368BFEDFD26419D1C6CD0CA26EA380A5 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[LeaderboardScoreData: mId={0}, " +
		//                      " mStatus={1}, mApproxCount={2}, mTitle={3}]",
		//     mId, mStatus, mApproxCount, mTitle);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___mId_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		int32_t L_4 = __this->___mStatus_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(ResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint64_t L_8 = __this->___mApproxCount_2;
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		String_t* L_12 = __this->___mTitle_3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37, L_11, NULL);
		return L_13;
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
// System.Void GooglePlayGames.BasicApi.Player::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m3B016F0520DFB13A09C07E34756204852CB9658C (Player_tC6EBE8DB490DB6E864912AB1EA4C847C840AD785* __this, String_t* ___0_displayName, String_t* ___1_playerId, String_t* ___2_avatarUrl, const RuntimeMethod* method) 
{
	{
		// : base(displayName, playerId, avatarUrl)
		String_t* L_0 = ___0_displayName;
		String_t* L_1 = ___1_playerId;
		String_t* L_2 = ___2_avatarUrl;
		PlayGamesUserProfile__ctor_mBBC149EB64BAFE2838EF119A948F121DA44F9D84(__this, L_0, L_1, L_2, NULL);
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
// System.Void GooglePlayGames.BasicApi.PlayerProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProfile__ctor_m5C73E81FD17D0FC4A909EA706DC0E23E9C899031 (PlayerProfile_tC19A28127264E07C834F4E422139AAA21B631BF1* __this, String_t* ___0_displayName, String_t* ___1_playerId, String_t* ___2_avatarUrl, bool ___3_isFriend, const RuntimeMethod* method) 
{
	{
		// internal PlayerProfile(string displayName, string playerId, string avatarUrl, bool isFriend) : base(displayName,
		//     playerId, avatarUrl, isFriend)
		String_t* L_0 = ___0_displayName;
		String_t* L_1 = ___1_playerId;
		String_t* L_2 = ___2_avatarUrl;
		bool L_3 = ___3_isFriend;
		PlayGamesUserProfile__ctor_m772E7C64FDB7474FD8C1940825C3486B1A8ADD66(__this, L_0, L_1, L_2, L_3, NULL);
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
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor(System.Int32,System.Single,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_m296F667E450996BAD42A626ACE0F3A63740F132F (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, int32_t ___0_numberOfPurchases, float ___1_avgSessionLength, int32_t ___2_daysSinceLastPlayed, int32_t ___3_numberOfSessions, float ___4_sessPercentile, float ___5_spendPercentile, float ___6_spendProbability, float ___7_churnProbability, float ___8_highSpenderProbability, float ___9_totalSpendNext28Days, const RuntimeMethod* method) 
{
	{
		// public PlayerStats(
		//     int numberOfPurchases,
		//     float avgSessionLength,
		//     int daysSinceLastPlayed,
		//     int numberOfSessions,
		//     float sessPercentile,
		//     float spendPercentile,
		//     float spendProbability,
		//     float churnProbability,
		//     float highSpenderProbability,
		//     float totalSpendNext28Days)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mValid = true;
		__this->___mValid_1 = (bool)1;
		// mNumberOfPurchases = numberOfPurchases;
		int32_t L_0 = ___0_numberOfPurchases;
		__this->___mNumberOfPurchases_2 = L_0;
		// mAvgSessionLength = avgSessionLength;
		float L_1 = ___1_avgSessionLength;
		__this->___mAvgSessionLength_3 = L_1;
		// mDaysSinceLastPlayed = daysSinceLastPlayed;
		int32_t L_2 = ___2_daysSinceLastPlayed;
		__this->___mDaysSinceLastPlayed_4 = L_2;
		// mNumberOfSessions = numberOfSessions;
		int32_t L_3 = ___3_numberOfSessions;
		__this->___mNumberOfSessions_5 = L_3;
		// mSessPercentile = sessPercentile;
		float L_4 = ___4_sessPercentile;
		__this->___mSessPercentile_6 = L_4;
		// mSpendPercentile = spendPercentile;
		float L_5 = ___5_spendPercentile;
		__this->___mSpendPercentile_7 = L_5;
		// mSpendProbability = spendProbability;
		float L_6 = ___6_spendProbability;
		__this->___mSpendProbability_8 = L_6;
		// mChurnProbability = churnProbability;
		float L_7 = ___7_churnProbability;
		__this->___mChurnProbability_9 = L_7;
		// mHighSpenderProbability = highSpenderProbability;
		float L_8 = ___8_highSpenderProbability;
		__this->___mHighSpenderProbability_10 = L_8;
		// mTotalSpendNext28Days = totalSpendNext28Days;
		float L_9 = ___9_totalSpendNext28Days;
		__this->___mTotalSpendNext28Days_11 = L_9;
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mAB0533128A0477EC8C4509F5C037178C7B697717 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerStats()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mValid = false;
		__this->___mValid_1 = (bool)0;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_get_Valid_m069D6268F8132B50F038BA2F4DCF3721D0DD240D (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mValid; }
		bool L_0 = __this->___mValid_1;
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNumberOfPurchases; }
		int32_t L_0 = __this->___mNumberOfPurchases_2;
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mAvgSessionLength; }
		float L_0 = __this->___mAvgSessionLength_3;
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_0 = __this->___mDaysSinceLastPlayed_4;
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNumberOfSessions; }
		int32_t L_0 = __this->___mNumberOfSessions_5;
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mSessPercentile; }
		float L_0 = __this->___mSessPercentile_6;
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mSpendPercentile; }
		float L_0 = __this->___mSpendPercentile_7;
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendProbability_mE441AF4945A4570035A7186270672FC1589275D1 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mSpendProbability; }
		float L_0 = __this->___mSpendProbability_8;
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mChurnProbability; }
		float L_0 = __this->___mChurnProbability_9;
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mHighSpenderProbability; }
		float L_0 = __this->___mHighSpenderProbability_10;
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mTotalSpendNext28Days; }
		float L_0 = __this->___mTotalSpendNext28Days_11;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfPurchases_m6104D3FC846892C7C5903826325EA74A64E3C780 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NumberOfPurchases != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasAvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasAvgSessionLength_m06A8934E940FD350F369D2E369EAE3D2AD7319BB (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AvgSessionLength != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasDaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasDaysSinceLastPlayed_m158E9E50CDAA3B6E60ECF3517ABA52F1854D6E1C (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DaysSinceLastPlayed != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfSessions_mEED0EDC5C752AC3C3631D31AF44808DAEC96A831 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NumberOfSessions != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSessPercentile_mB32886A243A07D014FC214296ED5E74B000CF887 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SessPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSpendPercentile_mFC4CD82E94D2EC5D8659F82457070D6FBC08A6A9 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SpendPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasChurnProbability_m44F42BA7E3E9314B9B639CA4FE876B8BB59A9F77 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ChurnProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasHighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasHighSpenderProbability_mF9F35CBFE8E687D607F8779262EEB5D4EA710F21 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return HighSpenderProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasTotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasTotalSpendNext28Days_mAC8698E296AD681149BF73B8690D7D25614222ED (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TotalSpendNext28Days != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__cctor_m893CF5F4D151A77E4E2A13037193E5D8A6BEBAC9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float UNSET_VALUE = -1.0f;
		((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0 = (-1.0f);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_pinvoke(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_pinvoke_back(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke& marshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_pinvoke_cleanup(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_com(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com& marshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_com_back(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com& marshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_com_cleanup(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___0_builder, const RuntimeMethod* method) 
{
	{
		// this.mEnableSavedGames = builder.HasEnableSaveGames();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = ___0_builder;
		NullCheck(L_0);
		bool L_1;
		L_1 = Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8_inline(L_0, NULL);
		__this->___mEnableSavedGames_1 = L_1;
		// this.mScopes = builder.getScopes();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_2 = ___0_builder;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6(L_2, NULL);
		__this->___mScopes_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_2), (void*)L_3);
		// this.mHidePopups = builder.IsHidingPopups();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_4 = ___0_builder;
		NullCheck(L_4);
		bool L_5;
		L_5 = Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527_inline(L_4, NULL);
		__this->___mHidePopups_5 = L_5;
		// this.mRequestAuthCode = builder.IsRequestingAuthCode();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_6 = ___0_builder;
		NullCheck(L_6);
		bool L_7;
		L_7 = Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43_inline(L_6, NULL);
		__this->___mRequestAuthCode_3 = L_7;
		// this.mForceRefresh = builder.IsForcingRefresh();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_8 = ___0_builder;
		NullCheck(L_8);
		bool L_9;
		L_9 = Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691_inline(L_8, NULL);
		__this->___mForceRefresh_4 = L_9;
		// this.mRequestEmail = builder.IsRequestingEmail();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_10 = ___0_builder;
		NullCheck(L_10);
		bool L_11;
		L_11 = Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C_inline(L_10, NULL);
		__this->___mRequestEmail_6 = L_11;
		// this.mRequestIdToken = builder.IsRequestingIdToken();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_12 = ___0_builder;
		NullCheck(L_12);
		bool L_13;
		L_13 = Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB_inline(L_12, NULL);
		__this->___mRequestIdToken_7 = L_13;
		// this.mAccountName = builder.GetAccountName();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_14 = ___0_builder;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9_inline(L_14, NULL);
		__this->___mAccountName_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_8), (void*)L_15);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E_AdjustorThunk (RuntimeObject* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___0_builder, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E(_thisAdjusted, ___0_builder, method);
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mEnableSavedGames; }
		bool L_0 = __this->___mEnableSavedGames_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mHidePopups; }
		bool L_0 = __this->___mHidePopups_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRequestAuthCode; }
		bool L_0 = __this->___mRequestAuthCode_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mForceRefresh; }
		bool L_0 = __this->___mForceRefresh_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRequestEmail; }
		bool L_0 = __this->___mRequestEmail_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRequestIdToken; }
		bool L_0 = __this->___mRequestIdToken_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_AccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mAccountName; }
		String_t* L_0 = __this->___mAccountName_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_Scopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mScopes; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___mScopes_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::op_Equality(GooglePlayGames.BasicApi.PlayGamesClientConfiguration,GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___0_c1, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___1_c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (c1.EnableSavedGames != c2.EnableSavedGames ||
		//     c1.IsForcingRefresh != c2.IsForcingRefresh ||
		//     c1.IsHidingPopups != c2.IsHidingPopups ||
		//     c1.IsRequestingEmail != c2.IsRequestingEmail ||
		//     c1.IsRequestingAuthCode != c2.IsRequestingAuthCode ||
		//     !c1.Scopes.SequenceEqual(c2.Scopes) ||
		//     c1.AccountName != c2.AccountName)
		bool L_0;
		L_0 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_inline((&___0_c1), NULL);
		bool L_1;
		L_1 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_inline((&___1_c2), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_007a;
		}
	}
	{
		bool L_2;
		L_2 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_inline((&___0_c1), NULL);
		bool L_3;
		L_3 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_inline((&___1_c2), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_007a;
		}
	}
	{
		bool L_4;
		L_4 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_inline((&___0_c1), NULL);
		bool L_5;
		L_5 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_inline((&___1_c2), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_007a;
		}
	}
	{
		bool L_6;
		L_6 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_inline((&___0_c1), NULL);
		bool L_7;
		L_7 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_inline((&___1_c2), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_007a;
		}
	}
	{
		bool L_8;
		L_8 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_inline((&___0_c1), NULL);
		bool L_9;
		L_9 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_inline((&___1_c2), NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_007a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_inline((&___0_c1), NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_inline((&___1_c2), NULL);
		bool L_12;
		L_12 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1((RuntimeObject*)L_10, (RuntimeObject*)L_11, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_13;
		L_13 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_inline((&___0_c1), NULL);
		String_t* L_14;
		L_14 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_inline((&___1_c2), NULL);
		bool L_15;
		L_15 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_007c;
		}
	}

IL_007a:
	{
		// return false;
		return (bool)0;
	}

IL_007c:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::op_Inequality(GooglePlayGames.BasicApi.PlayGamesClientConfiguration,GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_op_Inequality_mF5D78470A1317A51373FBE32ABAD6A3F3B008BE0 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___0_c1, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___1_c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(c1 == c2);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0 = ___0_c1;
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_1 = ___1_c2;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayGamesClientConfiguration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// int hash = 17;
		// hash = hash * 31 + EnableSavedGames.GetHashCode();
		bool L_0;
		L_0 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hash = hash * 31 + IsForcingRefresh.GetHashCode();
		bool L_2;
		L_2 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hash = hash * 31 + IsHidingPopups.GetHashCode();
		bool L_4;
		L_4 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_inline(__this, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hash = hash * 31 + IsRequestingEmail.GetHashCode();
		bool L_6;
		L_6 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_inline(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hash = hash * 31 + IsRequestingAuthCode.GetHashCode();
		bool L_8;
		L_8 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hash = hash * 31 + Scopes.GetHashCode();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_inline(__this, NULL);
		NullCheck((RuntimeObject*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject*)L_10);
		// hash = hash * 31 + AccountName.GetHashCode();
		String_t* L_12;
		L_12 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_inline(__this, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_12);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7)), ((int32_t)31))), L_9)), ((int32_t)31))), L_11)), ((int32_t)31))), L_13));
	}
}
IL2CPP_EXTERN_C  int32_t PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this == (PlayGamesClientConfiguration) obj;
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0 = (*(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)__this);
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE(L_0, ((*(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)UnBox(L_1, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__cctor_mF606C40BBCFA8A5BFF84CD11B68CBAB52CAE7BD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly PlayGamesClientConfiguration DefaultConfiguration =
		//     new Builder()
		//         .Build();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8*)il2cpp_codegen_object_new(Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894(L_0, NULL);
		NullCheck(L_0);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_1;
		L_1 = Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6(L_0, NULL);
		((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var))->___DefaultConfiguration_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var))->___DefaultConfiguration_0))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var))->___DefaultConfiguration_0))->___mAccountName_8), (void*)NULL);
		#endif
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
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_EnableSavedGames_mB3BFCFC0D31D53C06EF9C78D767C94C7C55A7D72 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mEnableSaveGames = true;
		__this->___mEnableSaveGames_0 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableHidePopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_EnableHidePopups_m8AF1EFEE2F021B5F02598B642BDF61E97BC640DD (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mHidePopups = true;
		__this->___mHidePopups_2 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestServerAuthCode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestServerAuthCode_m35297CBA0854EFF0879A608DD134A6701C09E345 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, bool ___0_forceRefresh, const RuntimeMethod* method) 
{
	{
		// mRequestAuthCode = true;
		__this->___mRequestAuthCode_3 = (bool)1;
		// mForceRefresh = forceRefresh;
		bool L_0 = ___0_forceRefresh;
		__this->___mForceRefresh_4 = L_0;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestEmail_m4CFF58538C86C36043D89E3B7351BFA17BF29C19 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mRequestEmail = true;
		__this->___mRequestEmail_5 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestIdToken_mE8372548261C229559A68F0D86AAACEC1308262C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// mRequestIdToken = true;
		__this->___mRequestIdToken_6 = (bool)1;
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::SetAccountName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_SetAccountName_m399973F9978DAF5EACCF08A2645298476C051B16 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, String_t* ___0_accountName, const RuntimeMethod* method) 
{
	{
		// mAccountName = accountName;
		String_t* L_0 = ___0_accountName;
		__this->___mAccountName_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_7), (void*)L_0);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::AddOauthScope(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_AddOauthScope_mBF88B5A77857E19F5AEB9971833A03BD797FDD4A (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, String_t* ___0_scope, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___mScopes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_1), (void*)L_1);
	}

IL_0013:
	{
		// mScopes.Add(scope);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___mScopes_1;
		String_t* L_3 = ___0_scope;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return new PlayGamesClientConfiguration(this);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mEnableSaveGames;
		bool L_0 = __this->___mEnableSaveGames_0;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestAuthCode;
		bool L_0 = __this->___mRequestAuthCode_3;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mHidePopups;
		bool L_0 = __this->___mHidePopups_2;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mForceRefresh;
		bool L_0 = __this->___mForceRefresh_4;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestEmail;
		bool L_0 = __this->___mRequestEmail_5;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestIdToken;
		bool L_0 = __this->___mRequestIdToken_6;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mAccountName;
		String_t* L_0 = __this->___mAccountName_7;
		return L_0;
	}
}
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mScopes == null ? new string[0] : mScopes.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___mScopes_1;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_1, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GooglePlayGames.BasicApi.ScorePageToken::.ctor(System.Object,System.String,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,GooglePlayGames.BasicApi.ScorePageDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorePageToken__ctor_m431FAF86C22A8B545F71B1AF2F1224D9FB8B708B (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, RuntimeObject* ___0_internalObject, String_t* ___1_id, int32_t ___2_collection, int32_t ___3_timespan, int32_t ___4_direction, const RuntimeMethod* method) 
{
	{
		// internal ScorePageToken(object internalObject, string id,
		//     LeaderboardCollection collection, LeaderboardTimeSpan timespan,
		//     ScorePageDirection direction)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mInternalObject = internalObject;
		RuntimeObject* L_0 = ___0_internalObject;
		__this->___mInternalObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInternalObject_1), (void*)L_0);
		// mId = id;
		String_t* L_1 = ___1_id;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// mCollection = collection;
		int32_t L_2 = ___2_collection;
		__this->___mCollection_2 = L_2;
		// mTimespan = timespan;
		int32_t L_3 = ___3_timespan;
		__this->___mTimespan_3 = L_3;
		// mDirection = direction;
		int32_t L_4 = ___4_direction;
		__this->___mDirection_4 = L_4;
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::get_Collection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Collection_m81A6D22719966B08DF294DFACE425D527D2EEAA0 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCollection; }
		int32_t L_0 = __this->___mCollection_2;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::get_TimeSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_TimeSpan_mFC519002264A338C9C9FD20D0E4ABBAF185C19D2 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mTimespan; }
		int32_t L_0 = __this->___mTimespan_3;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Direction_m1666DE97676B246F0E7FDA31232401FB1B7973A0 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDirection; }
		int32_t L_0 = __this->___mDirection_4;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		return L_0;
	}
}
// System.Object GooglePlayGames.BasicApi.ScorePageToken::get_InternalObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorePageToken_get_InternalObject_m37A928592D5497D4D646E6868EDA834D2063C6DB (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mInternalObject; }
		RuntimeObject* L_0 = __this->___mInternalObject_1;
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
// GooglePlayGames.BasicApi.SignInStatus GooglePlayGames.BasicApi.SignInHelper::ToSignInStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInHelper_ToSignInStatus_m0E8C3979445D4601F00D449CBA5B581E7A3C1696 (int32_t ___0_code, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* V_0 = NULL;
	{
		// Dictionary<int, SignInStatus> dictionary = new Dictionary<int, SignInStatus>()
		// {
		//     {
		//         /* CommonUIStatus.UI_BUSY */ -12, SignInStatus.AlreadyInProgress
		//     },
		//     {
		//         /* CommonStatusCodes.SUCCESS */ 0, SignInStatus.Success
		//     },
		//     {
		//         /* CommonStatusCodes.SIGN_IN_REQUIRED */ 4, SignInStatus.UiSignInRequired
		//     },
		//     {
		//         /* CommonStatusCodes.NETWORK_ERROR */ 7, SignInStatus.NetworkError
		//     },
		//     {
		//         /* CommonStatusCodes.INTERNAL_ERROR */ 8, SignInStatus.InternalError
		//     },
		//     {
		//         /* CommonStatusCodes.DEVELOPER_ERROR */ 10, SignInStatus.DeveloperError
		//     },
		//     {
		//         /* CommonStatusCodes.CANCELED */ 16, SignInStatus.Canceled
		//     },
		//     {
		//         /* CommonStatusCodes.API_NOT_CONNECTED */ 17, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_FAILED */ 12500, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CANCELLED */ 12501, SignInStatus.Canceled
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CURRENTLY_IN_PROGRESS */ 12502, SignInStatus.AlreadyInProgress
		//     },
		// };
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_0 = (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*)il2cpp_codegen_object_new(Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC(L_0, Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_1, ((int32_t)-12), 6, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_2, 0, 0, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_3, 4, 1, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_4, 7, 3, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_5, 8, 4, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_6, ((int32_t)10), 2, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_7, ((int32_t)16), 5, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_8, ((int32_t)17), 7, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_9, ((int32_t)12500), 7, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_10, ((int32_t)12501), 5, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_11, ((int32_t)12502), 6, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		V_0 = L_11;
		// return dictionary.ContainsKey(code) ? dictionary[code] : SignInStatus.Failed;
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_12 = V_0;
		int32_t L_13 = ___0_code;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E(L_12, L_13, Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		return (int32_t)(7);
	}

IL_0079:
	{
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_15 = V_0;
		int32_t L_16 = ___0_code;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88(L_15, L_16, Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::SetPromptUiSignIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper_SetPromptUiSignIn_m9C41BACBD0895171DFB9C4E1C99F70A14FD228C8 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		// PlayerPrefs.SetInt(PromptSignInKey, value ? True : False);
		bool L_0 = ___0_value;
		G_B1_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
		if (L_0)
		{
			G_B2_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.SignInHelper::ShouldPromptUiSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignInHelper_ShouldPromptUiSignIn_mE924C75DA1F9C5AA1F505F35B1FE055D600DDA5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(PromptSignInKey, True) != False;
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581, L_0, NULL);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__ctor_mAACD363A620B49A48D7E65E08562B6B5442799D8 (SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__cctor_mDB05C6D3531683EFF3A41E3F233024D2FA7214B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int True = 0;
		((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0 = 0;
		// private static int False = 1;
		((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1 = 1;
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapabilities__ctor_mE8546E8B5CB6AF1F8919493CDD0177059A3290BA (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, bool ___0_isCameraSupported, bool ___1_isMicSupported, bool ___2_isWriteStorageSupported, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___3_captureModesSupported, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___4_qualityLevelsSupported, const RuntimeMethod* method) 
{
	{
		// internal VideoCapabilities(bool isCameraSupported, bool isMicSupported, bool isWriteStorageSupported,
		//     bool[] captureModesSupported, bool[] qualityLevelsSupported)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mIsCameraSupported = isCameraSupported;
		bool L_0 = ___0_isCameraSupported;
		__this->___mIsCameraSupported_0 = L_0;
		// mIsMicSupported = isMicSupported;
		bool L_1 = ___1_isMicSupported;
		__this->___mIsMicSupported_1 = L_1;
		// mIsWriteStorageSupported = isWriteStorageSupported;
		bool L_2 = ___2_isWriteStorageSupported;
		__this->___mIsWriteStorageSupported_2 = L_2;
		// mCaptureModesSupported = captureModesSupported;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ___3_captureModesSupported;
		__this->___mCaptureModesSupported_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCaptureModesSupported_3), (void*)L_3);
		// mQualityLevelsSupported = qualityLevelsSupported;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___4_qualityLevelsSupported;
		__this->___mQualityLevelsSupported_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mQualityLevelsSupported_4), (void*)L_4);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsCameraSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsCameraSupported_m2A5ABD6B6C1BFDFF57437EB5AB898C17A4BF2D36 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsCameraSupported; }
		bool L_0 = __this->___mIsCameraSupported_0;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsMicSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsMicSupported_m9D602DDC5C684AB39A3806A9682C07F917E07655 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsMicSupported; }
		bool L_0 = __this->___mIsMicSupported_1;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsWriteStorageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsWriteStorageSupported_mBDD45763B0DA5D6925C0FE68A392E1BD9AB34FF8 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsWriteStorageSupported; }
		bool L_0 = __this->___mIsWriteStorageSupported_2;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsCaptureMode(GooglePlayGames.BasicApi.VideoCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsCaptureMode_m7DBCAA7C978825AF114B2F4D5EFD027B4682E675 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, int32_t ___0_captureMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (captureMode != VideoCaptureMode.Unknown)
		int32_t L_0 = ___0_captureMode;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// return mCaptureModesSupported[(int) captureMode];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->___mCaptureModesSupported_3;
		int32_t L_2 = ___0_captureMode;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_000d:
	{
		// Logger.w("SupportsCaptureMode called with an unknown captureMode.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF(_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsQualityLevel(GooglePlayGames.BasicApi.VideoQualityLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsQualityLevel_mEBB3875FA0DAA0E234BD29D0BDBCDC7D15509A08 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, int32_t ___0_qualityLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (qualityLevel != VideoQualityLevel.Unknown)
		int32_t L_0 = ___0_qualityLevel;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// return mQualityLevelsSupported[(int) qualityLevel];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->___mQualityLevelsSupported_4;
		int32_t L_2 = ___0_qualityLevel;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_000d:
	{
		// Logger.w("SupportsCaptureMode called with an unknown qualityLevel.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF(_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D, NULL);
		// return false;
		return (bool)0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCapabilities_ToString_m85E5D94390B8638DE15BA9A9FC15DC70FF9CC7CD (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B2_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	int32_t G_B2_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_5 = NULL;
	String_t* G_B2_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B1_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	int32_t G_B1_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_5 = NULL;
	String_t* G_B1_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B4_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	int32_t G_B4_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_5 = NULL;
	String_t* G_B4_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B3_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	int32_t G_B3_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_5 = NULL;
	String_t* G_B3_6 = NULL;
	{
		// return string.Format(
		//     "[VideoCapabilities: mIsCameraSupported={0}, mIsMicSupported={1}, mIsWriteStorageSupported={2}, " +
		//     "mCaptureModesSupported={3}, mQualityLevelsSupported={4}]",
		//     mIsCameraSupported,
		//     mIsMicSupported,
		//     mIsWriteStorageSupported,
		//     string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		//     string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->___mIsCameraSupported_0;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		bool L_6 = __this->___mIsMicSupported_1;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		bool L_10 = __this->___mIsWriteStorageSupported_2;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->___mCaptureModesSupported_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_15 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_16 = L_15;
		G_B1_0 = L_16;
		G_B1_1 = L_14;
		G_B1_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B1_3 = 3;
		G_B1_4 = L_13;
		G_B1_5 = L_13;
		G_B1_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = L_14;
			G_B2_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B2_3 = 3;
			G_B2_4 = L_13;
			G_B2_5 = L_13;
			G_B2_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_17 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_18 = (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*)il2cpp_codegen_object_new(Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var), NULL);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_19 = L_18;
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_19);
		G_B2_0 = L_19;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
		G_B2_6 = G_B1_6;
	}

IL_0061:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21;
		L_21 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_20, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_22;
		L_22 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B2_2, L_21, NULL);
		NullCheck(G_B2_4);
		ArrayElementTypeCheck (G_B2_4, L_22);
		(G_B2_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B2_3), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = G_B2_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = __this->___mQualityLevelsSupported_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_25 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_26 = L_25;
		G_B3_0 = L_26;
		G_B3_1 = L_24;
		G_B3_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B3_3 = 4;
		G_B3_4 = L_23;
		G_B3_5 = L_23;
		G_B3_6 = G_B2_6;
		if (L_26)
		{
			G_B4_0 = L_26;
			G_B4_1 = L_24;
			G_B4_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B4_3 = 4;
			G_B4_4 = L_23;
			G_B4_5 = L_23;
			G_B4_6 = G_B2_6;
			goto IL_009d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_27 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_28 = (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*)il2cpp_codegen_object_new(Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F(L_28, L_27, (intptr_t)((void*)U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var), NULL);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_29 = L_28;
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2), (void*)L_29);
		G_B4_0 = L_29;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		G_B4_5 = G_B3_5;
		G_B4_6 = G_B3_6;
	}

IL_009d:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_30, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_32;
		L_32 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B4_2, L_31, NULL);
		NullCheck(G_B4_4);
		ArrayElementTypeCheck (G_B4_4, L_32);
		(G_B4_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_3), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B4_6, G_B4_5, NULL);
		return L_33;
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEDE45F6C0CE4318CBF9C1EC26B3884578BA9A94D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_0 = (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6*)il2cpp_codegen_object_new(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A(L_0, NULL);
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9 (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, bool ___0_p, const RuntimeMethod* method) 
{
	{
		// string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___0_p), NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, bool ___0_p, const RuntimeMethod* method) 
{
	{
		// string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___0_p), NULL);
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCaptureState::.ctor(System.Boolean,GooglePlayGames.BasicApi.VideoCaptureMode,GooglePlayGames.BasicApi.VideoQualityLevel,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCaptureState__ctor_m2B2B27B6716AEE8A5DFA5CFA91402AD73F76E3A6 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, bool ___0_isCapturing, int32_t ___1_captureMode, int32_t ___2_qualityLevel, bool ___3_isOverlayVisible, bool ___4_isPaused, const RuntimeMethod* method) 
{
	{
		// internal VideoCaptureState(bool isCapturing, VideoCaptureMode captureMode,
		//     VideoQualityLevel qualityLevel, bool isOverlayVisible, bool isPaused)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mIsCapturing = isCapturing;
		bool L_0 = ___0_isCapturing;
		__this->___mIsCapturing_0 = L_0;
		// mCaptureMode = captureMode;
		int32_t L_1 = ___1_captureMode;
		__this->___mCaptureMode_1 = L_1;
		// mQualityLevel = qualityLevel;
		int32_t L_2 = ___2_qualityLevel;
		__this->___mQualityLevel_2 = L_2;
		// mIsOverlayVisible = isOverlayVisible;
		bool L_3 = ___3_isOverlayVisible;
		__this->___mIsOverlayVisible_3 = L_3;
		// mIsPaused = isPaused;
		bool L_4 = ___4_isPaused;
		__this->___mIsPaused_4 = L_4;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsCapturing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsCapturing_m79259E68EFB6988C652F65191D76EA168AAD2D48 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsCapturing; }
		bool L_0 = __this->___mIsCapturing_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::get_CaptureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_CaptureMode_m4FA4B9D18DB6653CA6C7893ADE4B0FDDF80A39E1 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCaptureMode; }
		int32_t L_0 = __this->___mCaptureMode_1;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::get_QualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_QualityLevel_mEF7D5F70B0DBD8EE8D56878C16D639FE080BECE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mQualityLevel; }
		int32_t L_0 = __this->___mQualityLevel_2;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsOverlayVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsOverlayVisible_m091B7546AE3EBC1E750A0CB513D3CD9D72866CE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsOverlayVisible; }
		bool L_0 = __this->___mIsOverlayVisible_3;
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsPaused_mD2C050CBD84B1744B97B31C3B6836AEFBB4C6D2E (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIsPaused; }
		bool L_0 = __this->___mIsPaused_4;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCaptureState::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCaptureState_ToString_m293496CA599DCA9B670B407F2C01FF253AA189D9 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[VideoCaptureState: mIsCapturing={0}, mCaptureMode={1}, mQualityLevel={2}, " +
		//                      "mIsOverlayVisible={3}, mIsPaused={4}]",
		//     mIsCapturing,
		//     mCaptureMode.ToString(),
		//     mQualityLevel.ToString(),
		//     mIsOverlayVisible,
		//     mIsPaused);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->___mIsCapturing_0;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t* L_6 = (&__this->___mCaptureMode_1);
		Il2CppFakeBox<int32_t> L_7(VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t* L_10 = (&__this->___mQualityLevel_2);
		Il2CppFakeBox<int32_t> L_11(VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var, L_10);
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		bool L_14 = __this->___mIsOverlayVisible_3;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		bool L_18 = __this->___mIsPaused_4;
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB, L_17, NULL);
		return L_21;
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
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_Multicast(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* currentDelegate = reinterpret_cast<ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInst(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, method);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStatic(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, method);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStaticInvoker(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_ClosedStaticInvoker(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenVirtual(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	VirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInterface(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericVirtual(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	GenericVirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericInterface(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method)
{
	NullCheck(___0_resolver);
	GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback__ctor_mA4005D04BD1E3B8BAE1B2C7587F5F6CD9F01AE7F (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_Multicast;
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20 (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_resolver, ___1_original, ___2_originalData, ___3_unmerged, ___4_unmergedData, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCallback_BeginInvoke_mD49E7DD5D0F3465015DC9954C5D168E0CB7004F9 (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_resolver, RuntimeObject* ___1_original, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_originalData, RuntimeObject* ___3_unmerged, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_unmergedData, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___0_resolver;
	__d_args[1] = ___1_original;
	__d_args[2] = ___2_originalData;
	__d_args[3] = ___3_unmerged;
	__d_args[4] = ___4_unmergedData;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_EndInvoke_m1850006035C4BA5A2414B6E9A4F5F979B2E0B1AA (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke_back(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com_back(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com_cleanup(SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___0_builder, const RuntimeMethod* method) 
{
	{
		// mDescriptionUpdated = builder.mDescriptionUpdated;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_0 = ___0_builder;
		bool L_1 = L_0.___mDescriptionUpdated_0;
		__this->___mDescriptionUpdated_0 = L_1;
		// mNewDescription = builder.mNewDescription;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = ___0_builder;
		String_t* L_3 = L_2.___mNewDescription_1;
		__this->___mNewDescription_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_3);
		// mCoverImageUpdated = builder.mCoverImageUpdated;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_4 = ___0_builder;
		bool L_5 = L_4.___mCoverImageUpdated_2;
		__this->___mCoverImageUpdated_2 = L_5;
		// mNewPngCoverImage = builder.mNewPngCoverImage;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_6 = ___0_builder;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___mNewPngCoverImage_3;
		__this->___mNewPngCoverImage_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_7);
		// mNewPlayedTime = builder.mNewPlayedTime;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_8 = ___0_builder;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_9 = L_8.___mNewPlayedTime_4;
		__this->___mNewPlayedTime_4 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF_AdjustorThunk (RuntimeObject* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___0_builder, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF(_thisAdjusted, ___0_builder, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->___mDescriptionUpdated_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->___mNewDescription_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->___mCoverImageUpdated_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return mNewPlayedTime.HasValue; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_0 = (&__this->___mNewPlayedTime_4);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline(L_0, Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_inline(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke_back(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke_cleanup(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com_back(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com_cleanup(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, String_t* ___0_description, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___0_description;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_0, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mNewDescription_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_1);
		// mDescriptionUpdated = true;
		__this->___mDescriptionUpdated_0 = (bool)1;
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9_AdjustorThunk (RuntimeObject* __this, String_t* ___0_description, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9(_thisAdjusted, ___0_description, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newPngCoverImage, const RuntimeMethod* method) 
{
	{
		// mCoverImageUpdated = true;
		__this->___mCoverImageUpdated_2 = (bool)1;
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_newPngCoverImage;
		__this->___mNewPngCoverImage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_0);
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_1 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newPngCoverImage, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7(_thisAdjusted, ___0_newPngCoverImage, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_newPlayedTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___0_newPlayedTime), NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var)));
	}

IL_001d:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ___0_newPlayedTime;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		__this->___mNewPlayedTime_4 = L_3;
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_4 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_newPlayedTime, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE(_thisAdjusted, ___0_newPlayedTime, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, const RuntimeMethod* method) 
{
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_0 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B _returnValue;
	_returnValue = Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke_back(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke_cleanup(AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com_back(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com_cleanup(AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, int32_t ___0_status, String_t* ___1_localEndpointName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mStatus = status;
		int32_t L_0 = ___0_status;
		__this->___mStatus_0 = L_0;
		// this.mLocalEndpointName = Misc.CheckNotNull(localEndpointName);
		String_t* L_1 = ___1_localEndpointName;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_1, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mLocalEndpointName_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mLocalEndpointName_1), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881_AdjustorThunk (RuntimeObject* __this, int32_t ___0_status, String_t* ___1_localEndpointName, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881(_thisAdjusted, ___0_status, ___1_localEndpointName, method);
}
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mStatus == ResponseStatus.Success; }
		int32_t L_0 = __this->___mStatus_0;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->___mLocalEndpointName_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_inline(_thisAdjusted, method);
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


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke_back(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke_cleanup(ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com_back(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com_cleanup(ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, String_t* ___0_remoteEndpointId, String_t* ___1_remoteEndpointName, String_t* ___2_serviceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Constructing ConnectionRequest");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5, NULL);
		// mRemoteEndpoint = new EndpointDetails(remoteEndpointId, remoteEndpointName, serviceId);
		String_t* L_0 = ___0_remoteEndpointId;
		String_t* L_1 = ___1_remoteEndpointName;
		String_t* L_2 = ___2_serviceId;
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___mRemoteEndpoint_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
		#endif
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		__this->___mPayload_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_1), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A_AdjustorThunk (RuntimeObject* __this, String_t* ___0_remoteEndpointId, String_t* ___1_remoteEndpointName, String_t* ___2_serviceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A(_thisAdjusted, ___0_remoteEndpointId, ___1_remoteEndpointName, ___2_serviceId, ___3_payload, method);
}
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_0 = __this->___mRemoteEndpoint_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 _returnValue;
	_returnValue = ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_inline(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke_back(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke_cleanup(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com_back(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com_cleanup(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, int32_t ___2_code, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mLocalClientId = localClientId;
		int64_t L_0 = ___0_localClientId;
		__this->___mLocalClientId_1 = L_0;
		// this.mRemoteEndpointId = Misc.CheckNotNull(remoteEndpointId);
		String_t* L_1 = ___1_remoteEndpointId;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_1, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mRemoteEndpointId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRemoteEndpointId_2), (void*)L_2);
		// this.mResponseStatus = code;
		int32_t L_3 = ___2_code;
		__this->___mResponseStatus_3 = L_3;
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		__this->___mPayload_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_4), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1_AdjustorThunk (RuntimeObject* __this, int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, int32_t ___2_code, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1(_thisAdjusted, ___0_localClientId, ___1_remoteEndpointId, ___2_code, ___3_payload, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->___mRemoteEndpointId_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_inline(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->___mResponseStatus_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_inline(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Rejected_m47E3012BD041A67DAD2622C0CF3ED5040FD5E270 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Rejected,
		//     EmptyPayload);
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_NetworkNotConnected_mF40EA16E81EABA8C4D53EB9A6D899F68E8E94341 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorNetworkNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_InternalError_mCE01D5F11A63E4B42394ACD007EDAC80286BDC8B (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorInternal,
		//     EmptyPayload);
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 2, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_EndpointNotConnected_m18C28B0A1B203D40E32F7E95C7A00F43C40027DE (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorEndpointNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 4, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Accepted_mF8315F45E0211671036F79594A8EEFA015E02321 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_payload, const RuntimeMethod* method) 
{
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Accepted,
		//     payload);
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_payload;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_AlreadyConnected_m39C385EFBE93799BFFBAA5B78381DA790EC26A87 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId,
		//     Status.ErrorAlreadyConnected,
		//     EmptyPayload);
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 5, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__cctor_m27725B616700455D21B165764868F0065373C86D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] EmptyPayload = new byte[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0), (void*)L_0);
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
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxUnreliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_m4963EFFBC7006B70F130C54A4394D218353EF6C3 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	{
		// return NearbyConnectionConfiguration.MaxUnreliableMessagePayloadLength;
		return ((int32_t)1168);
	}
}
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_mC4250D2FB414B3FF275C9E594493DC4985A53E94 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	{
		// return NearbyConnectionConfiguration.MaxReliableMessagePayloadLength;
		return ((int32_t)4096);
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendReliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendReliable_mBF4DCC52828944F5A08108434D729117C3CDA1AC (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_recipientEndpointIds, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendReliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendUnreliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendUnreliable_mBFC6E22A366146AB057A323DC9F5A0F7F4CE3A2E (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_recipientEndpointIds, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendUnreliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartAdvertising(System.String,System.Collections.Generic.List`1<System.String>,System.Nullable`1<System.TimeSpan>,System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>,System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartAdvertising_m769BCD23744FF396C09EB9A58F2964444A2C427F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___0_name, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_appIdentifiers, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_advertisingDuration, Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* ___3_resultCallback, Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3* ___4_connectionRequestCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AdvertisingResult obj = new AdvertisingResult(ResponseStatus.LicenseCheckFailed, string.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881((&V_0), (-1), L_0, NULL);
		// resultCallback.Invoke(obj);
		Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* L_1 = ___3_resultCallback;
		AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAdvertising_m48C0689BF58F495F39726F9CA5C0D8DF140A868F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAvertising in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendConnectionRequest(System.String,System.String,System.Byte[],System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>,GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendConnectionRequest_mFD6373183CB3AE67142645979CE6C3D7B6852D4F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___0_name, String_t* ___1_remoteEndpointId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_payload, Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* ___3_responseCallback, RuntimeObject* ___4_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// OurUtils.Logger.d("SendConnectionRequest called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645, NULL);
		// if (responseCallback != null)
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_0 = ___3_responseCallback;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// ConnectionResponse obj = ConnectionResponse.Rejected(0, string.Empty);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_2;
		L_2 = ConnectionResponse_Rejected_m47E3012BD041A67DAD2622C0CF3ED5040FD5E270(((int64_t)0), L_1, NULL);
		V_0 = L_2;
		// responseCallback.Invoke(obj);
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_3 = ___3_responseCallback;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_inline(L_3, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::AcceptConnectionRequest(System.String,System.Byte[],GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_AcceptConnectionRequest_m18A6FE9E4E5F556ED545AFF93045072D313C97C4 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___0_remoteEndpointId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_payload, RuntimeObject* ___2_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("AcceptConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartDiscovery(System.String,System.Nullable`1<System.TimeSpan>,GooglePlayGames.BasicApi.Nearby.IDiscoveryListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartDiscovery_m22042E623E2034C7711625F0F22F1EBA1FC968DD (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___0_serviceId, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_advertisingTimeout, RuntimeObject* ___2_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StartDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopDiscovery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopDiscovery_mE3F67C9136B16C24CD10E6A46DB40CECA326F0AD (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___0_serviceId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::RejectConnectionRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_RejectConnectionRequest_mCD0163B5E142048717319C76576C7F18F6D6AC3E (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___0_requestingEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("RejectConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::DisconnectFromEndpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_DisconnectFromEndpoint_m41F5477E14AAD9F59A8388E68D9FAFEF82BAF691 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___0_remoteEndpointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("DisconnectFromEndpoint in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAllConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAllConnections_mA2CD05D911E89C18EFEA15E32024810307F34BFF (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAllConnections in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalEndpointId_m693DF94B2A56BDB05F5E031D6D59E25994C152DB (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalDeviceId_mBD1F45BD9F0286C9C4ACABCF1E0C1A74CDD94BB6 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "DummyDevice";
		return _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetAppBundleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetAppBundleId_mCA3AEF93D1241577A74AACBE26C9081E17686E6A (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "dummy.bundle.id";
		return _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetServiceId_m565A5A8817CD3F45312BAB02CF2D9B87776E1503 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "dummy.service.id";
		return _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient__ctor_m4D2EC0602685E7FC545780BFCB337CB10F5A4174 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, String_t* ___0_endpointId, String_t* ___1_name, String_t* ___2_serviceId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mEndpointId = Misc.CheckNotNull(endpointId);
		String_t* L_0 = ___0_endpointId;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_0, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mEndpointId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEndpointId_0), (void*)L_1);
		// this.mName = Misc.CheckNotNull(name);
		String_t* L_2 = ___1_name;
		String_t* L_3;
		L_3 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_2, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mName_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_3);
		// this.mServiceId = Misc.CheckNotNull(serviceId);
		String_t* L_4 = ___2_serviceId;
		String_t* L_5;
		L_5 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_4, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mServiceId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mServiceId_2), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC_AdjustorThunk (RuntimeObject* __this, String_t* ___0_endpointId, String_t* ___1_name, String_t* ___2_serviceId, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC(_thisAdjusted, ___0_endpointId, ___1_name, ___2_serviceId, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->___mEndpointId_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->___mServiceId_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_inline(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke_back(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com_back(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com_cleanup(NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___0_callback, int64_t ___1_localClientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mInitializationCallback = Misc.CheckNotNull(callback);
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = ___0_callback;
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_1;
		L_1 = Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF(L_0, Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF_RuntimeMethod_var);
		__this->___mInitializationCallback_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInitializationCallback_2), (void*)L_1);
		// this.mLocalClientId = localClientId;
		int64_t L_2 = ___1_localClientId;
		__this->___mLocalClientId_3 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94_AdjustorThunk (RuntimeObject* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___0_callback, int64_t ___1_localClientId, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94(_thisAdjusted, ___0_callback, ___1_localClientId, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = __this->___mInitializationCallback_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_inline(_thisAdjusted, method);
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
// System.Void GooglePlayGames.BasicApi.Events.Event::.ctor(System.String,System.String,System.String,System.String,System.UInt64,GooglePlayGames.BasicApi.Events.EventVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m94C05B7DEB8D7577CEEEC4B2336037A8252819D8 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, String_t* ___0_id, String_t* ___1_name, String_t* ___2_description, String_t* ___3_imageUrl, uint64_t ___4_currentCount, int32_t ___5_visibility, const RuntimeMethod* method) 
{
	{
		// internal Event(string id, string name, string description, string imageUrl,
		//     ulong currentCount, EventVisibility visibility)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = id;
		String_t* L_0 = ___0_id;
		__this->___mId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_0);
		// mName = name;
		String_t* L_1 = ___1_name;
		__this->___mName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_1);
		// mDescription = description;
		String_t* L_2 = ___2_description;
		__this->___mDescription_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_2), (void*)L_2);
		// mImageUrl = imageUrl;
		String_t* L_3 = ___3_imageUrl;
		__this->___mImageUrl_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mImageUrl_3), (void*)L_3);
		// mCurrentCount = currentCount;
		uint64_t L_4 = ___4_currentCount;
		__this->___mCurrentCount_4 = L_4;
		// mVisibility = visibility;
		int32_t L_5 = ___5_visibility;
		__this->___mVisibility_5 = L_5;
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Id_m068D5C8E601A6631DF512C72B5FBBFE0786B1ABF (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_m5DD8C06F8EA7F61A9E82130C25C4B3F633C54166 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Description_mC13A4161720C1803517724129D29F33069995257 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDescription; }
		String_t* L_0 = __this->___mDescription_2;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_ImageUrl_mAC25F0E5F2C891BD491878F1B03562F0F803D311 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mImageUrl; }
		String_t* L_0 = __this->___mImageUrl_3;
		return L_0;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Events.Event::get_CurrentCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Event_get_CurrentCount_mA0617C2248CF14849331F0E5B46005BB2EA873EC (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCurrentCount; }
		uint64_t L_0 = __this->___mCurrentCount_4;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_Visibility_mDF19D9454B0B8A6A7B302844BDBEFF6C271083E6 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	{
		// get { return mVisibility; }
		int32_t L_0 = __this->___mVisibility_5;
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
// System.Void Suriyun.AnimatorController::SwapVisibility(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_SwapVisibility_m5FC53C81B50089B7D5E0AB0FA0525B0140E149A2 (AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) 
{
	{
		// obj.SetActive(!obj.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_obj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_obj;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Suriyun.AnimatorController::SetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_SetFloat_m65A083168E321B9A05B60966A3CCB639FCF64242 (AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E* __this, String_t* ___0_parameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// char[] separator = { ',', ';' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)59));
		V_0 = L_2;
		// string[] param = parameter.Split(separator);
		String_t* L_3 = ___0_parameter;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_4, NULL);
		// string name = param[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// float value = (float)Convert.ToDouble(param[1]);
		NullCheck(L_6);
		int32_t L_9 = 1;
		String_t* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_10, NULL);
		V_2 = ((float)L_11);
		// Debug.Log(name + " " + value);
		String_t* L_12 = V_1;
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_15 = __this->___animators_4;
		V_3 = L_15;
		V_4 = 0;
		goto IL_0059;
	}

IL_0048:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_16 = V_3;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// a.SetFloat(name, value);
		String_t* L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_19, L_20, L_21, NULL);
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0059:
	{
		// foreach (Animator a in animators)
		int32_t L_23 = V_4;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Suriyun.AnimatorController::SetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_SetInt_m2D9F193DE1B662164BA2F3136E26A1852B4F29AF (AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E* __this, String_t* ___0_parameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// char[] separator = { ',', ';' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)59));
		V_0 = L_2;
		// string[] param = parameter.Split(separator);
		String_t* L_3 = ___0_parameter;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_4, NULL);
		// string name = param[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// int value = Convert.ToInt32(param[1]);
		NullCheck(L_6);
		int32_t L_9 = 1;
		String_t* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_10, NULL);
		V_2 = L_11;
		// Debug.Log(name + " " + value);
		String_t* L_12 = V_1;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_15 = __this->___animators_4;
		V_3 = L_15;
		V_4 = 0;
		goto IL_0058;
	}

IL_0047:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_16 = V_3;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// a.SetInteger(name, value);
		String_t* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_19, L_20, L_21, NULL);
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0058:
	{
		// foreach (Animator a in animators)
		int32_t L_23 = V_4;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Suriyun.AnimatorController::SetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_SetBool_m61C1FBAD84582257829F3A0E25E45B15764F839C (AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E* __this, String_t* ___0_parameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// char[] separator = { ',', ';' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)59));
		V_0 = L_2;
		// string[] param = parameter.Split(separator);
		String_t* L_3 = ___0_parameter;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_4, NULL);
		// string name = param[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// bool value = Convert.ToBoolean(param[1]);
		NullCheck(L_6);
		int32_t L_9 = 1;
		String_t* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_10, NULL);
		V_2 = L_11;
		// Debug.Log(name + " " + value);
		String_t* L_12 = V_1;
		String_t* L_13;
		L_13 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_15 = __this->___animators_4;
		V_3 = L_15;
		V_4 = 0;
		goto IL_0058;
	}

IL_0047:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_16 = V_3;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// a.SetBool(name, value);
		String_t* L_20 = V_1;
		bool L_21 = V_2;
		NullCheck(L_19);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_19, L_20, L_21, NULL);
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0058:
	{
		// foreach (Animator a in animators)
		int32_t L_23 = V_4;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Suriyun.AnimatorController::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController_SetTrigger_m3A763F65EF927BE484E7B34E1A7A03BEE1B72B7F (AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E* __this, String_t* ___0_parameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	String_t* V_1 = NULL;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// char[] separator = { ',', ';' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)59));
		V_0 = L_2;
		// string[] param = parameter.Split(separator);
		String_t* L_3 = ___0_parameter;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_4, NULL);
		// string name = param[0];
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// Debug.Log(name);
		String_t* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_9 = __this->___animators_4;
		V_2 = L_9;
		V_3 = 0;
		goto IL_0039;
	}

IL_002c:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// a.SetTrigger(name);
		String_t* L_14 = V_1;
		NullCheck(L_13);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_13, L_14, NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0039:
	{
		// foreach (Animator a in animators)
		int32_t L_16 = V_3;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Suriyun.AnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorController__ctor_m6D5446C4F2931DC00F1C3BE26ACEA313B541DF74 (AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LayerLab.PanelControlSimpleCasual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Start_m86233FCC1B575FA7944CBBC502AF731259E027B2 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	{
		// textTitle = transform.GetComponentInChildren<TextMeshProUGUI>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_0, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___textTitle_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textTitle_8), (void*)L_1);
		// buttonPrev.onClick.AddListener(Click_Prev);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___buttonPrev_11;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// buttonNext.onClick.AddListener(Click_Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonNext_12;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// foreach (Transform t in panelTransformLight)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___panelTransformLight_9;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_009a;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_009a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_0057_1:
			{
				// foreach (Transform t in panelTransformLight)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panelLight.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___panelLight_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_15);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_1;
				NullCheck(L_18);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				NullCheck(L_19);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
			}

IL_0080_1:
			{
				// foreach (Transform t in panelTransformLight)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0057_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// foreach (Transform t in panelTransformDark)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___panelTransformDark_10;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_22, NULL);
		V_0 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dc:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_24 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_25 = V_2;
					if (!L_25)
					{
						goto IL_00ec;
					}
				}
				{
					RuntimeObject* L_26 = V_2;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
				}

IL_00ec:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d2_1;
			}

IL_00a9_1:
			{
				// foreach (Transform t in panelTransformDark)
				RuntimeObject* L_27 = V_0;
				NullCheck(L_27);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				V_3 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_28, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panelDark.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = __this->___panelDark_7;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_3;
				NullCheck(L_30);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
				L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
				NullCheck(L_29);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_29, L_31, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_3;
				NullCheck(L_32);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
				NullCheck(L_33);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
			}

IL_00d2_1:
			{
				// foreach (Transform t in panelTransformDark)
				RuntimeObject* L_34 = V_0;
				NullCheck(L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_00a9_1;
				}
			}
			{
				goto IL_00ed;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ed:
	{
		// panelLight[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_36 = __this->___panelLight_6;
		int32_t L_37 = __this->___page_4;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_36, L_37, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// panelDark[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_39 = __this->___panelDark_7;
		int32_t L_40 = __this->___page_4;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_39, L_40, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// isReady = true;
		__this->___isReady_5 = (bool)1;
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
		// SetMode();
		PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Update_m782E0DD30EA0DFF0F420BE90BEE9A95AFE36A5E9 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	{
		// if (!isReady) return;
		bool L_0 = __this->___isReady_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isReady) return;
		return;
	}

IL_0009:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Click_Prev();
		PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B(__this, NULL);
		return;
	}

IL_001c:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// Click_Next();
		PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68(__this, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (page <= 0 || !isReady) return;
		int32_t L_0 = __this->___page_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___isReady_5;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// if (page <= 0 || !isReady) return;
		return;
	}

IL_0012:
	{
		// panelLight[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___panelLight_6;
		int32_t L_3 = __this->___page_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// panelDark[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___panelDark_7;
		int32_t L_6 = __this->___page_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// page -= 1;
		int32_t L_8 = __this->___page_4;
		__this->___page_4 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// panelLight[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___panelLight_6;
		int32_t L_10 = __this->___page_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// panelDark[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___panelDark_7;
		int32_t L_13 = __this->___page_4;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, L_13, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// if (!isDarakMode)
		bool L_15 = __this->___isDarakMode_13;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		// textTitle.text = panelLight[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_17 = __this->___panelLight_6;
		int32_t L_18 = __this->___page_4;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_17, L_18, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_20);
		goto IL_00c8;
	}

IL_00a7:
	{
		// textTitle.text = panelDark[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___panelDark_7;
		int32_t L_23 = __this->___page_4;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, L_23, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_21, L_25);
	}

IL_00c8:
	{
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (page >= panelLight.Count - 1) return;
		int32_t L_0 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panelLight_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0016;
		}
	}
	{
		// if (page >= panelLight.Count - 1) return;
		return;
	}

IL_0016:
	{
		// panelLight[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___panelLight_6;
		int32_t L_4 = __this->___page_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// panelDark[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panelDark_7;
		int32_t L_7 = __this->___page_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// page += 1;
		int32_t L_9 = __this->___page_4;
		__this->___page_4 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// panelLight[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___panelLight_6;
		int32_t L_11 = __this->___page_4;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// panelDark[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = __this->___panelDark_7;
		int32_t L_14 = __this->___page_4;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_13, L_14, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetArrowActive_m92E6155F9B105F78CCE6DC447A9A9C335F480D9D (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPrev.gameObject.SetActive(page > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonPrev_11;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0), NULL);
		// buttonNext.gameObject.SetActive(page < panelLight.Count - 1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___buttonNext_12;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		int32_t L_5 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panelLight_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isDarakMode)
		bool L_0 = __this->___isDarakMode_13;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		// textTitle.text = panelLight[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___panelLight_6;
		int32_t L_3 = __this->___page_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_6);
		goto IL_006a;
	}

IL_003a:
	{
		// textTitle.text = panelDark[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___panelDark_7;
		int32_t L_9 = __this->___page_4;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_12);
	}

IL_006a:
	{
		// SetArrowActive();
		PanelControlSimpleCasual_SetArrowActive_m92E6155F9B105F78CCE6DC447A9A9C335F480D9D(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Click_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Mode_m864F4379E65B8D1B4BEB85781B0B3621986A65AA (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	{
		// isDarakMode = !isDarakMode;
		bool L_0 = __this->___isDarakMode_13;
		__this->___isDarakMode_13 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// SetMode();
		PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A(__this, NULL);
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::SetMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	{
		// if (!isDarakMode)
		bool L_0 = __this->___isDarakMode_13;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// panelTransformLight.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___panelTransformLight_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// panelTransformDark.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___panelTransformDark_10;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		return;
	}

IL_002b:
	{
		// panelTransformLight.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___panelTransformLight_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// panelTransformDark.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___panelTransformDark_10;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual__ctor_mFD96C8F0EE87F4A427C9D8C9347EFA0DA62733F6 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> panelLight = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___panelLight_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panelLight_6), (void*)L_0);
		// [SerializeField] private List<GameObject> panelDark = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___panelDark_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panelDark_7), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LayerLab.PanelSimpleCasual::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSimpleCasual_OnEnable_mC15E5EC57421500E3B5DEB3AA31097A61B021A48 (PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelSimpleCasual::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSimpleCasual_OnDisable_mD511788676A09D146D1EBF90AC02E68E36A11A28 (PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelSimpleCasual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSimpleCasual__ctor_mB372C009B0DCBE583366F308CADF83AFCB813B8A (PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE_inline (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNumberOfPurchases; }
		int32_t L_0 = __this->___mNumberOfPurchases_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mAvgSessionLength; }
		float L_0 = __this->___mAvgSessionLength_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_0 = __this->___mDaysSinceLastPlayed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNumberOfSessions; }
		int32_t L_0 = __this->___mNumberOfSessions_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mSessPercentile; }
		float L_0 = __this->___mSessPercentile_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mSpendPercentile; }
		float L_0 = __this->___mSpendPercentile_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mChurnProbability; }
		float L_0 = __this->___mChurnProbability_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mHighSpenderProbability; }
		float L_0 = __this->___mHighSpenderProbability_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604_inline (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mTotalSpendNext28Days; }
		float L_0 = __this->___mTotalSpendNext28Days_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mEnableSaveGames;
		bool L_0 = __this->___mEnableSaveGames_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mHidePopups;
		bool L_0 = __this->___mHidePopups_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestAuthCode;
		bool L_0 = __this->___mRequestAuthCode_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mForceRefresh;
		bool L_0 = __this->___mForceRefresh_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestEmail;
		bool L_0 = __this->___mRequestEmail_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mRequestIdToken;
		bool L_0 = __this->___mRequestIdToken_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9_inline (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// return mAccountName;
		String_t* L_0 = __this->___mAccountName_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mEnableSavedGames; }
		bool L_0 = __this->___mEnableSavedGames_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mHidePopups; }
		bool L_0 = __this->___mHidePopups_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRequestAuthCode; }
		bool L_0 = __this->___mRequestAuthCode_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mForceRefresh; }
		bool L_0 = __this->___mForceRefresh_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRequestEmail; }
		bool L_0 = __this->___mRequestEmail_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRequestIdToken; }
		bool L_0 = __this->___mRequestIdToken_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mAccountName; }
		String_t* L_0 = __this->___mAccountName_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_inline (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return mScopes; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___mScopes_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->___mDescriptionUpdated_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->___mNewDescription_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->___mCoverImageUpdated_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_inline (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_inline (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->___mLocalEndpointName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_0 = __this->___mRemoteEndpoint_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_inline (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->___mRemoteEndpointId_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->___mResponseStatus_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_inline (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->___mEndpointId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_inline (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->___mServiceId_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_inline (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = __this->___mInitializationCallback_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, int32_t ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m083FC47D435AFCCD45970CF9513A45291A17415D_gshared_inline (Action_2_tDAF49DC01D1289DFA5F837D90BCC3C9C08C024F9* __this, int32_t ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
