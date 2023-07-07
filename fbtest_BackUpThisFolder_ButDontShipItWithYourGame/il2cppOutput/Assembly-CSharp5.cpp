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

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
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
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,GooglePlayGames.BasicApi.SignInStatus>[]
struct EntryU5BU5D_t636D22DEC08114A9642837BF7342E92CC2E490F8;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Suriyun.AnimatorController
struct AnimatorController_t931CB24999468F0698FE2FF590C54BCAAEF99A3E;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
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
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t2CB29BC933802DD7667C202D450D171D11F4A2DB;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t131F8FE87633785662CE1446FCC319E9E81D49AA;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t95B1CFEB3094570AFF240C7CDD61A3A5D0169E86;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// LayerLab.PanelControlSimpleCasual
struct PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF;
// LayerLab.PanelSimpleCasual
struct PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
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
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB;
IL2CPP_EXTERN_C String_t* _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
IL2CPP_EXTERN_C String_t* _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF;
IL2CPP_EXTERN_C String_t* _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA;
IL2CPP_EXTERN_C String_t* _stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68;
IL2CPP_EXTERN_C String_t* _stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711;
IL2CPP_EXTERN_C String_t* _stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37;
IL2CPP_EXTERN_C String_t* _stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28;
IL2CPP_EXTERN_C String_t* _stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
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

// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6  : public RuntimeObject
{
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

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE  : public MulticastDelegate_t
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

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61  : public MulticastDelegate_t
{
};

// System.Func`2<System.Boolean,System.String>
struct Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334  : public MulticastDelegate_t
{
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

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient

// GooglePlayGames.BasicApi.Events.Event

// GooglePlayGames.BasicApi.Events.Event

// GooglePlayGames.BasicApi.LeaderboardScoreData

// GooglePlayGames.BasicApi.LeaderboardScoreData

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

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder

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

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult

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

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest

// System.Delegate

// System.Delegate

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

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>

// System.Func`2<System.Boolean,System.String>

// System.Func`2<System.Boolean,System.String>

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

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Suriyun.AnimatorController

// Suriyun.AnimatorController

// LayerLab.PanelControlSimpleCasual

// LayerLab.PanelControlSimpleCasual

// LayerLab.PanelSimpleCasual

// LayerLab.PanelSimpleCasual

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

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
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
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
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
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::.ctor()
inline void List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_mBBC149EB64BAFE2838EF119A948F121DA44F9D84 (PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993* __this, String_t* ___0_displayName, String_t* ___1_playerId, String_t* ___2_avatarUrl, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_m772E7C64FDB7474FD8C1940825C3486B1A8ADD66 (PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993* __this, String_t* ___0_displayName, String_t* ___1_playerId, String_t* ___2_avatarUrl, bool ___3_isFriend, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___0_builder, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_AccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_Scopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
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
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___0_builder, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___0_value, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, String_t* ___0_description, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newPngCoverImage, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB (String_t* ___0_msg, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, int32_t ___2_code, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_payload, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
inline Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___0_value, const RuntimeMethod* method)
{
	return ((  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* (*) (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___0_value, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___0_callback, int64_t ___1_localClientId, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
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
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
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
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return mStatus == ResponseStatus.Success ||
		//        mStatus == ResponseStatus.SuccessWithStale;
		int32_t L_0 = __this->___mStatus_1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___mStatus_1;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardScoreData_get_Status_m1BBD2C071F178ED54E12983867B1CA85BCFEC9EF (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mStatus; }
		int32_t L_1 = V_0;
		return L_1;
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
	uint64_t V_0 = 0;
	{
		// get { return mApproxCount; }
		uint64_t L_0 = __this->___mApproxCount_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mApproxCount; }
		uint64_t L_1 = V_0;
		return L_1;
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
	String_t* V_0 = NULL;
	{
		// get { return mTitle; }
		String_t* L_0 = __this->___mTitle_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTitle; }
		String_t* L_1 = V_0;
		return L_1;
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
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
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
	RuntimeObject* V_0 = NULL;
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_0 = __this->___mPlayerScore_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_1 = V_0;
		return L_1;
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
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_1 = NULL;
	{
		// get { return mScores.ToArray(); }
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = __this->___mScores_7;
		NullCheck(L_0);
		PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* L_1;
		L_1 = List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF(L_0, List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var);
		V_0 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_1;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// get { return mScores.ToArray(); }
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_3 = V_1;
		return L_3;
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
	int32_t V_0 = 0;
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
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_PrevPageToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* LeaderboardScoreData_get_PrevPageToken_mBE87B3D4972B143FE151B1C3D8F74ADD60BC9647 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* V_0 = NULL;
	{
		// get { return mPrevPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = __this->___mPrevPage_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPrevPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_1 = V_0;
		return L_1;
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
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* V_0 = NULL;
	{
		// get { return mNextPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = __this->___mNextPage_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNextPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_1 = V_0;
		return L_1;
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
	String_t* V_0 = NULL;
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
		V_0 = L_13;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
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
	bool V_0 = false;
	{
		// get { return mValid; }
		bool L_0 = __this->___mValid_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mValid; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mNumberOfPurchases; }
		int32_t L_0 = __this->___mNumberOfPurchases_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNumberOfPurchases; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mAvgSessionLength; }
		float L_0 = __this->___mAvgSessionLength_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mAvgSessionLength; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_0 = __this->___mDaysSinceLastPlayed_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mNumberOfSessions; }
		int32_t L_0 = __this->___mNumberOfSessions_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNumberOfSessions; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSessPercentile; }
		float L_0 = __this->___mSessPercentile_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSessPercentile; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSpendPercentile; }
		float L_0 = __this->___mSpendPercentile_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSpendPercentile; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendProbability_mE441AF4945A4570035A7186270672FC1589275D1 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSpendProbability; }
		float L_0 = __this->___mSpendProbability_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSpendProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mChurnProbability; }
		float L_0 = __this->___mChurnProbability_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mChurnProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mHighSpenderProbability; }
		float L_0 = __this->___mHighSpenderProbability_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mHighSpenderProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mTotalSpendNext28Days; }
		float L_0 = __this->___mTotalSpendNext28Days_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTotalSpendNext28Days; }
		float L_1 = V_0;
		return L_1;
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
	bool V_0 = false;
	{
		// return NumberOfPurchases != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return AvgSessionLength != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return DaysSinceLastPlayed != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return NumberOfSessions != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return SessPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return SpendPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return ChurnProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return HighSpenderProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// return TotalSpendNext28Days != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
		L_1 = Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8(L_0, NULL);
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
		L_5 = Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527(L_4, NULL);
		__this->___mHidePopups_5 = L_5;
		// this.mRequestAuthCode = builder.IsRequestingAuthCode();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_6 = ___0_builder;
		NullCheck(L_6);
		bool L_7;
		L_7 = Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43(L_6, NULL);
		__this->___mRequestAuthCode_3 = L_7;
		// this.mForceRefresh = builder.IsForcingRefresh();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_8 = ___0_builder;
		NullCheck(L_8);
		bool L_9;
		L_9 = Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691(L_8, NULL);
		__this->___mForceRefresh_4 = L_9;
		// this.mRequestEmail = builder.IsRequestingEmail();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_10 = ___0_builder;
		NullCheck(L_10);
		bool L_11;
		L_11 = Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C(L_10, NULL);
		__this->___mRequestEmail_6 = L_11;
		// this.mRequestIdToken = builder.IsRequestingIdToken();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_12 = ___0_builder;
		NullCheck(L_12);
		bool L_13;
		L_13 = Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB(L_12, NULL);
		__this->___mRequestIdToken_7 = L_13;
		// this.mAccountName = builder.GetAccountName();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_14 = ___0_builder;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9(L_14, NULL);
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
	bool V_0 = false;
	{
		// get { return mEnableSavedGames; }
		bool L_0 = __this->___mEnableSavedGames_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mEnableSavedGames; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mHidePopups; }
		bool L_0 = __this->___mHidePopups_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mHidePopups; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mRequestAuthCode; }
		bool L_0 = __this->___mRequestAuthCode_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRequestAuthCode; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mForceRefresh; }
		bool L_0 = __this->___mForceRefresh_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mForceRefresh; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mRequestEmail; }
		bool L_0 = __this->___mRequestEmail_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRequestEmail; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mRequestIdToken; }
		bool L_0 = __this->___mRequestIdToken_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRequestIdToken; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_AccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mAccountName; }
		String_t* L_0 = __this->___mAccountName_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mAccountName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F(_thisAdjusted, method);
	return _returnValue;
}
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_Scopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// get { return mScopes; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___mScopes_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mScopes; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35(_thisAdjusted, method);
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
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		// if (c1.EnableSavedGames != c2.EnableSavedGames ||
		//     c1.IsForcingRefresh != c2.IsForcingRefresh ||
		//     c1.IsHidingPopups != c2.IsHidingPopups ||
		//     c1.IsRequestingEmail != c2.IsRequestingEmail ||
		//     c1.IsRequestingAuthCode != c2.IsRequestingAuthCode ||
		//     !c1.Scopes.SequenceEqual(c2.Scopes) ||
		//     c1.AccountName != c2.AccountName)
		bool L_0;
		L_0 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7((&___0_c1), NULL);
		bool L_1;
		L_1 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7((&___1_c2), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_2;
		L_2 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF((&___0_c1), NULL);
		bool L_3;
		L_3 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF((&___1_c2), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_4;
		L_4 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF((&___0_c1), NULL);
		bool L_5;
		L_5 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF((&___1_c2), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_6;
		L_6 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E((&___0_c1), NULL);
		bool L_7;
		L_7 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E((&___1_c2), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_8;
		L_8 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B((&___0_c1), NULL);
		bool L_9;
		L_9 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B((&___1_c2), NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35((&___0_c1), NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35((&___1_c2), NULL);
		bool L_12;
		L_12 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1((RuntimeObject*)L_10, (RuntimeObject*)L_11, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_13;
		L_13 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F((&___0_c1), NULL);
		String_t* L_14;
		L_14 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F((&___1_c2), NULL);
		bool L_15;
		L_15 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_13, L_14, NULL);
		G_B8_0 = ((int32_t)(L_15));
		goto IL_007c;
	}

IL_007b:
	{
		G_B8_0 = 1;
	}

IL_007c:
	{
		V_0 = (bool)G_B8_0;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0085;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0089;
	}

IL_0085:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0089;
	}

IL_0089:
	{
		// }
		bool L_17 = V_1;
		return L_17;
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
	bool V_0 = false;
	{
		// return !(c1 == c2);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0 = ___0_c1;
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_1 = ___1_c2;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayGamesClientConfiguration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 31 + EnableSavedGames.GetHashCode();
		int32_t L_0 = V_0;
		bool L_1;
		L_1 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7(__this, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)31))), L_2));
		// hash = hash * 31 + IsForcingRefresh.GetHashCode();
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF(__this, NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31))), L_5));
		// hash = hash * 31 + IsHidingPopups.GetHashCode();
		int32_t L_6 = V_0;
		bool L_7;
		L_7 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF(__this, NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)31))), L_8));
		// hash = hash * 31 + IsRequestingEmail.GetHashCode();
		int32_t L_9 = V_0;
		bool L_10;
		L_10 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E(__this, NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)31))), L_11));
		// hash = hash * 31 + IsRequestingAuthCode.GetHashCode();
		int32_t L_12 = V_0;
		bool L_13;
		L_13 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B(__this, NULL);
		V_1 = L_13;
		int32_t L_14;
		L_14 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)31))), L_14));
		// hash = hash * 31 + Scopes.GetHashCode();
		int32_t L_15 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35(__this, NULL);
		NullCheck((RuntimeObject*)L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject*)L_16);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)31))), L_17));
		// hash = hash * 31 + AccountName.GetHashCode();
		int32_t L_18 = V_0;
		String_t* L_19;
		L_19 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F(__this, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_19);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)31))), L_20));
		// return hash;
		int32_t L_21 = V_0;
		V_2 = L_21;
		goto IL_008f;
	}

IL_008f:
	{
		// }
		int32_t L_22 = V_2;
		return L_22;
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
	bool V_0 = false;
	{
		// return this == (PlayGamesClientConfiguration) obj;
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0 = (*(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)__this);
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE(L_0, ((*(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)UnBox(L_1, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var)))), NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_3 = V_0;
		return L_3;
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
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mEnableSaveGames = true;
		__this->___mEnableSaveGames_0 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableHidePopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_EnableHidePopups_m8AF1EFEE2F021B5F02598B642BDF61E97BC640DD (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mHidePopups = true;
		__this->___mHidePopups_2 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestServerAuthCode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestServerAuthCode_m35297CBA0854EFF0879A608DD134A6701C09E345 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, bool ___0_forceRefresh, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mRequestAuthCode = true;
		__this->___mRequestAuthCode_3 = (bool)1;
		// mForceRefresh = forceRefresh;
		bool L_0 = ___0_forceRefresh;
		__this->___mForceRefresh_4 = L_0;
		// return this;
		V_0 = __this;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestEmail_m4CFF58538C86C36043D89E3B7351BFA17BF29C19 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mRequestEmail = true;
		__this->___mRequestEmail_5 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestIdToken_mE8372548261C229559A68F0D86AAACEC1308262C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mRequestIdToken = true;
		__this->___mRequestIdToken_6 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::SetAccountName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_SetAccountName_m399973F9978DAF5EACCF08A2645298476C051B16 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, String_t* ___0_accountName, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mAccountName = accountName;
		String_t* L_0 = ___0_accountName;
		__this->___mAccountName_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_7), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_1 = V_0;
		return L_1;
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
	bool V_0 = false;
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_1 = NULL;
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		V_0 = (bool)((((RuntimeObject*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___mScopes_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_1), (void*)L_2);
	}

IL_0019:
	{
		// mScopes.Add(scope);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___mScopes_1;
		String_t* L_4 = ___0_scope;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return this;
		V_1 = __this;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_5 = V_1;
		return L_5;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new PlayGamesClientConfiguration(this);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mEnableSaveGames;
		bool L_0 = __this->___mEnableSaveGames_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mRequestAuthCode;
		bool L_0 = __this->___mRequestAuthCode_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mHidePopups;
		bool L_0 = __this->___mHidePopups_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mForceRefresh;
		bool L_0 = __this->___mForceRefresh_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mRequestEmail;
		bool L_0 = __this->___mRequestEmail_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mRequestIdToken;
		bool L_0 = __this->___mRequestIdToken_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return mAccountName;
		String_t* L_0 = __this->___mAccountName_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	{
		// return mScopes == null ? new string[0] : mScopes.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___mScopes_1;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_1, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		return L_4;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// private bool mEnableSaveGames = false;
		__this->___mEnableSaveGames_0 = (bool)0;
		// private List<string> mScopes = null;
		__this->___mScopes_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_1), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		// private bool mHidePopups = false;
		__this->___mHidePopups_2 = (bool)0;
		// private bool mRequestAuthCode = false;
		__this->___mRequestAuthCode_3 = (bool)0;
		// private bool mForceRefresh = false;
		__this->___mForceRefresh_4 = (bool)0;
		// private bool mRequestEmail = false;
		__this->___mRequestEmail_5 = (bool)0;
		// private bool mRequestIdToken = false;
		__this->___mRequestIdToken_6 = (bool)0;
		// private string mAccountName = null;
		__this->___mAccountName_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_7), (void*)(String_t*)NULL);
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
	int32_t V_0 = 0;
	{
		// get { return mCollection; }
		int32_t L_0 = __this->___mCollection_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCollection; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::get_TimeSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_TimeSpan_mFC519002264A338C9C9FD20D0E4ABBAF185C19D2 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mTimespan; }
		int32_t L_0 = __this->___mTimespan_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTimespan; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Direction_m1666DE97676B246F0E7FDA31232401FB1B7973A0 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mDirection; }
		int32_t L_0 = __this->___mDirection_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDirection; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Object GooglePlayGames.BasicApi.ScorePageToken::get_InternalObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorePageToken_get_InternalObject_m37A928592D5497D4D646E6868EDA834D2063C6DB (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return mInternalObject; }
		RuntimeObject* L_0 = __this->___mInternalObject_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mInternalObject; }
		RuntimeObject* L_1 = V_0;
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
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
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
			goto IL_0086;
		}
	}
	{
		G_B3_0 = 7;
		goto IL_008d;
	}

IL_0086:
	{
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_15 = V_0;
		int32_t L_16 = ___0_code;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88(L_15, L_16, Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_17));
	}

IL_008d:
	{
		V_1 = G_B3_0;
		goto IL_0090;
	}

IL_0090:
	{
		// }
		int32_t L_18 = V_1;
		return L_18;
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
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
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
	bool V_0 = false;
	{
		// return PlayerPrefs.GetInt(PromptSignInKey, True) != False;
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581, L_0, NULL);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_3 = V_0;
		return L_3;
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
	bool V_0 = false;
	{
		// get { return mIsCameraSupported; }
		bool L_0 = __this->___mIsCameraSupported_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsCameraSupported; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsMicSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsMicSupported_m9D602DDC5C684AB39A3806A9682C07F917E07655 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsMicSupported; }
		bool L_0 = __this->___mIsMicSupported_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsMicSupported; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsWriteStorageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsWriteStorageSupported_mBDD45763B0DA5D6925C0FE68A392E1BD9AB34FF8 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsWriteStorageSupported; }
		bool L_0 = __this->___mIsWriteStorageSupported_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsWriteStorageSupported; }
		bool L_1 = V_0;
		return L_1;
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
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (captureMode != VideoCaptureMode.Unknown)
		int32_t L_0 = ___0_captureMode;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return mCaptureModesSupported[(int) captureMode];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->___mCaptureModesSupported_3;
		int32_t L_3 = ___0_captureMode;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = (bool)L_5;
		goto IL_0028;
	}

IL_0018:
	{
		// Logger.w("SupportsCaptureMode called with an unknown captureMode.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF(_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC, NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		bool L_6 = V_1;
		return L_6;
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
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (qualityLevel != VideoQualityLevel.Unknown)
		int32_t L_0 = ___0_qualityLevel;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return mQualityLevelsSupported[(int) qualityLevel];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->___mQualityLevelsSupported_4;
		int32_t L_3 = ___0_qualityLevel;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = (bool)L_5;
		goto IL_0028;
	}

IL_0018:
	{
		// Logger.w("SupportsCaptureMode called with an unknown qualityLevel.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF(_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D, NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		bool L_6 = V_1;
		return L_6;
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
	String_t* V_0 = NULL;
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
			goto IL_0062;
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

IL_0062:
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
			goto IL_009e;
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

IL_009e:
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
		V_0 = L_33;
		goto IL_00b6;
	}

IL_00b6:
	{
		// }
		String_t* L_34 = V_0;
		return L_34;
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
	bool V_0 = false;
	{
		// get { return mIsCapturing; }
		bool L_0 = __this->___mIsCapturing_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsCapturing; }
		bool L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::get_CaptureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_CaptureMode_m4FA4B9D18DB6653CA6C7893ADE4B0FDDF80A39E1 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mCaptureMode; }
		int32_t L_0 = __this->___mCaptureMode_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCaptureMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::get_QualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_QualityLevel_mEF7D5F70B0DBD8EE8D56878C16D639FE080BECE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mQualityLevel; }
		int32_t L_0 = __this->___mQualityLevel_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mQualityLevel; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsOverlayVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsOverlayVisible_m091B7546AE3EBC1E750A0CB513D3CD9D72866CE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsOverlayVisible; }
		bool L_0 = __this->___mIsOverlayVisible_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsOverlayVisible; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsPaused_mD2C050CBD84B1744B97B31C3B6836AEFBB4C6D2E (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsPaused; }
		bool L_0 = __this->___mIsPaused_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsPaused; }
		bool L_1 = V_0;
		return L_1;
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
	String_t* V_0 = NULL;
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
		V_0 = L_21;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		String_t* L_22 = V_0;
		return L_22;
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
	bool V_0 = false;
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->___mDescriptionUpdated_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDescriptionUpdated; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->___mNewDescription_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->___mCoverImageUpdated_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCoverImageUpdated; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651(_thisAdjusted, method);
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
	bool V_0 = false;
	{
		// get { return mNewPlayedTime.HasValue; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_0 = (&__this->___mNewPlayedTime_4);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline(L_0, Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return mNewPlayedTime.HasValue; }
		bool L_2 = V_0;
		return L_2;
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
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1(_thisAdjusted, method);
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
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		V_0 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_3 = V_0;
		return L_3;
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
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mCoverImageUpdated = true;
		__this->___mCoverImageUpdated_2 = (bool)1;
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_newPngCoverImage;
		__this->___mNewPngCoverImage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_0);
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_1 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___0_newPlayedTime), NULL);
		V_0 = (bool)((((double)L_0) > ((double)(1.8446744073709552E+19)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var)));
	}

IL_0023:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ___0_newPlayedTime;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		__this->___mNewPlayedTime_4 = L_4;
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_5 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		V_1 = L_5;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_6 = V_1;
		return L_6;
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
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_0 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B L_2 = V_0;
		return L_2;
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
	bool V_0 = false;
	{
		// get { return mStatus == ResponseStatus.Success; }
		int32_t L_0 = __this->___mStatus_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return mStatus == ResponseStatus.Success; }
		bool L_1 = V_0;
		return L_1;
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
	int32_t V_0 = 0;
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->___mLocalEndpointName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalEndpointName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4(_thisAdjusted, method);
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
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_0 = __this->___mRemoteEndpoint_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 _returnValue;
	_returnValue = ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2(_thisAdjusted, method);
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
	int64_t V_0 = 0;
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalClientId; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->___mRemoteEndpointId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRemoteEndpointId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->___mResponseStatus_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mResponseStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C(_thisAdjusted, method);
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
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
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
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
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
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
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
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Accepted_mF8315F45E0211671036F79594A8EEFA015E02321 (int64_t ___0_localClientId, String_t* ___1_remoteEndpointId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_payload, const RuntimeMethod* method) 
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Accepted,
		//     payload);
		int64_t L_0 = ___0_localClientId;
		String_t* L_1 = ___1_remoteEndpointId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_payload;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
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
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
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
	int32_t V_0 = 0;
	{
		// return NearbyConnectionConfiguration.MaxUnreliableMessagePayloadLength;
		V_0 = ((int32_t)1168);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_mC4250D2FB414B3FF275C9E594493DC4985A53E94 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return NearbyConnectionConfiguration.MaxReliableMessagePayloadLength;
		V_0 = ((int32_t)4096);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
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
	bool V_0 = false;
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OurUtils.Logger.d("SendConnectionRequest called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645, NULL);
		// if (responseCallback != null)
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_0 = ___3_responseCallback;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// ConnectionResponse obj = ConnectionResponse.Rejected(0, string.Empty);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		L_3 = ConnectionResponse_Rejected_m47E3012BD041A67DAD2622C0CF3ED5040FD5E270(((int64_t)0), L_2, NULL);
		V_1 = L_3;
		// responseCallback.Invoke(obj);
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_4 = ___3_responseCallback;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_5 = V_1;
		NullCheck(L_4);
		Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_inline(L_4, L_5, NULL);
	}

IL_002d:
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
	String_t* V_0 = NULL;
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
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
	String_t* V_0 = NULL;
	{
		// return "DummyDevice";
		V_0 = _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
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
	String_t* V_0 = NULL;
	{
		// return "dummy.bundle.id";
		V_0 = _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
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
	String_t* V_0 = NULL;
	{
		// return "dummy.service.id";
		V_0 = _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
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
	String_t* V_0 = NULL;
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->___mEndpointId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mEndpointId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->___mServiceId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mServiceId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791(_thisAdjusted, method);
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
	int64_t V_0 = 0;
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalClientId; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683(_thisAdjusted, method);
	return _returnValue;
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* V_0 = NULL;
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = __this->___mInitializationCallback_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A(_thisAdjusted, method);
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
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_m5DD8C06F8EA7F61A9E82130C25C4B3F633C54166 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Description_mC13A4161720C1803517724129D29F33069995257 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mDescription; }
		String_t* L_0 = __this->___mDescription_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_ImageUrl_mAC25F0E5F2C891BD491878F1B03562F0F803D311 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mImageUrl; }
		String_t* L_0 = __this->___mImageUrl_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mImageUrl; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Events.Event::get_CurrentCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Event_get_CurrentCount_mA0617C2248CF14849331F0E5B46005BB2EA873EC (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return mCurrentCount; }
		uint64_t L_0 = __this->___mCurrentCount_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCurrentCount; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_Visibility_mDF19D9454B0B8A6A7B302844BDBEFF6C271083E6 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mVisibility; }
		int32_t L_0 = __this->___mVisibility_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mVisibility; }
		int32_t L_1 = V_0;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	String_t* V_2 = NULL;
	float V_3 = 0.0f;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_4 = NULL;
	int32_t V_5 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_6 = NULL;
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
		V_1 = L_5;
		// string name = param[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// float value = (float)Convert.ToDouble(param[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_11, NULL);
		V_3 = ((float)L_12);
		// Debug.Log(name + " " + value);
		String_t* L_13 = V_2;
		String_t* L_14;
		L_14 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_16 = __this->___animators_4;
		V_4 = L_16;
		V_5 = 0;
		goto IL_0067;
	}

IL_004e:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_17 = V_4;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		// a.SetFloat(name, value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = V_6;
		String_t* L_22 = V_2;
		float L_23 = V_3;
		NullCheck(L_21);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_21, L_22, L_23, NULL);
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0067:
	{
		// foreach (Animator a in animators)
		int32_t L_25 = V_5;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_26 = V_4;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_004e;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_4 = NULL;
	int32_t V_5 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_6 = NULL;
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
		V_1 = L_5;
		// string name = param[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// int value = Convert.ToInt32(param[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_11, NULL);
		V_3 = L_12;
		// Debug.Log(name + " " + value);
		String_t* L_13 = V_2;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_16 = __this->___animators_4;
		V_4 = L_16;
		V_5 = 0;
		goto IL_0066;
	}

IL_004d:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_17 = V_4;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		// a.SetInteger(name, value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = V_6;
		String_t* L_22 = V_2;
		int32_t L_23 = V_3;
		NullCheck(L_21);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_21, L_22, L_23, NULL);
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0066:
	{
		// foreach (Animator a in animators)
		int32_t L_25 = V_5;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_26 = V_4;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_004d;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_4 = NULL;
	int32_t V_5 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_6 = NULL;
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
		V_1 = L_5;
		// string name = param[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// bool value = Convert.ToBoolean(param[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_11, NULL);
		V_3 = L_12;
		// Debug.Log(name + " " + value);
		String_t* L_13 = V_2;
		String_t* L_14;
		L_14 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_3), NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_16 = __this->___animators_4;
		V_4 = L_16;
		V_5 = 0;
		goto IL_0066;
	}

IL_004d:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_17 = V_4;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		// a.SetBool(name, value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = V_6;
		String_t* L_22 = V_2;
		bool L_23 = V_3;
		NullCheck(L_21);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_21, L_22, L_23, NULL);
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0066:
	{
		// foreach (Animator a in animators)
		int32_t L_25 = V_5;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_26 = V_4;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_004d;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	String_t* V_2 = NULL;
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_3 = NULL;
	int32_t V_4 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_5 = NULL;
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
		V_1 = L_5;
		// string name = param[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// Debug.Log(name);
		String_t* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_10 = __this->___animators_4;
		V_3 = L_10;
		V_4 = 0;
		goto IL_0049;
	}

IL_0032:
	{
		// foreach (Animator a in animators)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		// a.SetTrigger(name);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = V_5;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_15, L_16, NULL);
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0049:
	{
		// foreach (Animator a in animators)
		int32_t L_18 = V_4;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0032;
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
	RuntimeObject* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
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
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// buttonNext.onClick.AddListener(Click_Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonNext_12;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_5, NULL);
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

FINALLY_0092:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_00a3;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_00a3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0088_1;
			}

IL_005b_1:
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

IL_0088_1:
			{
				// foreach (Transform t in panelTransformLight)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		// foreach (Transform t in panelTransformDark)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___panelTransformDark_10;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_22, NULL);
		V_3 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ed:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_24 = V_3;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_25 = V_2;
					if (!L_25)
					{
						goto IL_00fe;
					}
				}
				{
					RuntimeObject* L_26 = V_2;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
				}

IL_00fe:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e3_1;
			}

IL_00b3_1:
			{
				// foreach (Transform t in panelTransformDark)
				RuntimeObject* L_27 = V_3;
				NullCheck(L_27);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				V_4 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_28, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panelDark.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = __this->___panelDark_7;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_4;
				NullCheck(L_30);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
				L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
				NullCheck(L_29);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_29, L_31, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_4;
				NullCheck(L_32);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
				NullCheck(L_33);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
			}

IL_00e3_1:
			{
				// foreach (Transform t in panelTransformDark)
				RuntimeObject* L_34 = V_3;
				NullCheck(L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_00b3_1;
				}
			}
			{
				goto IL_00ff;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ff:
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
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!isReady) return;
		bool L_0 = __this->___isReady_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!isReady) return;
		goto IL_003c;
	}

IL_0010:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Click_Prev();
		PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B(__this, NULL);
		goto IL_003c;
	}

IL_0027:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// Click_Next();
		PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68(__this, NULL);
	}

IL_003c:
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
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (page <= 0 || !isReady) return;
		int32_t L_0 = __this->___page_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = __this->___isReady_5;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (page <= 0 || !isReady) return;
		goto IL_00eb;
	}

IL_001f:
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
		// page -= 1;
		int32_t L_9 = __this->___page_4;
		__this->___page_4 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
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
		// if (!isDarakMode)
		bool L_16 = __this->___isDarakMode_13;
		V_1 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c0;
		}
	}
	{
		// textTitle.text = panelLight[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___panelLight_6;
		int32_t L_20 = __this->___page_4;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_19, L_20, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_22);
		goto IL_00e4;
	}

IL_00c0:
	{
		// textTitle.text = panelDark[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = __this->___panelDark_7;
		int32_t L_25 = __this->___page_4;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_24, L_25, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_23, L_27);
	}

IL_00e4:
	{
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
	}

IL_00eb:
	{
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
	bool V_0 = false;
	{
		// if (page >= panelLight.Count - 1) return;
		int32_t L_0 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panelLight_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// if (page >= panelLight.Count - 1) return;
		goto IL_0094;
	}

IL_001f:
	{
		// panelLight[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___panelLight_6;
		int32_t L_5 = __this->___page_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// panelDark[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___panelDark_7;
		int32_t L_8 = __this->___page_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_7, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// page += 1;
		int32_t L_10 = __this->___page_4;
		__this->___page_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// panelLight[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___panelLight_6;
		int32_t L_12 = __this->___page_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_12, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// panelDark[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___panelDark_7;
		int32_t L_15 = __this->___page_4;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, L_15, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
	}

IL_0094:
	{
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
	bool V_0 = false;
	{
		// if (!isDarakMode)
		bool L_0 = __this->___isDarakMode_13;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// textTitle.text = panelLight[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___panelLight_6;
		int32_t L_4 = __this->___page_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_7);
		goto IL_0076;
	}

IL_0043:
	{
		// textTitle.text = panelDark[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___panelDark_7;
		int32_t L_10 = __this->___page_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_13);
	}

IL_0076:
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
	bool V_0 = false;
	{
		// if (!isDarakMode)
		bool L_0 = __this->___isDarakMode_13;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// panelTransformLight.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___panelTransformLight_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// panelTransformDark.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___panelTransformDark_10;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		goto IL_005c;
	}

IL_0036:
	{
		// panelTransformLight.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___panelTransformLight_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// panelTransformDark.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___panelTransformDark_10;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_005c:
	{
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
		// private bool isDarakMode = false;
		__this->___isDarakMode_13 = (bool)0;
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
	bool V_1 = false;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		V_0 = 0;
		goto IL_0018;
	}

IL_0005:
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

IL_0018:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
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
	bool V_1 = false;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		V_0 = 0;
		goto IL_0018;
	}

IL_0005:
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

IL_0018:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
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
			goto IL_002c;
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
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
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
