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
// Mono.Net.Security.AsyncProtocolRequest
struct AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027;
// Mono.Net.Security.BufferOffsetSize
struct BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9;
// Mono.Net.Security.BufferOffsetSize2
struct BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00;
// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045;
// Mono.Net.Security.MobileTlsContext
struct MobileTlsContext_tFC684CF3275DF6B898319625C4F3A4D537B8A127;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF;
// Mono.Unity.UnityTls/unitytls_interface_struct
struct unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6;
// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740;
// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
struct unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5;
// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA;
// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
struct unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6;
// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A;
// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.Security.SslStream
struct SslStream_t9CEE8F6E125C734DD807D9289C86860FFEE81087;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult>
struct Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_t8906695C9865566AA79419735634FF27AC74506E;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_TD81C26B45B0FBFD466203EB631D6270174412EE8_H
#define U3CMODULEU3E_TD81C26B45B0FBFD466203EB631D6270174412EE8_H
=======
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t2787973995;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Collections.Stack
struct Stack_t2329662280;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t567962447;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Globalization.HebrewNumber/HebrewValue[]
struct HebrewValueU5BU5D_t2018863638;
// System.Globalization.HebrewNumber/HS[][]
struct HSU5BU5DU5BU5D_t1763536244;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3218159895;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168549;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1701070648;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// Mono.Security.ASN1
struct ASN1_t2114160832;
// System.UInt16
struct UInt16_t2177724958;
// System.Byte
struct Byte_t1134296376;
// System.Globalization.CharUnicodeInfo/DigitValues
struct DigitValues_t1637379909;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Void
struct Void_t1185182177;
// System.Globalization.InternalEncodingDataItem[]
struct InternalEncodingDataItemU5BU5D_t1120810260;
// System.Globalization.InternalCodePageDataItem[]
struct InternalCodePageDataItemU5BU5D_t2292034760;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.Punycode
struct Punycode_t2881783740;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Globalization.CalendarData[]
struct CalendarDataU5BU5D_t1287151647;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2877834729;
// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator>
struct Dictionary_2_t2663091028;
// System.Globalization.SortVersion
struct SortVersion_t3332565609;
// Mono.RuntimeStructs/MonoClass
struct MonoClass_t3449698282;
// Mono.RuntimeStructs/RemoteClass
struct RemoteClass_t4006407480;
// Mono.RuntimeStructs/GenericParamInfo
struct GenericParamInfo_t1825140006;
// Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t1503373745;
// System.IntPtr
struct IntPtr_t;
// System.Security.SecurityElement
struct SecurityElement_t1046076091;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Globalization.EraInfo[]
struct EraInfoU5BU5D_t2775298796;
// System.Globalization.GregorianCalendarHelper
struct GregorianCalendarHelper_t3016720499;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t818561467;
// System.Globalization.TimeSpanParse/TimeSpanToken[]
struct TimeSpanTokenU5BU5D_t3901423707;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;

struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureData_t1899656083_marshaled_com;
struct TimeSpanToken_t993347374_marshaled_pinvoke;
struct TimeSpanToken_t993347374_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <Module>
struct  U3CModuleU3E_tD81C26B45B0FBFD466203EB631D6270174412EE8 
{
public:

public:
};
=======
// System.Object
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // U3CMODULEU3E_TD81C26B45B0FBFD466203EB631D6270174412EE8_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
=======
#endif // RUNTIMEOBJECT_H
#ifndef RUNTIMESTRUCTS_T1215331603_H
#define RUNTIMESTRUCTS_T1215331603_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Object
=======
// Mono.RuntimeStructs
struct  RuntimeStructs_t1215331603  : public RuntimeObject
{
public:

public:
};
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RUNTIMEOBJECT_H
#ifndef ASYNCPROTOCOLREQUEST_TC1F08D36027FBF2F0252CA11DD18AD0F3BE37027_H
#define ASYNCPROTOCOLREQUEST_TC1F08D36027FBF2F0252CA11DD18AD0F3BE37027_H
=======
#endif // RUNTIMESTRUCTS_T1215331603_H
#ifndef RUNTIMEMARSHAL_T1127693947_H
#define RUNTIMEMARSHAL_T1127693947_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.AsyncProtocolRequest
struct  AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027  : public RuntimeObject
{
public:
	// Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.AsyncProtocolRequest::<Parent>k__BackingField
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045 * ___U3CParentU3Ek__BackingField_0;
	// System.Boolean Mono.Net.Security.AsyncProtocolRequest::<RunSynchronously>k__BackingField
	bool ___U3CRunSynchronouslyU3Ek__BackingField_1;
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest::<UserResult>k__BackingField
	int32_t ___U3CUserResultU3Ek__BackingField_2;
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest::Started
	int32_t ___Started_3;
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest::RequestedSize
	int32_t ___RequestedSize_4;
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest::WriteRequested
	int32_t ___WriteRequested_5;
	// System.Object Mono.Net.Security.AsyncProtocolRequest::locker
	RuntimeObject * ___locker_6;

public:
	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027, ___U3CParentU3Ek__BackingField_0)); }
	inline MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045 * get_U3CParentU3Ek__BackingField_0() const { return ___U3CParentU3Ek__BackingField_0; }
	inline MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045 ** get_address_of_U3CParentU3Ek__BackingField_0() { return &___U3CParentU3Ek__BackingField_0; }
	inline void set_U3CParentU3Ek__BackingField_0(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045 * value)
	{
		___U3CParentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParentU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CRunSynchronouslyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027, ___U3CRunSynchronouslyU3Ek__BackingField_1)); }
	inline bool get_U3CRunSynchronouslyU3Ek__BackingField_1() const { return ___U3CRunSynchronouslyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CRunSynchronouslyU3Ek__BackingField_1() { return &___U3CRunSynchronouslyU3Ek__BackingField_1; }
	inline void set_U3CRunSynchronouslyU3Ek__BackingField_1(bool value)
	{
		___U3CRunSynchronouslyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUserResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027, ___U3CUserResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CUserResultU3Ek__BackingField_2() const { return ___U3CUserResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CUserResultU3Ek__BackingField_2() { return &___U3CUserResultU3Ek__BackingField_2; }
	inline void set_U3CUserResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CUserResultU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_Started_3() { return static_cast<int32_t>(offsetof(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027, ___Started_3)); }
	inline int32_t get_Started_3() const { return ___Started_3; }
	inline int32_t* get_address_of_Started_3() { return &___Started_3; }
	inline void set_Started_3(int32_t value)
	{
		___Started_3 = value;
	}

	inline static int32_t get_offset_of_RequestedSize_4() { return static_cast<int32_t>(offsetof(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027, ___RequestedSize_4)); }
	inline int32_t get_RequestedSize_4() const { return ___RequestedSize_4; }
	inline int32_t* get_address_of_RequestedSize_4() { return &___RequestedSize_4; }
	inline void set_RequestedSize_4(int32_t value)
	{
		___RequestedSize_4 = value;
	}

	inline static int32_t get_offset_of_WriteRequested_5() { return static_cast<int32_t>(offsetof(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027, ___WriteRequested_5)); }
	inline int32_t get_WriteRequested_5() const { return ___WriteRequested_5; }
	inline int32_t* get_address_of_WriteRequested_5() { return &___WriteRequested_5; }
	inline void set_WriteRequested_5(int32_t value)
	{
		___WriteRequested_5 = value;
	}

	inline static int32_t get_offset_of_locker_6() { return static_cast<int32_t>(offsetof(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027, ___locker_6)); }
	inline RuntimeObject * get_locker_6() const { return ___locker_6; }
	inline RuntimeObject ** get_address_of_locker_6() { return &___locker_6; }
	inline void set_locker_6(RuntimeObject * value)
	{
		___locker_6 = value;
		Il2CppCodeGenWriteBarrier((&___locker_6), value);
	}
=======
// Mono.RuntimeMarshal
struct  RuntimeMarshal_t1127693947  : public RuntimeObject
{
public:

public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ASYNCPROTOCOLREQUEST_TC1F08D36027FBF2F0252CA11DD18AD0F3BE37027_H
#ifndef ASYNCPROTOCOLRESULT_T957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0_H
#define ASYNCPROTOCOLRESULT_T957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0_H
=======
#endif // RUNTIMEMARSHAL_T1127693947_H
#ifndef ATTRLISTIMPL_T567962447_H
#define ATTRLISTIMPL_T567962447_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.AsyncProtocolResult
struct  AsyncProtocolResult_t957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0  : public RuntimeObject
{
public:
	// System.Int32 Mono.Net.Security.AsyncProtocolResult::<UserResult>k__BackingField
	int32_t ___U3CUserResultU3Ek__BackingField_0;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.AsyncProtocolResult::<Error>k__BackingField
	ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ___U3CErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUserResultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AsyncProtocolResult_t957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0, ___U3CUserResultU3Ek__BackingField_0)); }
	inline int32_t get_U3CUserResultU3Ek__BackingField_0() const { return ___U3CUserResultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CUserResultU3Ek__BackingField_0() { return &___U3CUserResultU3Ek__BackingField_0; }
	inline void set_U3CUserResultU3Ek__BackingField_0(int32_t value)
	{
		___U3CUserResultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AsyncProtocolResult_t957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0, ___U3CErrorU3Ek__BackingField_1)); }
	inline ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorU3Ek__BackingField_1), value);
=======
// Mono.Xml.SmallXmlParser/AttrListImpl
struct  AttrListImpl_t567962447  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Mono.Xml.SmallXmlParser/AttrListImpl::attrNames
	List_1_t3319525431 * ___attrNames_0;
	// System.Collections.Generic.List`1<System.String> Mono.Xml.SmallXmlParser/AttrListImpl::attrValues
	List_1_t3319525431 * ___attrValues_1;

public:
	inline static int32_t get_offset_of_attrNames_0() { return static_cast<int32_t>(offsetof(AttrListImpl_t567962447, ___attrNames_0)); }
	inline List_1_t3319525431 * get_attrNames_0() const { return ___attrNames_0; }
	inline List_1_t3319525431 ** get_address_of_attrNames_0() { return &___attrNames_0; }
	inline void set_attrNames_0(List_1_t3319525431 * value)
	{
		___attrNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrNames_0), value);
	}

	inline static int32_t get_offset_of_attrValues_1() { return static_cast<int32_t>(offsetof(AttrListImpl_t567962447, ___attrValues_1)); }
	inline List_1_t3319525431 * get_attrValues_1() const { return ___attrValues_1; }
	inline List_1_t3319525431 ** get_address_of_attrValues_1() { return &___attrValues_1; }
	inline void set_attrValues_1(List_1_t3319525431 * value)
	{
		___attrValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValues_1), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ASYNCPROTOCOLRESULT_T957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0_H
#ifndef BUFFEROFFSETSIZE_TE5F3806876A6484AE343C760B6E04195202A2CC9_H
#define BUFFEROFFSETSIZE_TE5F3806876A6484AE343C760B6E04195202A2CC9_H
=======
#endif // ATTRLISTIMPL_T567962447_H
#ifndef SMALLXMLPARSER_T973787839_H
#define SMALLXMLPARSER_T973787839_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.BufferOffsetSize
struct  BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Net.Security.BufferOffsetSize::Buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Buffer_0;
	// System.Int32 Mono.Net.Security.BufferOffsetSize::Offset
	int32_t ___Offset_1;
	// System.Int32 Mono.Net.Security.BufferOffsetSize::Size
	int32_t ___Size_2;
	// System.Int32 Mono.Net.Security.BufferOffsetSize::TotalBytes
	int32_t ___TotalBytes_3;
	// System.Boolean Mono.Net.Security.BufferOffsetSize::Complete
	bool ___Complete_4;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9, ___Buffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_0), value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Size_2() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9, ___Size_2)); }
	inline int32_t get_Size_2() const { return ___Size_2; }
	inline int32_t* get_address_of_Size_2() { return &___Size_2; }
	inline void set_Size_2(int32_t value)
	{
		___Size_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytes_3() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9, ___TotalBytes_3)); }
	inline int32_t get_TotalBytes_3() const { return ___TotalBytes_3; }
	inline int32_t* get_address_of_TotalBytes_3() { return &___TotalBytes_3; }
	inline void set_TotalBytes_3(int32_t value)
	{
		___TotalBytes_3 = value;
	}

	inline static int32_t get_offset_of_Complete_4() { return static_cast<int32_t>(offsetof(BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9, ___Complete_4)); }
	inline bool get_Complete_4() const { return ___Complete_4; }
	inline bool* get_address_of_Complete_4() { return &___Complete_4; }
	inline void set_Complete_4(bool value)
	{
		___Complete_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFEROFFSETSIZE_TE5F3806876A6484AE343C760B6E04195202A2CC9_H
#ifndef MONOTLSPROVIDER_TDCD056C5BBBE59ED6BAF63F25952B406C1143C27_H
#define MONOTLSPROVIDER_TDCD056C5BBBE59ED6BAF63F25952B406C1143C27_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsProvider
struct  MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27  : public RuntimeObject
{
public:

public:
=======
// Mono.Xml.SmallXmlParser
struct  SmallXmlParser_t973787839  : public RuntimeObject
{
public:
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	RuntimeObject* ___handler_0;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t283511965 * ___reader_1;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t2329662280 * ___elementNames_2;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t2329662280 * ___xmlSpaces_3;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace_4;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t * ___buffer_5;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t3528271667* ___nameBuffer_6;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace_7;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t567962447 * ___attributes_8;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line_9;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column_10;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn_11;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___reader_1)); }
	inline TextReader_t283511965 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t283511965 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t283511965 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}

	inline static int32_t get_offset_of_elementNames_2() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___elementNames_2)); }
	inline Stack_t2329662280 * get_elementNames_2() const { return ___elementNames_2; }
	inline Stack_t2329662280 ** get_address_of_elementNames_2() { return &___elementNames_2; }
	inline void set_elementNames_2(Stack_t2329662280 * value)
	{
		___elementNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___elementNames_2), value);
	}

	inline static int32_t get_offset_of_xmlSpaces_3() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___xmlSpaces_3)); }
	inline Stack_t2329662280 * get_xmlSpaces_3() const { return ___xmlSpaces_3; }
	inline Stack_t2329662280 ** get_address_of_xmlSpaces_3() { return &___xmlSpaces_3; }
	inline void set_xmlSpaces_3(Stack_t2329662280 * value)
	{
		___xmlSpaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpaces_3), value);
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___xmlSpace_4)); }
	inline String_t* get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline String_t** get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(String_t* value)
	{
		___xmlSpace_4 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpace_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___buffer_5)); }
	inline StringBuilder_t * get_buffer_5() const { return ___buffer_5; }
	inline StringBuilder_t ** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(StringBuilder_t * value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_nameBuffer_6() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___nameBuffer_6)); }
	inline CharU5BU5D_t3528271667* get_nameBuffer_6() const { return ___nameBuffer_6; }
	inline CharU5BU5D_t3528271667** get_address_of_nameBuffer_6() { return &___nameBuffer_6; }
	inline void set_nameBuffer_6(CharU5BU5D_t3528271667* value)
	{
		___nameBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameBuffer_6), value);
	}

	inline static int32_t get_offset_of_isWhitespace_7() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___isWhitespace_7)); }
	inline bool get_isWhitespace_7() const { return ___isWhitespace_7; }
	inline bool* get_address_of_isWhitespace_7() { return &___isWhitespace_7; }
	inline void set_isWhitespace_7(bool value)
	{
		___isWhitespace_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___attributes_8)); }
	inline AttrListImpl_t567962447 * get_attributes_8() const { return ___attributes_8; }
	inline AttrListImpl_t567962447 ** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttrListImpl_t567962447 * value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_8), value);
	}

	inline static int32_t get_offset_of_line_9() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___line_9)); }
	inline int32_t get_line_9() const { return ___line_9; }
	inline int32_t* get_address_of_line_9() { return &___line_9; }
	inline void set_line_9(int32_t value)
	{
		___line_9 = value;
	}

	inline static int32_t get_offset_of_column_10() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___column_10)); }
	inline int32_t get_column_10() const { return ___column_10; }
	inline int32_t* get_address_of_column_10() { return &___column_10; }
	inline void set_column_10(int32_t value)
	{
		___column_10 = value;
	}

	inline static int32_t get_offset_of_resetColumn_11() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___resetColumn_11)); }
	inline bool get_resetColumn_11() const { return ___resetColumn_11; }
	inline bool* get_address_of_resetColumn_11() { return &___resetColumn_11; }
	inline void set_resetColumn_11(bool value)
	{
		___resetColumn_11 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MONOTLSPROVIDER_TDCD056C5BBBE59ED6BAF63F25952B406C1143C27_H
#ifndef CERTHELPER_T603EE753116E3B83EC5DB1CAC369F51DF9DC5A60_H
#define CERTHELPER_T603EE753116E3B83EC5DB1CAC369F51DF9DC5A60_H
=======
#endif // SMALLXMLPARSER_T973787839_H
#ifndef RUNTIME_T3174508158_H
#define RUNTIME_T3174508158_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.CertHelper
struct  CertHelper_t603EE753116E3B83EC5DB1CAC369F51DF9DC5A60  : public RuntimeObject
=======
// Mono.Runtime
struct  Runtime_t3174508158  : public RuntimeObject
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CERTHELPER_T603EE753116E3B83EC5DB1CAC369F51DF9DC5A60_H
#ifndef UNITYTLS_TFD87351846C601F716262E015308C6BB66000DEC_H
#define UNITYTLS_TFD87351846C601F716262E015308C6BB66000DEC_H
=======
#endif // RUNTIME_T3174508158_H
#ifndef ERAINFO_T4167091505_H
#define ERAINFO_T4167091505_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls
struct  UnityTls_tFD87351846C601F716262E015308C6BB66000DEC  : public RuntimeObject
{
public:

public:
};

struct UnityTls_tFD87351846C601F716262E015308C6BB66000DEC_StaticFields
{
public:
	// Mono.Unity.UnityTls/unitytls_interface_struct Mono.Unity.UnityTls::marshalledInterface
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF * ___marshalledInterface_0;

public:
	inline static int32_t get_offset_of_marshalledInterface_0() { return static_cast<int32_t>(offsetof(UnityTls_tFD87351846C601F716262E015308C6BB66000DEC_StaticFields, ___marshalledInterface_0)); }
	inline unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF * get_marshalledInterface_0() const { return ___marshalledInterface_0; }
	inline unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF ** get_address_of_marshalledInterface_0() { return &___marshalledInterface_0; }
	inline void set_marshalledInterface_0(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF * value)
	{
		___marshalledInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___marshalledInterface_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_TFD87351846C601F716262E015308C6BB66000DEC_H
#ifndef UNITYTLSCONVERSIONS_T46A0D2F58860BE3A6D8ACA6B2B1D3A579B2F8F71_H
#define UNITYTLSCONVERSIONS_T46A0D2F58860BE3A6D8ACA6B2B1D3A579B2F8F71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTlsConversions
struct  UnityTlsConversions_t46A0D2F58860BE3A6D8ACA6B2B1D3A579B2F8F71  : public RuntimeObject
{
public:

public:
=======
// System.Globalization.EraInfo
struct  EraInfo_t4167091505  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.EraInfo::era
	int32_t ___era_0;
	// System.Int64 System.Globalization.EraInfo::ticks
	int64_t ___ticks_1;
	// System.Int32 System.Globalization.EraInfo::yearOffset
	int32_t ___yearOffset_2;
	// System.Int32 System.Globalization.EraInfo::minEraYear
	int32_t ___minEraYear_3;
	// System.Int32 System.Globalization.EraInfo::maxEraYear
	int32_t ___maxEraYear_4;
	// System.String System.Globalization.EraInfo::eraName
	String_t* ___eraName_5;
	// System.String System.Globalization.EraInfo::abbrevEraName
	String_t* ___abbrevEraName_6;
	// System.String System.Globalization.EraInfo::englishEraName
	String_t* ___englishEraName_7;

public:
	inline static int32_t get_offset_of_era_0() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___era_0)); }
	inline int32_t get_era_0() const { return ___era_0; }
	inline int32_t* get_address_of_era_0() { return &___era_0; }
	inline void set_era_0(int32_t value)
	{
		___era_0 = value;
	}

	inline static int32_t get_offset_of_ticks_1() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___ticks_1)); }
	inline int64_t get_ticks_1() const { return ___ticks_1; }
	inline int64_t* get_address_of_ticks_1() { return &___ticks_1; }
	inline void set_ticks_1(int64_t value)
	{
		___ticks_1 = value;
	}

	inline static int32_t get_offset_of_yearOffset_2() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___yearOffset_2)); }
	inline int32_t get_yearOffset_2() const { return ___yearOffset_2; }
	inline int32_t* get_address_of_yearOffset_2() { return &___yearOffset_2; }
	inline void set_yearOffset_2(int32_t value)
	{
		___yearOffset_2 = value;
	}

	inline static int32_t get_offset_of_minEraYear_3() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___minEraYear_3)); }
	inline int32_t get_minEraYear_3() const { return ___minEraYear_3; }
	inline int32_t* get_address_of_minEraYear_3() { return &___minEraYear_3; }
	inline void set_minEraYear_3(int32_t value)
	{
		___minEraYear_3 = value;
	}

	inline static int32_t get_offset_of_maxEraYear_4() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___maxEraYear_4)); }
	inline int32_t get_maxEraYear_4() const { return ___maxEraYear_4; }
	inline int32_t* get_address_of_maxEraYear_4() { return &___maxEraYear_4; }
	inline void set_maxEraYear_4(int32_t value)
	{
		___maxEraYear_4 = value;
	}

	inline static int32_t get_offset_of_eraName_5() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___eraName_5)); }
	inline String_t* get_eraName_5() const { return ___eraName_5; }
	inline String_t** get_address_of_eraName_5() { return &___eraName_5; }
	inline void set_eraName_5(String_t* value)
	{
		___eraName_5 = value;
		Il2CppCodeGenWriteBarrier((&___eraName_5), value);
	}

	inline static int32_t get_offset_of_abbrevEraName_6() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___abbrevEraName_6)); }
	inline String_t* get_abbrevEraName_6() const { return ___abbrevEraName_6; }
	inline String_t** get_address_of_abbrevEraName_6() { return &___abbrevEraName_6; }
	inline void set_abbrevEraName_6(String_t* value)
	{
		___abbrevEraName_6 = value;
		Il2CppCodeGenWriteBarrier((&___abbrevEraName_6), value);
	}

	inline static int32_t get_offset_of_englishEraName_7() { return static_cast<int32_t>(offsetof(EraInfo_t4167091505, ___englishEraName_7)); }
	inline String_t* get_englishEraName_7() const { return ___englishEraName_7; }
	inline String_t** get_address_of_englishEraName_7() { return &___englishEraName_7; }
	inline void set_englishEraName_7(String_t* value)
	{
		___englishEraName_7 = value;
		Il2CppCodeGenWriteBarrier((&___englishEraName_7), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLSCONVERSIONS_T46A0D2F58860BE3A6D8ACA6B2B1D3A579B2F8F71_H
#ifndef SR_TF6C259D0ADF333DE679CC02B526A504888CDD8AC_H
#define SR_TF6C259D0ADF333DE679CC02B526A504888CDD8AC_H
=======
#endif // ERAINFO_T4167091505_H
#ifndef GLOBALIZATIONASSEMBLY_T2435901830_H
#define GLOBALIZATIONASSEMBLY_T2435901830_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// SR
struct  SR_tF6C259D0ADF333DE679CC02B526A504888CDD8AC  : public RuntimeObject
=======
// System.Globalization.GlobalizationAssembly
struct  GlobalizationAssembly_t2435901830  : public RuntimeObject
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SR_TF6C259D0ADF333DE679CC02B526A504888CDD8AC_H
=======
#endif // GLOBALIZATIONASSEMBLY_T2435901830_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
<<<<<<< HEAD
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;
=======
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
<<<<<<< HEAD
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
=======
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
<<<<<<< HEAD
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
=======
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
<<<<<<< HEAD
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
=======
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
<<<<<<< HEAD
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
=======
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	intptr_t* ___native_trace_ips_15;
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
<<<<<<< HEAD
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
=======
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef HEBREWNUMBER_T2955723309_H
#define HEBREWNUMBER_T2955723309_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
=======
// System.Globalization.HebrewNumber
struct  HebrewNumber_t2955723309  : public RuntimeObject
{
public:

public:
};

struct HebrewNumber_t2955723309_StaticFields
{
public:
	// System.Globalization.HebrewNumber/HebrewValue[] System.Globalization.HebrewNumber::HebrewValues
	HebrewValueU5BU5D_t2018863638* ___HebrewValues_0;
	// System.Char System.Globalization.HebrewNumber::maxHebrewNumberCh
	Il2CppChar ___maxHebrewNumberCh_1;
	// System.Globalization.HebrewNumber/HS[][] System.Globalization.HebrewNumber::NumberPasingState
	HSU5BU5DU5BU5D_t1763536244* ___NumberPasingState_2;

public:
	inline static int32_t get_offset_of_HebrewValues_0() { return static_cast<int32_t>(offsetof(HebrewNumber_t2955723309_StaticFields, ___HebrewValues_0)); }
	inline HebrewValueU5BU5D_t2018863638* get_HebrewValues_0() const { return ___HebrewValues_0; }
	inline HebrewValueU5BU5D_t2018863638** get_address_of_HebrewValues_0() { return &___HebrewValues_0; }
	inline void set_HebrewValues_0(HebrewValueU5BU5D_t2018863638* value)
	{
		___HebrewValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___HebrewValues_0), value);
	}

	inline static int32_t get_offset_of_maxHebrewNumberCh_1() { return static_cast<int32_t>(offsetof(HebrewNumber_t2955723309_StaticFields, ___maxHebrewNumberCh_1)); }
	inline Il2CppChar get_maxHebrewNumberCh_1() const { return ___maxHebrewNumberCh_1; }
	inline Il2CppChar* get_address_of_maxHebrewNumberCh_1() { return &___maxHebrewNumberCh_1; }
	inline void set_maxHebrewNumberCh_1(Il2CppChar value)
	{
		___maxHebrewNumberCh_1 = value;
	}

	inline static int32_t get_offset_of_NumberPasingState_2() { return static_cast<int32_t>(offsetof(HebrewNumber_t2955723309_StaticFields, ___NumberPasingState_2)); }
	inline HSU5BU5DU5BU5D_t1763536244* get_NumberPasingState_2() const { return ___NumberPasingState_2; }
	inline HSU5BU5DU5BU5D_t1763536244** get_address_of_NumberPasingState_2() { return &___NumberPasingState_2; }
	inline void set_NumberPasingState_2(HSU5BU5DU5BU5D_t1763536244* value)
	{
		___NumberPasingState_2 = value;
		Il2CppCodeGenWriteBarrier((&___NumberPasingState_2), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef UNMANAGEDMARSHAL_TCF1F2DA6EAED118ED1459C8DFF35C5418259F3EE_H
#define UNMANAGEDMARSHAL_TCF1F2DA6EAED118ED1459C8DFF35C5418259F3EE_H
=======
#endif // HEBREWNUMBER_T2955723309_H
#ifndef ASN1_T2114160832_H
#define ASN1_T2114160832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2114160832  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t4116647657* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t2718874744 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2114160832, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2114160832, ___m_aValue_1)); }
	inline ByteU5BU5D_t4116647657* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t4116647657* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2114160832, ___elist_2)); }
	inline ArrayList_t2718874744 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t2718874744 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t2718874744 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2114160832_H
#ifndef SIGNERINFO_T1701070648_H
#define SIGNERINFO_T1701070648_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_tCF1F2DA6EAED118ED1459C8DFF35C5418259F3EE  : public RuntimeObject
{
public:

public:
=======
// Mono.Security.PKCS7/SignerInfo
struct  SignerInfo_t1701070648  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignerInfo::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignerInfo::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::authenticatedAttributes
	ArrayList_t2718874744 * ___authenticatedAttributes_2;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::unauthenticatedAttributes
	ArrayList_t2718874744 * ___unauthenticatedAttributes_3;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::signature
	ByteU5BU5D_t4116647657* ___signature_4;
	// System.String Mono.Security.PKCS7/SignerInfo::issuer
	String_t* ___issuer_5;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::serial
	ByteU5BU5D_t4116647657* ___serial_6;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::ski
	ByteU5BU5D_t4116647657* ___ski_7;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_1), value);
	}

	inline static int32_t get_offset_of_authenticatedAttributes_2() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___authenticatedAttributes_2)); }
	inline ArrayList_t2718874744 * get_authenticatedAttributes_2() const { return ___authenticatedAttributes_2; }
	inline ArrayList_t2718874744 ** get_address_of_authenticatedAttributes_2() { return &___authenticatedAttributes_2; }
	inline void set_authenticatedAttributes_2(ArrayList_t2718874744 * value)
	{
		___authenticatedAttributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___authenticatedAttributes_2), value);
	}

	inline static int32_t get_offset_of_unauthenticatedAttributes_3() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___unauthenticatedAttributes_3)); }
	inline ArrayList_t2718874744 * get_unauthenticatedAttributes_3() const { return ___unauthenticatedAttributes_3; }
	inline ArrayList_t2718874744 ** get_address_of_unauthenticatedAttributes_3() { return &___unauthenticatedAttributes_3; }
	inline void set_unauthenticatedAttributes_3(ArrayList_t2718874744 * value)
	{
		___unauthenticatedAttributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___unauthenticatedAttributes_3), value);
	}

	inline static int32_t get_offset_of_signature_4() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___signature_4)); }
	inline ByteU5BU5D_t4116647657* get_signature_4() const { return ___signature_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_4() { return &___signature_4; }
	inline void set_signature_4(ByteU5BU5D_t4116647657* value)
	{
		___signature_4 = value;
		Il2CppCodeGenWriteBarrier((&___signature_4), value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_5), value);
	}

	inline static int32_t get_offset_of_serial_6() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___serial_6)); }
	inline ByteU5BU5D_t4116647657* get_serial_6() const { return ___serial_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_serial_6() { return &___serial_6; }
	inline void set_serial_6(ByteU5BU5D_t4116647657* value)
	{
		___serial_6 = value;
		Il2CppCodeGenWriteBarrier((&___serial_6), value);
	}

	inline static int32_t get_offset_of_ski_7() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___ski_7)); }
	inline ByteU5BU5D_t4116647657* get_ski_7() const { return ___ski_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_ski_7() { return &___ski_7; }
	inline void set_ski_7(ByteU5BU5D_t4116647657* value)
	{
		___ski_7 = value;
		Il2CppCodeGenWriteBarrier((&___ski_7), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNMANAGEDMARSHAL_TCF1F2DA6EAED118ED1459C8DFF35C5418259F3EE_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
=======
#endif // SIGNERINFO_T1701070648_H
#ifndef SIGNEDDATA_T2897824243_H
#define SIGNEDDATA_T2897824243_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
=======
// Mono.Security.PKCS7/SignedData
struct  SignedData_t2897824243  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignedData::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignedData::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::contentInfo
	ContentInfo_t3218159895 * ___contentInfo_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::certs
	X509CertificateCollection_t1542168549 * ___certs_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignedData::crls
	ArrayList_t2718874744 * ___crls_4;
	// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::signerInfo
	SignerInfo_t1701070648 * ___signerInfo_5;
	// System.Boolean Mono.Security.PKCS7/SignedData::mda
	bool ___mda_6;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_1), value);
	}

	inline static int32_t get_offset_of_contentInfo_2() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___contentInfo_2)); }
	inline ContentInfo_t3218159895 * get_contentInfo_2() const { return ___contentInfo_2; }
	inline ContentInfo_t3218159895 ** get_address_of_contentInfo_2() { return &___contentInfo_2; }
	inline void set_contentInfo_2(ContentInfo_t3218159895 * value)
	{
		___contentInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentInfo_2), value);
	}

	inline static int32_t get_offset_of_certs_3() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___certs_3)); }
	inline X509CertificateCollection_t1542168549 * get_certs_3() const { return ___certs_3; }
	inline X509CertificateCollection_t1542168549 ** get_address_of_certs_3() { return &___certs_3; }
	inline void set_certs_3(X509CertificateCollection_t1542168549 * value)
	{
		___certs_3 = value;
		Il2CppCodeGenWriteBarrier((&___certs_3), value);
	}

	inline static int32_t get_offset_of_crls_4() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___crls_4)); }
	inline ArrayList_t2718874744 * get_crls_4() const { return ___crls_4; }
	inline ArrayList_t2718874744 ** get_address_of_crls_4() { return &___crls_4; }
	inline void set_crls_4(ArrayList_t2718874744 * value)
	{
		___crls_4 = value;
		Il2CppCodeGenWriteBarrier((&___crls_4), value);
	}

	inline static int32_t get_offset_of_signerInfo_5() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___signerInfo_5)); }
	inline SignerInfo_t1701070648 * get_signerInfo_5() const { return ___signerInfo_5; }
	inline SignerInfo_t1701070648 ** get_address_of_signerInfo_5() { return &___signerInfo_5; }
	inline void set_signerInfo_5(SignerInfo_t1701070648 * value)
	{
		___signerInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___signerInfo_5), value);
	}

	inline static int32_t get_offset_of_mda_6() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___mda_6)); }
	inline bool get_mda_6() const { return ___mda_6; }
	inline bool* get_address_of_mda_6() { return &___mda_6; }
	inline void set_mda_6(bool value)
	{
		___mda_6 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
=======
#endif // SIGNEDDATA_T2897824243_H
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
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
=======
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRONGNAME_T4093849377_H
#define STRONGNAME_T4093849377_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.__Il2CppComObject
=======
// Mono.Security.StrongName
struct  StrongName_t4093849377  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_publicKey_1() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___publicKey_1)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_1() const { return ___publicKey_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_1() { return &___publicKey_1; }
	inline void set_publicKey_1(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_1), value);
	}

	inline static int32_t get_offset_of_keyToken_2() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___keyToken_2)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_2() const { return ___keyToken_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_2() { return &___keyToken_2; }
	inline void set_keyToken_2(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_2), value);
	}

	inline static int32_t get_offset_of_tokenAlgorithm_3() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___tokenAlgorithm_3)); }
	inline String_t* get_tokenAlgorithm_3() const { return ___tokenAlgorithm_3; }
	inline String_t** get_address_of_tokenAlgorithm_3() { return &___tokenAlgorithm_3; }
	inline void set_tokenAlgorithm_3(String_t* value)
	{
		___tokenAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&___tokenAlgorithm_3), value);
	}
};

struct StrongName_t4093849377_StaticFields
{
public:
	// System.Object Mono.Security.StrongName::lockObject
	RuntimeObject * ___lockObject_4;

public:
	inline static int32_t get_offset_of_lockObject_4() { return static_cast<int32_t>(offsetof(StrongName_t4093849377_StaticFields, ___lockObject_4)); }
	inline RuntimeObject * get_lockObject_4() const { return ___lockObject_4; }
	inline RuntimeObject ** get_address_of_lockObject_4() { return &___lockObject_4; }
	inline void set_lockObject_4(RuntimeObject * value)
	{
		___lockObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_4), value);
	}
};
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // IL2CPPCOMOBJECT_H
#ifndef __STATICARRAYINITTYPESIZEU3D1080_TCE36DA14009C45CFDEA7F63618BE90F8DF89AC84_H
#define __STATICARRAYINITTYPESIZEU3D1080_TCE36DA14009C45CFDEA7F63618BE90F8DF89AC84_H
=======
#endif // STRONGNAME_T4093849377_H
#ifndef ENCRYPTEDDATA_T3577548732_H
#define ENCRYPTEDDATA_T3577548732_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1080
struct  __StaticArrayInitTypeSizeU3D1080_tCE36DA14009C45CFDEA7F63618BE90F8DF89AC84 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1080_tCE36DA14009C45CFDEA7F63618BE90F8DF89AC84__padding[1080];
	};

public:
=======
// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t3577548732  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t3218159895 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t3218159895 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t4116647657* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____content_1)); }
	inline ContentInfo_t3218159895 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t3218159895 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t3218159895 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t3218159895 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t3218159895 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t3218159895 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____encrypted_3)); }
	inline ByteU5BU5D_t4116647657* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t4116647657* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __STATICARRAYINITTYPESIZEU3D1080_TCE36DA14009C45CFDEA7F63618BE90F8DF89AC84_H
#ifndef __STATICARRAYINITTYPESIZEU3D11614_TDF34959BE752359A89A4A577B8798D2D66A5E7F5_H
#define __STATICARRAYINITTYPESIZEU3D11614_TDF34959BE752359A89A4A577B8798D2D66A5E7F5_H
=======
#endif // ENCRYPTEDDATA_T3577548732_H
#ifndef BITCONVERTERLE_T2108532978_H
#define BITCONVERTERLE_T2108532978_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11614
struct  __StaticArrayInitTypeSizeU3D11614_tDF34959BE752359A89A4A577B8798D2D66A5E7F5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11614_tDF34959BE752359A89A4A577B8798D2D66A5E7F5__padding[11614];
	};
=======
// Mono.Security.BitConverterLE
struct  BitConverterLE_t2108532978  : public RuntimeObject
{
public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __STATICARRAYINITTYPESIZEU3D11614_TDF34959BE752359A89A4A577B8798D2D66A5E7F5_H
#ifndef __STATICARRAYINITTYPESIZEU3D1208_TC58894ECFE2C4FFD2B8FCDF958800099A737C1DD_H
#define __STATICARRAYINITTYPESIZEU3D1208_TC58894ECFE2C4FFD2B8FCDF958800099A737C1DD_H
=======
#endif // BITCONVERTERLE_T2108532978_H
#ifndef ASN1CONVERT_T2839890152_H
#define ASN1CONVERT_T2839890152_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208
struct  __StaticArrayInitTypeSizeU3D1208_tC58894ECFE2C4FFD2B8FCDF958800099A737C1DD 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_tC58894ECFE2C4FFD2B8FCDF958800099A737C1DD__padding[1208];
	};
=======
// Mono.Security.ASN1Convert
struct  ASN1Convert_t2839890152  : public RuntimeObject
{
public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __STATICARRAYINITTYPESIZEU3D1208_TC58894ECFE2C4FFD2B8FCDF958800099A737C1DD_H
#ifndef __STATICARRAYINITTYPESIZEU3D1450_T58DE69DB537BA7DFBFF2C7084FFC6970FB3BAEA4_H
#define __STATICARRAYINITTYPESIZEU3D1450_T58DE69DB537BA7DFBFF2C7084FFC6970FB3BAEA4_H
=======
#endif // ASN1CONVERT_T2839890152_H
#ifndef CONTENTINFO_T3218159895_H
#define CONTENTINFO_T3218159895_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
struct  __StaticArrayInitTypeSizeU3D1450_t58DE69DB537BA7DFBFF2C7084FFC6970FB3BAEA4 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t58DE69DB537BA7DFBFF2C7084FFC6970FB3BAEA4__padding[1450];
	};

public:
=======
// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t3218159895  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t2114160832 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159895, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159895, ___content_1)); }
	inline ASN1_t2114160832 * get_content_1() const { return ___content_1; }
	inline ASN1_t2114160832 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t2114160832 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __STATICARRAYINITTYPESIZEU3D1450_T58DE69DB537BA7DFBFF2C7084FFC6970FB3BAEA4_H
#ifndef __STATICARRAYINITTYPESIZEU3D1665_TCD7752863825B82B07752CCE72A581C169E19C20_H
#define __STATICARRAYINITTYPESIZEU3D1665_TCD7752863825B82B07752CCE72A581C169E19C20_H
=======
#endif // CONTENTINFO_T3218159895_H
#ifndef PKCS7_T1860834338_H
#define PKCS7_T1860834338_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
struct  __StaticArrayInitTypeSizeU3D1665_tCD7752863825B82B07752CCE72A581C169E19C20 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_tCD7752863825B82B07752CCE72A581C169E19C20__padding[1665];
	};
=======
// Mono.Security.PKCS7
struct  PKCS7_t1860834338  : public RuntimeObject
{
public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __STATICARRAYINITTYPESIZEU3D1665_TCD7752863825B82B07752CCE72A581C169E19C20_H
#ifndef __STATICARRAYINITTYPESIZEU3D2048_T95CEED630052F2BBE3122C058EEAD48DB4C2AD02_H
#define __STATICARRAYINITTYPESIZEU3D2048_T95CEED630052F2BBE3122C058EEAD48DB4C2AD02_H
=======
#endif // PKCS7_T1860834338_H
#ifndef CHARUNICODEINFO_T4268073907_H
#define CHARUNICODEINFO_T4268073907_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct  __StaticArrayInitTypeSizeU3D2048_t95CEED630052F2BBE3122C058EEAD48DB4C2AD02 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t95CEED630052F2BBE3122C058EEAD48DB4C2AD02__padding[2048];
	};
=======
// System.Globalization.CharUnicodeInfo
struct  CharUnicodeInfo_t4268073907  : public RuntimeObject
{
public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

public:
};

<<<<<<< HEAD
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2048_T95CEED630052F2BBE3122C058EEAD48DB4C2AD02_H
#ifndef __STATICARRAYINITTYPESIZEU3D2100_T75CE52CDAFC7C95EDAB5CF1AF8B2621D502F1FAA_H
#define __STATICARRAYINITTYPESIZEU3D2100_T75CE52CDAFC7C95EDAB5CF1AF8B2621D502F1FAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
struct  __StaticArrayInitTypeSizeU3D2100_t75CE52CDAFC7C95EDAB5CF1AF8B2621D502F1FAA 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t75CE52CDAFC7C95EDAB5CF1AF8B2621D502F1FAA__padding[2100];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2100_T75CE52CDAFC7C95EDAB5CF1AF8B2621D502F1FAA_H
#ifndef __STATICARRAYINITTYPESIZEU3D21252_TCA2B51BDF30FDECEBFCB55CC7530A0A7D6BC4462_H
#define __STATICARRAYINITTYPESIZEU3D21252_TCA2B51BDF30FDECEBFCB55CC7530A0A7D6BC4462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=21252
struct  __StaticArrayInitTypeSizeU3D21252_tCA2B51BDF30FDECEBFCB55CC7530A0A7D6BC4462 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D21252_tCA2B51BDF30FDECEBFCB55CC7530A0A7D6BC4462__padding[21252];
	};

public:
=======
struct CharUnicodeInfo_t4268073907_StaticFields
{
public:
	// System.Boolean System.Globalization.CharUnicodeInfo::s_initialized
	bool ___s_initialized_0;
	// System.UInt16* System.Globalization.CharUnicodeInfo::s_pCategoryLevel1Index
	uint16_t* ___s_pCategoryLevel1Index_1;
	// System.Byte* System.Globalization.CharUnicodeInfo::s_pCategoriesValue
	uint8_t* ___s_pCategoriesValue_2;
	// System.UInt16* System.Globalization.CharUnicodeInfo::s_pNumericLevel1Index
	uint16_t* ___s_pNumericLevel1Index_3;
	// System.Byte* System.Globalization.CharUnicodeInfo::s_pNumericValues
	uint8_t* ___s_pNumericValues_4;
	// System.Globalization.CharUnicodeInfo/DigitValues* System.Globalization.CharUnicodeInfo::s_pDigitValues
	DigitValues_t1637379909 * ___s_pDigitValues_5;

public:
	inline static int32_t get_offset_of_s_initialized_0() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4268073907_StaticFields, ___s_initialized_0)); }
	inline bool get_s_initialized_0() const { return ___s_initialized_0; }
	inline bool* get_address_of_s_initialized_0() { return &___s_initialized_0; }
	inline void set_s_initialized_0(bool value)
	{
		___s_initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_pCategoryLevel1Index_1() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4268073907_StaticFields, ___s_pCategoryLevel1Index_1)); }
	inline uint16_t* get_s_pCategoryLevel1Index_1() const { return ___s_pCategoryLevel1Index_1; }
	inline uint16_t** get_address_of_s_pCategoryLevel1Index_1() { return &___s_pCategoryLevel1Index_1; }
	inline void set_s_pCategoryLevel1Index_1(uint16_t* value)
	{
		___s_pCategoryLevel1Index_1 = value;
	}

	inline static int32_t get_offset_of_s_pCategoriesValue_2() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4268073907_StaticFields, ___s_pCategoriesValue_2)); }
	inline uint8_t* get_s_pCategoriesValue_2() const { return ___s_pCategoriesValue_2; }
	inline uint8_t** get_address_of_s_pCategoriesValue_2() { return &___s_pCategoriesValue_2; }
	inline void set_s_pCategoriesValue_2(uint8_t* value)
	{
		___s_pCategoriesValue_2 = value;
	}

	inline static int32_t get_offset_of_s_pNumericLevel1Index_3() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4268073907_StaticFields, ___s_pNumericLevel1Index_3)); }
	inline uint16_t* get_s_pNumericLevel1Index_3() const { return ___s_pNumericLevel1Index_3; }
	inline uint16_t** get_address_of_s_pNumericLevel1Index_3() { return &___s_pNumericLevel1Index_3; }
	inline void set_s_pNumericLevel1Index_3(uint16_t* value)
	{
		___s_pNumericLevel1Index_3 = value;
	}

	inline static int32_t get_offset_of_s_pNumericValues_4() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4268073907_StaticFields, ___s_pNumericValues_4)); }
	inline uint8_t* get_s_pNumericValues_4() const { return ___s_pNumericValues_4; }
	inline uint8_t** get_address_of_s_pNumericValues_4() { return &___s_pNumericValues_4; }
	inline void set_s_pNumericValues_4(uint8_t* value)
	{
		___s_pNumericValues_4 = value;
	}

	inline static int32_t get_offset_of_s_pDigitValues_5() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4268073907_StaticFields, ___s_pDigitValues_5)); }
	inline DigitValues_t1637379909 * get_s_pDigitValues_5() const { return ___s_pDigitValues_5; }
	inline DigitValues_t1637379909 ** get_address_of_s_pDigitValues_5() { return &___s_pDigitValues_5; }
	inline void set_s_pDigitValues_5(DigitValues_t1637379909 * value)
	{
		___s_pDigitValues_5 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __STATICARRAYINITTYPESIZEU3D21252_TCA2B51BDF30FDECEBFCB55CC7530A0A7D6BC4462_H
#ifndef __STATICARRAYINITTYPESIZEU3D2350_T96984AEF232104302694B7EFDA3F92BC42BF207D_H
#define __STATICARRAYINITTYPESIZEU3D2350_T96984AEF232104302694B7EFDA3F92BC42BF207D_H
=======
#endif // CHARUNICODEINFO_T4268073907_H
#ifndef CALENDAR_T1661121569_H
#define CALENDAR_T1661121569_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct  __StaticArrayInitTypeSizeU3D2350_t96984AEF232104302694B7EFDA3F92BC42BF207D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t96984AEF232104302694B7EFDA3F92BC42BF207D__padding[2350];
	};

public:
=======
// System.Globalization.Calendar
struct  Calendar_t1661121569  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.Calendar::m_currentEraValue
	int32_t ___m_currentEraValue_0;
	// System.Boolean System.Globalization.Calendar::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.Int32 System.Globalization.Calendar::twoDigitYearMax
	int32_t ___twoDigitYearMax_2;

public:
	inline static int32_t get_offset_of_m_currentEraValue_0() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___m_currentEraValue_0)); }
	inline int32_t get_m_currentEraValue_0() const { return ___m_currentEraValue_0; }
	inline int32_t* get_address_of_m_currentEraValue_0() { return &___m_currentEraValue_0; }
	inline void set_m_currentEraValue_0(int32_t value)
	{
		___m_currentEraValue_0 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_1() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___m_isReadOnly_1)); }
	inline bool get_m_isReadOnly_1() const { return ___m_isReadOnly_1; }
	inline bool* get_address_of_m_isReadOnly_1() { return &___m_isReadOnly_1; }
	inline void set_m_isReadOnly_1(bool value)
	{
		___m_isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_twoDigitYearMax_2() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___twoDigitYearMax_2)); }
	inline int32_t get_twoDigitYearMax_2() const { return ___twoDigitYearMax_2; }
	inline int32_t* get_address_of_twoDigitYearMax_2() { return &___twoDigitYearMax_2; }
	inline void set_twoDigitYearMax_2(int32_t value)
	{
		___twoDigitYearMax_2 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __STATICARRAYINITTYPESIZEU3D2350_T96984AEF232104302694B7EFDA3F92BC42BF207D_H
#ifndef __STATICARRAYINITTYPESIZEU3D2382_TB4AF2C49C5120B6EB285BA4D247340D8E243A1BA_H
#define __STATICARRAYINITTYPESIZEU3D2382_TB4AF2C49C5120B6EB285BA4D247340D8E243A1BA_H
=======
#endif // CALENDAR_T1661121569_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct  __StaticArrayInitTypeSizeU3D2382_tB4AF2C49C5120B6EB285BA4D247340D8E243A1BA 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_tB4AF2C49C5120B6EB285BA4D247340D8E243A1BA__padding[2382];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2382_TB4AF2C49C5120B6EB285BA4D247340D8E243A1BA_H
#ifndef __STATICARRAYINITTYPESIZEU3D3132_T7837B5DAEC2B2BEBD61C333545DB9AE2F35BF333_H
#define __STATICARRAYINITTYPESIZEU3D3132_T7837B5DAEC2B2BEBD61C333545DB9AE2F35BF333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct  __StaticArrayInitTypeSizeU3D3132_t7837B5DAEC2B2BEBD61C333545DB9AE2F35BF333 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_t7837B5DAEC2B2BEBD61C333545DB9AE2F35BF333__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3132_T7837B5DAEC2B2BEBD61C333545DB9AE2F35BF333_H
#ifndef ASYNCREADORWRITEREQUEST_T991B91E93F3980A5879ABAC6738F9BAC770E3B8F_H
#define ASYNCREADORWRITEREQUEST_T991B91E93F3980A5879ABAC6738F9BAC770E3B8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Net.Security.AsyncReadOrWriteRequest
struct  AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F  : public AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027
{
public:
	// Mono.Net.Security.BufferOffsetSize Mono.Net.Security.AsyncReadOrWriteRequest::<UserBuffer>k__BackingField
	BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9 * ___U3CUserBufferU3Ek__BackingField_7;
	// System.Int32 Mono.Net.Security.AsyncReadOrWriteRequest::<CurrentSize>k__BackingField
	int32_t ___U3CCurrentSizeU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CUserBufferU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F, ___U3CUserBufferU3Ek__BackingField_7)); }
	inline BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9 * get_U3CUserBufferU3Ek__BackingField_7() const { return ___U3CUserBufferU3Ek__BackingField_7; }
	inline BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9 ** get_address_of_U3CUserBufferU3Ek__BackingField_7() { return &___U3CUserBufferU3Ek__BackingField_7; }
	inline void set_U3CUserBufferU3Ek__BackingField_7(BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9 * value)
	{
		___U3CUserBufferU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserBufferU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CCurrentSizeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F, ___U3CCurrentSizeU3Ek__BackingField_8)); }
	inline int32_t get_U3CCurrentSizeU3Ek__BackingField_8() const { return ___U3CCurrentSizeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CCurrentSizeU3Ek__BackingField_8() { return &___U3CCurrentSizeU3Ek__BackingField_8; }
	inline void set_U3CCurrentSizeU3Ek__BackingField_8(int32_t value)
	{
		___U3CCurrentSizeU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCREADORWRITEREQUEST_T991B91E93F3980A5879ABAC6738F9BAC770E3B8F_H
#ifndef BUFFEROFFSETSIZE2_T2E9889F6FB134EF92FC0B930BF630243553F4E00_H
#define BUFFEROFFSETSIZE2_T2E9889F6FB134EF92FC0B930BF630243553F4E00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Net.Security.BufferOffsetSize2
struct  BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00  : public BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9
{
public:
	// System.Int32 Mono.Net.Security.BufferOffsetSize2::InitialSize
	int32_t ___InitialSize_5;

public:
	inline static int32_t get_offset_of_InitialSize_5() { return static_cast<int32_t>(offsetof(BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00, ___InitialSize_5)); }
	inline int32_t get_InitialSize_5() const { return ___InitialSize_5; }
	inline int32_t* get_address_of_InitialSize_5() { return &___InitialSize_5; }
	inline void set_InitialSize_5(int32_t value)
	{
		___InitialSize_5 = value;
=======
// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BUFFEROFFSETSIZE2_T2E9889F6FB134EF92FC0B930BF630243553F4E00_H
#ifndef UNITYTLS_KEY_TABB3A1A923B658DC99FFDB3ED633FBBA64EF1BB9_H
#define UNITYTLS_KEY_TABB3A1A923B658DC99FFDB3ED633FBBA64EF1BB9_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef ENCODINGTABLE_T568191682_H
#define ENCODINGTABLE_T568191682_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_key
struct  unitytls_key_tABB3A1A923B658DC99FFDB3ED633FBBA64EF1BB9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_key_tABB3A1A923B658DC99FFDB3ED633FBBA64EF1BB9__padding[1];
	};
=======
// System.Globalization.EncodingTable
struct  EncodingTable_t568191682  : public RuntimeObject
{
public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

public:
};

<<<<<<< HEAD
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_KEY_TABB3A1A923B658DC99FFDB3ED633FBBA64EF1BB9_H
#ifndef UNITYTLS_KEY_REF_TE908606656A7C49CA1EB734722E4C3DED7CE6E5B_H
#define UNITYTLS_KEY_REF_TE908606656A7C49CA1EB734722E4C3DED7CE6E5B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTls/unitytls_key_ref
struct  unitytls_key_ref_tE908606656A7C49CA1EB734722E4C3DED7CE6E5B 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_key_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_key_ref_tE908606656A7C49CA1EB734722E4C3DED7CE6E5B, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
=======
struct EncodingTable_t568191682_StaticFields
{
public:
	// System.Globalization.InternalEncodingDataItem[] System.Globalization.EncodingTable::encodingDataPtr
	InternalEncodingDataItemU5BU5D_t1120810260* ___encodingDataPtr_0;
	// System.Globalization.InternalCodePageDataItem[] System.Globalization.EncodingTable::codePageDataPtr
	InternalCodePageDataItemU5BU5D_t2292034760* ___codePageDataPtr_1;
	// System.Int32 System.Globalization.EncodingTable::lastEncodingItem
	int32_t ___lastEncodingItem_2;
	// System.Collections.Hashtable System.Globalization.EncodingTable::hashByName
	Hashtable_t1853889766 * ___hashByName_3;
	// System.Collections.Hashtable System.Globalization.EncodingTable::hashByCodePage
	Hashtable_t1853889766 * ___hashByCodePage_4;

public:
	inline static int32_t get_offset_of_encodingDataPtr_0() { return static_cast<int32_t>(offsetof(EncodingTable_t568191682_StaticFields, ___encodingDataPtr_0)); }
	inline InternalEncodingDataItemU5BU5D_t1120810260* get_encodingDataPtr_0() const { return ___encodingDataPtr_0; }
	inline InternalEncodingDataItemU5BU5D_t1120810260** get_address_of_encodingDataPtr_0() { return &___encodingDataPtr_0; }
	inline void set_encodingDataPtr_0(InternalEncodingDataItemU5BU5D_t1120810260* value)
	{
		___encodingDataPtr_0 = value;
		Il2CppCodeGenWriteBarrier((&___encodingDataPtr_0), value);
	}

	inline static int32_t get_offset_of_codePageDataPtr_1() { return static_cast<int32_t>(offsetof(EncodingTable_t568191682_StaticFields, ___codePageDataPtr_1)); }
	inline InternalCodePageDataItemU5BU5D_t2292034760* get_codePageDataPtr_1() const { return ___codePageDataPtr_1; }
	inline InternalCodePageDataItemU5BU5D_t2292034760** get_address_of_codePageDataPtr_1() { return &___codePageDataPtr_1; }
	inline void set_codePageDataPtr_1(InternalCodePageDataItemU5BU5D_t2292034760* value)
	{
		___codePageDataPtr_1 = value;
		Il2CppCodeGenWriteBarrier((&___codePageDataPtr_1), value);
	}

	inline static int32_t get_offset_of_lastEncodingItem_2() { return static_cast<int32_t>(offsetof(EncodingTable_t568191682_StaticFields, ___lastEncodingItem_2)); }
	inline int32_t get_lastEncodingItem_2() const { return ___lastEncodingItem_2; }
	inline int32_t* get_address_of_lastEncodingItem_2() { return &___lastEncodingItem_2; }
	inline void set_lastEncodingItem_2(int32_t value)
	{
		___lastEncodingItem_2 = value;
	}

	inline static int32_t get_offset_of_hashByName_3() { return static_cast<int32_t>(offsetof(EncodingTable_t568191682_StaticFields, ___hashByName_3)); }
	inline Hashtable_t1853889766 * get_hashByName_3() const { return ___hashByName_3; }
	inline Hashtable_t1853889766 ** get_address_of_hashByName_3() { return &___hashByName_3; }
	inline void set_hashByName_3(Hashtable_t1853889766 * value)
	{
		___hashByName_3 = value;
		Il2CppCodeGenWriteBarrier((&___hashByName_3), value);
	}

	inline static int32_t get_offset_of_hashByCodePage_4() { return static_cast<int32_t>(offsetof(EncodingTable_t568191682_StaticFields, ___hashByCodePage_4)); }
	inline Hashtable_t1853889766 * get_hashByCodePage_4() const { return ___hashByCodePage_4; }
	inline Hashtable_t1853889766 ** get_address_of_hashByCodePage_4() { return &___hashByCodePage_4; }
	inline void set_hashByCodePage_4(Hashtable_t1853889766 * value)
	{
		___hashByCodePage_4 = value;
		Il2CppCodeGenWriteBarrier((&___hashByCodePage_4), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_KEY_REF_TE908606656A7C49CA1EB734722E4C3DED7CE6E5B_H
#ifndef UNITYTLS_TLSCTX_T6B948536BDFA3AAC0135FF136ABD7779A0B96A74_H
#define UNITYTLS_TLSCTX_T6B948536BDFA3AAC0135FF136ABD7779A0B96A74_H
=======
#endif // ENCODINGTABLE_T568191682_H
#ifndef STRINGBUILDERCACHE_T3006348846_H
#define STRINGBUILDERCACHE_T3006348846_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_tlsctx
struct  unitytls_tlsctx_t6B948536BDFA3AAC0135FF136ABD7779A0B96A74 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_tlsctx_t6B948536BDFA3AAC0135FF136ABD7779A0B96A74__padding[1];
	};
=======
// System.Text.StringBuilderCache
struct  StringBuilderCache_t3006348846  : public RuntimeObject
{
public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

public:
};

<<<<<<< HEAD
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_TLSCTX_T6B948536BDFA3AAC0135FF136ABD7779A0B96A74_H
#ifndef UNITYTLS_TLSCTX_CALLBACKS_T7BB5F622E014A8EC300C578657E2B0550DA828B2_H
#define UNITYTLS_TLSCTX_CALLBACKS_T7BB5F622E014A8EC300C578657E2B0550DA828B2_H
=======
struct StringBuilderCache_t3006348846_ThreadStaticFields
{
public:
	// System.Text.StringBuilder System.Text.StringBuilderCache::CachedInstance
	StringBuilder_t * ___CachedInstance_0;

public:
	inline static int32_t get_offset_of_CachedInstance_0() { return static_cast<int32_t>(offsetof(StringBuilderCache_t3006348846_ThreadStaticFields, ___CachedInstance_0)); }
	inline StringBuilder_t * get_CachedInstance_0() const { return ___CachedInstance_0; }
	inline StringBuilder_t ** get_address_of_CachedInstance_0() { return &___CachedInstance_0; }
	inline void set_CachedInstance_0(StringBuilder_t * value)
	{
		___CachedInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___CachedInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDERCACHE_T3006348846_H
#ifndef IDNMAPPING_T1700667501_H
#define IDNMAPPING_T1700667501_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct  unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2 
{
public:
	// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::read
	unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5 * ___read_0;
	// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::write
	unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6 * ___write_1;
	// System.Void* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::data
	void* ___data_2;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2, ___read_0)); }
	inline unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5 * get_read_0() const { return ___read_0; }
	inline unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((&___read_0), value);
	}

	inline static int32_t get_offset_of_write_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2, ___write_1)); }
	inline unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6 * get_write_1() const { return ___write_1; }
	inline unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6 ** get_address_of_write_1() { return &___write_1; }
	inline void set_write_1(unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6 * value)
	{
		___write_1 = value;
		Il2CppCodeGenWriteBarrier((&___write_1), value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2, ___data_2)); }
	inline void* get_data_2() const { return ___data_2; }
	inline void** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(void* value)
	{
		___data_2 = value;
=======
// System.Globalization.IdnMapping
struct  IdnMapping_t1700667501  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.IdnMapping::allow_unassigned
	bool ___allow_unassigned_0;
	// System.Boolean System.Globalization.IdnMapping::use_std3
	bool ___use_std3_1;
	// System.Globalization.Punycode System.Globalization.IdnMapping::puny
	Punycode_t2881783740 * ___puny_2;

public:
	inline static int32_t get_offset_of_allow_unassigned_0() { return static_cast<int32_t>(offsetof(IdnMapping_t1700667501, ___allow_unassigned_0)); }
	inline bool get_allow_unassigned_0() const { return ___allow_unassigned_0; }
	inline bool* get_address_of_allow_unassigned_0() { return &___allow_unassigned_0; }
	inline void set_allow_unassigned_0(bool value)
	{
		___allow_unassigned_0 = value;
	}

	inline static int32_t get_offset_of_use_std3_1() { return static_cast<int32_t>(offsetof(IdnMapping_t1700667501, ___use_std3_1)); }
	inline bool get_use_std3_1() const { return ___use_std3_1; }
	inline bool* get_address_of_use_std3_1() { return &___use_std3_1; }
	inline void set_use_std3_1(bool value)
	{
		___use_std3_1 = value;
	}

	inline static int32_t get_offset_of_puny_2() { return static_cast<int32_t>(offsetof(IdnMapping_t1700667501, ___puny_2)); }
	inline Punycode_t2881783740 * get_puny_2() const { return ___puny_2; }
	inline Punycode_t2881783740 ** get_address_of_puny_2() { return &___puny_2; }
	inline void set_puny_2(Punycode_t2881783740 * value)
	{
		___puny_2 = value;
		Il2CppCodeGenWriteBarrier((&___puny_2), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshaled_pinvoke
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};
// Native definition for COM marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshaled_com
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};
#endif // UNITYTLS_TLSCTX_CALLBACKS_T7BB5F622E014A8EC300C578657E2B0550DA828B2_H
#ifndef UNITYTLS_X509_REF_TE1ED17887226610A1328A57FF787396C9457E7B7_H
#define UNITYTLS_X509_REF_TE1ED17887226610A1328A57FF787396C9457E7B7_H
=======
#endif // IDNMAPPING_T1700667501_H
#ifndef CALENDARDATA_T473118650_H
#define CALENDARDATA_T473118650_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_x509_ref
struct  unitytls_x509_ref_tE1ED17887226610A1328A57FF787396C9457E7B7 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509_ref_tE1ED17887226610A1328A57FF787396C9457E7B7, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_X509_REF_TE1ED17887226610A1328A57FF787396C9457E7B7_H
#ifndef UNITYTLS_X509LIST_TDFEEABB4254CDE9475890D0F2AE361B45EC357C7_H
#define UNITYTLS_X509LIST_TDFEEABB4254CDE9475890D0F2AE361B45EC357C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTls/unitytls_x509list
struct  unitytls_x509list_tDFEEABB4254CDE9475890D0F2AE361B45EC357C7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509list_tDFEEABB4254CDE9475890D0F2AE361B45EC357C7__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_X509LIST_TDFEEABB4254CDE9475890D0F2AE361B45EC357C7_H
#ifndef UNITYTLS_X509LIST_REF_TF01A6BF5ADA9C454E6B975D2669AF22D27555BF6_H
#define UNITYTLS_X509LIST_REF_TF01A6BF5ADA9C454E6B975D2669AF22D27555BF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTls/unitytls_x509list_ref
struct  unitytls_x509list_ref_tF01A6BF5ADA9C454E6B975D2669AF22D27555BF6 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tF01A6BF5ADA9C454E6B975D2669AF22D27555BF6, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_X509LIST_REF_TF01A6BF5ADA9C454E6B975D2669AF22D27555BF6_H
#ifndef UNITYTLS_X509NAME_T551F433869F1BAA39C78962C7ACA1BAB9A4D6337_H
#define UNITYTLS_X509NAME_T551F433869F1BAA39C78962C7ACA1BAB9A4D6337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTls/unitytls_x509name
struct  unitytls_x509name_t551F433869F1BAA39C78962C7ACA1BAB9A4D6337 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509name_t551F433869F1BAA39C78962C7ACA1BAB9A4D6337__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_X509NAME_T551F433869F1BAA39C78962C7ACA1BAB9A4D6337_H
#ifndef UNITYTLSPROVIDER_T38A61346F4CF37E18E390610CF6092AEFCA65965_H
#define UNITYTLSPROVIDER_T38A61346F4CF37E18E390610CF6092AEFCA65965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTlsProvider
struct  UnityTlsProvider_t38A61346F4CF37E18E390610CF6092AEFCA65965  : public MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLSPROVIDER_T38A61346F4CF37E18E390610CF6092AEFCA65965_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
=======
// System.Globalization.CalendarData
struct  CalendarData_t473118650  : public RuntimeObject
{
public:
	// System.String System.Globalization.CalendarData::sNativeName
	String_t* ___sNativeName_1;
	// System.String[] System.Globalization.CalendarData::saShortDates
	StringU5BU5D_t1281789340* ___saShortDates_2;
	// System.String[] System.Globalization.CalendarData::saYearMonths
	StringU5BU5D_t1281789340* ___saYearMonths_3;
	// System.String[] System.Globalization.CalendarData::saLongDates
	StringU5BU5D_t1281789340* ___saLongDates_4;
	// System.String System.Globalization.CalendarData::sMonthDay
	String_t* ___sMonthDay_5;
	// System.String[] System.Globalization.CalendarData::saEraNames
	StringU5BU5D_t1281789340* ___saEraNames_6;
	// System.String[] System.Globalization.CalendarData::saAbbrevEraNames
	StringU5BU5D_t1281789340* ___saAbbrevEraNames_7;
	// System.String[] System.Globalization.CalendarData::saAbbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___saAbbrevEnglishEraNames_8;
	// System.String[] System.Globalization.CalendarData::saDayNames
	StringU5BU5D_t1281789340* ___saDayNames_9;
	// System.String[] System.Globalization.CalendarData::saAbbrevDayNames
	StringU5BU5D_t1281789340* ___saAbbrevDayNames_10;
	// System.String[] System.Globalization.CalendarData::saSuperShortDayNames
	StringU5BU5D_t1281789340* ___saSuperShortDayNames_11;
	// System.String[] System.Globalization.CalendarData::saMonthNames
	StringU5BU5D_t1281789340* ___saMonthNames_12;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthNames
	StringU5BU5D_t1281789340* ___saAbbrevMonthNames_13;
	// System.String[] System.Globalization.CalendarData::saMonthGenitiveNames
	StringU5BU5D_t1281789340* ___saMonthGenitiveNames_14;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthGenitiveNames
	StringU5BU5D_t1281789340* ___saAbbrevMonthGenitiveNames_15;
	// System.String[] System.Globalization.CalendarData::saLeapYearMonthNames
	StringU5BU5D_t1281789340* ___saLeapYearMonthNames_16;
	// System.Int32 System.Globalization.CalendarData::iTwoDigitYearMax
	int32_t ___iTwoDigitYearMax_17;
	// System.Int32 System.Globalization.CalendarData::iCurrentEra
	int32_t ___iCurrentEra_18;
	// System.Boolean System.Globalization.CalendarData::bUseUserOverrides
	bool ___bUseUserOverrides_19;

public:
	inline static int32_t get_offset_of_sNativeName_1() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___sNativeName_1)); }
	inline String_t* get_sNativeName_1() const { return ___sNativeName_1; }
	inline String_t** get_address_of_sNativeName_1() { return &___sNativeName_1; }
	inline void set_sNativeName_1(String_t* value)
	{
		___sNativeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___sNativeName_1), value);
	}

	inline static int32_t get_offset_of_saShortDates_2() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saShortDates_2)); }
	inline StringU5BU5D_t1281789340* get_saShortDates_2() const { return ___saShortDates_2; }
	inline StringU5BU5D_t1281789340** get_address_of_saShortDates_2() { return &___saShortDates_2; }
	inline void set_saShortDates_2(StringU5BU5D_t1281789340* value)
	{
		___saShortDates_2 = value;
		Il2CppCodeGenWriteBarrier((&___saShortDates_2), value);
	}

	inline static int32_t get_offset_of_saYearMonths_3() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saYearMonths_3)); }
	inline StringU5BU5D_t1281789340* get_saYearMonths_3() const { return ___saYearMonths_3; }
	inline StringU5BU5D_t1281789340** get_address_of_saYearMonths_3() { return &___saYearMonths_3; }
	inline void set_saYearMonths_3(StringU5BU5D_t1281789340* value)
	{
		___saYearMonths_3 = value;
		Il2CppCodeGenWriteBarrier((&___saYearMonths_3), value);
	}

	inline static int32_t get_offset_of_saLongDates_4() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saLongDates_4)); }
	inline StringU5BU5D_t1281789340* get_saLongDates_4() const { return ___saLongDates_4; }
	inline StringU5BU5D_t1281789340** get_address_of_saLongDates_4() { return &___saLongDates_4; }
	inline void set_saLongDates_4(StringU5BU5D_t1281789340* value)
	{
		___saLongDates_4 = value;
		Il2CppCodeGenWriteBarrier((&___saLongDates_4), value);
	}

	inline static int32_t get_offset_of_sMonthDay_5() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___sMonthDay_5)); }
	inline String_t* get_sMonthDay_5() const { return ___sMonthDay_5; }
	inline String_t** get_address_of_sMonthDay_5() { return &___sMonthDay_5; }
	inline void set_sMonthDay_5(String_t* value)
	{
		___sMonthDay_5 = value;
		Il2CppCodeGenWriteBarrier((&___sMonthDay_5), value);
	}

	inline static int32_t get_offset_of_saEraNames_6() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saEraNames_6)); }
	inline StringU5BU5D_t1281789340* get_saEraNames_6() const { return ___saEraNames_6; }
	inline StringU5BU5D_t1281789340** get_address_of_saEraNames_6() { return &___saEraNames_6; }
	inline void set_saEraNames_6(StringU5BU5D_t1281789340* value)
	{
		___saEraNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___saEraNames_6), value);
	}

	inline static int32_t get_offset_of_saAbbrevEraNames_7() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saAbbrevEraNames_7)); }
	inline StringU5BU5D_t1281789340* get_saAbbrevEraNames_7() const { return ___saAbbrevEraNames_7; }
	inline StringU5BU5D_t1281789340** get_address_of_saAbbrevEraNames_7() { return &___saAbbrevEraNames_7; }
	inline void set_saAbbrevEraNames_7(StringU5BU5D_t1281789340* value)
	{
		___saAbbrevEraNames_7 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevEraNames_7), value);
	}

	inline static int32_t get_offset_of_saAbbrevEnglishEraNames_8() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saAbbrevEnglishEraNames_8)); }
	inline StringU5BU5D_t1281789340* get_saAbbrevEnglishEraNames_8() const { return ___saAbbrevEnglishEraNames_8; }
	inline StringU5BU5D_t1281789340** get_address_of_saAbbrevEnglishEraNames_8() { return &___saAbbrevEnglishEraNames_8; }
	inline void set_saAbbrevEnglishEraNames_8(StringU5BU5D_t1281789340* value)
	{
		___saAbbrevEnglishEraNames_8 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevEnglishEraNames_8), value);
	}

	inline static int32_t get_offset_of_saDayNames_9() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saDayNames_9)); }
	inline StringU5BU5D_t1281789340* get_saDayNames_9() const { return ___saDayNames_9; }
	inline StringU5BU5D_t1281789340** get_address_of_saDayNames_9() { return &___saDayNames_9; }
	inline void set_saDayNames_9(StringU5BU5D_t1281789340* value)
	{
		___saDayNames_9 = value;
		Il2CppCodeGenWriteBarrier((&___saDayNames_9), value);
	}

	inline static int32_t get_offset_of_saAbbrevDayNames_10() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saAbbrevDayNames_10)); }
	inline StringU5BU5D_t1281789340* get_saAbbrevDayNames_10() const { return ___saAbbrevDayNames_10; }
	inline StringU5BU5D_t1281789340** get_address_of_saAbbrevDayNames_10() { return &___saAbbrevDayNames_10; }
	inline void set_saAbbrevDayNames_10(StringU5BU5D_t1281789340* value)
	{
		___saAbbrevDayNames_10 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevDayNames_10), value);
	}

	inline static int32_t get_offset_of_saSuperShortDayNames_11() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saSuperShortDayNames_11)); }
	inline StringU5BU5D_t1281789340* get_saSuperShortDayNames_11() const { return ___saSuperShortDayNames_11; }
	inline StringU5BU5D_t1281789340** get_address_of_saSuperShortDayNames_11() { return &___saSuperShortDayNames_11; }
	inline void set_saSuperShortDayNames_11(StringU5BU5D_t1281789340* value)
	{
		___saSuperShortDayNames_11 = value;
		Il2CppCodeGenWriteBarrier((&___saSuperShortDayNames_11), value);
	}

	inline static int32_t get_offset_of_saMonthNames_12() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saMonthNames_12)); }
	inline StringU5BU5D_t1281789340* get_saMonthNames_12() const { return ___saMonthNames_12; }
	inline StringU5BU5D_t1281789340** get_address_of_saMonthNames_12() { return &___saMonthNames_12; }
	inline void set_saMonthNames_12(StringU5BU5D_t1281789340* value)
	{
		___saMonthNames_12 = value;
		Il2CppCodeGenWriteBarrier((&___saMonthNames_12), value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthNames_13() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saAbbrevMonthNames_13)); }
	inline StringU5BU5D_t1281789340* get_saAbbrevMonthNames_13() const { return ___saAbbrevMonthNames_13; }
	inline StringU5BU5D_t1281789340** get_address_of_saAbbrevMonthNames_13() { return &___saAbbrevMonthNames_13; }
	inline void set_saAbbrevMonthNames_13(StringU5BU5D_t1281789340* value)
	{
		___saAbbrevMonthNames_13 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevMonthNames_13), value);
	}

	inline static int32_t get_offset_of_saMonthGenitiveNames_14() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saMonthGenitiveNames_14)); }
	inline StringU5BU5D_t1281789340* get_saMonthGenitiveNames_14() const { return ___saMonthGenitiveNames_14; }
	inline StringU5BU5D_t1281789340** get_address_of_saMonthGenitiveNames_14() { return &___saMonthGenitiveNames_14; }
	inline void set_saMonthGenitiveNames_14(StringU5BU5D_t1281789340* value)
	{
		___saMonthGenitiveNames_14 = value;
		Il2CppCodeGenWriteBarrier((&___saMonthGenitiveNames_14), value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthGenitiveNames_15() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saAbbrevMonthGenitiveNames_15)); }
	inline StringU5BU5D_t1281789340* get_saAbbrevMonthGenitiveNames_15() const { return ___saAbbrevMonthGenitiveNames_15; }
	inline StringU5BU5D_t1281789340** get_address_of_saAbbrevMonthGenitiveNames_15() { return &___saAbbrevMonthGenitiveNames_15; }
	inline void set_saAbbrevMonthGenitiveNames_15(StringU5BU5D_t1281789340* value)
	{
		___saAbbrevMonthGenitiveNames_15 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevMonthGenitiveNames_15), value);
	}

	inline static int32_t get_offset_of_saLeapYearMonthNames_16() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___saLeapYearMonthNames_16)); }
	inline StringU5BU5D_t1281789340* get_saLeapYearMonthNames_16() const { return ___saLeapYearMonthNames_16; }
	inline StringU5BU5D_t1281789340** get_address_of_saLeapYearMonthNames_16() { return &___saLeapYearMonthNames_16; }
	inline void set_saLeapYearMonthNames_16(StringU5BU5D_t1281789340* value)
	{
		___saLeapYearMonthNames_16 = value;
		Il2CppCodeGenWriteBarrier((&___saLeapYearMonthNames_16), value);
	}

	inline static int32_t get_offset_of_iTwoDigitYearMax_17() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___iTwoDigitYearMax_17)); }
	inline int32_t get_iTwoDigitYearMax_17() const { return ___iTwoDigitYearMax_17; }
	inline int32_t* get_address_of_iTwoDigitYearMax_17() { return &___iTwoDigitYearMax_17; }
	inline void set_iTwoDigitYearMax_17(int32_t value)
	{
		___iTwoDigitYearMax_17 = value;
	}

	inline static int32_t get_offset_of_iCurrentEra_18() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___iCurrentEra_18)); }
	inline int32_t get_iCurrentEra_18() const { return ___iCurrentEra_18; }
	inline int32_t* get_address_of_iCurrentEra_18() { return &___iCurrentEra_18; }
	inline void set_iCurrentEra_18(int32_t value)
	{
		___iCurrentEra_18 = value;
	}

	inline static int32_t get_offset_of_bUseUserOverrides_19() { return static_cast<int32_t>(offsetof(CalendarData_t473118650, ___bUseUserOverrides_19)); }
	inline bool get_bUseUserOverrides_19() const { return ___bUseUserOverrides_19; }
	inline bool* get_address_of_bUseUserOverrides_19() { return &___bUseUserOverrides_19; }
	inline void set_bUseUserOverrides_19(bool value)
	{
		___bUseUserOverrides_19 = value;
	}
};

struct CalendarData_t473118650_StaticFields
{
public:
	// System.Globalization.CalendarData System.Globalization.CalendarData::Invariant
	CalendarData_t473118650 * ___Invariant_20;

public:
	inline static int32_t get_offset_of_Invariant_20() { return static_cast<int32_t>(offsetof(CalendarData_t473118650_StaticFields, ___Invariant_20)); }
	inline CalendarData_t473118650 * get_Invariant_20() const { return ___Invariant_20; }
	inline CalendarData_t473118650 ** get_address_of_Invariant_20() { return &___Invariant_20; }
	inline void set_Invariant_20(CalendarData_t473118650 * value)
	{
		___Invariant_20 = value;
		Il2CppCodeGenWriteBarrier((&___Invariant_20), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#define STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.CalendarData
struct CalendarData_t473118650_marshaled_pinvoke
{
	char* ___sNativeName_1;
	char** ___saShortDates_2;
	char** ___saYearMonths_3;
	char** ___saLongDates_4;
	char* ___sMonthDay_5;
	char** ___saEraNames_6;
	char** ___saAbbrevEraNames_7;
	char** ___saAbbrevEnglishEraNames_8;
	char** ___saDayNames_9;
	char** ___saAbbrevDayNames_10;
	char** ___saSuperShortDayNames_11;
	char** ___saMonthNames_12;
	char** ___saAbbrevMonthNames_13;
	char** ___saMonthGenitiveNames_14;
	char** ___saAbbrevMonthGenitiveNames_15;
	char** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
};
// Native definition for COM marshalling of System.Globalization.CalendarData
struct CalendarData_t473118650_marshaled_com
{
	Il2CppChar* ___sNativeName_1;
	Il2CppChar** ___saShortDates_2;
	Il2CppChar** ___saYearMonths_3;
	Il2CppChar** ___saLongDates_4;
	Il2CppChar* ___sMonthDay_5;
	Il2CppChar** ___saEraNames_6;
	Il2CppChar** ___saAbbrevEraNames_7;
	Il2CppChar** ___saAbbrevEnglishEraNames_8;
	Il2CppChar** ___saDayNames_9;
	Il2CppChar** ___saAbbrevDayNames_10;
	Il2CppChar** ___saSuperShortDayNames_11;
	Il2CppChar** ___saMonthNames_12;
	Il2CppChar** ___saAbbrevMonthNames_13;
	Il2CppChar** ___saMonthGenitiveNames_14;
	Il2CppChar** ___saAbbrevMonthGenitiveNames_15;
	Il2CppChar** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
};
#endif // CALENDARDATA_T473118650_H
#ifndef CULTUREDATA_T1899656083_H
#define CULTUREDATA_T1899656083_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
=======
// System.Globalization.CultureData
struct  CultureData_t1899656083  : public RuntimeObject
{
public:
	// System.String System.Globalization.CultureData::sAM1159
	String_t* ___sAM1159_0;
	// System.String System.Globalization.CultureData::sPM2359
	String_t* ___sPM2359_1;
	// System.String System.Globalization.CultureData::sTimeSeparator
	String_t* ___sTimeSeparator_2;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureData::saLongTimes
	StringU5BU5D_t1281789340* ___saLongTimes_3;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureData::saShortTimes
	StringU5BU5D_t1281789340* ___saShortTimes_4;
	// System.Int32 System.Globalization.CultureData::iFirstDayOfWeek
	int32_t ___iFirstDayOfWeek_5;
	// System.Int32 System.Globalization.CultureData::iFirstWeekOfYear
	int32_t ___iFirstWeekOfYear_6;
	// System.Int32[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureData::waCalendars
	Int32U5BU5D_t385246372* ___waCalendars_7;
	// System.Globalization.CalendarData[] System.Globalization.CultureData::calendars
	CalendarDataU5BU5D_t1287151647* ___calendars_8;
	// System.String System.Globalization.CultureData::sISO639Language
	String_t* ___sISO639Language_9;
	// System.String System.Globalization.CultureData::sRealName
	String_t* ___sRealName_10;
	// System.Boolean System.Globalization.CultureData::bUseOverrides
	bool ___bUseOverrides_11;
	// System.Int32 System.Globalization.CultureData::calendarId
	int32_t ___calendarId_12;
	// System.Int32 System.Globalization.CultureData::numberIndex
	int32_t ___numberIndex_13;
	// System.Int32 System.Globalization.CultureData::iDefaultAnsiCodePage
	int32_t ___iDefaultAnsiCodePage_14;
	// System.Int32 System.Globalization.CultureData::iDefaultOemCodePage
	int32_t ___iDefaultOemCodePage_15;
	// System.Int32 System.Globalization.CultureData::iDefaultMacCodePage
	int32_t ___iDefaultMacCodePage_16;
	// System.Int32 System.Globalization.CultureData::iDefaultEbcdicCodePage
	int32_t ___iDefaultEbcdicCodePage_17;
	// System.Boolean System.Globalization.CultureData::isRightToLeft
	bool ___isRightToLeft_18;
	// System.String System.Globalization.CultureData::sListSeparator
	String_t* ___sListSeparator_19;

public:
	inline static int32_t get_offset_of_sAM1159_0() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___sAM1159_0)); }
	inline String_t* get_sAM1159_0() const { return ___sAM1159_0; }
	inline String_t** get_address_of_sAM1159_0() { return &___sAM1159_0; }
	inline void set_sAM1159_0(String_t* value)
	{
		___sAM1159_0 = value;
		Il2CppCodeGenWriteBarrier((&___sAM1159_0), value);
	}

	inline static int32_t get_offset_of_sPM2359_1() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___sPM2359_1)); }
	inline String_t* get_sPM2359_1() const { return ___sPM2359_1; }
	inline String_t** get_address_of_sPM2359_1() { return &___sPM2359_1; }
	inline void set_sPM2359_1(String_t* value)
	{
		___sPM2359_1 = value;
		Il2CppCodeGenWriteBarrier((&___sPM2359_1), value);
	}

	inline static int32_t get_offset_of_sTimeSeparator_2() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___sTimeSeparator_2)); }
	inline String_t* get_sTimeSeparator_2() const { return ___sTimeSeparator_2; }
	inline String_t** get_address_of_sTimeSeparator_2() { return &___sTimeSeparator_2; }
	inline void set_sTimeSeparator_2(String_t* value)
	{
		___sTimeSeparator_2 = value;
		Il2CppCodeGenWriteBarrier((&___sTimeSeparator_2), value);
	}

	inline static int32_t get_offset_of_saLongTimes_3() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___saLongTimes_3)); }
	inline StringU5BU5D_t1281789340* get_saLongTimes_3() const { return ___saLongTimes_3; }
	inline StringU5BU5D_t1281789340** get_address_of_saLongTimes_3() { return &___saLongTimes_3; }
	inline void set_saLongTimes_3(StringU5BU5D_t1281789340* value)
	{
		___saLongTimes_3 = value;
		Il2CppCodeGenWriteBarrier((&___saLongTimes_3), value);
	}

	inline static int32_t get_offset_of_saShortTimes_4() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___saShortTimes_4)); }
	inline StringU5BU5D_t1281789340* get_saShortTimes_4() const { return ___saShortTimes_4; }
	inline StringU5BU5D_t1281789340** get_address_of_saShortTimes_4() { return &___saShortTimes_4; }
	inline void set_saShortTimes_4(StringU5BU5D_t1281789340* value)
	{
		___saShortTimes_4 = value;
		Il2CppCodeGenWriteBarrier((&___saShortTimes_4), value);
	}

	inline static int32_t get_offset_of_iFirstDayOfWeek_5() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___iFirstDayOfWeek_5)); }
	inline int32_t get_iFirstDayOfWeek_5() const { return ___iFirstDayOfWeek_5; }
	inline int32_t* get_address_of_iFirstDayOfWeek_5() { return &___iFirstDayOfWeek_5; }
	inline void set_iFirstDayOfWeek_5(int32_t value)
	{
		___iFirstDayOfWeek_5 = value;
	}

	inline static int32_t get_offset_of_iFirstWeekOfYear_6() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___iFirstWeekOfYear_6)); }
	inline int32_t get_iFirstWeekOfYear_6() const { return ___iFirstWeekOfYear_6; }
	inline int32_t* get_address_of_iFirstWeekOfYear_6() { return &___iFirstWeekOfYear_6; }
	inline void set_iFirstWeekOfYear_6(int32_t value)
	{
		___iFirstWeekOfYear_6 = value;
	}

	inline static int32_t get_offset_of_waCalendars_7() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___waCalendars_7)); }
	inline Int32U5BU5D_t385246372* get_waCalendars_7() const { return ___waCalendars_7; }
	inline Int32U5BU5D_t385246372** get_address_of_waCalendars_7() { return &___waCalendars_7; }
	inline void set_waCalendars_7(Int32U5BU5D_t385246372* value)
	{
		___waCalendars_7 = value;
		Il2CppCodeGenWriteBarrier((&___waCalendars_7), value);
	}

	inline static int32_t get_offset_of_calendars_8() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___calendars_8)); }
	inline CalendarDataU5BU5D_t1287151647* get_calendars_8() const { return ___calendars_8; }
	inline CalendarDataU5BU5D_t1287151647** get_address_of_calendars_8() { return &___calendars_8; }
	inline void set_calendars_8(CalendarDataU5BU5D_t1287151647* value)
	{
		___calendars_8 = value;
		Il2CppCodeGenWriteBarrier((&___calendars_8), value);
	}

	inline static int32_t get_offset_of_sISO639Language_9() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___sISO639Language_9)); }
	inline String_t* get_sISO639Language_9() const { return ___sISO639Language_9; }
	inline String_t** get_address_of_sISO639Language_9() { return &___sISO639Language_9; }
	inline void set_sISO639Language_9(String_t* value)
	{
		___sISO639Language_9 = value;
		Il2CppCodeGenWriteBarrier((&___sISO639Language_9), value);
	}

	inline static int32_t get_offset_of_sRealName_10() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___sRealName_10)); }
	inline String_t* get_sRealName_10() const { return ___sRealName_10; }
	inline String_t** get_address_of_sRealName_10() { return &___sRealName_10; }
	inline void set_sRealName_10(String_t* value)
	{
		___sRealName_10 = value;
		Il2CppCodeGenWriteBarrier((&___sRealName_10), value);
	}

	inline static int32_t get_offset_of_bUseOverrides_11() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___bUseOverrides_11)); }
	inline bool get_bUseOverrides_11() const { return ___bUseOverrides_11; }
	inline bool* get_address_of_bUseOverrides_11() { return &___bUseOverrides_11; }
	inline void set_bUseOverrides_11(bool value)
	{
		___bUseOverrides_11 = value;
	}

	inline static int32_t get_offset_of_calendarId_12() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___calendarId_12)); }
	inline int32_t get_calendarId_12() const { return ___calendarId_12; }
	inline int32_t* get_address_of_calendarId_12() { return &___calendarId_12; }
	inline void set_calendarId_12(int32_t value)
	{
		___calendarId_12 = value;
	}

	inline static int32_t get_offset_of_numberIndex_13() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___numberIndex_13)); }
	inline int32_t get_numberIndex_13() const { return ___numberIndex_13; }
	inline int32_t* get_address_of_numberIndex_13() { return &___numberIndex_13; }
	inline void set_numberIndex_13(int32_t value)
	{
		___numberIndex_13 = value;
	}

	inline static int32_t get_offset_of_iDefaultAnsiCodePage_14() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___iDefaultAnsiCodePage_14)); }
	inline int32_t get_iDefaultAnsiCodePage_14() const { return ___iDefaultAnsiCodePage_14; }
	inline int32_t* get_address_of_iDefaultAnsiCodePage_14() { return &___iDefaultAnsiCodePage_14; }
	inline void set_iDefaultAnsiCodePage_14(int32_t value)
	{
		___iDefaultAnsiCodePage_14 = value;
	}

	inline static int32_t get_offset_of_iDefaultOemCodePage_15() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___iDefaultOemCodePage_15)); }
	inline int32_t get_iDefaultOemCodePage_15() const { return ___iDefaultOemCodePage_15; }
	inline int32_t* get_address_of_iDefaultOemCodePage_15() { return &___iDefaultOemCodePage_15; }
	inline void set_iDefaultOemCodePage_15(int32_t value)
	{
		___iDefaultOemCodePage_15 = value;
	}

	inline static int32_t get_offset_of_iDefaultMacCodePage_16() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___iDefaultMacCodePage_16)); }
	inline int32_t get_iDefaultMacCodePage_16() const { return ___iDefaultMacCodePage_16; }
	inline int32_t* get_address_of_iDefaultMacCodePage_16() { return &___iDefaultMacCodePage_16; }
	inline void set_iDefaultMacCodePage_16(int32_t value)
	{
		___iDefaultMacCodePage_16 = value;
	}

	inline static int32_t get_offset_of_iDefaultEbcdicCodePage_17() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___iDefaultEbcdicCodePage_17)); }
	inline int32_t get_iDefaultEbcdicCodePage_17() const { return ___iDefaultEbcdicCodePage_17; }
	inline int32_t* get_address_of_iDefaultEbcdicCodePage_17() { return &___iDefaultEbcdicCodePage_17; }
	inline void set_iDefaultEbcdicCodePage_17(int32_t value)
	{
		___iDefaultEbcdicCodePage_17 = value;
	}

	inline static int32_t get_offset_of_isRightToLeft_18() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___isRightToLeft_18)); }
	inline bool get_isRightToLeft_18() const { return ___isRightToLeft_18; }
	inline bool* get_address_of_isRightToLeft_18() { return &___isRightToLeft_18; }
	inline void set_isRightToLeft_18(bool value)
	{
		___isRightToLeft_18 = value;
	}

	inline static int32_t get_offset_of_sListSeparator_19() { return static_cast<int32_t>(offsetof(CultureData_t1899656083, ___sListSeparator_19)); }
	inline String_t* get_sListSeparator_19() const { return ___sListSeparator_19; }
	inline String_t** get_address_of_sListSeparator_19() { return &___sListSeparator_19; }
	inline void set_sListSeparator_19(String_t* value)
	{
		___sListSeparator_19 = value;
		Il2CppCodeGenWriteBarrier((&___sListSeparator_19), value);
	}
};

struct CultureData_t1899656083_StaticFields
{
public:
	// System.Globalization.CultureData System.Globalization.CultureData::s_Invariant
	CultureData_t1899656083 * ___s_Invariant_20;

public:
	inline static int32_t get_offset_of_s_Invariant_20() { return static_cast<int32_t>(offsetof(CultureData_t1899656083_StaticFields, ___s_Invariant_20)); }
	inline CultureData_t1899656083 * get_s_Invariant_20() const { return ___s_Invariant_20; }
	inline CultureData_t1899656083 ** get_address_of_s_Invariant_20() { return &___s_Invariant_20; }
	inline void set_s_Invariant_20(CultureData_t1899656083 * value)
	{
		___s_Invariant_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_Invariant_20), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.CultureData
struct CultureData_t1899656083_marshaled_pinvoke
{
	char* ___sAM1159_0;
	char* ___sPM2359_1;
	char* ___sTimeSeparator_2;
	StringU5BU5D_t1281789340* ___saLongTimes_3;
	StringU5BU5D_t1281789340* ___saShortTimes_4;
	int32_t ___iFirstDayOfWeek_5;
	int32_t ___iFirstWeekOfYear_6;
	Int32U5BU5D_t385246372* ___waCalendars_7;
	CalendarDataU5BU5D_t1287151647* ___calendars_8;
	char* ___sISO639Language_9;
	char* ___sRealName_10;
	int32_t ___bUseOverrides_11;
	int32_t ___calendarId_12;
	int32_t ___numberIndex_13;
	int32_t ___iDefaultAnsiCodePage_14;
	int32_t ___iDefaultOemCodePage_15;
	int32_t ___iDefaultMacCodePage_16;
	int32_t ___iDefaultEbcdicCodePage_17;
	int32_t ___isRightToLeft_18;
	char* ___sListSeparator_19;
};
// Native definition for COM marshalling of System.Globalization.CultureData
struct CultureData_t1899656083_marshaled_com
{
	Il2CppChar* ___sAM1159_0;
	Il2CppChar* ___sPM2359_1;
	Il2CppChar* ___sTimeSeparator_2;
	StringU5BU5D_t1281789340* ___saLongTimes_3;
	StringU5BU5D_t1281789340* ___saShortTimes_4;
	int32_t ___iFirstDayOfWeek_5;
	int32_t ___iFirstWeekOfYear_6;
	Int32U5BU5D_t385246372* ___waCalendars_7;
	CalendarDataU5BU5D_t1287151647* ___calendars_8;
	Il2CppChar* ___sISO639Language_9;
	Il2CppChar* ___sRealName_10;
	int32_t ___bUseOverrides_11;
	int32_t ___calendarId_12;
	int32_t ___numberIndex_13;
	int32_t ___iDefaultAnsiCodePage_14;
	int32_t ___iDefaultOemCodePage_15;
	int32_t ___iDefaultMacCodePage_16;
	int32_t ___iDefaultEbcdicCodePage_17;
	int32_t ___isRightToLeft_18;
	Il2CppChar* ___sListSeparator_19;
};
#endif // CULTUREDATA_T1899656083_H
#ifndef TEXTINFOTOLOWERDATA_T154700191_H
#define TEXTINFOTOLOWERDATA_T154700191_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
=======
// System.Globalization.TextInfoToLowerData
struct  TextInfoToLowerData_t154700191  : public RuntimeObject
{
public:

public:
};

struct TextInfoToLowerData_t154700191_StaticFields
{
public:
	// System.Char[] System.Globalization.TextInfoToLowerData::range_00c0_0556
	CharU5BU5D_t3528271667* ___range_00c0_0556_0;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_10a0_10c5
	CharU5BU5D_t3528271667* ___range_10a0_10c5_1;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_1e00_1ffc
	CharU5BU5D_t3528271667* ___range_1e00_1ffc_2;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_2160_216f
	CharU5BU5D_t3528271667* ___range_2160_216f_3;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_24b6_24cf
	CharU5BU5D_t3528271667* ___range_24b6_24cf_4;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_2c00_2c2e
	CharU5BU5D_t3528271667* ___range_2c00_2c2e_5;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_2c60_2ce2
	CharU5BU5D_t3528271667* ___range_2c60_2ce2_6;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_a640_a696
	CharU5BU5D_t3528271667* ___range_a640_a696_7;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_a722_a78b
	CharU5BU5D_t3528271667* ___range_a722_a78b_8;

public:
	inline static int32_t get_offset_of_range_00c0_0556_0() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_00c0_0556_0)); }
	inline CharU5BU5D_t3528271667* get_range_00c0_0556_0() const { return ___range_00c0_0556_0; }
	inline CharU5BU5D_t3528271667** get_address_of_range_00c0_0556_0() { return &___range_00c0_0556_0; }
	inline void set_range_00c0_0556_0(CharU5BU5D_t3528271667* value)
	{
		___range_00c0_0556_0 = value;
		Il2CppCodeGenWriteBarrier((&___range_00c0_0556_0), value);
	}

	inline static int32_t get_offset_of_range_10a0_10c5_1() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_10a0_10c5_1)); }
	inline CharU5BU5D_t3528271667* get_range_10a0_10c5_1() const { return ___range_10a0_10c5_1; }
	inline CharU5BU5D_t3528271667** get_address_of_range_10a0_10c5_1() { return &___range_10a0_10c5_1; }
	inline void set_range_10a0_10c5_1(CharU5BU5D_t3528271667* value)
	{
		___range_10a0_10c5_1 = value;
		Il2CppCodeGenWriteBarrier((&___range_10a0_10c5_1), value);
	}

	inline static int32_t get_offset_of_range_1e00_1ffc_2() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_1e00_1ffc_2)); }
	inline CharU5BU5D_t3528271667* get_range_1e00_1ffc_2() const { return ___range_1e00_1ffc_2; }
	inline CharU5BU5D_t3528271667** get_address_of_range_1e00_1ffc_2() { return &___range_1e00_1ffc_2; }
	inline void set_range_1e00_1ffc_2(CharU5BU5D_t3528271667* value)
	{
		___range_1e00_1ffc_2 = value;
		Il2CppCodeGenWriteBarrier((&___range_1e00_1ffc_2), value);
	}

	inline static int32_t get_offset_of_range_2160_216f_3() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_2160_216f_3)); }
	inline CharU5BU5D_t3528271667* get_range_2160_216f_3() const { return ___range_2160_216f_3; }
	inline CharU5BU5D_t3528271667** get_address_of_range_2160_216f_3() { return &___range_2160_216f_3; }
	inline void set_range_2160_216f_3(CharU5BU5D_t3528271667* value)
	{
		___range_2160_216f_3 = value;
		Il2CppCodeGenWriteBarrier((&___range_2160_216f_3), value);
	}

	inline static int32_t get_offset_of_range_24b6_24cf_4() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_24b6_24cf_4)); }
	inline CharU5BU5D_t3528271667* get_range_24b6_24cf_4() const { return ___range_24b6_24cf_4; }
	inline CharU5BU5D_t3528271667** get_address_of_range_24b6_24cf_4() { return &___range_24b6_24cf_4; }
	inline void set_range_24b6_24cf_4(CharU5BU5D_t3528271667* value)
	{
		___range_24b6_24cf_4 = value;
		Il2CppCodeGenWriteBarrier((&___range_24b6_24cf_4), value);
	}

	inline static int32_t get_offset_of_range_2c00_2c2e_5() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_2c00_2c2e_5)); }
	inline CharU5BU5D_t3528271667* get_range_2c00_2c2e_5() const { return ___range_2c00_2c2e_5; }
	inline CharU5BU5D_t3528271667** get_address_of_range_2c00_2c2e_5() { return &___range_2c00_2c2e_5; }
	inline void set_range_2c00_2c2e_5(CharU5BU5D_t3528271667* value)
	{
		___range_2c00_2c2e_5 = value;
		Il2CppCodeGenWriteBarrier((&___range_2c00_2c2e_5), value);
	}

	inline static int32_t get_offset_of_range_2c60_2ce2_6() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_2c60_2ce2_6)); }
	inline CharU5BU5D_t3528271667* get_range_2c60_2ce2_6() const { return ___range_2c60_2ce2_6; }
	inline CharU5BU5D_t3528271667** get_address_of_range_2c60_2ce2_6() { return &___range_2c60_2ce2_6; }
	inline void set_range_2c60_2ce2_6(CharU5BU5D_t3528271667* value)
	{
		___range_2c60_2ce2_6 = value;
		Il2CppCodeGenWriteBarrier((&___range_2c60_2ce2_6), value);
	}

	inline static int32_t get_offset_of_range_a640_a696_7() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_a640_a696_7)); }
	inline CharU5BU5D_t3528271667* get_range_a640_a696_7() const { return ___range_a640_a696_7; }
	inline CharU5BU5D_t3528271667** get_address_of_range_a640_a696_7() { return &___range_a640_a696_7; }
	inline void set_range_a640_a696_7(CharU5BU5D_t3528271667* value)
	{
		___range_a640_a696_7 = value;
		Il2CppCodeGenWriteBarrier((&___range_a640_a696_7), value);
	}

	inline static int32_t get_offset_of_range_a722_a78b_8() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t154700191_StaticFields, ___range_a722_a78b_8)); }
	inline CharU5BU5D_t3528271667* get_range_a722_a78b_8() const { return ___range_a722_a78b_8; }
	inline CharU5BU5D_t3528271667** get_address_of_range_a722_a78b_8() { return &___range_a722_a78b_8; }
	inline void set_range_a722_a78b_8(CharU5BU5D_t3528271667* value)
	{
		___range_a722_a78b_8 = value;
		Il2CppCodeGenWriteBarrier((&___range_a722_a78b_8), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
=======
#endif // TEXTINFOTOLOWERDATA_T154700191_H
#ifndef BOOTSTRING_T3302426383_H
#define BOOTSTRING_T3302426383_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
=======
// System.Globalization.Bootstring
struct  Bootstring_t3302426383  : public RuntimeObject
{
public:
	// System.Char System.Globalization.Bootstring::delimiter
	Il2CppChar ___delimiter_0;
	// System.Int32 System.Globalization.Bootstring::base_num
	int32_t ___base_num_1;
	// System.Int32 System.Globalization.Bootstring::tmin
	int32_t ___tmin_2;
	// System.Int32 System.Globalization.Bootstring::tmax
	int32_t ___tmax_3;
	// System.Int32 System.Globalization.Bootstring::skew
	int32_t ___skew_4;
	// System.Int32 System.Globalization.Bootstring::damp
	int32_t ___damp_5;
	// System.Int32 System.Globalization.Bootstring::initial_bias
	int32_t ___initial_bias_6;
	// System.Int32 System.Globalization.Bootstring::initial_n
	int32_t ___initial_n_7;

public:
	inline static int32_t get_offset_of_delimiter_0() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___delimiter_0)); }
	inline Il2CppChar get_delimiter_0() const { return ___delimiter_0; }
	inline Il2CppChar* get_address_of_delimiter_0() { return &___delimiter_0; }
	inline void set_delimiter_0(Il2CppChar value)
	{
		___delimiter_0 = value;
	}

	inline static int32_t get_offset_of_base_num_1() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___base_num_1)); }
	inline int32_t get_base_num_1() const { return ___base_num_1; }
	inline int32_t* get_address_of_base_num_1() { return &___base_num_1; }
	inline void set_base_num_1(int32_t value)
	{
		___base_num_1 = value;
	}

	inline static int32_t get_offset_of_tmin_2() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___tmin_2)); }
	inline int32_t get_tmin_2() const { return ___tmin_2; }
	inline int32_t* get_address_of_tmin_2() { return &___tmin_2; }
	inline void set_tmin_2(int32_t value)
	{
		___tmin_2 = value;
	}

	inline static int32_t get_offset_of_tmax_3() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___tmax_3)); }
	inline int32_t get_tmax_3() const { return ___tmax_3; }
	inline int32_t* get_address_of_tmax_3() { return &___tmax_3; }
	inline void set_tmax_3(int32_t value)
	{
		___tmax_3 = value;
	}

	inline static int32_t get_offset_of_skew_4() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___skew_4)); }
	inline int32_t get_skew_4() const { return ___skew_4; }
	inline int32_t* get_address_of_skew_4() { return &___skew_4; }
	inline void set_skew_4(int32_t value)
	{
		___skew_4 = value;
	}

	inline static int32_t get_offset_of_damp_5() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___damp_5)); }
	inline int32_t get_damp_5() const { return ___damp_5; }
	inline int32_t* get_address_of_damp_5() { return &___damp_5; }
	inline void set_damp_5(int32_t value)
	{
		___damp_5 = value;
	}

	inline static int32_t get_offset_of_initial_bias_6() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___initial_bias_6)); }
	inline int32_t get_initial_bias_6() const { return ___initial_bias_6; }
	inline int32_t* get_address_of_initial_bias_6() { return &___initial_bias_6; }
	inline void set_initial_bias_6(int32_t value)
	{
		___initial_bias_6 = value;
	}

	inline static int32_t get_offset_of_initial_n_7() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___initial_n_7)); }
	inline int32_t get_initial_n_7() const { return ___initial_n_7; }
	inline int32_t* get_address_of_initial_n_7() { return &___initial_n_7; }
	inline void set_initial_n_7(int32_t value)
	{
		___initial_n_7 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // METHODBASE_T_H
#ifndef ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#define ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
=======
#endif // BOOTSTRING_T3302426383_H
#ifndef REGIONINFO_T1090270226_H
#define REGIONINFO_T1090270226_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifndef CONFIGUREDTASKAWAITER_TF1AAA16B8A1250CA037E32157A3424CD2BA47874_H
#define CONFIGUREDTASKAWAITER_TF1AAA16B8A1250CA037E32157A3424CD2BA47874_H
=======
// System.Globalization.RegionInfo
struct  RegionInfo_t1090270226  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.RegionInfo::regionId
	int32_t ___regionId_1;
	// System.String System.Globalization.RegionInfo::iso2Name
	String_t* ___iso2Name_2;
	// System.String System.Globalization.RegionInfo::iso3Name
	String_t* ___iso3Name_3;
	// System.String System.Globalization.RegionInfo::win3Name
	String_t* ___win3Name_4;
	// System.String System.Globalization.RegionInfo::englishName
	String_t* ___englishName_5;
	// System.String System.Globalization.RegionInfo::nativeName
	String_t* ___nativeName_6;
	// System.String System.Globalization.RegionInfo::currencySymbol
	String_t* ___currencySymbol_7;
	// System.String System.Globalization.RegionInfo::isoCurrencySymbol
	String_t* ___isoCurrencySymbol_8;
	// System.String System.Globalization.RegionInfo::currencyEnglishName
	String_t* ___currencyEnglishName_9;
	// System.String System.Globalization.RegionInfo::currencyNativeName
	String_t* ___currencyNativeName_10;

public:
	inline static int32_t get_offset_of_regionId_1() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___regionId_1)); }
	inline int32_t get_regionId_1() const { return ___regionId_1; }
	inline int32_t* get_address_of_regionId_1() { return &___regionId_1; }
	inline void set_regionId_1(int32_t value)
	{
		___regionId_1 = value;
	}

	inline static int32_t get_offset_of_iso2Name_2() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___iso2Name_2)); }
	inline String_t* get_iso2Name_2() const { return ___iso2Name_2; }
	inline String_t** get_address_of_iso2Name_2() { return &___iso2Name_2; }
	inline void set_iso2Name_2(String_t* value)
	{
		___iso2Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___iso2Name_2), value);
	}

	inline static int32_t get_offset_of_iso3Name_3() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___iso3Name_3)); }
	inline String_t* get_iso3Name_3() const { return ___iso3Name_3; }
	inline String_t** get_address_of_iso3Name_3() { return &___iso3Name_3; }
	inline void set_iso3Name_3(String_t* value)
	{
		___iso3Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___iso3Name_3), value);
	}

	inline static int32_t get_offset_of_win3Name_4() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___win3Name_4)); }
	inline String_t* get_win3Name_4() const { return ___win3Name_4; }
	inline String_t** get_address_of_win3Name_4() { return &___win3Name_4; }
	inline void set_win3Name_4(String_t* value)
	{
		___win3Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___win3Name_4), value);
	}

	inline static int32_t get_offset_of_englishName_5() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___englishName_5)); }
	inline String_t* get_englishName_5() const { return ___englishName_5; }
	inline String_t** get_address_of_englishName_5() { return &___englishName_5; }
	inline void set_englishName_5(String_t* value)
	{
		___englishName_5 = value;
		Il2CppCodeGenWriteBarrier((&___englishName_5), value);
	}

	inline static int32_t get_offset_of_nativeName_6() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___nativeName_6)); }
	inline String_t* get_nativeName_6() const { return ___nativeName_6; }
	inline String_t** get_address_of_nativeName_6() { return &___nativeName_6; }
	inline void set_nativeName_6(String_t* value)
	{
		___nativeName_6 = value;
		Il2CppCodeGenWriteBarrier((&___nativeName_6), value);
	}

	inline static int32_t get_offset_of_currencySymbol_7() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___currencySymbol_7)); }
	inline String_t* get_currencySymbol_7() const { return ___currencySymbol_7; }
	inline String_t** get_address_of_currencySymbol_7() { return &___currencySymbol_7; }
	inline void set_currencySymbol_7(String_t* value)
	{
		___currencySymbol_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_7), value);
	}

	inline static int32_t get_offset_of_isoCurrencySymbol_8() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___isoCurrencySymbol_8)); }
	inline String_t* get_isoCurrencySymbol_8() const { return ___isoCurrencySymbol_8; }
	inline String_t** get_address_of_isoCurrencySymbol_8() { return &___isoCurrencySymbol_8; }
	inline void set_isoCurrencySymbol_8(String_t* value)
	{
		___isoCurrencySymbol_8 = value;
		Il2CppCodeGenWriteBarrier((&___isoCurrencySymbol_8), value);
	}

	inline static int32_t get_offset_of_currencyEnglishName_9() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___currencyEnglishName_9)); }
	inline String_t* get_currencyEnglishName_9() const { return ___currencyEnglishName_9; }
	inline String_t** get_address_of_currencyEnglishName_9() { return &___currencyEnglishName_9; }
	inline void set_currencyEnglishName_9(String_t* value)
	{
		___currencyEnglishName_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyEnglishName_9), value);
	}

	inline static int32_t get_offset_of_currencyNativeName_10() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226, ___currencyNativeName_10)); }
	inline String_t* get_currencyNativeName_10() const { return ___currencyNativeName_10; }
	inline String_t** get_address_of_currencyNativeName_10() { return &___currencyNativeName_10; }
	inline void set_currencyNativeName_10(String_t* value)
	{
		___currencyNativeName_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencyNativeName_10), value);
	}
};

struct RegionInfo_t1090270226_StaticFields
{
public:
	// System.Globalization.RegionInfo System.Globalization.RegionInfo::currentRegion
	RegionInfo_t1090270226 * ___currentRegion_0;

public:
	inline static int32_t get_offset_of_currentRegion_0() { return static_cast<int32_t>(offsetof(RegionInfo_t1090270226_StaticFields, ___currentRegion_0)); }
	inline RegionInfo_t1090270226 * get_currentRegion_0() const { return ___currentRegion_0; }
	inline RegionInfo_t1090270226 ** get_address_of_currentRegion_0() { return &___currentRegion_0; }
	inline void set_currentRegion_0(RegionInfo_t1090270226 * value)
	{
		___currentRegion_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentRegion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.RegionInfo
struct RegionInfo_t1090270226_marshaled_pinvoke
{
	int32_t ___regionId_1;
	char* ___iso2Name_2;
	char* ___iso3Name_3;
	char* ___win3Name_4;
	char* ___englishName_5;
	char* ___nativeName_6;
	char* ___currencySymbol_7;
	char* ___isoCurrencySymbol_8;
	char* ___currencyEnglishName_9;
	char* ___currencyNativeName_10;
};
// Native definition for COM marshalling of System.Globalization.RegionInfo
struct RegionInfo_t1090270226_marshaled_com
{
	int32_t ___regionId_1;
	Il2CppChar* ___iso2Name_2;
	Il2CppChar* ___iso3Name_3;
	Il2CppChar* ___win3Name_4;
	Il2CppChar* ___englishName_5;
	Il2CppChar* ___nativeName_6;
	Il2CppChar* ___currencySymbol_7;
	Il2CppChar* ___isoCurrencySymbol_8;
	Il2CppChar* ___currencyEnglishName_9;
	Il2CppChar* ___currencyNativeName_10;
};
#endif // REGIONINFO_T1090270226_H
#ifndef TEXTINFOTOUPPERDATA_T2556594888_H
#define TEXTINFOTOUPPERDATA_T2556594888_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
=======
// System.Globalization.TextInfoToUpperData
struct  TextInfoToUpperData_t2556594888  : public RuntimeObject
{
public:

public:
};

struct TextInfoToUpperData_t2556594888_StaticFields
{
public:
	// System.Char[] System.Globalization.TextInfoToUpperData::range_00e0_0586
	CharU5BU5D_t3528271667* ___range_00e0_0586_0;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_1e01_1ff3
	CharU5BU5D_t3528271667* ___range_1e01_1ff3_1;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_2170_2184
	CharU5BU5D_t3528271667* ___range_2170_2184_2;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_24d0_24e9
	CharU5BU5D_t3528271667* ___range_24d0_24e9_3;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_2c30_2ce3
	CharU5BU5D_t3528271667* ___range_2c30_2ce3_4;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_2d00_2d25
	CharU5BU5D_t3528271667* ___range_2d00_2d25_5;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_a641_a697
	CharU5BU5D_t3528271667* ___range_a641_a697_6;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_a723_a78c
	CharU5BU5D_t3528271667* ___range_a723_a78c_7;

public:
	inline static int32_t get_offset_of_range_00e0_0586_0() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_00e0_0586_0)); }
	inline CharU5BU5D_t3528271667* get_range_00e0_0586_0() const { return ___range_00e0_0586_0; }
	inline CharU5BU5D_t3528271667** get_address_of_range_00e0_0586_0() { return &___range_00e0_0586_0; }
	inline void set_range_00e0_0586_0(CharU5BU5D_t3528271667* value)
	{
		___range_00e0_0586_0 = value;
		Il2CppCodeGenWriteBarrier((&___range_00e0_0586_0), value);
	}

	inline static int32_t get_offset_of_range_1e01_1ff3_1() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_1e01_1ff3_1)); }
	inline CharU5BU5D_t3528271667* get_range_1e01_1ff3_1() const { return ___range_1e01_1ff3_1; }
	inline CharU5BU5D_t3528271667** get_address_of_range_1e01_1ff3_1() { return &___range_1e01_1ff3_1; }
	inline void set_range_1e01_1ff3_1(CharU5BU5D_t3528271667* value)
	{
		___range_1e01_1ff3_1 = value;
		Il2CppCodeGenWriteBarrier((&___range_1e01_1ff3_1), value);
	}

	inline static int32_t get_offset_of_range_2170_2184_2() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_2170_2184_2)); }
	inline CharU5BU5D_t3528271667* get_range_2170_2184_2() const { return ___range_2170_2184_2; }
	inline CharU5BU5D_t3528271667** get_address_of_range_2170_2184_2() { return &___range_2170_2184_2; }
	inline void set_range_2170_2184_2(CharU5BU5D_t3528271667* value)
	{
		___range_2170_2184_2 = value;
		Il2CppCodeGenWriteBarrier((&___range_2170_2184_2), value);
	}

	inline static int32_t get_offset_of_range_24d0_24e9_3() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_24d0_24e9_3)); }
	inline CharU5BU5D_t3528271667* get_range_24d0_24e9_3() const { return ___range_24d0_24e9_3; }
	inline CharU5BU5D_t3528271667** get_address_of_range_24d0_24e9_3() { return &___range_24d0_24e9_3; }
	inline void set_range_24d0_24e9_3(CharU5BU5D_t3528271667* value)
	{
		___range_24d0_24e9_3 = value;
		Il2CppCodeGenWriteBarrier((&___range_24d0_24e9_3), value);
	}

	inline static int32_t get_offset_of_range_2c30_2ce3_4() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_2c30_2ce3_4)); }
	inline CharU5BU5D_t3528271667* get_range_2c30_2ce3_4() const { return ___range_2c30_2ce3_4; }
	inline CharU5BU5D_t3528271667** get_address_of_range_2c30_2ce3_4() { return &___range_2c30_2ce3_4; }
	inline void set_range_2c30_2ce3_4(CharU5BU5D_t3528271667* value)
	{
		___range_2c30_2ce3_4 = value;
		Il2CppCodeGenWriteBarrier((&___range_2c30_2ce3_4), value);
	}

	inline static int32_t get_offset_of_range_2d00_2d25_5() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_2d00_2d25_5)); }
	inline CharU5BU5D_t3528271667* get_range_2d00_2d25_5() const { return ___range_2d00_2d25_5; }
	inline CharU5BU5D_t3528271667** get_address_of_range_2d00_2d25_5() { return &___range_2d00_2d25_5; }
	inline void set_range_2d00_2d25_5(CharU5BU5D_t3528271667* value)
	{
		___range_2d00_2d25_5 = value;
		Il2CppCodeGenWriteBarrier((&___range_2d00_2d25_5), value);
	}

	inline static int32_t get_offset_of_range_a641_a697_6() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_a641_a697_6)); }
	inline CharU5BU5D_t3528271667* get_range_a641_a697_6() const { return ___range_a641_a697_6; }
	inline CharU5BU5D_t3528271667** get_address_of_range_a641_a697_6() { return &___range_a641_a697_6; }
	inline void set_range_a641_a697_6(CharU5BU5D_t3528271667* value)
	{
		___range_a641_a697_6 = value;
		Il2CppCodeGenWriteBarrier((&___range_a641_a697_6), value);
	}

	inline static int32_t get_offset_of_range_a723_a78c_7() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t2556594888_StaticFields, ___range_a723_a78c_7)); }
	inline CharU5BU5D_t3528271667* get_range_a723_a78c_7() const { return ___range_a723_a78c_7; }
	inline CharU5BU5D_t3528271667** get_address_of_range_a723_a78c_7() { return &___range_a723_a78c_7; }
	inline void set_range_a723_a78c_7(CharU5BU5D_t3528271667* value)
	{
		___range_a723_a78c_7 = value;
		Il2CppCodeGenWriteBarrier((&___range_a723_a78c_7), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_TF1AAA16B8A1250CA037E32157A3424CD2BA47874_H
#ifndef CONFIGUREDTASKAWAITER_T18D0589F789FFE82A30A223888FB7C5BED32C63E_H
#define CONFIGUREDTASKAWAITER_T18D0589F789FFE82A30A223888FB7C5BED32C63E_H
=======
#endif // TEXTINFOTOUPPERDATA_T2556594888_H
#ifndef CODEPAGEDATAITEM_T2285235057_H
#define CODEPAGEDATAITEM_T2285235057_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E, ___m_task_0)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
=======
// System.Globalization.CodePageDataItem
struct  CodePageDataItem_t2285235057  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CodePageDataItem::m_dataIndex
	int32_t ___m_dataIndex_0;
	// System.Int32 System.Globalization.CodePageDataItem::m_uiFamilyCodePage
	int32_t ___m_uiFamilyCodePage_1;
	// System.String System.Globalization.CodePageDataItem::m_webName
	String_t* ___m_webName_2;
	// System.String System.Globalization.CodePageDataItem::m_headerName
	String_t* ___m_headerName_3;
	// System.String System.Globalization.CodePageDataItem::m_bodyName
	String_t* ___m_bodyName_4;
	// System.UInt32 System.Globalization.CodePageDataItem::m_flags
	uint32_t ___m_flags_5;

public:
	inline static int32_t get_offset_of_m_dataIndex_0() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_dataIndex_0)); }
	inline int32_t get_m_dataIndex_0() const { return ___m_dataIndex_0; }
	inline int32_t* get_address_of_m_dataIndex_0() { return &___m_dataIndex_0; }
	inline void set_m_dataIndex_0(int32_t value)
	{
		___m_dataIndex_0 = value;
	}

	inline static int32_t get_offset_of_m_uiFamilyCodePage_1() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_uiFamilyCodePage_1)); }
	inline int32_t get_m_uiFamilyCodePage_1() const { return ___m_uiFamilyCodePage_1; }
	inline int32_t* get_address_of_m_uiFamilyCodePage_1() { return &___m_uiFamilyCodePage_1; }
	inline void set_m_uiFamilyCodePage_1(int32_t value)
	{
		___m_uiFamilyCodePage_1 = value;
	}

	inline static int32_t get_offset_of_m_webName_2() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_webName_2)); }
	inline String_t* get_m_webName_2() const { return ___m_webName_2; }
	inline String_t** get_address_of_m_webName_2() { return &___m_webName_2; }
	inline void set_m_webName_2(String_t* value)
	{
		___m_webName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_webName_2), value);
	}

	inline static int32_t get_offset_of_m_headerName_3() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_headerName_3)); }
	inline String_t* get_m_headerName_3() const { return ___m_headerName_3; }
	inline String_t** get_address_of_m_headerName_3() { return &___m_headerName_3; }
	inline void set_m_headerName_3(String_t* value)
	{
		___m_headerName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_headerName_3), value);
	}

	inline static int32_t get_offset_of_m_bodyName_4() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_bodyName_4)); }
	inline String_t* get_m_bodyName_4() const { return ___m_bodyName_4; }
	inline String_t** get_address_of_m_bodyName_4() { return &___m_bodyName_4; }
	inline void set_m_bodyName_4(String_t* value)
	{
		___m_bodyName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_bodyName_4), value);
	}

	inline static int32_t get_offset_of_m_flags_5() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_flags_5)); }
	inline uint32_t get_m_flags_5() const { return ___m_flags_5; }
	inline uint32_t* get_address_of_m_flags_5() { return &___m_flags_5; }
	inline void set_m_flags_5(uint32_t value)
	{
		___m_flags_5 = value;
	}
};

struct CodePageDataItem_t2285235057_StaticFields
{
public:
	// System.Char[] System.Globalization.CodePageDataItem::sep
	CharU5BU5D_t3528271667* ___sep_6;

public:
	inline static int32_t get_offset_of_sep_6() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057_StaticFields, ___sep_6)); }
	inline CharU5BU5D_t3528271667* get_sep_6() const { return ___sep_6; }
	inline CharU5BU5D_t3528271667** get_address_of_sep_6() { return &___sep_6; }
	inline void set_sep_6(CharU5BU5D_t3528271667* value)
	{
		___sep_6 = value;
		Il2CppCodeGenWriteBarrier((&___sep_6), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CONFIGUREDTASKAWAITER_T18D0589F789FFE82A30A223888FB7C5BED32C63E_H
#ifndef CONFIGUREDTASKAWAITER_T7DF2E84988582301369783F2ECA65B4F26D5A740_H
#define CONFIGUREDTASKAWAITER_T7DF2E84988582301369783F2ECA65B4F26D5A740_H
=======
#endif // CODEPAGEDATAITEM_T2285235057_H
#ifndef COMPAREINFO_T1092934962_H
#define COMPAREINFO_T1092934962_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Nullable`1<System.Int32>>
struct  ConfiguredTaskAwaiter_t7DF2E84988582301369783F2ECA65B4F26D5A740 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t8906695C9865566AA79419735634FF27AC74506E * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t7DF2E84988582301369783F2ECA65B4F26D5A740, ___m_task_0)); }
	inline Task_1_t8906695C9865566AA79419735634FF27AC74506E * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t8906695C9865566AA79419735634FF27AC74506E ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t8906695C9865566AA79419735634FF27AC74506E * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t7DF2E84988582301369783F2ECA65B4F26D5A740, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
=======
// System.Globalization.CompareInfo
struct  CompareInfo_t1092934962  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2877834729 * ___collator_0;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// System.String System.Globalization.CompareInfo::m_sortName
	String_t* ___m_sortName_5;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_6;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_7;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_t3332565609 * ___m_SortVersion_8;

public:
	inline static int32_t get_offset_of_collator_0() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___collator_0)); }
	inline SimpleCollator_t2877834729 * get_collator_0() const { return ___collator_0; }
	inline SimpleCollator_t2877834729 ** get_address_of_collator_0() { return &___collator_0; }
	inline void set_collator_0(SimpleCollator_t2877834729 * value)
	{
		___collator_0 = value;
		Il2CppCodeGenWriteBarrier((&___collator_0), value);
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_m_sortName_5() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_sortName_5)); }
	inline String_t* get_m_sortName_5() const { return ___m_sortName_5; }
	inline String_t** get_address_of_m_sortName_5() { return &___m_sortName_5; }
	inline void set_m_sortName_5(String_t* value)
	{
		___m_sortName_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_sortName_5), value);
	}

	inline static int32_t get_offset_of_win32LCID_6() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___win32LCID_6)); }
	inline int32_t get_win32LCID_6() const { return ___win32LCID_6; }
	inline int32_t* get_address_of_win32LCID_6() { return &___win32LCID_6; }
	inline void set_win32LCID_6(int32_t value)
	{
		___win32LCID_6 = value;
	}

	inline static int32_t get_offset_of_culture_7() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___culture_7)); }
	inline int32_t get_culture_7() const { return ___culture_7; }
	inline int32_t* get_address_of_culture_7() { return &___culture_7; }
	inline void set_culture_7(int32_t value)
	{
		___culture_7 = value;
	}

	inline static int32_t get_offset_of_m_SortVersion_8() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_SortVersion_8)); }
	inline SortVersion_t3332565609 * get_m_SortVersion_8() const { return ___m_SortVersion_8; }
	inline SortVersion_t3332565609 ** get_address_of_m_SortVersion_8() { return &___m_SortVersion_8; }
	inline void set_m_SortVersion_8(SortVersion_t3332565609 * value)
	{
		___m_SortVersion_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_SortVersion_8), value);
	}
};

struct CompareInfo_t1092934962_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_t2663091028 * ___collators_1;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_2;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_3;

public:
	inline static int32_t get_offset_of_collators_1() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___collators_1)); }
	inline Dictionary_2_t2663091028 * get_collators_1() const { return ___collators_1; }
	inline Dictionary_2_t2663091028 ** get_address_of_collators_1() { return &___collators_1; }
	inline void set_collators_1(Dictionary_2_t2663091028 * value)
	{
		___collators_1 = value;
		Il2CppCodeGenWriteBarrier((&___collators_1), value);
	}

	inline static int32_t get_offset_of_managedCollation_2() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___managedCollation_2)); }
	inline bool get_managedCollation_2() const { return ___managedCollation_2; }
	inline bool* get_address_of_managedCollation_2() { return &___managedCollation_2; }
	inline void set_managedCollation_2(bool value)
	{
		___managedCollation_2 = value;
	}

	inline static int32_t get_offset_of_managedCollationChecked_3() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___managedCollationChecked_3)); }
	inline bool get_managedCollationChecked_3() const { return ___managedCollationChecked_3; }
	inline bool* get_address_of_managedCollationChecked_3() { return &___managedCollationChecked_3; }
	inline void set_managedCollationChecked_3(bool value)
	{
		___managedCollationChecked_3 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CONFIGUREDTASKAWAITER_T7DF2E84988582301369783F2ECA65B4F26D5A740_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
=======
#endif // COMPAREINFO_T1092934962_H
#ifndef RUNTIMECLASSHANDLE_T4196268768_H
#define RUNTIMECLASSHANDLE_T4196268768_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
=======
// Mono.RuntimeClassHandle
struct  RuntimeClassHandle_t4196268768 
{
public:
	// Mono.RuntimeStructs/MonoClass* Mono.RuntimeClassHandle::value
	MonoClass_t3449698282 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeClassHandle_t4196268768, ___value_0)); }
	inline MonoClass_t3449698282 * get_value_0() const { return ___value_0; }
	inline MonoClass_t3449698282 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(MonoClass_t3449698282 * value)
	{
		___value_0 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#define CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
=======
// Native definition for P/Invoke marshalling of Mono.RuntimeClassHandle
struct RuntimeClassHandle_t4196268768_marshaled_pinvoke
{
	MonoClass_t3449698282 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeClassHandle
struct RuntimeClassHandle_t4196268768_marshaled_com
{
	MonoClass_t3449698282 * ___value_0;
};
#endif // RUNTIMECLASSHANDLE_T4196268768_H
#ifndef INTERNALENCODINGDATAITEM_T3158859817_H
#define INTERNALENCODINGDATAITEM_T3158859817_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
=======
// System.Globalization.InternalEncodingDataItem
struct  InternalEncodingDataItem_t3158859817 
{
public:
	// System.String System.Globalization.InternalEncodingDataItem::webName
	String_t* ___webName_0;
	// System.UInt16 System.Globalization.InternalEncodingDataItem::codePage
	uint16_t ___codePage_1;

public:
	inline static int32_t get_offset_of_webName_0() { return static_cast<int32_t>(offsetof(InternalEncodingDataItem_t3158859817, ___webName_0)); }
	inline String_t* get_webName_0() const { return ___webName_0; }
	inline String_t** get_address_of_webName_0() { return &___webName_0; }
	inline void set_webName_0(String_t* value)
	{
		___webName_0 = value;
		Il2CppCodeGenWriteBarrier((&___webName_0), value);
	}

	inline static int32_t get_offset_of_codePage_1() { return static_cast<int32_t>(offsetof(InternalEncodingDataItem_t3158859817, ___codePage_1)); }
	inline uint16_t get_codePage_1() const { return ___codePage_1; }
	inline uint16_t* get_address_of_codePage_1() { return &___codePage_1; }
	inline void set_codePage_1(uint16_t value)
	{
		___codePage_1 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.InternalEncodingDataItem
struct InternalEncodingDataItem_t3158859817_marshaled_pinvoke
{
	char* ___webName_0;
	uint16_t ___codePage_1;
};
// Native definition for COM marshalling of System.Globalization.InternalEncodingDataItem
struct InternalEncodingDataItem_t3158859817_marshaled_com
{
	Il2CppChar* ___webName_0;
	uint16_t ___codePage_1;
};
#endif // INTERNALENCODINGDATAITEM_T3158859817_H
#ifndef RUNTIMEREMOTECLASSHANDLE_T2479637696_H
#define RUNTIMEREMOTECLASSHANDLE_T2479637696_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
=======
// Mono.RuntimeRemoteClassHandle
struct  RuntimeRemoteClassHandle_t2479637696 
{
public:
	// Mono.RuntimeStructs/RemoteClass* Mono.RuntimeRemoteClassHandle::value
	RemoteClass_t4006407480 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeRemoteClassHandle_t2479637696, ___value_0)); }
	inline RemoteClass_t4006407480 * get_value_0() const { return ___value_0; }
	inline RemoteClass_t4006407480 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RemoteClass_t4006407480 * value)
	{
		___value_0 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
=======
// Native definition for P/Invoke marshalling of Mono.RuntimeRemoteClassHandle
struct RuntimeRemoteClassHandle_t2479637696_marshaled_pinvoke
{
	RemoteClass_t4006407480 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeRemoteClassHandle
struct RuntimeRemoteClassHandle_t2479637696_marshaled_com
{
	RemoteClass_t4006407480 * ___value_0;
};
#endif // RUNTIMEREMOTECLASSHANDLE_T2479637696_H
#ifndef FORMATLITERALS_T1376140638_H
#define FORMATLITERALS_T1376140638_H
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
// System.Globalization.TimeSpanFormat/FormatLiterals
struct  FormatLiterals_t1376140638 
{
public:
	// System.String System.Globalization.TimeSpanFormat/FormatLiterals::AppCompatLiteral
	String_t* ___AppCompatLiteral_0;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::dd
	int32_t ___dd_1;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::hh
	int32_t ___hh_2;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::mm
	int32_t ___mm_3;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::ss
	int32_t ___ss_4;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::ff
	int32_t ___ff_5;
	// System.String[] System.Globalization.TimeSpanFormat/FormatLiterals::literals
	StringU5BU5D_t1281789340* ___literals_6;

public:
	inline static int32_t get_offset_of_AppCompatLiteral_0() { return static_cast<int32_t>(offsetof(FormatLiterals_t1376140638, ___AppCompatLiteral_0)); }
	inline String_t* get_AppCompatLiteral_0() const { return ___AppCompatLiteral_0; }
	inline String_t** get_address_of_AppCompatLiteral_0() { return &___AppCompatLiteral_0; }
	inline void set_AppCompatLiteral_0(String_t* value)
	{
		___AppCompatLiteral_0 = value;
		Il2CppCodeGenWriteBarrier((&___AppCompatLiteral_0), value);
	}

	inline static int32_t get_offset_of_dd_1() { return static_cast<int32_t>(offsetof(FormatLiterals_t1376140638, ___dd_1)); }
	inline int32_t get_dd_1() const { return ___dd_1; }
	inline int32_t* get_address_of_dd_1() { return &___dd_1; }
	inline void set_dd_1(int32_t value)
	{
		___dd_1 = value;
	}

	inline static int32_t get_offset_of_hh_2() { return static_cast<int32_t>(offsetof(FormatLiterals_t1376140638, ___hh_2)); }
	inline int32_t get_hh_2() const { return ___hh_2; }
	inline int32_t* get_address_of_hh_2() { return &___hh_2; }
	inline void set_hh_2(int32_t value)
	{
		___hh_2 = value;
	}

	inline static int32_t get_offset_of_mm_3() { return static_cast<int32_t>(offsetof(FormatLiterals_t1376140638, ___mm_3)); }
	inline int32_t get_mm_3() const { return ___mm_3; }
	inline int32_t* get_address_of_mm_3() { return &___mm_3; }
	inline void set_mm_3(int32_t value)
	{
		___mm_3 = value;
	}

	inline static int32_t get_offset_of_ss_4() { return static_cast<int32_t>(offsetof(FormatLiterals_t1376140638, ___ss_4)); }
	inline int32_t get_ss_4() const { return ___ss_4; }
	inline int32_t* get_address_of_ss_4() { return &___ss_4; }
	inline void set_ss_4(int32_t value)
	{
		___ss_4 = value;
	}

	inline static int32_t get_offset_of_ff_5() { return static_cast<int32_t>(offsetof(FormatLiterals_t1376140638, ___ff_5)); }
	inline int32_t get_ff_5() const { return ___ff_5; }
	inline int32_t* get_address_of_ff_5() { return &___ff_5; }
	inline void set_ff_5(int32_t value)
	{
		___ff_5 = value;
	}

	inline static int32_t get_offset_of_literals_6() { return static_cast<int32_t>(offsetof(FormatLiterals_t1376140638, ___literals_6)); }
	inline StringU5BU5D_t1281789340* get_literals_6() const { return ___literals_6; }
	inline StringU5BU5D_t1281789340** get_address_of_literals_6() { return &___literals_6; }
	inline void set_literals_6(StringU5BU5D_t1281789340* value)
	{
		___literals_6 = value;
		Il2CppCodeGenWriteBarrier((&___literals_6), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef __IL2CPPCOMDELEGATE_T0A30496F74225C39A0CF7FADB94934C0536120FD_H
#define __IL2CPPCOMDELEGATE_T0A30496F74225C39A0CF7FADB94934C0536120FD_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanFormat/FormatLiterals
struct FormatLiterals_t1376140638_marshaled_pinvoke
{
	char* ___AppCompatLiteral_0;
	int32_t ___dd_1;
	int32_t ___hh_2;
	int32_t ___mm_3;
	int32_t ___ss_4;
	int32_t ___ff_5;
	char** ___literals_6;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanFormat/FormatLiterals
struct FormatLiterals_t1376140638_marshaled_com
{
	Il2CppChar* ___AppCompatLiteral_0;
	int32_t ___dd_1;
	int32_t ___hh_2;
	int32_t ___mm_3;
	int32_t ___ss_4;
	int32_t ___ff_5;
	Il2CppChar** ___literals_6;
};
#endif // FORMATLITERALS_T1376140638_H
#ifndef RUNTIMEGENERICPARAMINFOHANDLE_T3649234556_H
#define RUNTIMEGENERICPARAMINFOHANDLE_T3649234556_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t0A30496F74225C39A0CF7FADB94934C0536120FD  : public Il2CppComObject
{
public:

public:
=======
// Mono.RuntimeGenericParamInfoHandle
struct  RuntimeGenericParamInfoHandle_t3649234556 
{
public:
	// Mono.RuntimeStructs/GenericParamInfo* Mono.RuntimeGenericParamInfoHandle::value
	GenericParamInfo_t1825140006 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeGenericParamInfoHandle_t3649234556, ___value_0)); }
	inline GenericParamInfo_t1825140006 * get_value_0() const { return ___value_0; }
	inline GenericParamInfo_t1825140006 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(GenericParamInfo_t1825140006 * value)
	{
		___value_0 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // __IL2CPPCOMDELEGATE_T0A30496F74225C39A0CF7FADB94934C0536120FD_H
#ifndef ASYNCOPERATIONSTATUS_T355A724E020AF86BA40298A468EB739EA41B9E27_H
#define ASYNCOPERATIONSTATUS_T355A724E020AF86BA40298A468EB739EA41B9E27_H
=======
// Native definition for P/Invoke marshalling of Mono.RuntimeGenericParamInfoHandle
struct RuntimeGenericParamInfoHandle_t3649234556_marshaled_pinvoke
{
	GenericParamInfo_t1825140006 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeGenericParamInfoHandle
struct RuntimeGenericParamInfoHandle_t3649234556_marshaled_com
{
	GenericParamInfo_t1825140006 * ___value_0;
};
#endif // RUNTIMEGENERICPARAMINFOHANDLE_T3649234556_H
#ifndef RUNTIMEGPTRARRAYHANDLE_T2690631865_H
#define RUNTIMEGPTRARRAYHANDLE_T2690631865_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.AsyncOperationStatus
struct  AsyncOperationStatus_t355A724E020AF86BA40298A468EB739EA41B9E27 
{
public:
	// System.Int32 Mono.Net.Security.AsyncOperationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncOperationStatus_t355A724E020AF86BA40298A468EB739EA41B9E27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
=======
// Mono.RuntimeGPtrArrayHandle
struct  RuntimeGPtrArrayHandle_t2690631865 
{
public:
	// Mono.RuntimeStructs/GPtrArray* Mono.RuntimeGPtrArrayHandle::value
	GPtrArray_t1503373745 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeGPtrArrayHandle_t2690631865, ___value_0)); }
	inline GPtrArray_t1503373745 * get_value_0() const { return ___value_0; }
	inline GPtrArray_t1503373745 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(GPtrArray_t1503373745 * value)
	{
		___value_0 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ASYNCOPERATIONSTATUS_T355A724E020AF86BA40298A468EB739EA41B9E27_H
#ifndef ASYNCREADREQUEST_T10B0459470C14DC065B5AD60AF378AB78CD138C1_H
#define ASYNCREADREQUEST_T10B0459470C14DC065B5AD60AF378AB78CD138C1_H
=======
// Native definition for P/Invoke marshalling of Mono.RuntimeGPtrArrayHandle
struct RuntimeGPtrArrayHandle_t2690631865_marshaled_pinvoke
{
	GPtrArray_t1503373745 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeGPtrArrayHandle
struct RuntimeGPtrArrayHandle_t2690631865_marshaled_com
{
	GPtrArray_t1503373745 * ___value_0;
};
#endif // RUNTIMEGPTRARRAYHANDLE_T2690631865_H
#ifndef INTERNALCODEPAGEDATAITEM_T2575532933_H
#define INTERNALCODEPAGEDATAITEM_T2575532933_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.AsyncReadRequest
struct  AsyncReadRequest_t10B0459470C14DC065B5AD60AF378AB78CD138C1  : public AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F
{
public:

public:
=======
// System.Globalization.InternalCodePageDataItem
struct  InternalCodePageDataItem_t2575532933 
{
public:
	// System.UInt16 System.Globalization.InternalCodePageDataItem::codePage
	uint16_t ___codePage_0;
	// System.UInt16 System.Globalization.InternalCodePageDataItem::uiFamilyCodePage
	uint16_t ___uiFamilyCodePage_1;
	// System.UInt32 System.Globalization.InternalCodePageDataItem::flags
	uint32_t ___flags_2;
	// System.String System.Globalization.InternalCodePageDataItem::Names
	String_t* ___Names_3;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2575532933, ___codePage_0)); }
	inline uint16_t get_codePage_0() const { return ___codePage_0; }
	inline uint16_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(uint16_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_uiFamilyCodePage_1() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2575532933, ___uiFamilyCodePage_1)); }
	inline uint16_t get_uiFamilyCodePage_1() const { return ___uiFamilyCodePage_1; }
	inline uint16_t* get_address_of_uiFamilyCodePage_1() { return &___uiFamilyCodePage_1; }
	inline void set_uiFamilyCodePage_1(uint16_t value)
	{
		___uiFamilyCodePage_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2575532933, ___flags_2)); }
	inline uint32_t get_flags_2() const { return ___flags_2; }
	inline uint32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(uint32_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_Names_3() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2575532933, ___Names_3)); }
	inline String_t* get_Names_3() const { return ___Names_3; }
	inline String_t** get_address_of_Names_3() { return &___Names_3; }
	inline void set_Names_3(String_t* value)
	{
		___Names_3 = value;
		Il2CppCodeGenWriteBarrier((&___Names_3), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ASYNCREADREQUEST_T10B0459470C14DC065B5AD60AF378AB78CD138C1_H
#ifndef ASYNCWRITEREQUEST_TFE4740D02401F295910B4006A8390590D5E2C27B_H
#define ASYNCWRITEREQUEST_TFE4740D02401F295910B4006A8390590D5E2C27B_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.InternalCodePageDataItem
struct InternalCodePageDataItem_t2575532933_marshaled_pinvoke
{
	uint16_t ___codePage_0;
	uint16_t ___uiFamilyCodePage_1;
	uint32_t ___flags_2;
	char* ___Names_3;
};
// Native definition for COM marshalling of System.Globalization.InternalCodePageDataItem
struct InternalCodePageDataItem_t2575532933_marshaled_com
{
	uint16_t ___codePage_0;
	uint16_t ___uiFamilyCodePage_1;
	uint32_t ___flags_2;
	Il2CppChar* ___Names_3;
};
#endif // INTERNALCODEPAGEDATAITEM_T2575532933_H
#ifndef TIMESPANTOKENIZER_T3293824704_H
#define TIMESPANTOKENIZER_T3293824704_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.AsyncWriteRequest
struct  AsyncWriteRequest_tFE4740D02401F295910B4006A8390590D5E2C27B  : public AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F
{
public:

public:
=======
// System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct  TimeSpanTokenizer_t3293824704 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanTokenizer::m_pos
	int32_t ___m_pos_0;
	// System.String System.Globalization.TimeSpanParse/TimeSpanTokenizer::m_value
	String_t* ___m_value_1;

public:
	inline static int32_t get_offset_of_m_pos_0() { return static_cast<int32_t>(offsetof(TimeSpanTokenizer_t3293824704, ___m_pos_0)); }
	inline int32_t get_m_pos_0() const { return ___m_pos_0; }
	inline int32_t* get_address_of_m_pos_0() { return &___m_pos_0; }
	inline void set_m_pos_0(int32_t value)
	{
		___m_pos_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(TimeSpanTokenizer_t3293824704, ___m_value_1)); }
	inline String_t* get_m_value_1() const { return ___m_value_1; }
	inline String_t** get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(String_t* value)
	{
		___m_value_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_value_1), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ASYNCWRITEREQUEST_TFE4740D02401F295910B4006A8390590D5E2C27B_H
#ifndef OPERATIONTYPE_T76DD3B06699CAF7714C8E801F9B1FBD9FCAF9ED0_H
#define OPERATIONTYPE_T76DD3B06699CAF7714C8E801F9B1FBD9FCAF9ED0_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct TimeSpanTokenizer_t3293824704_marshaled_pinvoke
{
	int32_t ___m_pos_0;
	char* ___m_value_1;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct TimeSpanTokenizer_t3293824704_marshaled_com
{
	int32_t ___m_pos_0;
	Il2CppChar* ___m_value_1;
};
#endif // TIMESPANTOKENIZER_T3293824704_H
#ifndef MONOCLASS_T3449698282_H
#define MONOCLASS_T3449698282_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.MobileAuthenticatedStream/OperationType
struct  OperationType_t76DD3B06699CAF7714C8E801F9B1FBD9FCAF9ED0 
{
public:
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream/OperationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationType_t76DD3B06699CAF7714C8E801F9B1FBD9FCAF9ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
=======
// Mono.RuntimeStructs/MonoClass
struct  MonoClass_t3449698282 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MonoClass_t3449698282__padding[1];
	};

public:
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // OPERATIONTYPE_T76DD3B06699CAF7714C8E801F9B1FBD9FCAF9ED0_H
#ifndef UNITYTLS_CIPHERSUITE_TA99DBE84EF3BB26740AEF7A5CC6DEA1227B5F9DC_H
#define UNITYTLS_CIPHERSUITE_TA99DBE84EF3BB26740AEF7A5CC6DEA1227B5F9DC_H
=======
#endif // MONOCLASS_T3449698282_H
#ifndef GPTRARRAY_T1503373745_H
#define GPTRARRAY_T1503373745_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_ciphersuite
struct  unitytls_ciphersuite_tA99DBE84EF3BB26740AEF7A5CC6DEA1227B5F9DC 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_ciphersuite::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_ciphersuite_tA99DBE84EF3BB26740AEF7A5CC6DEA1227B5F9DC, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
=======
// Mono.RuntimeStructs/GPtrArray
struct  GPtrArray_t1503373745 
{
public:
	// System.IntPtr* Mono.RuntimeStructs/GPtrArray::data
	intptr_t* ___data_0;
	// System.Int32 Mono.RuntimeStructs/GPtrArray::len
	int32_t ___len_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(GPtrArray_t1503373745, ___data_0)); }
	inline intptr_t* get_data_0() const { return ___data_0; }
	inline intptr_t** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(GPtrArray_t1503373745, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_CIPHERSUITE_TA99DBE84EF3BB26740AEF7A5CC6DEA1227B5F9DC_H
#ifndef UNITYTLS_ERROR_CODE_TA9272A71D51F7FE555C03185AE244FB01EAF998F_H
#define UNITYTLS_ERROR_CODE_TA9272A71D51F7FE555C03185AE244FB01EAF998F_H
=======
// Native definition for P/Invoke marshalling of Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t1503373745_marshaled_pinvoke
{
	intptr_t* ___data_0;
	int32_t ___len_1;
};
// Native definition for COM marshalling of Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t1503373745_marshaled_com
{
	intptr_t* ___data_0;
	int32_t ___len_1;
};
#endif // GPTRARRAY_T1503373745_H
#ifndef STRINGPARSER_T3469098761_H
#define STRINGPARSER_T3469098761_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_error_code
struct  unitytls_error_code_tA9272A71D51F7FE555C03185AE244FB01EAF998F 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_error_code::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_error_code_tA9272A71D51F7FE555C03185AE244FB01EAF998F, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
=======
// System.Globalization.TimeSpanParse/StringParser
struct  StringParser_t3469098761 
{
public:
	// System.String System.Globalization.TimeSpanParse/StringParser::str
	String_t* ___str_0;
	// System.Char System.Globalization.TimeSpanParse/StringParser::ch
	Il2CppChar ___ch_1;
	// System.Int32 System.Globalization.TimeSpanParse/StringParser::pos
	int32_t ___pos_2;
	// System.Int32 System.Globalization.TimeSpanParse/StringParser::len
	int32_t ___len_3;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(StringParser_t3469098761, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ch_1() { return static_cast<int32_t>(offsetof(StringParser_t3469098761, ___ch_1)); }
	inline Il2CppChar get_ch_1() const { return ___ch_1; }
	inline Il2CppChar* get_address_of_ch_1() { return &___ch_1; }
	inline void set_ch_1(Il2CppChar value)
	{
		___ch_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(StringParser_t3469098761, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_len_3() { return static_cast<int32_t>(offsetof(StringParser_t3469098761, ___len_3)); }
	inline int32_t get_len_3() const { return ___len_3; }
	inline int32_t* get_address_of_len_3() { return &___len_3; }
	inline void set_len_3(int32_t value)
	{
		___len_3 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_ERROR_CODE_TA9272A71D51F7FE555C03185AE244FB01EAF998F_H
#ifndef UNITYTLS_PROTOCOL_T4E7BF0D3D575EDD09EA7BF6593AAB40BBAC60DF8_H
#define UNITYTLS_PROTOCOL_T4E7BF0D3D575EDD09EA7BF6593AAB40BBAC60DF8_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/StringParser
struct StringParser_t3469098761_marshaled_pinvoke
{
	char* ___str_0;
	uint8_t ___ch_1;
	int32_t ___pos_2;
	int32_t ___len_3;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/StringParser
struct StringParser_t3469098761_marshaled_com
{
	Il2CppChar* ___str_0;
	uint8_t ___ch_1;
	int32_t ___pos_2;
	int32_t ___len_3;
};
#endif // STRINGPARSER_T3469098761_H
#ifndef U3CPUBLIC_KEY_TOKENU3EE__FIXEDBUFFER_T3250456253_H
#define U3CPUBLIC_KEY_TOKENU3EE__FIXEDBUFFER_T3250456253_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_protocol
struct  unitytls_protocol_t4E7BF0D3D575EDD09EA7BF6593AAB40BBAC60DF8 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_protocol::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_protocol_t4E7BF0D3D575EDD09EA7BF6593AAB40BBAC60DF8, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
=======
// Mono.MonoAssemblyName/<public_key_token>e__FixedBuffer
struct  U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253 
{
public:
	union
	{
		struct
		{
			// System.Byte Mono.MonoAssemblyName/<public_key_token>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253__padding[17];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_PROTOCOL_T4E7BF0D3D575EDD09EA7BF6593AAB40BBAC60DF8_H
#ifndef UNITYTLS_X509VERIFY_RESULT_T835FEA0265EFD70F0762B220C663474E03402278_H
#define UNITYTLS_X509VERIFY_RESULT_T835FEA0265EFD70F0762B220C663474E03402278_H
=======
#endif // U3CPUBLIC_KEY_TOKENU3EE__FIXEDBUFFER_T3250456253_H
#ifndef SECURITYPARSER_T4124480077_H
#define SECURITYPARSER_T4124480077_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_x509verify_result
struct  unitytls_x509verify_result_t835FEA0265EFD70F0762B220C663474E03402278 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t835FEA0265EFD70F0762B220C663474E03402278, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
=======
// Mono.Xml.SecurityParser
struct  SecurityParser_t4124480077  : public SmallXmlParser_t973787839
{
public:
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1046076091 * ___root_12;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1046076091 * ___current_13;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2329662280 * ___stack_14;

public:
	inline static int32_t get_offset_of_root_12() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480077, ___root_12)); }
	inline SecurityElement_t1046076091 * get_root_12() const { return ___root_12; }
	inline SecurityElement_t1046076091 ** get_address_of_root_12() { return &___root_12; }
	inline void set_root_12(SecurityElement_t1046076091 * value)
	{
		___root_12 = value;
		Il2CppCodeGenWriteBarrier((&___root_12), value);
	}

	inline static int32_t get_offset_of_current_13() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480077, ___current_13)); }
	inline SecurityElement_t1046076091 * get_current_13() const { return ___current_13; }
	inline SecurityElement_t1046076091 ** get_address_of_current_13() { return &___current_13; }
	inline void set_current_13(SecurityElement_t1046076091 * value)
	{
		___current_13 = value;
		Il2CppCodeGenWriteBarrier((&___current_13), value);
	}

	inline static int32_t get_offset_of_stack_14() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480077, ___stack_14)); }
	inline Stack_t2329662280 * get_stack_14() const { return ___stack_14; }
	inline Stack_t2329662280 ** get_address_of_stack_14() { return &___stack_14; }
	inline void set_stack_14(Stack_t2329662280 * value)
	{
		___stack_14 = value;
		Il2CppCodeGenWriteBarrier((&___stack_14), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_X509VERIFY_RESULT_T835FEA0265EFD70F0762B220C663474E03402278_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
=======
#endif // SECURITYPARSER_T4124480077_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef AUTHENTICATEDSTREAM_T3DD09B1EB437BE77A9B0536EC26005B6914BF501_H
#define AUTHENTICATEDSTREAM_T3DD09B1EB437BE77A9B0536EC26005B6914BF501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t3DD09B1EB437BE77A9B0536EC26005B6914BF501  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____InnerStream_4;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_5;

public:
	inline static int32_t get_offset_of__InnerStream_4() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3DD09B1EB437BE77A9B0536EC26005B6914BF501, ____InnerStream_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__InnerStream_4() const { return ____InnerStream_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__InnerStream_4() { return &____InnerStream_4; }
	inline void set__InnerStream_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____InnerStream_4 = value;
		Il2CppCodeGenWriteBarrier((&____InnerStream_4), value);
	}

	inline static int32_t get_offset_of__LeaveStreamOpen_5() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3DD09B1EB437BE77A9B0536EC26005B6914BF501, ____LeaveStreamOpen_5)); }
	inline bool get__LeaveStreamOpen_5() const { return ____LeaveStreamOpen_5; }
	inline bool* get_address_of__LeaveStreamOpen_5() { return &____LeaveStreamOpen_5; }
	inline void set__LeaveStreamOpen_5(bool value)
	{
		____LeaveStreamOpen_5 = value;
=======
// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

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
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // AUTHENTICATEDSTREAM_T3DD09B1EB437BE77A9B0536EC26005B6914BF501_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef ASYNCTASKMETHODBUILDER_1_TE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2_H
#define ASYNCTASKMETHODBUILDER_1_TE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Mono.Net.Security.AsyncProtocolResult>
struct  AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2, ___m_task_2)); }
	inline Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t6D67FA6126155FF2C2E227A859409D83DFAFA9BD * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_TE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2_H
#ifndef ASYNCTASKMETHODBUILDER_1_TADDA4A1D7E8E45B9C6AC65AF43C5868605F74865_H
#define ASYNCTASKMETHODBUILDER_1_TADDA4A1D7E8E45B9C6AC65AF43C5868605F74865_H
=======
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Nullable`1<System.Int32>>
struct  AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t8906695C9865566AA79419735634FF27AC74506E * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865, ___m_task_2)); }
	inline Task_1_t8906695C9865566AA79419735634FF27AC74506E * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t8906695C9865566AA79419735634FF27AC74506E ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t8906695C9865566AA79419735634FF27AC74506E * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t8906695C9865566AA79419735634FF27AC74506E * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t8906695C9865566AA79419735634FF27AC74506E * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t8906695C9865566AA79419735634FF27AC74506E ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t8906695C9865566AA79419735634FF27AC74506E * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_TADDA4A1D7E8E45B9C6AC65AF43C5868605F74865_H
#ifndef ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#define ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
=======
// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_2)); }
	inline DateTime_t3738529785  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t3738529785 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t3738529785  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_3)); }
	inline DateTime_t3738529785  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t3738529785  value)
	{
		___MaxValue_3 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#ifndef U3CINNERREADU3ED__25_TCE25EDB99323C3358577085230EE086DE0CADA5E_H
#define U3CINNERREADU3ED__25_TCE25EDB99323C3358577085230EE086DE0CADA5E_H
=======
#endif // DATETIME_T3738529785_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25
struct  U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E 
{
public:
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Nullable`1<System.Int32>> Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::<>t__builder
	AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865  ___U3CU3Et__builder_1;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::<>4__this
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_3;
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::<requestedSize>5__1
	int32_t ___U3CrequestedSizeU3E5__1_4;
	// System.Nullable`1<System.Int32> Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::<totalRead>5__2
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CtotalReadU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::<>u__1
	ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tADDA4A1D7E8E45B9C6AC65AF43C5868605F74865  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E, ___U3CU3E4__this_2)); }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E, ___cancellationToken_3)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_3 = value;
	}

	inline static int32_t get_offset_of_U3CrequestedSizeU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E, ___U3CrequestedSizeU3E5__1_4)); }
	inline int32_t get_U3CrequestedSizeU3E5__1_4() const { return ___U3CrequestedSizeU3E5__1_4; }
	inline int32_t* get_address_of_U3CrequestedSizeU3E5__1_4() { return &___U3CrequestedSizeU3E5__1_4; }
	inline void set_U3CrequestedSizeU3E5__1_4(int32_t value)
	{
		___U3CrequestedSizeU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CtotalReadU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E, ___U3CtotalReadU3E5__2_5)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CtotalReadU3E5__2_5() const { return ___U3CtotalReadU3E5__2_5; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CtotalReadU3E5__2_5() { return &___U3CtotalReadU3E5__2_5; }
	inline void set_U3CtotalReadU3E5__2_5(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CtotalReadU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  value)
	{
		___U3CU3Eu__1_6 = value;
=======
// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // U3CINNERREADU3ED__25_TCE25EDB99323C3358577085230EE086DE0CADA5E_H
#ifndef U3CSTARTOPERATIONU3ED__23_TF07DD38BEEE955EB5B1359B816079584899DDEC9_H
#define U3CSTARTOPERATIONU3ED__23_TF07DD38BEEE955EB5B1359B816079584899DDEC9_H
=======
#endif // NULLABLE_1_T1819850047_H
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23
struct  U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9 
{
public:
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Mono.Net.Security.AsyncProtocolResult> Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::<>t__builder
	AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2  ___U3CU3Et__builder_1;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::<>4__this
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::<>u__1
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tE6ADC5F95443C1197F4C34B1207F02A4E0F7EDB2  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9, ___U3CU3E4__this_2)); }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9, ___cancellationToken_3)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___U3CU3Eu__1_4 = value;
=======
// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // U3CSTARTOPERATIONU3ED__23_TF07DD38BEEE955EB5B1359B816079584899DDEC9_H
#ifndef MOBILEAUTHENTICATEDSTREAM_TB6E77FB644434B5B525191DC671462A6461B9045_H
#define MOBILEAUTHENTICATEDSTREAM_TB6E77FB644434B5B525191DC671462A6461B9045_H
=======
#endif // NULLABLE_1_T378540539_H
#ifndef GUID_T_H
#define GUID_T_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Net.Security.MobileAuthenticatedStream
struct  MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045  : public AuthenticatedStream_t3DD09B1EB437BE77A9B0536EC26005B6914BF501
{
public:
	// Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::xobileTlsContext
	MobileTlsContext_tFC684CF3275DF6B898319625C4F3A4D537B8A127 * ___xobileTlsContext_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::lastException
	ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ___lastException_7;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncReadRequest
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * ___asyncReadRequest_8;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncWriteRequest
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * ___asyncWriteRequest_9;
	// Mono.Net.Security.BufferOffsetSize2 Mono.Net.Security.MobileAuthenticatedStream::readBuffer
	BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 * ___readBuffer_10;
	// Mono.Net.Security.BufferOffsetSize2 Mono.Net.Security.MobileAuthenticatedStream::writeBuffer
	BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 * ___writeBuffer_11;
	// System.Object Mono.Net.Security.MobileAuthenticatedStream::ioLock
	RuntimeObject * ___ioLock_12;
	// System.Boolean Mono.Net.Security.MobileAuthenticatedStream::shutdown
	bool ___shutdown_13;
	// System.Net.Security.SslStream Mono.Net.Security.MobileAuthenticatedStream::<SslStream>k__BackingField
	SslStream_t9CEE8F6E125C734DD807D9289C86860FFEE81087 * ___U3CSslStreamU3Ek__BackingField_15;
	// Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::<Settings>k__BackingField
	MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF * ___U3CSettingsU3Ek__BackingField_16;
	// Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MobileAuthenticatedStream::<Provider>k__BackingField
	MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 * ___U3CProviderU3Ek__BackingField_17;
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::ID
	int32_t ___ID_19;

public:
	inline static int32_t get_offset_of_xobileTlsContext_6() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___xobileTlsContext_6)); }
	inline MobileTlsContext_tFC684CF3275DF6B898319625C4F3A4D537B8A127 * get_xobileTlsContext_6() const { return ___xobileTlsContext_6; }
	inline MobileTlsContext_tFC684CF3275DF6B898319625C4F3A4D537B8A127 ** get_address_of_xobileTlsContext_6() { return &___xobileTlsContext_6; }
	inline void set_xobileTlsContext_6(MobileTlsContext_tFC684CF3275DF6B898319625C4F3A4D537B8A127 * value)
	{
		___xobileTlsContext_6 = value;
		Il2CppCodeGenWriteBarrier((&___xobileTlsContext_6), value);
	}

	inline static int32_t get_offset_of_lastException_7() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___lastException_7)); }
	inline ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * get_lastException_7() const { return ___lastException_7; }
	inline ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A ** get_address_of_lastException_7() { return &___lastException_7; }
	inline void set_lastException_7(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * value)
	{
		___lastException_7 = value;
		Il2CppCodeGenWriteBarrier((&___lastException_7), value);
	}

	inline static int32_t get_offset_of_asyncReadRequest_8() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___asyncReadRequest_8)); }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * get_asyncReadRequest_8() const { return ___asyncReadRequest_8; }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 ** get_address_of_asyncReadRequest_8() { return &___asyncReadRequest_8; }
	inline void set_asyncReadRequest_8(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * value)
	{
		___asyncReadRequest_8 = value;
		Il2CppCodeGenWriteBarrier((&___asyncReadRequest_8), value);
	}

	inline static int32_t get_offset_of_asyncWriteRequest_9() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___asyncWriteRequest_9)); }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * get_asyncWriteRequest_9() const { return ___asyncWriteRequest_9; }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 ** get_address_of_asyncWriteRequest_9() { return &___asyncWriteRequest_9; }
	inline void set_asyncWriteRequest_9(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * value)
	{
		___asyncWriteRequest_9 = value;
		Il2CppCodeGenWriteBarrier((&___asyncWriteRequest_9), value);
	}

	inline static int32_t get_offset_of_readBuffer_10() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___readBuffer_10)); }
	inline BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 * get_readBuffer_10() const { return ___readBuffer_10; }
	inline BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 ** get_address_of_readBuffer_10() { return &___readBuffer_10; }
	inline void set_readBuffer_10(BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 * value)
	{
		___readBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___readBuffer_10), value);
	}

	inline static int32_t get_offset_of_writeBuffer_11() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___writeBuffer_11)); }
	inline BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 * get_writeBuffer_11() const { return ___writeBuffer_11; }
	inline BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 ** get_address_of_writeBuffer_11() { return &___writeBuffer_11; }
	inline void set_writeBuffer_11(BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00 * value)
	{
		___writeBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___writeBuffer_11), value);
	}

	inline static int32_t get_offset_of_ioLock_12() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___ioLock_12)); }
	inline RuntimeObject * get_ioLock_12() const { return ___ioLock_12; }
	inline RuntimeObject ** get_address_of_ioLock_12() { return &___ioLock_12; }
	inline void set_ioLock_12(RuntimeObject * value)
	{
		___ioLock_12 = value;
		Il2CppCodeGenWriteBarrier((&___ioLock_12), value);
	}

	inline static int32_t get_offset_of_shutdown_13() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___shutdown_13)); }
	inline bool get_shutdown_13() const { return ___shutdown_13; }
	inline bool* get_address_of_shutdown_13() { return &___shutdown_13; }
	inline void set_shutdown_13(bool value)
	{
		___shutdown_13 = value;
	}

	inline static int32_t get_offset_of_U3CSslStreamU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___U3CSslStreamU3Ek__BackingField_15)); }
	inline SslStream_t9CEE8F6E125C734DD807D9289C86860FFEE81087 * get_U3CSslStreamU3Ek__BackingField_15() const { return ___U3CSslStreamU3Ek__BackingField_15; }
	inline SslStream_t9CEE8F6E125C734DD807D9289C86860FFEE81087 ** get_address_of_U3CSslStreamU3Ek__BackingField_15() { return &___U3CSslStreamU3Ek__BackingField_15; }
	inline void set_U3CSslStreamU3Ek__BackingField_15(SslStream_t9CEE8F6E125C734DD807D9289C86860FFEE81087 * value)
	{
		___U3CSslStreamU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSslStreamU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CSettingsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___U3CSettingsU3Ek__BackingField_16)); }
	inline MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF * get_U3CSettingsU3Ek__BackingField_16() const { return ___U3CSettingsU3Ek__BackingField_16; }
	inline MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF ** get_address_of_U3CSettingsU3Ek__BackingField_16() { return &___U3CSettingsU3Ek__BackingField_16; }
	inline void set_U3CSettingsU3Ek__BackingField_16(MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF * value)
	{
		___U3CSettingsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSettingsU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3CProviderU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___U3CProviderU3Ek__BackingField_17)); }
	inline MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 * get_U3CProviderU3Ek__BackingField_17() const { return ___U3CProviderU3Ek__BackingField_17; }
	inline MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 ** get_address_of_U3CProviderU3Ek__BackingField_17() { return &___U3CProviderU3Ek__BackingField_17; }
	inline void set_U3CProviderU3Ek__BackingField_17(MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 * value)
	{
		___U3CProviderU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CProviderU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_ID_19() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045, ___ID_19)); }
	inline int32_t get_ID_19() const { return ___ID_19; }
	inline int32_t* get_address_of_ID_19() { return &___ID_19; }
	inline void set_ID_19(int32_t value)
	{
		___ID_19 = value;
	}
};

struct MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045_StaticFields
{
public:
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::uniqueNameInteger
	int32_t ___uniqueNameInteger_14;
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::nextId
	int32_t ___nextId_18;

public:
	inline static int32_t get_offset_of_uniqueNameInteger_14() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045_StaticFields, ___uniqueNameInteger_14)); }
	inline int32_t get_uniqueNameInteger_14() const { return ___uniqueNameInteger_14; }
	inline int32_t* get_address_of_uniqueNameInteger_14() { return &___uniqueNameInteger_14; }
	inline void set_uniqueNameInteger_14(int32_t value)
	{
		___uniqueNameInteger_14 = value;
	}

	inline static int32_t get_offset_of_nextId_18() { return static_cast<int32_t>(offsetof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045_StaticFields, ___nextId_18)); }
	inline int32_t get_nextId_18() const { return ___nextId_18; }
	inline int32_t* get_address_of_nextId_18() { return &___nextId_18; }
	inline void set_nextId_18(int32_t value)
	{
		___nextId_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEAUTHENTICATEDSTREAM_TB6E77FB644434B5B525191DC671462A6461B9045_H
#ifndef UNITYTLS_ERRORSTATE_T64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6_H
#define UNITYTLS_ERRORSTATE_T64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTls/unitytls_errorstate
struct  unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_errorstate::magic
	uint32_t ___magic_0;
	// Mono.Unity.UnityTls/unitytls_error_code Mono.Unity.UnityTls/unitytls_errorstate::code
	uint32_t ___code_1;
	// System.UInt64 Mono.Unity.UnityTls/unitytls_errorstate::reserved
	uint64_t ___reserved_2;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6, ___magic_0)); }
	inline uint32_t get_magic_0() const { return ___magic_0; }
	inline uint32_t* get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(uint32_t value)
	{
		___magic_0 = value;
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6, ___code_1)); }
	inline uint32_t get_code_1() const { return ___code_1; }
	inline uint32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(uint32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6, ___reserved_2)); }
	inline uint64_t get_reserved_2() const { return ___reserved_2; }
	inline uint64_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(uint64_t value)
	{
		___reserved_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTLS_ERRORSTATE_T64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6_H
#ifndef UNITYTLS_TLSCTX_PROTOCOLRANGE_T36243D72F83DAD47C95928314F58026DE8D38F47_H
#define UNITYTLS_TLSCTX_PROTOCOLRANGE_T36243D72F83DAD47C95928314F58026DE8D38F47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange
struct  unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47 
{
public:
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::min
	uint32_t ___min_0;
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::max
	uint32_t ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47, ___min_0)); }
	inline uint32_t get_min_0() const { return ___min_0; }
	inline uint32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(uint32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47, ___max_1)); }
	inline uint32_t get_max_1() const { return ___max_1; }
	inline uint32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(uint32_t value)
	{
		___max_1 = value;
=======
// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t386037858 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t386037858 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_PROTOCOLRANGE_T36243D72F83DAD47C95928314F58026DE8D38F47_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
=======
#endif // GUID_T_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifndef OBJECTDISPOSEDEXCEPTION_TF68E471ECD1419AD7C51137B742837395F50B69A_H
#define OBJECTDISPOSEDEXCEPTION_TF68E471ECD1419AD7C51137B742837395F50B69A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A  : public InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((&___objectName_17), value);
=======
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
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // OBJECTDISPOSEDEXCEPTION_TF68E471ECD1419AD7C51137B742837395F50B69A_H
#ifndef DYNAMICMETHOD_T983501153061387E39AA134BE68EB908A3E92AF3_H
#define DYNAMICMETHOD_T983501153061387E39AA134BE68EB908A3E92AF3_H
=======
#endif // INTPTR_T_H
#ifndef PUNYCODE_T2881783740_H
#define PUNYCODE_T2881783740_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3  : public MethodInfo_t
=======
// System.Globalization.Punycode
struct  Punycode_t2881783740  : public Bootstring_t3302426383
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // DYNAMICMETHOD_T983501153061387E39AA134BE68EB908A3E92AF3_H
#ifndef ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#define ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
=======
#endif // PUNYCODE_T2881783740_H
#ifndef UNICODEDATAHEADER_T1790070607_H
#define UNICODEDATAHEADER_T1790070607_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#ifndef U3CPROCESSOPERATIONU3ED__24_T969904EA513B205F08A3ED1624FE3890853645AA_H
#define U3CPROCESSOPERATIONU3ED__24_T969904EA513B205F08A3ED1624FE3890853645AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24
struct  U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA 
{
public:
	// System.Int32 Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_2;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::<>4__this
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * ___U3CU3E4__this_3;
	// Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::<status>5__1
	int32_t ___U3CstatusU3E5__1_4;
	// Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::<newStatus>5__2
	int32_t ___U3CnewStatusU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Nullable`1<System.Int32>> Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::<>u__1
	ConfiguredTaskAwaiter_t7DF2E84988582301369783F2ECA65B4F26D5A740  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::<>u__2
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___cancellationToken_2)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___U3CU3E4__this_3)); }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_U3CstatusU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___U3CstatusU3E5__1_4)); }
	inline int32_t get_U3CstatusU3E5__1_4() const { return ___U3CstatusU3E5__1_4; }
	inline int32_t* get_address_of_U3CstatusU3E5__1_4() { return &___U3CstatusU3E5__1_4; }
	inline void set_U3CstatusU3E5__1_4(int32_t value)
	{
		___U3CstatusU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CnewStatusU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___U3CnewStatusU3E5__2_5)); }
	inline int32_t get_U3CnewStatusU3E5__2_5() const { return ___U3CnewStatusU3E5__2_5; }
	inline int32_t* get_address_of_U3CnewStatusU3E5__2_5() { return &___U3CnewStatusU3E5__2_5; }
	inline void set_U3CnewStatusU3E5__2_5(int32_t value)
	{
		___U3CnewStatusU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_t7DF2E84988582301369783F2ECA65B4F26D5A740  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_t7DF2E84988582301369783F2ECA65B4F26D5A740 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_t7DF2E84988582301369783F2ECA65B4F26D5A740  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA, ___U3CU3Eu__2_7)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___U3CU3Eu__2_7 = value;
=======
// System.Globalization.CharUnicodeInfo/UnicodeDataHeader
struct  UnicodeDataHeader_t1790070607 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char System.Globalization.CharUnicodeInfo/UnicodeDataHeader::TableName
			Il2CppChar ___TableName_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___TableName_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[32];
			// System.UInt16 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::version
			uint16_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[32];
			uint16_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding[40];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToCategoriesIndex
			uint32_t ___OffsetToCategoriesIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding_forAlignmentOnly[40];
			uint32_t ___OffsetToCategoriesIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding[44];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToCategoriesValue
			uint32_t ___OffsetToCategoriesValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding_forAlignmentOnly[44];
			uint32_t ___OffsetToCategoriesValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding[48];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToNumbericIndex
			uint32_t ___OffsetToNumbericIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding_forAlignmentOnly[48];
			uint32_t ___OffsetToNumbericIndex_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding[52];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToDigitValue
			uint32_t ___OffsetToDigitValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding_forAlignmentOnly[52];
			uint32_t ___OffsetToDigitValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding[56];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToNumbericValue
			uint32_t ___OffsetToNumbericValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding_forAlignmentOnly[56];
			uint32_t ___OffsetToNumbericValue_6_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_TableName_0() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t1790070607, ___TableName_0)); }
	inline Il2CppChar get_TableName_0() const { return ___TableName_0; }
	inline Il2CppChar* get_address_of_TableName_0() { return &___TableName_0; }
	inline void set_TableName_0(Il2CppChar value)
	{
		___TableName_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t1790070607, ___version_1)); }
	inline uint16_t get_version_1() const { return ___version_1; }
	inline uint16_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint16_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_OffsetToCategoriesIndex_2() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t1790070607, ___OffsetToCategoriesIndex_2)); }
	inline uint32_t get_OffsetToCategoriesIndex_2() const { return ___OffsetToCategoriesIndex_2; }
	inline uint32_t* get_address_of_OffsetToCategoriesIndex_2() { return &___OffsetToCategoriesIndex_2; }
	inline void set_OffsetToCategoriesIndex_2(uint32_t value)
	{
		___OffsetToCategoriesIndex_2 = value;
	}

	inline static int32_t get_offset_of_OffsetToCategoriesValue_3() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t1790070607, ___OffsetToCategoriesValue_3)); }
	inline uint32_t get_OffsetToCategoriesValue_3() const { return ___OffsetToCategoriesValue_3; }
	inline uint32_t* get_address_of_OffsetToCategoriesValue_3() { return &___OffsetToCategoriesValue_3; }
	inline void set_OffsetToCategoriesValue_3(uint32_t value)
	{
		___OffsetToCategoriesValue_3 = value;
	}

	inline static int32_t get_offset_of_OffsetToNumbericIndex_4() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t1790070607, ___OffsetToNumbericIndex_4)); }
	inline uint32_t get_OffsetToNumbericIndex_4() const { return ___OffsetToNumbericIndex_4; }
	inline uint32_t* get_address_of_OffsetToNumbericIndex_4() { return &___OffsetToNumbericIndex_4; }
	inline void set_OffsetToNumbericIndex_4(uint32_t value)
	{
		___OffsetToNumbericIndex_4 = value;
	}

	inline static int32_t get_offset_of_OffsetToDigitValue_5() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t1790070607, ___OffsetToDigitValue_5)); }
	inline uint32_t get_OffsetToDigitValue_5() const { return ___OffsetToDigitValue_5; }
	inline uint32_t* get_address_of_OffsetToDigitValue_5() { return &___OffsetToDigitValue_5; }
	inline void set_OffsetToDigitValue_5(uint32_t value)
	{
		___OffsetToDigitValue_5 = value;
	}

	inline static int32_t get_offset_of_OffsetToNumbericValue_6() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t1790070607, ___OffsetToNumbericValue_6)); }
	inline uint32_t get_OffsetToNumbericValue_6() const { return ___OffsetToNumbericValue_6; }
	inline uint32_t* get_address_of_OffsetToNumbericValue_6() { return &___OffsetToNumbericValue_6; }
	inline void set_OffsetToNumbericValue_6(uint32_t value)
	{
		___OffsetToNumbericValue_6 = value;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // U3CPROCESSOPERATIONU3ED__24_T969904EA513B205F08A3ED1624FE3890853645AA_H
#ifndef UNITYTLS_INTERFACE_STRUCT_T0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_H
#define UNITYTLS_INTERFACE_STRUCT_T0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_H
=======
// Native definition for P/Invoke marshalling of System.Globalization.CharUnicodeInfo/UnicodeDataHeader
struct UnicodeDataHeader_t1790070607_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___TableName_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___TableName_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[32];
			uint16_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[32];
			uint16_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding[40];
			uint32_t ___OffsetToCategoriesIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding_forAlignmentOnly[40];
			uint32_t ___OffsetToCategoriesIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding[44];
			uint32_t ___OffsetToCategoriesValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding_forAlignmentOnly[44];
			uint32_t ___OffsetToCategoriesValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding[48];
			uint32_t ___OffsetToNumbericIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding_forAlignmentOnly[48];
			uint32_t ___OffsetToNumbericIndex_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding[52];
			uint32_t ___OffsetToDigitValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding_forAlignmentOnly[52];
			uint32_t ___OffsetToDigitValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding[56];
			uint32_t ___OffsetToNumbericValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding_forAlignmentOnly[56];
			uint32_t ___OffsetToNumbericValue_6_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of System.Globalization.CharUnicodeInfo/UnicodeDataHeader
struct UnicodeDataHeader_t1790070607_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___TableName_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___TableName_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[32];
			uint16_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[32];
			uint16_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding[40];
			uint32_t ___OffsetToCategoriesIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding_forAlignmentOnly[40];
			uint32_t ___OffsetToCategoriesIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding[44];
			uint32_t ___OffsetToCategoriesValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding_forAlignmentOnly[44];
			uint32_t ___OffsetToCategoriesValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding[48];
			uint32_t ___OffsetToNumbericIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding_forAlignmentOnly[48];
			uint32_t ___OffsetToNumbericIndex_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding[52];
			uint32_t ___OffsetToDigitValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding_forAlignmentOnly[52];
			uint32_t ___OffsetToDigitValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding[56];
			uint32_t ___OffsetToNumbericValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding_forAlignmentOnly[56];
			uint32_t ___OffsetToNumbericValue_6_forAlignmentOnly;
		};
	};
};
#endif // UNICODEDATAHEADER_T1790070607_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct
struct  unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF  : public RuntimeObject
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_interface_struct::UNITYTLS_INVALID_HANDLE
	uint64_t ___UNITYTLS_INVALID_HANDLE_0;
	// Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange Mono.Unity.UnityTls/unitytls_interface_struct::UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT
	unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47  ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_errorstate_create
	unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9 * ___unitytls_errorstate_create_2;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_errorstate_raise_error
	unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1 * ___unitytls_errorstate_raise_error_3;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_get_ref
	unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7 * ___unitytls_key_get_ref_4;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_parse_der
	unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B * ___unitytls_key_parse_der_5;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_parse_pem
	unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB * ___unitytls_key_parse_pem_6;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_key_free
	unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB * ___unitytls_key_free_7;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509_export_der
	unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856 * ___unitytls_x509_export_der_8;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_get_ref
	unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986 * ___unitytls_x509list_get_ref_9;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_get_x509
	unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5 * ___unitytls_x509list_get_x509_10;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_create
	unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3 * ___unitytls_x509list_create_11;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_append
	unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF * ___unitytls_x509list_append_12;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_append_der
	unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C * ___unitytls_x509list_append_der_13;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_append_pem
	unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C * ___unitytls_x509list_append_pem_14;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509list_free
	unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09 * ___unitytls_x509list_free_15;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509verify_default_ca
	unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D * ___unitytls_x509verify_default_ca_16;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_x509verify_explicit_ca
	unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6 * ___unitytls_x509verify_explicit_ca_17;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_create_server
	unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D * ___unitytls_tlsctx_create_server_18;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_create_client
	unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2 * ___unitytls_tlsctx_create_client_19;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication
	unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6 * ___unitytls_tlsctx_server_require_client_authentication_20;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback
	unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937 * ___unitytls_tlsctx_set_certificate_callback_21;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_trace_callback
	unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A * ___unitytls_tlsctx_set_trace_callback_22;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback
	unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B * ___unitytls_tlsctx_set_x509verify_callback_23;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites
	unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE * ___unitytls_tlsctx_set_supported_ciphersuites_24;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite
	unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0 * ___unitytls_tlsctx_get_ciphersuite_25;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_get_protocol
	unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14 * ___unitytls_tlsctx_get_protocol_26;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_process_handshake
	unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D * ___unitytls_tlsctx_process_handshake_27;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_read
	unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2 * ___unitytls_tlsctx_read_28;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_write
	unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C * ___unitytls_tlsctx_write_29;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_notify_close
	unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D * ___unitytls_tlsctx_notify_close_30;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_tlsctx_free
	unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2 * ___unitytls_tlsctx_free_31;
	// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t Mono.Unity.UnityTls/unitytls_interface_struct::unitytls_random_generate_bytes
	unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7 * ___unitytls_random_generate_bytes_32;

public:
	inline static int32_t get_offset_of_UNITYTLS_INVALID_HANDLE_0() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___UNITYTLS_INVALID_HANDLE_0)); }
	inline uint64_t get_UNITYTLS_INVALID_HANDLE_0() const { return ___UNITYTLS_INVALID_HANDLE_0; }
	inline uint64_t* get_address_of_UNITYTLS_INVALID_HANDLE_0() { return &___UNITYTLS_INVALID_HANDLE_0; }
	inline void set_UNITYTLS_INVALID_HANDLE_0(uint64_t value)
	{
		___UNITYTLS_INVALID_HANDLE_0 = value;
	}

	inline static int32_t get_offset_of_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1)); }
	inline unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47  get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1() const { return ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1; }
	inline unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47 * get_address_of_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1() { return &___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1; }
	inline void set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1(unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47  value)
	{
		___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of_unitytls_errorstate_create_2() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_errorstate_create_2)); }
	inline unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9 * get_unitytls_errorstate_create_2() const { return ___unitytls_errorstate_create_2; }
	inline unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9 ** get_address_of_unitytls_errorstate_create_2() { return &___unitytls_errorstate_create_2; }
	inline void set_unitytls_errorstate_create_2(unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9 * value)
	{
		___unitytls_errorstate_create_2 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_errorstate_create_2), value);
	}

	inline static int32_t get_offset_of_unitytls_errorstate_raise_error_3() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_errorstate_raise_error_3)); }
	inline unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1 * get_unitytls_errorstate_raise_error_3() const { return ___unitytls_errorstate_raise_error_3; }
	inline unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1 ** get_address_of_unitytls_errorstate_raise_error_3() { return &___unitytls_errorstate_raise_error_3; }
	inline void set_unitytls_errorstate_raise_error_3(unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1 * value)
	{
		___unitytls_errorstate_raise_error_3 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_errorstate_raise_error_3), value);
	}

	inline static int32_t get_offset_of_unitytls_key_get_ref_4() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_key_get_ref_4)); }
	inline unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7 * get_unitytls_key_get_ref_4() const { return ___unitytls_key_get_ref_4; }
	inline unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7 ** get_address_of_unitytls_key_get_ref_4() { return &___unitytls_key_get_ref_4; }
	inline void set_unitytls_key_get_ref_4(unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7 * value)
	{
		___unitytls_key_get_ref_4 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_key_get_ref_4), value);
	}

	inline static int32_t get_offset_of_unitytls_key_parse_der_5() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_key_parse_der_5)); }
	inline unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B * get_unitytls_key_parse_der_5() const { return ___unitytls_key_parse_der_5; }
	inline unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B ** get_address_of_unitytls_key_parse_der_5() { return &___unitytls_key_parse_der_5; }
	inline void set_unitytls_key_parse_der_5(unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B * value)
	{
		___unitytls_key_parse_der_5 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_key_parse_der_5), value);
	}

	inline static int32_t get_offset_of_unitytls_key_parse_pem_6() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_key_parse_pem_6)); }
	inline unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB * get_unitytls_key_parse_pem_6() const { return ___unitytls_key_parse_pem_6; }
	inline unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB ** get_address_of_unitytls_key_parse_pem_6() { return &___unitytls_key_parse_pem_6; }
	inline void set_unitytls_key_parse_pem_6(unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB * value)
	{
		___unitytls_key_parse_pem_6 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_key_parse_pem_6), value);
	}

	inline static int32_t get_offset_of_unitytls_key_free_7() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_key_free_7)); }
	inline unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB * get_unitytls_key_free_7() const { return ___unitytls_key_free_7; }
	inline unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB ** get_address_of_unitytls_key_free_7() { return &___unitytls_key_free_7; }
	inline void set_unitytls_key_free_7(unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB * value)
	{
		___unitytls_key_free_7 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_key_free_7), value);
	}

	inline static int32_t get_offset_of_unitytls_x509_export_der_8() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509_export_der_8)); }
	inline unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856 * get_unitytls_x509_export_der_8() const { return ___unitytls_x509_export_der_8; }
	inline unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856 ** get_address_of_unitytls_x509_export_der_8() { return &___unitytls_x509_export_der_8; }
	inline void set_unitytls_x509_export_der_8(unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856 * value)
	{
		___unitytls_x509_export_der_8 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509_export_der_8), value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_get_ref_9() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509list_get_ref_9)); }
	inline unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986 * get_unitytls_x509list_get_ref_9() const { return ___unitytls_x509list_get_ref_9; }
	inline unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986 ** get_address_of_unitytls_x509list_get_ref_9() { return &___unitytls_x509list_get_ref_9; }
	inline void set_unitytls_x509list_get_ref_9(unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986 * value)
	{
		___unitytls_x509list_get_ref_9 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509list_get_ref_9), value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_get_x509_10() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509list_get_x509_10)); }
	inline unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5 * get_unitytls_x509list_get_x509_10() const { return ___unitytls_x509list_get_x509_10; }
	inline unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5 ** get_address_of_unitytls_x509list_get_x509_10() { return &___unitytls_x509list_get_x509_10; }
	inline void set_unitytls_x509list_get_x509_10(unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5 * value)
	{
		___unitytls_x509list_get_x509_10 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509list_get_x509_10), value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_create_11() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509list_create_11)); }
	inline unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3 * get_unitytls_x509list_create_11() const { return ___unitytls_x509list_create_11; }
	inline unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3 ** get_address_of_unitytls_x509list_create_11() { return &___unitytls_x509list_create_11; }
	inline void set_unitytls_x509list_create_11(unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3 * value)
	{
		___unitytls_x509list_create_11 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509list_create_11), value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_append_12() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509list_append_12)); }
	inline unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF * get_unitytls_x509list_append_12() const { return ___unitytls_x509list_append_12; }
	inline unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF ** get_address_of_unitytls_x509list_append_12() { return &___unitytls_x509list_append_12; }
	inline void set_unitytls_x509list_append_12(unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF * value)
	{
		___unitytls_x509list_append_12 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509list_append_12), value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_append_der_13() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509list_append_der_13)); }
	inline unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C * get_unitytls_x509list_append_der_13() const { return ___unitytls_x509list_append_der_13; }
	inline unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C ** get_address_of_unitytls_x509list_append_der_13() { return &___unitytls_x509list_append_der_13; }
	inline void set_unitytls_x509list_append_der_13(unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C * value)
	{
		___unitytls_x509list_append_der_13 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509list_append_der_13), value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_append_pem_14() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509list_append_pem_14)); }
	inline unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C * get_unitytls_x509list_append_pem_14() const { return ___unitytls_x509list_append_pem_14; }
	inline unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C ** get_address_of_unitytls_x509list_append_pem_14() { return &___unitytls_x509list_append_pem_14; }
	inline void set_unitytls_x509list_append_pem_14(unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C * value)
	{
		___unitytls_x509list_append_pem_14 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509list_append_pem_14), value);
	}

	inline static int32_t get_offset_of_unitytls_x509list_free_15() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509list_free_15)); }
	inline unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09 * get_unitytls_x509list_free_15() const { return ___unitytls_x509list_free_15; }
	inline unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09 ** get_address_of_unitytls_x509list_free_15() { return &___unitytls_x509list_free_15; }
	inline void set_unitytls_x509list_free_15(unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09 * value)
	{
		___unitytls_x509list_free_15 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509list_free_15), value);
	}

	inline static int32_t get_offset_of_unitytls_x509verify_default_ca_16() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509verify_default_ca_16)); }
	inline unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D * get_unitytls_x509verify_default_ca_16() const { return ___unitytls_x509verify_default_ca_16; }
	inline unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D ** get_address_of_unitytls_x509verify_default_ca_16() { return &___unitytls_x509verify_default_ca_16; }
	inline void set_unitytls_x509verify_default_ca_16(unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D * value)
	{
		___unitytls_x509verify_default_ca_16 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509verify_default_ca_16), value);
	}

	inline static int32_t get_offset_of_unitytls_x509verify_explicit_ca_17() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_x509verify_explicit_ca_17)); }
	inline unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6 * get_unitytls_x509verify_explicit_ca_17() const { return ___unitytls_x509verify_explicit_ca_17; }
	inline unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6 ** get_address_of_unitytls_x509verify_explicit_ca_17() { return &___unitytls_x509verify_explicit_ca_17; }
	inline void set_unitytls_x509verify_explicit_ca_17(unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6 * value)
	{
		___unitytls_x509verify_explicit_ca_17 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_x509verify_explicit_ca_17), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_create_server_18() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_create_server_18)); }
	inline unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D * get_unitytls_tlsctx_create_server_18() const { return ___unitytls_tlsctx_create_server_18; }
	inline unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D ** get_address_of_unitytls_tlsctx_create_server_18() { return &___unitytls_tlsctx_create_server_18; }
	inline void set_unitytls_tlsctx_create_server_18(unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D * value)
	{
		___unitytls_tlsctx_create_server_18 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_create_server_18), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_create_client_19() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_create_client_19)); }
	inline unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2 * get_unitytls_tlsctx_create_client_19() const { return ___unitytls_tlsctx_create_client_19; }
	inline unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2 ** get_address_of_unitytls_tlsctx_create_client_19() { return &___unitytls_tlsctx_create_client_19; }
	inline void set_unitytls_tlsctx_create_client_19(unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2 * value)
	{
		___unitytls_tlsctx_create_client_19 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_create_client_19), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_server_require_client_authentication_20() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_server_require_client_authentication_20)); }
	inline unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6 * get_unitytls_tlsctx_server_require_client_authentication_20() const { return ___unitytls_tlsctx_server_require_client_authentication_20; }
	inline unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6 ** get_address_of_unitytls_tlsctx_server_require_client_authentication_20() { return &___unitytls_tlsctx_server_require_client_authentication_20; }
	inline void set_unitytls_tlsctx_server_require_client_authentication_20(unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6 * value)
	{
		___unitytls_tlsctx_server_require_client_authentication_20 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_server_require_client_authentication_20), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_certificate_callback_21() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_set_certificate_callback_21)); }
	inline unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937 * get_unitytls_tlsctx_set_certificate_callback_21() const { return ___unitytls_tlsctx_set_certificate_callback_21; }
	inline unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937 ** get_address_of_unitytls_tlsctx_set_certificate_callback_21() { return &___unitytls_tlsctx_set_certificate_callback_21; }
	inline void set_unitytls_tlsctx_set_certificate_callback_21(unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937 * value)
	{
		___unitytls_tlsctx_set_certificate_callback_21 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_set_certificate_callback_21), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_trace_callback_22() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_set_trace_callback_22)); }
	inline unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A * get_unitytls_tlsctx_set_trace_callback_22() const { return ___unitytls_tlsctx_set_trace_callback_22; }
	inline unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A ** get_address_of_unitytls_tlsctx_set_trace_callback_22() { return &___unitytls_tlsctx_set_trace_callback_22; }
	inline void set_unitytls_tlsctx_set_trace_callback_22(unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A * value)
	{
		___unitytls_tlsctx_set_trace_callback_22 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_set_trace_callback_22), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_x509verify_callback_23() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_set_x509verify_callback_23)); }
	inline unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B * get_unitytls_tlsctx_set_x509verify_callback_23() const { return ___unitytls_tlsctx_set_x509verify_callback_23; }
	inline unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B ** get_address_of_unitytls_tlsctx_set_x509verify_callback_23() { return &___unitytls_tlsctx_set_x509verify_callback_23; }
	inline void set_unitytls_tlsctx_set_x509verify_callback_23(unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B * value)
	{
		___unitytls_tlsctx_set_x509verify_callback_23 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_set_x509verify_callback_23), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_set_supported_ciphersuites_24() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_set_supported_ciphersuites_24)); }
	inline unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE * get_unitytls_tlsctx_set_supported_ciphersuites_24() const { return ___unitytls_tlsctx_set_supported_ciphersuites_24; }
	inline unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE ** get_address_of_unitytls_tlsctx_set_supported_ciphersuites_24() { return &___unitytls_tlsctx_set_supported_ciphersuites_24; }
	inline void set_unitytls_tlsctx_set_supported_ciphersuites_24(unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE * value)
	{
		___unitytls_tlsctx_set_supported_ciphersuites_24 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_set_supported_ciphersuites_24), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_get_ciphersuite_25() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_get_ciphersuite_25)); }
	inline unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0 * get_unitytls_tlsctx_get_ciphersuite_25() const { return ___unitytls_tlsctx_get_ciphersuite_25; }
	inline unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0 ** get_address_of_unitytls_tlsctx_get_ciphersuite_25() { return &___unitytls_tlsctx_get_ciphersuite_25; }
	inline void set_unitytls_tlsctx_get_ciphersuite_25(unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0 * value)
	{
		___unitytls_tlsctx_get_ciphersuite_25 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_get_ciphersuite_25), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_get_protocol_26() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_get_protocol_26)); }
	inline unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14 * get_unitytls_tlsctx_get_protocol_26() const { return ___unitytls_tlsctx_get_protocol_26; }
	inline unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14 ** get_address_of_unitytls_tlsctx_get_protocol_26() { return &___unitytls_tlsctx_get_protocol_26; }
	inline void set_unitytls_tlsctx_get_protocol_26(unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14 * value)
	{
		___unitytls_tlsctx_get_protocol_26 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_get_protocol_26), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_process_handshake_27() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_process_handshake_27)); }
	inline unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D * get_unitytls_tlsctx_process_handshake_27() const { return ___unitytls_tlsctx_process_handshake_27; }
	inline unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D ** get_address_of_unitytls_tlsctx_process_handshake_27() { return &___unitytls_tlsctx_process_handshake_27; }
	inline void set_unitytls_tlsctx_process_handshake_27(unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D * value)
	{
		___unitytls_tlsctx_process_handshake_27 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_process_handshake_27), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_read_28() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_read_28)); }
	inline unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2 * get_unitytls_tlsctx_read_28() const { return ___unitytls_tlsctx_read_28; }
	inline unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2 ** get_address_of_unitytls_tlsctx_read_28() { return &___unitytls_tlsctx_read_28; }
	inline void set_unitytls_tlsctx_read_28(unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2 * value)
	{
		___unitytls_tlsctx_read_28 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_read_28), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_write_29() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_write_29)); }
	inline unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C * get_unitytls_tlsctx_write_29() const { return ___unitytls_tlsctx_write_29; }
	inline unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C ** get_address_of_unitytls_tlsctx_write_29() { return &___unitytls_tlsctx_write_29; }
	inline void set_unitytls_tlsctx_write_29(unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C * value)
	{
		___unitytls_tlsctx_write_29 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_write_29), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_notify_close_30() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_notify_close_30)); }
	inline unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D * get_unitytls_tlsctx_notify_close_30() const { return ___unitytls_tlsctx_notify_close_30; }
	inline unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D ** get_address_of_unitytls_tlsctx_notify_close_30() { return &___unitytls_tlsctx_notify_close_30; }
	inline void set_unitytls_tlsctx_notify_close_30(unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D * value)
	{
		___unitytls_tlsctx_notify_close_30 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_notify_close_30), value);
	}

	inline static int32_t get_offset_of_unitytls_tlsctx_free_31() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_tlsctx_free_31)); }
	inline unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2 * get_unitytls_tlsctx_free_31() const { return ___unitytls_tlsctx_free_31; }
	inline unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2 ** get_address_of_unitytls_tlsctx_free_31() { return &___unitytls_tlsctx_free_31; }
	inline void set_unitytls_tlsctx_free_31(unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2 * value)
	{
		___unitytls_tlsctx_free_31 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_tlsctx_free_31), value);
	}

	inline static int32_t get_offset_of_unitytls_random_generate_bytes_32() { return static_cast<int32_t>(offsetof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF, ___unitytls_random_generate_bytes_32)); }
	inline unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7 * get_unitytls_random_generate_bytes_32() const { return ___unitytls_random_generate_bytes_32; }
	inline unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7 ** get_address_of_unitytls_random_generate_bytes_32() { return &___unitytls_random_generate_bytes_32; }
	inline void set_unitytls_random_generate_bytes_32(unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7 * value)
	{
		___unitytls_random_generate_bytes_32 = value;
		Il2CppCodeGenWriteBarrier((&___unitytls_random_generate_bytes_32), value);
=======
// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef DATA_T191216285_H
#define DATA_T191216285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo/Data
struct  Data_t191216285 
{
public:
	// System.Int32 System.Globalization.CultureInfo/Data::ansi
	int32_t ___ansi_0;
	// System.Int32 System.Globalization.CultureInfo/Data::ebcdic
	int32_t ___ebcdic_1;
	// System.Int32 System.Globalization.CultureInfo/Data::mac
	int32_t ___mac_2;
	// System.Int32 System.Globalization.CultureInfo/Data::oem
	int32_t ___oem_3;
	// System.Boolean System.Globalization.CultureInfo/Data::right_to_left
	bool ___right_to_left_4;
	// System.Byte System.Globalization.CultureInfo/Data::list_sep
	uint8_t ___list_sep_5;

public:
	inline static int32_t get_offset_of_ansi_0() { return static_cast<int32_t>(offsetof(Data_t191216285, ___ansi_0)); }
	inline int32_t get_ansi_0() const { return ___ansi_0; }
	inline int32_t* get_address_of_ansi_0() { return &___ansi_0; }
	inline void set_ansi_0(int32_t value)
	{
		___ansi_0 = value;
	}

	inline static int32_t get_offset_of_ebcdic_1() { return static_cast<int32_t>(offsetof(Data_t191216285, ___ebcdic_1)); }
	inline int32_t get_ebcdic_1() const { return ___ebcdic_1; }
	inline int32_t* get_address_of_ebcdic_1() { return &___ebcdic_1; }
	inline void set_ebcdic_1(int32_t value)
	{
		___ebcdic_1 = value;
	}

	inline static int32_t get_offset_of_mac_2() { return static_cast<int32_t>(offsetof(Data_t191216285, ___mac_2)); }
	inline int32_t get_mac_2() const { return ___mac_2; }
	inline int32_t* get_address_of_mac_2() { return &___mac_2; }
	inline void set_mac_2(int32_t value)
	{
		___mac_2 = value;
	}

	inline static int32_t get_offset_of_oem_3() { return static_cast<int32_t>(offsetof(Data_t191216285, ___oem_3)); }
	inline int32_t get_oem_3() const { return ___oem_3; }
	inline int32_t* get_address_of_oem_3() { return &___oem_3; }
	inline void set_oem_3(int32_t value)
	{
		___oem_3 = value;
	}

	inline static int32_t get_offset_of_right_to_left_4() { return static_cast<int32_t>(offsetof(Data_t191216285, ___right_to_left_4)); }
	inline bool get_right_to_left_4() const { return ___right_to_left_4; }
	inline bool* get_address_of_right_to_left_4() { return &___right_to_left_4; }
	inline void set_right_to_left_4(bool value)
	{
		___right_to_left_4 = value;
	}

	inline static int32_t get_offset_of_list_sep_5() { return static_cast<int32_t>(offsetof(Data_t191216285, ___list_sep_5)); }
	inline uint8_t get_list_sep_5() const { return ___list_sep_5; }
	inline uint8_t* get_address_of_list_sep_5() { return &___list_sep_5; }
	inline void set_list_sep_5(uint8_t value)
	{
		___list_sep_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo/Data
struct Data_t191216285_marshaled_pinvoke
{
	int32_t ___ansi_0;
	int32_t ___ebcdic_1;
	int32_t ___mac_2;
	int32_t ___oem_3;
	int32_t ___right_to_left_4;
	uint8_t ___list_sep_5;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo/Data
struct Data_t191216285_marshaled_com
{
	int32_t ___ansi_0;
	int32_t ___ebcdic_1;
	int32_t ___mac_2;
	int32_t ___oem_3;
	int32_t ___right_to_left_4;
	uint8_t ___list_sep_5;
};
#endif // DATA_T191216285_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of Mono.Unity.UnityTls/unitytls_interface_struct
struct unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshaled_pinvoke
{
	uint64_t ___UNITYTLS_INVALID_HANDLE_0;
	unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47  ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	Il2CppMethodPointer ___unitytls_errorstate_create_2;
	Il2CppMethodPointer ___unitytls_errorstate_raise_error_3;
	Il2CppMethodPointer ___unitytls_key_get_ref_4;
	Il2CppMethodPointer ___unitytls_key_parse_der_5;
	Il2CppMethodPointer ___unitytls_key_parse_pem_6;
	Il2CppMethodPointer ___unitytls_key_free_7;
	Il2CppMethodPointer ___unitytls_x509_export_der_8;
	Il2CppMethodPointer ___unitytls_x509list_get_ref_9;
	Il2CppMethodPointer ___unitytls_x509list_get_x509_10;
	Il2CppMethodPointer ___unitytls_x509list_create_11;
	Il2CppMethodPointer ___unitytls_x509list_append_12;
	Il2CppMethodPointer ___unitytls_x509list_append_der_13;
	Il2CppMethodPointer ___unitytls_x509list_append_pem_14;
	Il2CppMethodPointer ___unitytls_x509list_free_15;
	Il2CppMethodPointer ___unitytls_x509verify_default_ca_16;
	Il2CppMethodPointer ___unitytls_x509verify_explicit_ca_17;
	Il2CppMethodPointer ___unitytls_tlsctx_create_server_18;
	Il2CppMethodPointer ___unitytls_tlsctx_create_client_19;
	Il2CppMethodPointer ___unitytls_tlsctx_server_require_client_authentication_20;
	Il2CppMethodPointer ___unitytls_tlsctx_set_certificate_callback_21;
	Il2CppMethodPointer ___unitytls_tlsctx_set_trace_callback_22;
	Il2CppMethodPointer ___unitytls_tlsctx_set_x509verify_callback_23;
	Il2CppMethodPointer ___unitytls_tlsctx_set_supported_ciphersuites_24;
	Il2CppMethodPointer ___unitytls_tlsctx_get_ciphersuite_25;
	Il2CppMethodPointer ___unitytls_tlsctx_get_protocol_26;
	Il2CppMethodPointer ___unitytls_tlsctx_process_handshake_27;
	Il2CppMethodPointer ___unitytls_tlsctx_read_28;
	Il2CppMethodPointer ___unitytls_tlsctx_write_29;
	Il2CppMethodPointer ___unitytls_tlsctx_notify_close_30;
	Il2CppMethodPointer ___unitytls_tlsctx_free_31;
	Il2CppMethodPointer ___unitytls_random_generate_bytes_32;
};
// Native definition for COM marshalling of Mono.Unity.UnityTls/unitytls_interface_struct
struct unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshaled_com
{
	uint64_t ___UNITYTLS_INVALID_HANDLE_0;
	unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47  ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1;
	Il2CppMethodPointer ___unitytls_errorstate_create_2;
	Il2CppMethodPointer ___unitytls_errorstate_raise_error_3;
	Il2CppMethodPointer ___unitytls_key_get_ref_4;
	Il2CppMethodPointer ___unitytls_key_parse_der_5;
	Il2CppMethodPointer ___unitytls_key_parse_pem_6;
	Il2CppMethodPointer ___unitytls_key_free_7;
	Il2CppMethodPointer ___unitytls_x509_export_der_8;
	Il2CppMethodPointer ___unitytls_x509list_get_ref_9;
	Il2CppMethodPointer ___unitytls_x509list_get_x509_10;
	Il2CppMethodPointer ___unitytls_x509list_create_11;
	Il2CppMethodPointer ___unitytls_x509list_append_12;
	Il2CppMethodPointer ___unitytls_x509list_append_der_13;
	Il2CppMethodPointer ___unitytls_x509list_append_pem_14;
	Il2CppMethodPointer ___unitytls_x509list_free_15;
	Il2CppMethodPointer ___unitytls_x509verify_default_ca_16;
	Il2CppMethodPointer ___unitytls_x509verify_explicit_ca_17;
	Il2CppMethodPointer ___unitytls_tlsctx_create_server_18;
	Il2CppMethodPointer ___unitytls_tlsctx_create_client_19;
	Il2CppMethodPointer ___unitytls_tlsctx_server_require_client_authentication_20;
	Il2CppMethodPointer ___unitytls_tlsctx_set_certificate_callback_21;
	Il2CppMethodPointer ___unitytls_tlsctx_set_trace_callback_22;
	Il2CppMethodPointer ___unitytls_tlsctx_set_x509verify_callback_23;
	Il2CppMethodPointer ___unitytls_tlsctx_set_supported_ciphersuites_24;
	Il2CppMethodPointer ___unitytls_tlsctx_get_ciphersuite_25;
	Il2CppMethodPointer ___unitytls_tlsctx_get_protocol_26;
	Il2CppMethodPointer ___unitytls_tlsctx_process_handshake_27;
	Il2CppMethodPointer ___unitytls_tlsctx_read_28;
	Il2CppMethodPointer ___unitytls_tlsctx_write_29;
	Il2CppMethodPointer ___unitytls_tlsctx_notify_close_30;
	Il2CppMethodPointer ___unitytls_tlsctx_free_31;
	Il2CppMethodPointer ___unitytls_random_generate_bytes_32;
};
#endif // UNITYTLS_INTERFACE_STRUCT_T0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_H
#ifndef UNITYTLS_ERRORSTATE_CREATE_T_T104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_H
#define UNITYTLS_ERRORSTATE_CREATE_T_T104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_H
=======
#endif // BOOLEAN_T97287965_H
#ifndef DIGITVALUES_T1637379909_H
#define DIGITVALUES_T1637379909_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct  unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9  : public MulticastDelegate_t
{
public:

public:
};
=======
// System.Globalization.CharUnicodeInfo/DigitValues
#pragma pack(push, tp, 2)
struct  DigitValues_t1637379909 
{
public:
	// System.SByte System.Globalization.CharUnicodeInfo/DigitValues::decimalDigit
	int8_t ___decimalDigit_0;
	// System.SByte System.Globalization.CharUnicodeInfo/DigitValues::digit
	int8_t ___digit_1;

public:
	inline static int32_t get_offset_of_decimalDigit_0() { return static_cast<int32_t>(offsetof(DigitValues_t1637379909, ___decimalDigit_0)); }
	inline int8_t get_decimalDigit_0() const { return ___decimalDigit_0; }
	inline int8_t* get_address_of_decimalDigit_0() { return &___decimalDigit_0; }
	inline void set_decimalDigit_0(int8_t value)
	{
		___decimalDigit_0 = value;
	}

	inline static int32_t get_offset_of_digit_1() { return static_cast<int32_t>(offsetof(DigitValues_t1637379909, ___digit_1)); }
	inline int8_t get_digit_1() const { return ___digit_1; }
	inline int8_t* get_address_of_digit_1() { return &___digit_1; }
	inline void set_digit_1(int8_t value)
	{
		___digit_1 = value;
	}
};
#pragma pack(pop, tp)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_ERRORSTATE_CREATE_T_T104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_H
#ifndef UNITYTLS_ERRORSTATE_RAISE_ERROR_T_TC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_H
#define UNITYTLS_ERRORSTATE_RAISE_ERROR_T_TC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_H
=======
#endif // DIGITVALUES_T1637379909_H
#ifndef RUNTIMEPROPERTYHANDLE_T359893900_H
#define RUNTIMEPROPERTYHANDLE_T359893900_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct  unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.RuntimePropertyHandle
struct  RuntimePropertyHandle_t359893900 
{
public:
	// System.IntPtr Mono.RuntimePropertyHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimePropertyHandle_t359893900, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_ERRORSTATE_RAISE_ERROR_T_TC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_H
#ifndef UNITYTLS_KEY_FREE_T_TCC7AD95D3B758BB99785645E65EDCD65A1D243AB_H
#define UNITYTLS_KEY_FREE_T_TCC7AD95D3B758BB99785645E65EDCD65A1D243AB_H
=======
#endif // RUNTIMEPROPERTYHANDLE_T359893900_H
#ifndef TOKENTYPE_T216849757_H
#define TOKENTYPE_T216849757_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct  unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB  : public MulticastDelegate_t
{
public:

public:
=======
// System.TokenType
struct  TokenType_t216849757 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t216849757, ___value___2)); }
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
#endif // UNITYTLS_KEY_FREE_T_TCC7AD95D3B758BB99785645E65EDCD65A1D243AB_H
#ifndef UNITYTLS_KEY_GET_REF_T_T2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_H
#define UNITYTLS_KEY_GET_REF_T_T2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_H
=======
#endif // TOKENTYPE_T216849757_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct  unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7  : public MulticastDelegate_t
{
public:

public:
=======
// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_0)); }
	inline TimeSpan_t881159249  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t881159249 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t881159249  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t881159249  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t881159249  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t881159249  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t881159249  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_KEY_GET_REF_T_T2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_H
#ifndef UNITYTLS_KEY_PARSE_DER_T_T2ABD1C146C8B9405F6E5A78CD59A779EA607741B_H
#define UNITYTLS_KEY_PARSE_DER_T_T2ABD1C146C8B9405F6E5A78CD59A779EA607741B_H
=======
#endif // TIMESPAN_T881159249_H
#ifndef REMOTECLASS_T4006407480_H
#define REMOTECLASS_T4006407480_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct  unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.RuntimeStructs/RemoteClass
struct  RemoteClass_t4006407480 
{
public:
	// System.IntPtr Mono.RuntimeStructs/RemoteClass::default_vtable
	intptr_t ___default_vtable_0;
	// System.IntPtr Mono.RuntimeStructs/RemoteClass::xdomain_vtable
	intptr_t ___xdomain_vtable_1;
	// Mono.RuntimeStructs/MonoClass* Mono.RuntimeStructs/RemoteClass::proxy_class
	MonoClass_t3449698282 * ___proxy_class_2;
	// System.IntPtr Mono.RuntimeStructs/RemoteClass::proxy_class_name
	intptr_t ___proxy_class_name_3;
	// System.UInt32 Mono.RuntimeStructs/RemoteClass::interface_count
	uint32_t ___interface_count_4;

public:
	inline static int32_t get_offset_of_default_vtable_0() { return static_cast<int32_t>(offsetof(RemoteClass_t4006407480, ___default_vtable_0)); }
	inline intptr_t get_default_vtable_0() const { return ___default_vtable_0; }
	inline intptr_t* get_address_of_default_vtable_0() { return &___default_vtable_0; }
	inline void set_default_vtable_0(intptr_t value)
	{
		___default_vtable_0 = value;
	}

	inline static int32_t get_offset_of_xdomain_vtable_1() { return static_cast<int32_t>(offsetof(RemoteClass_t4006407480, ___xdomain_vtable_1)); }
	inline intptr_t get_xdomain_vtable_1() const { return ___xdomain_vtable_1; }
	inline intptr_t* get_address_of_xdomain_vtable_1() { return &___xdomain_vtable_1; }
	inline void set_xdomain_vtable_1(intptr_t value)
	{
		___xdomain_vtable_1 = value;
	}

	inline static int32_t get_offset_of_proxy_class_2() { return static_cast<int32_t>(offsetof(RemoteClass_t4006407480, ___proxy_class_2)); }
	inline MonoClass_t3449698282 * get_proxy_class_2() const { return ___proxy_class_2; }
	inline MonoClass_t3449698282 ** get_address_of_proxy_class_2() { return &___proxy_class_2; }
	inline void set_proxy_class_2(MonoClass_t3449698282 * value)
	{
		___proxy_class_2 = value;
	}

	inline static int32_t get_offset_of_proxy_class_name_3() { return static_cast<int32_t>(offsetof(RemoteClass_t4006407480, ___proxy_class_name_3)); }
	inline intptr_t get_proxy_class_name_3() const { return ___proxy_class_name_3; }
	inline intptr_t* get_address_of_proxy_class_name_3() { return &___proxy_class_name_3; }
	inline void set_proxy_class_name_3(intptr_t value)
	{
		___proxy_class_name_3 = value;
	}

	inline static int32_t get_offset_of_interface_count_4() { return static_cast<int32_t>(offsetof(RemoteClass_t4006407480, ___interface_count_4)); }
	inline uint32_t get_interface_count_4() const { return ___interface_count_4; }
	inline uint32_t* get_address_of_interface_count_4() { return &___interface_count_4; }
	inline void set_interface_count_4(uint32_t value)
	{
		___interface_count_4 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_KEY_PARSE_DER_T_T2ABD1C146C8B9405F6E5A78CD59A779EA607741B_H
#ifndef UNITYTLS_KEY_PARSE_PEM_T_TB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_H
#define UNITYTLS_KEY_PARSE_PEM_T_TB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_H
=======
// Native definition for P/Invoke marshalling of Mono.RuntimeStructs/RemoteClass
struct RemoteClass_t4006407480_marshaled_pinvoke
{
	intptr_t ___default_vtable_0;
	intptr_t ___xdomain_vtable_1;
	MonoClass_t3449698282 * ___proxy_class_2;
	intptr_t ___proxy_class_name_3;
	uint32_t ___interface_count_4;
};
// Native definition for COM marshalling of Mono.RuntimeStructs/RemoteClass
struct RemoteClass_t4006407480_marshaled_com
{
	intptr_t ___default_vtable_0;
	intptr_t ___xdomain_vtable_1;
	MonoClass_t3449698282 * ___proxy_class_2;
	intptr_t ___proxy_class_name_3;
	uint32_t ___interface_count_4;
};
#endif // REMOTECLASS_T4006407480_H
#ifndef SAFEGPTRARRAYHANDLE_T2768407725_H
#define SAFEGPTRARRAYHANDLE_T2768407725_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct  unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.SafeGPtrArrayHandle
struct  SafeGPtrArrayHandle_t2768407725 
{
public:
	// Mono.RuntimeGPtrArrayHandle Mono.SafeGPtrArrayHandle::handle
	RuntimeGPtrArrayHandle_t2690631865  ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeGPtrArrayHandle_t2768407725, ___handle_0)); }
	inline RuntimeGPtrArrayHandle_t2690631865  get_handle_0() const { return ___handle_0; }
	inline RuntimeGPtrArrayHandle_t2690631865 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(RuntimeGPtrArrayHandle_t2690631865  value)
	{
		___handle_0 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_KEY_PARSE_PEM_T_TB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_H
#ifndef UNITYTLS_RANDOM_GENERATE_BYTES_T_T494B8599A6D4247BB0C8AB7341DDC73BE42623F7_H
#define UNITYTLS_RANDOM_GENERATE_BYTES_T_T494B8599A6D4247BB0C8AB7341DDC73BE42623F7_H
=======
// Native definition for P/Invoke marshalling of Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_t2768407725_marshaled_pinvoke
{
	RuntimeGPtrArrayHandle_t2690631865_marshaled_pinvoke ___handle_0;
};
// Native definition for COM marshalling of Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_t2768407725_marshaled_com
{
	RuntimeGPtrArrayHandle_t2690631865_marshaled_com ___handle_0;
};
#endif // SAFEGPTRARRAYHANDLE_T2768407725_H
#ifndef MONOASSEMBLYNAME_T4195151589_H
#define MONOASSEMBLYNAME_T4195151589_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct  unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.MonoAssemblyName
struct  MonoAssemblyName_t4195151589 
{
public:
	// System.IntPtr Mono.MonoAssemblyName::name
	intptr_t ___name_0;
	// System.IntPtr Mono.MonoAssemblyName::culture
	intptr_t ___culture_1;
	// System.IntPtr Mono.MonoAssemblyName::hash_value
	intptr_t ___hash_value_2;
	// System.IntPtr Mono.MonoAssemblyName::public_key
	intptr_t ___public_key_3;
	// Mono.MonoAssemblyName/<public_key_token>e__FixedBuffer Mono.MonoAssemblyName::public_key_token
	U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253  ___public_key_token_4;
	// System.UInt32 Mono.MonoAssemblyName::hash_alg
	uint32_t ___hash_alg_5;
	// System.UInt32 Mono.MonoAssemblyName::hash_len
	uint32_t ___hash_len_6;
	// System.UInt32 Mono.MonoAssemblyName::flags
	uint32_t ___flags_7;
	// System.UInt16 Mono.MonoAssemblyName::major
	uint16_t ___major_8;
	// System.UInt16 Mono.MonoAssemblyName::minor
	uint16_t ___minor_9;
	// System.UInt16 Mono.MonoAssemblyName::build
	uint16_t ___build_10;
	// System.UInt16 Mono.MonoAssemblyName::revision
	uint16_t ___revision_11;
	// System.UInt16 Mono.MonoAssemblyName::arch
	uint16_t ___arch_12;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___name_0)); }
	inline intptr_t get_name_0() const { return ___name_0; }
	inline intptr_t* get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(intptr_t value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___culture_1)); }
	inline intptr_t get_culture_1() const { return ___culture_1; }
	inline intptr_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(intptr_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_hash_value_2() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___hash_value_2)); }
	inline intptr_t get_hash_value_2() const { return ___hash_value_2; }
	inline intptr_t* get_address_of_hash_value_2() { return &___hash_value_2; }
	inline void set_hash_value_2(intptr_t value)
	{
		___hash_value_2 = value;
	}

	inline static int32_t get_offset_of_public_key_3() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___public_key_3)); }
	inline intptr_t get_public_key_3() const { return ___public_key_3; }
	inline intptr_t* get_address_of_public_key_3() { return &___public_key_3; }
	inline void set_public_key_3(intptr_t value)
	{
		___public_key_3 = value;
	}

	inline static int32_t get_offset_of_public_key_token_4() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___public_key_token_4)); }
	inline U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253  get_public_key_token_4() const { return ___public_key_token_4; }
	inline U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253 * get_address_of_public_key_token_4() { return &___public_key_token_4; }
	inline void set_public_key_token_4(U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253  value)
	{
		___public_key_token_4 = value;
	}

	inline static int32_t get_offset_of_hash_alg_5() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___hash_alg_5)); }
	inline uint32_t get_hash_alg_5() const { return ___hash_alg_5; }
	inline uint32_t* get_address_of_hash_alg_5() { return &___hash_alg_5; }
	inline void set_hash_alg_5(uint32_t value)
	{
		___hash_alg_5 = value;
	}

	inline static int32_t get_offset_of_hash_len_6() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___hash_len_6)); }
	inline uint32_t get_hash_len_6() const { return ___hash_len_6; }
	inline uint32_t* get_address_of_hash_len_6() { return &___hash_len_6; }
	inline void set_hash_len_6(uint32_t value)
	{
		___hash_len_6 = value;
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___flags_7)); }
	inline uint32_t get_flags_7() const { return ___flags_7; }
	inline uint32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(uint32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_major_8() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___major_8)); }
	inline uint16_t get_major_8() const { return ___major_8; }
	inline uint16_t* get_address_of_major_8() { return &___major_8; }
	inline void set_major_8(uint16_t value)
	{
		___major_8 = value;
	}

	inline static int32_t get_offset_of_minor_9() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___minor_9)); }
	inline uint16_t get_minor_9() const { return ___minor_9; }
	inline uint16_t* get_address_of_minor_9() { return &___minor_9; }
	inline void set_minor_9(uint16_t value)
	{
		___minor_9 = value;
	}

	inline static int32_t get_offset_of_build_10() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___build_10)); }
	inline uint16_t get_build_10() const { return ___build_10; }
	inline uint16_t* get_address_of_build_10() { return &___build_10; }
	inline void set_build_10(uint16_t value)
	{
		___build_10 = value;
	}

	inline static int32_t get_offset_of_revision_11() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___revision_11)); }
	inline uint16_t get_revision_11() const { return ___revision_11; }
	inline uint16_t* get_address_of_revision_11() { return &___revision_11; }
	inline void set_revision_11(uint16_t value)
	{
		___revision_11 = value;
	}

	inline static int32_t get_offset_of_arch_12() { return static_cast<int32_t>(offsetof(MonoAssemblyName_t4195151589, ___arch_12)); }
	inline uint16_t get_arch_12() const { return ___arch_12; }
	inline uint16_t* get_address_of_arch_12() { return &___arch_12; }
	inline void set_arch_12(uint16_t value)
	{
		___arch_12 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_RANDOM_GENERATE_BYTES_T_T494B8599A6D4247BB0C8AB7341DDC73BE42623F7_H
#ifndef UNITYTLS_TLSCTX_CREATE_CLIENT_T_TD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_H
#define UNITYTLS_TLSCTX_CREATE_CLIENT_T_TD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_H
=======
#endif // MONOASSEMBLYNAME_T4195151589_H
#ifndef SMALLXMLPARSEREXCEPTION_T1329648272_H
#define SMALLXMLPARSEREXCEPTION_T1329648272_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct  unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.Xml.SmallXmlParserException
struct  SmallXmlParserException_t1329648272  : public SystemException_t176217640
{
public:
	// System.Int32 Mono.Xml.SmallXmlParserException::line
	int32_t ___line_16;
	// System.Int32 Mono.Xml.SmallXmlParserException::column
	int32_t ___column_17;

public:
	inline static int32_t get_offset_of_line_16() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t1329648272, ___line_16)); }
	inline int32_t get_line_16() const { return ___line_16; }
	inline int32_t* get_address_of_line_16() { return &___line_16; }
	inline void set_line_16(int32_t value)
	{
		___line_16 = value;
	}

	inline static int32_t get_offset_of_column_17() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t1329648272, ___column_17)); }
	inline int32_t get_column_17() const { return ___column_17; }
	inline int32_t* get_address_of_column_17() { return &___column_17; }
	inline void set_column_17(int32_t value)
	{
		___column_17 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_CREATE_CLIENT_T_TD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_H
#ifndef UNITYTLS_TLSCTX_CREATE_SERVER_T_T6E7812D40DDD91958E3CFBB92B5F5748D477E19D_H
#define UNITYTLS_TLSCTX_CREATE_SERVER_T_T6E7812D40DDD91958E3CFBB92B5F5748D477E19D_H
=======
#endif // SMALLXMLPARSEREXCEPTION_T1329648272_H
#ifndef SAFESTRINGMARSHAL_T1394540657_H
#define SAFESTRINGMARSHAL_T1394540657_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct  unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.SafeStringMarshal
struct  SafeStringMarshal_t1394540657 
{
public:
	// System.String Mono.SafeStringMarshal::str
	String_t* ___str_0;
	// System.IntPtr Mono.SafeStringMarshal::marshaled_string
	intptr_t ___marshaled_string_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t1394540657, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_marshaled_string_1() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t1394540657, ___marshaled_string_1)); }
	inline intptr_t get_marshaled_string_1() const { return ___marshaled_string_1; }
	inline intptr_t* get_address_of_marshaled_string_1() { return &___marshaled_string_1; }
	inline void set_marshaled_string_1(intptr_t value)
	{
		___marshaled_string_1 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_CREATE_SERVER_T_T6E7812D40DDD91958E3CFBB92B5F5748D477E19D_H
#ifndef UNITYTLS_TLSCTX_FREE_T_TB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_H
#define UNITYTLS_TLSCTX_FREE_T_TB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_H
=======
// Native definition for P/Invoke marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t1394540657_marshaled_pinvoke
{
	char* ___str_0;
	intptr_t ___marshaled_string_1;
};
// Native definition for COM marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t1394540657_marshaled_com
{
	Il2CppChar* ___str_0;
	intptr_t ___marshaled_string_1;
};
#endif // SAFESTRINGMARSHAL_T1394540657_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct  unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2  : public MulticastDelegate_t
{
public:

public:
=======
// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_16;

public:
	inline static int32_t get_offset_of_m_paramName_16() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_16)); }
	inline String_t* get_m_paramName_16() const { return ___m_paramName_16; }
	inline String_t** get_address_of_m_paramName_16() { return &___m_paramName_16; }
	inline void set_m_paramName_16(String_t* value)
	{
		___m_paramName_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_16), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_FREE_T_TB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_H
#ifndef UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_T94A91CB42A2EBB2CC598EF3E278770AFD80696A0_H
#define UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_T94A91CB42A2EBB2CC598EF3E278770AFD80696A0_H
=======
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef GENERICPARAMINFO_T1825140006_H
#define GENERICPARAMINFO_T1825140006_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct  unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.RuntimeStructs/GenericParamInfo
struct  GenericParamInfo_t1825140006 
{
public:
	// Mono.RuntimeStructs/MonoClass* Mono.RuntimeStructs/GenericParamInfo::pklass
	MonoClass_t3449698282 * ___pklass_0;
	// System.IntPtr Mono.RuntimeStructs/GenericParamInfo::name
	intptr_t ___name_1;
	// System.UInt16 Mono.RuntimeStructs/GenericParamInfo::flags
	uint16_t ___flags_2;
	// System.UInt32 Mono.RuntimeStructs/GenericParamInfo::token
	uint32_t ___token_3;
	// Mono.RuntimeStructs/MonoClass** Mono.RuntimeStructs/GenericParamInfo::constraints
	MonoClass_t3449698282 ** ___constraints_4;

public:
	inline static int32_t get_offset_of_pklass_0() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1825140006, ___pklass_0)); }
	inline MonoClass_t3449698282 * get_pklass_0() const { return ___pklass_0; }
	inline MonoClass_t3449698282 ** get_address_of_pklass_0() { return &___pklass_0; }
	inline void set_pklass_0(MonoClass_t3449698282 * value)
	{
		___pklass_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1825140006, ___name_1)); }
	inline intptr_t get_name_1() const { return ___name_1; }
	inline intptr_t* get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(intptr_t value)
	{
		___name_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1825140006, ___flags_2)); }
	inline uint16_t get_flags_2() const { return ___flags_2; }
	inline uint16_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(uint16_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1825140006, ___token_3)); }
	inline uint32_t get_token_3() const { return ___token_3; }
	inline uint32_t* get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(uint32_t value)
	{
		___token_3 = value;
	}

	inline static int32_t get_offset_of_constraints_4() { return static_cast<int32_t>(offsetof(GenericParamInfo_t1825140006, ___constraints_4)); }
	inline MonoClass_t3449698282 ** get_constraints_4() const { return ___constraints_4; }
	inline MonoClass_t3449698282 *** get_address_of_constraints_4() { return &___constraints_4; }
	inline void set_constraints_4(MonoClass_t3449698282 ** value)
	{
		___constraints_4 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_T94A91CB42A2EBB2CC598EF3E278770AFD80696A0_H
#ifndef UNITYTLS_TLSCTX_GET_PROTOCOL_T_TB29092875D3CBD25E4461BFD165B5373FA54DB14_H
#define UNITYTLS_TLSCTX_GET_PROTOCOL_T_TB29092875D3CBD25E4461BFD165B5373FA54DB14_H
=======
// Native definition for P/Invoke marshalling of Mono.RuntimeStructs/GenericParamInfo
struct GenericParamInfo_t1825140006_marshaled_pinvoke
{
	MonoClass_t3449698282 * ___pklass_0;
	intptr_t ___name_1;
	uint16_t ___flags_2;
	uint32_t ___token_3;
	MonoClass_t3449698282 ** ___constraints_4;
};
// Native definition for COM marshalling of Mono.RuntimeStructs/GenericParamInfo
struct GenericParamInfo_t1825140006_marshaled_com
{
	MonoClass_t3449698282 * ___pklass_0;
	intptr_t ___name_1;
	uint16_t ___flags_2;
	uint32_t ___token_3;
	MonoClass_t3449698282 ** ___constraints_4;
};
#endif // GENERICPARAMINFO_T1825140006_H
#ifndef MONOERROR_T4245851944_H
#define MONOERROR_T4245851944_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct  unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.RuntimeStructs/MonoError
struct  MonoError_t4245851944 
{
public:
	// System.UInt16 Mono.RuntimeStructs/MonoError::error_code
	uint16_t ___error_code_0;
	// System.UInt16 Mono.RuntimeStructs/MonoError::hidden_0
	uint16_t ___hidden_0_1;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_1
	intptr_t ___hidden_1_2;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_2
	intptr_t ___hidden_2_3;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_3
	intptr_t ___hidden_3_4;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_4
	intptr_t ___hidden_4_5;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_5
	intptr_t ___hidden_5_6;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_6
	intptr_t ___hidden_6_7;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_7
	intptr_t ___hidden_7_8;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_8
	intptr_t ___hidden_8_9;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_11
	intptr_t ___hidden_11_10;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_12
	intptr_t ___hidden_12_11;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_13
	intptr_t ___hidden_13_12;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_14
	intptr_t ___hidden_14_13;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_15
	intptr_t ___hidden_15_14;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_16
	intptr_t ___hidden_16_15;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_17
	intptr_t ___hidden_17_16;
	// System.IntPtr Mono.RuntimeStructs/MonoError::hidden_18
	intptr_t ___hidden_18_17;

public:
	inline static int32_t get_offset_of_error_code_0() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___error_code_0)); }
	inline uint16_t get_error_code_0() const { return ___error_code_0; }
	inline uint16_t* get_address_of_error_code_0() { return &___error_code_0; }
	inline void set_error_code_0(uint16_t value)
	{
		___error_code_0 = value;
	}

	inline static int32_t get_offset_of_hidden_0_1() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_0_1)); }
	inline uint16_t get_hidden_0_1() const { return ___hidden_0_1; }
	inline uint16_t* get_address_of_hidden_0_1() { return &___hidden_0_1; }
	inline void set_hidden_0_1(uint16_t value)
	{
		___hidden_0_1 = value;
	}

	inline static int32_t get_offset_of_hidden_1_2() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_1_2)); }
	inline intptr_t get_hidden_1_2() const { return ___hidden_1_2; }
	inline intptr_t* get_address_of_hidden_1_2() { return &___hidden_1_2; }
	inline void set_hidden_1_2(intptr_t value)
	{
		___hidden_1_2 = value;
	}

	inline static int32_t get_offset_of_hidden_2_3() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_2_3)); }
	inline intptr_t get_hidden_2_3() const { return ___hidden_2_3; }
	inline intptr_t* get_address_of_hidden_2_3() { return &___hidden_2_3; }
	inline void set_hidden_2_3(intptr_t value)
	{
		___hidden_2_3 = value;
	}

	inline static int32_t get_offset_of_hidden_3_4() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_3_4)); }
	inline intptr_t get_hidden_3_4() const { return ___hidden_3_4; }
	inline intptr_t* get_address_of_hidden_3_4() { return &___hidden_3_4; }
	inline void set_hidden_3_4(intptr_t value)
	{
		___hidden_3_4 = value;
	}

	inline static int32_t get_offset_of_hidden_4_5() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_4_5)); }
	inline intptr_t get_hidden_4_5() const { return ___hidden_4_5; }
	inline intptr_t* get_address_of_hidden_4_5() { return &___hidden_4_5; }
	inline void set_hidden_4_5(intptr_t value)
	{
		___hidden_4_5 = value;
	}

	inline static int32_t get_offset_of_hidden_5_6() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_5_6)); }
	inline intptr_t get_hidden_5_6() const { return ___hidden_5_6; }
	inline intptr_t* get_address_of_hidden_5_6() { return &___hidden_5_6; }
	inline void set_hidden_5_6(intptr_t value)
	{
		___hidden_5_6 = value;
	}

	inline static int32_t get_offset_of_hidden_6_7() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_6_7)); }
	inline intptr_t get_hidden_6_7() const { return ___hidden_6_7; }
	inline intptr_t* get_address_of_hidden_6_7() { return &___hidden_6_7; }
	inline void set_hidden_6_7(intptr_t value)
	{
		___hidden_6_7 = value;
	}

	inline static int32_t get_offset_of_hidden_7_8() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_7_8)); }
	inline intptr_t get_hidden_7_8() const { return ___hidden_7_8; }
	inline intptr_t* get_address_of_hidden_7_8() { return &___hidden_7_8; }
	inline void set_hidden_7_8(intptr_t value)
	{
		___hidden_7_8 = value;
	}

	inline static int32_t get_offset_of_hidden_8_9() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_8_9)); }
	inline intptr_t get_hidden_8_9() const { return ___hidden_8_9; }
	inline intptr_t* get_address_of_hidden_8_9() { return &___hidden_8_9; }
	inline void set_hidden_8_9(intptr_t value)
	{
		___hidden_8_9 = value;
	}

	inline static int32_t get_offset_of_hidden_11_10() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_11_10)); }
	inline intptr_t get_hidden_11_10() const { return ___hidden_11_10; }
	inline intptr_t* get_address_of_hidden_11_10() { return &___hidden_11_10; }
	inline void set_hidden_11_10(intptr_t value)
	{
		___hidden_11_10 = value;
	}

	inline static int32_t get_offset_of_hidden_12_11() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_12_11)); }
	inline intptr_t get_hidden_12_11() const { return ___hidden_12_11; }
	inline intptr_t* get_address_of_hidden_12_11() { return &___hidden_12_11; }
	inline void set_hidden_12_11(intptr_t value)
	{
		___hidden_12_11 = value;
	}

	inline static int32_t get_offset_of_hidden_13_12() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_13_12)); }
	inline intptr_t get_hidden_13_12() const { return ___hidden_13_12; }
	inline intptr_t* get_address_of_hidden_13_12() { return &___hidden_13_12; }
	inline void set_hidden_13_12(intptr_t value)
	{
		___hidden_13_12 = value;
	}

	inline static int32_t get_offset_of_hidden_14_13() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_14_13)); }
	inline intptr_t get_hidden_14_13() const { return ___hidden_14_13; }
	inline intptr_t* get_address_of_hidden_14_13() { return &___hidden_14_13; }
	inline void set_hidden_14_13(intptr_t value)
	{
		___hidden_14_13 = value;
	}

	inline static int32_t get_offset_of_hidden_15_14() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_15_14)); }
	inline intptr_t get_hidden_15_14() const { return ___hidden_15_14; }
	inline intptr_t* get_address_of_hidden_15_14() { return &___hidden_15_14; }
	inline void set_hidden_15_14(intptr_t value)
	{
		___hidden_15_14 = value;
	}

	inline static int32_t get_offset_of_hidden_16_15() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_16_15)); }
	inline intptr_t get_hidden_16_15() const { return ___hidden_16_15; }
	inline intptr_t* get_address_of_hidden_16_15() { return &___hidden_16_15; }
	inline void set_hidden_16_15(intptr_t value)
	{
		___hidden_16_15 = value;
	}

	inline static int32_t get_offset_of_hidden_17_16() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_17_16)); }
	inline intptr_t get_hidden_17_16() const { return ___hidden_17_16; }
	inline intptr_t* get_address_of_hidden_17_16() { return &___hidden_17_16; }
	inline void set_hidden_17_16(intptr_t value)
	{
		___hidden_17_16 = value;
	}

	inline static int32_t get_offset_of_hidden_18_17() { return static_cast<int32_t>(offsetof(MonoError_t4245851944, ___hidden_18_17)); }
	inline intptr_t get_hidden_18_17() const { return ___hidden_18_17; }
	inline intptr_t* get_address_of_hidden_18_17() { return &___hidden_18_17; }
	inline void set_hidden_18_17(intptr_t value)
	{
		___hidden_18_17 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_GET_PROTOCOL_T_TB29092875D3CBD25E4461BFD165B5373FA54DB14_H
#ifndef UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_T2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_H
#define UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_T2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_H
=======
#endif // MONOERROR_T4245851944_H
#ifndef HANDLESTACKMARK_T1309497343_H
#define HANDLESTACKMARK_T1309497343_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct  unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D  : public MulticastDelegate_t
{
public:

public:
=======
// Mono.RuntimeStructs/HandleStackMark
struct  HandleStackMark_t1309497343 
{
public:
	// System.Int32 Mono.RuntimeStructs/HandleStackMark::size
	int32_t ___size_0;
	// System.IntPtr Mono.RuntimeStructs/HandleStackMark::chunk
	intptr_t ___chunk_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(HandleStackMark_t1309497343, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_chunk_1() { return static_cast<int32_t>(offsetof(HandleStackMark_t1309497343, ___chunk_1)); }
	inline intptr_t get_chunk_1() const { return ___chunk_1; }
	inline intptr_t* get_address_of_chunk_1() { return &___chunk_1; }
	inline void set_chunk_1(intptr_t value)
	{
		___chunk_1 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_T2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_H
#ifndef UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_TC8AAF317CBE4CA216F22BF031ECF89315B963C9D_H
#define UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_TC8AAF317CBE4CA216F22BF031ECF89315B963C9D_H
=======
#endif // HANDLESTACKMARK_T1309497343_H
#ifndef HEBREWNUMBERPARSINGSTATE_T2098543808_H
#define HEBREWNUMBERPARSINGSTATE_T2098543808_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct  unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.HebrewNumberParsingState
struct  HebrewNumberParsingState_t2098543808 
{
public:
	// System.Int32 System.Globalization.HebrewNumberParsingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HebrewNumberParsingState_t2098543808, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_TC8AAF317CBE4CA216F22BF031ECF89315B963C9D_H
#ifndef UNITYTLS_TLSCTX_READ_T_TA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_H
#define UNITYTLS_TLSCTX_READ_T_TA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_H
=======
#endif // HEBREWNUMBERPARSINGSTATE_T2098543808_H
#ifndef GREGORIANCALENDARTYPES_T3815403233_H
#define GREGORIANCALENDARTYPES_T3815403233_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct  unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.GregorianCalendarTypes
struct  GregorianCalendarTypes_t3815403233 
{
public:
	// System.Int32 System.Globalization.GregorianCalendarTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GregorianCalendarTypes_t3815403233, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_READ_T_TA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_H
#ifndef UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_T77B3CAFF25690A45405E3C957E40CC4FF83B49C6_H
#define UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_T77B3CAFF25690A45405E3C957E40CC4FF83B49C6_H
=======
#endif // GREGORIANCALENDARTYPES_T3815403233_H
#ifndef GREGORIANCALENDARHELPER_T3016720499_H
#define GREGORIANCALENDARHELPER_T3016720499_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct  unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.GregorianCalendarHelper
struct  GregorianCalendarHelper_t3016720499  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.GregorianCalendarHelper::m_maxYear
	int32_t ___m_maxYear_2;
	// System.Int32 System.Globalization.GregorianCalendarHelper::m_minYear
	int32_t ___m_minYear_3;
	// System.Globalization.Calendar System.Globalization.GregorianCalendarHelper::m_Cal
	Calendar_t1661121569 * ___m_Cal_4;
	// System.Globalization.EraInfo[] System.Globalization.GregorianCalendarHelper::m_EraInfo
	EraInfoU5BU5D_t2775298796* ___m_EraInfo_5;
	// System.Int32[] System.Globalization.GregorianCalendarHelper::m_eras
	Int32U5BU5D_t385246372* ___m_eras_6;
	// System.DateTime System.Globalization.GregorianCalendarHelper::m_minDate
	DateTime_t3738529785  ___m_minDate_7;

public:
	inline static int32_t get_offset_of_m_maxYear_2() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499, ___m_maxYear_2)); }
	inline int32_t get_m_maxYear_2() const { return ___m_maxYear_2; }
	inline int32_t* get_address_of_m_maxYear_2() { return &___m_maxYear_2; }
	inline void set_m_maxYear_2(int32_t value)
	{
		___m_maxYear_2 = value;
	}

	inline static int32_t get_offset_of_m_minYear_3() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499, ___m_minYear_3)); }
	inline int32_t get_m_minYear_3() const { return ___m_minYear_3; }
	inline int32_t* get_address_of_m_minYear_3() { return &___m_minYear_3; }
	inline void set_m_minYear_3(int32_t value)
	{
		___m_minYear_3 = value;
	}

	inline static int32_t get_offset_of_m_Cal_4() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499, ___m_Cal_4)); }
	inline Calendar_t1661121569 * get_m_Cal_4() const { return ___m_Cal_4; }
	inline Calendar_t1661121569 ** get_address_of_m_Cal_4() { return &___m_Cal_4; }
	inline void set_m_Cal_4(Calendar_t1661121569 * value)
	{
		___m_Cal_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cal_4), value);
	}

	inline static int32_t get_offset_of_m_EraInfo_5() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499, ___m_EraInfo_5)); }
	inline EraInfoU5BU5D_t2775298796* get_m_EraInfo_5() const { return ___m_EraInfo_5; }
	inline EraInfoU5BU5D_t2775298796** get_address_of_m_EraInfo_5() { return &___m_EraInfo_5; }
	inline void set_m_EraInfo_5(EraInfoU5BU5D_t2775298796* value)
	{
		___m_EraInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_EraInfo_5), value);
	}

	inline static int32_t get_offset_of_m_eras_6() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499, ___m_eras_6)); }
	inline Int32U5BU5D_t385246372* get_m_eras_6() const { return ___m_eras_6; }
	inline Int32U5BU5D_t385246372** get_address_of_m_eras_6() { return &___m_eras_6; }
	inline void set_m_eras_6(Int32U5BU5D_t385246372* value)
	{
		___m_eras_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_eras_6), value);
	}

	inline static int32_t get_offset_of_m_minDate_7() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499, ___m_minDate_7)); }
	inline DateTime_t3738529785  get_m_minDate_7() const { return ___m_minDate_7; }
	inline DateTime_t3738529785 * get_address_of_m_minDate_7() { return &___m_minDate_7; }
	inline void set_m_minDate_7(DateTime_t3738529785  value)
	{
		___m_minDate_7 = value;
	}
};

struct GregorianCalendarHelper_t3016720499_StaticFields
{
public:
	// System.Int32[] System.Globalization.GregorianCalendarHelper::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_0;
	// System.Int32[] System.Globalization.GregorianCalendarHelper::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_1;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t3016720499_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_T77B3CAFF25690A45405E3C957E40CC4FF83B49C6_H
#ifndef UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_TC4864FE0F6A3398A572F2511AA64C72126640937_H
#define UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_TC4864FE0F6A3398A572F2511AA64C72126640937_H
=======
#endif // GREGORIANCALENDARHELPER_T3016720499_H
#ifndef HEBREWTOKEN_T2721214809_H
#define HEBREWTOKEN_T2721214809_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct  unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.HebrewNumber/HebrewToken
struct  HebrewToken_t2721214809 
{
public:
	// System.Int32 System.Globalization.HebrewNumber/HebrewToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HebrewToken_t2721214809, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_SET_CERTIFICATE_CALLBACK_T_TC4864FE0F6A3398A572F2511AA64C72126640937_H
#ifndef UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_T6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_H
#define UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_T6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_H
=======
#endif // HEBREWTOKEN_T2721214809_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct  unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_T6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_H
#ifndef UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_TA11F424F68D297B6FD2B2EA26C6764F80146662A_H
#define UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_TA11F424F68D297B6FD2B2EA26C6764F80146662A_H
=======
#endif // NUMBERSTYLES_T617258130_H
#ifndef JAPANESECALENDAR_T1037108350_H
#define JAPANESECALENDAR_T1037108350_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct  unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.JapaneseCalendar
struct  JapaneseCalendar_t1037108350  : public Calendar_t1661121569
{
public:
	// System.Globalization.GregorianCalendarHelper System.Globalization.JapaneseCalendar::helper
	GregorianCalendarHelper_t3016720499 * ___helper_6;

public:
	inline static int32_t get_offset_of_helper_6() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t1037108350, ___helper_6)); }
	inline GregorianCalendarHelper_t3016720499 * get_helper_6() const { return ___helper_6; }
	inline GregorianCalendarHelper_t3016720499 ** get_address_of_helper_6() { return &___helper_6; }
	inline void set_helper_6(GregorianCalendarHelper_t3016720499 * value)
	{
		___helper_6 = value;
		Il2CppCodeGenWriteBarrier((&___helper_6), value);
	}
};

struct JapaneseCalendar_t1037108350_StaticFields
{
public:
	// System.DateTime System.Globalization.JapaneseCalendar::calendarMinValue
	DateTime_t3738529785  ___calendarMinValue_3;
	// System.Globalization.EraInfo[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.JapaneseCalendar::japaneseEraInfo
	EraInfoU5BU5D_t2775298796* ___japaneseEraInfo_4;
	// System.Globalization.Calendar modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.JapaneseCalendar::s_defaultInstance
	Calendar_t1661121569 * ___s_defaultInstance_5;

public:
	inline static int32_t get_offset_of_calendarMinValue_3() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t1037108350_StaticFields, ___calendarMinValue_3)); }
	inline DateTime_t3738529785  get_calendarMinValue_3() const { return ___calendarMinValue_3; }
	inline DateTime_t3738529785 * get_address_of_calendarMinValue_3() { return &___calendarMinValue_3; }
	inline void set_calendarMinValue_3(DateTime_t3738529785  value)
	{
		___calendarMinValue_3 = value;
	}

	inline static int32_t get_offset_of_japaneseEraInfo_4() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t1037108350_StaticFields, ___japaneseEraInfo_4)); }
	inline EraInfoU5BU5D_t2775298796* get_japaneseEraInfo_4() const { return ___japaneseEraInfo_4; }
	inline EraInfoU5BU5D_t2775298796** get_address_of_japaneseEraInfo_4() { return &___japaneseEraInfo_4; }
	inline void set_japaneseEraInfo_4(EraInfoU5BU5D_t2775298796* value)
	{
		___japaneseEraInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___japaneseEraInfo_4), value);
	}

	inline static int32_t get_offset_of_s_defaultInstance_5() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t1037108350_StaticFields, ___s_defaultInstance_5)); }
	inline Calendar_t1661121569 * get_s_defaultInstance_5() const { return ___s_defaultInstance_5; }
	inline Calendar_t1661121569 ** get_address_of_s_defaultInstance_5() { return &___s_defaultInstance_5; }
	inline void set_s_defaultInstance_5(Calendar_t1661121569 * value)
	{
		___s_defaultInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultInstance_5), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_SET_TRACE_CALLBACK_T_TA11F424F68D297B6FD2B2EA26C6764F80146662A_H
#ifndef UNITYTLS_TLSCTX_SET_X509VERIFY_CALLBACK_T_T34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_H
#define UNITYTLS_TLSCTX_SET_X509VERIFY_CALLBACK_T_T34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_H
=======
#endif // JAPANESECALENDAR_T1037108350_H
#ifndef HS_T3339773016_H
#define HS_T3339773016_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct  unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.HebrewNumber/HS
struct  HS_t3339773016 
{
public:
	// System.Int32 System.Globalization.HebrewNumber/HS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HS_t3339773016, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_SET_X509VERIFY_CALLBACK_T_T34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_H
#ifndef UNITYTLS_TLSCTX_WRITE_T_T0B4A49BBA592FE4EC0630B490463AE116AF07C9C_H
#define UNITYTLS_TLSCTX_WRITE_T_T0B4A49BBA592FE4EC0630B490463AE116AF07C9C_H
=======
#endif // HS_T3339773016_H
#ifndef DATETIMESTYLES_T840957420_H
#define DATETIMESTYLES_T840957420_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct  unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t840957420 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t840957420, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_WRITE_T_T0B4A49BBA592FE4EC0630B490463AE116AF07C9C_H
#ifndef UNITYTLS_X509_EXPORT_DER_T_TB0D0A02DE7E75757AFCA780298BF95467BF82856_H
#define UNITYTLS_X509_EXPORT_DER_T_TB0D0A02DE7E75757AFCA780298BF95467BF82856_H
=======
#endif // DATETIMESTYLES_T840957420_H
#ifndef MONTHNAMESTYLES_T616550403_H
#define MONTHNAMESTYLES_T616550403_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct  unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.MonthNameStyles
struct  MonthNameStyles_t616550403 
{
public:
	// System.Int32 System.Globalization.MonthNameStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonthNameStyles_t616550403, ___value___2)); }
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
#endif // UNITYTLS_X509_EXPORT_DER_T_TB0D0A02DE7E75757AFCA780298BF95467BF82856_H
#ifndef UNITYTLS_X509LIST_APPEND_DER_T_TDA1C93A382058FB563F8772B119D5B598DC37A5C_H
#define UNITYTLS_X509LIST_APPEND_DER_T_TDA1C93A382058FB563F8772B119D5B598DC37A5C_H
=======
#endif // MONTHNAMESTYLES_T616550403_H
#ifndef CULTURETYPES_T3483192109_H
#define CULTURETYPES_T3483192109_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct  unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.CultureTypes
struct  CultureTypes_t3483192109 
{
public:
	// System.Int32 System.Globalization.CultureTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CultureTypes_t3483192109, ___value___2)); }
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
#endif // UNITYTLS_X509LIST_APPEND_DER_T_TDA1C93A382058FB563F8772B119D5B598DC37A5C_H
#ifndef UNITYTLS_X509LIST_APPEND_T_TAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_H
#define UNITYTLS_X509LIST_APPEND_T_TAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_H
=======
#endif // CULTURETYPES_T3483192109_H
#ifndef COMPAREOPTIONS_T4130014775_H
#define COMPAREOPTIONS_T4130014775_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct  unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.CompareOptions
struct  CompareOptions_t4130014775 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t4130014775, ___value___2)); }
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
#endif // UNITYTLS_X509LIST_APPEND_T_TAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_H
#ifndef UNITYTLS_X509LIST_CREATE_T_TC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_H
#define UNITYTLS_X509LIST_CREATE_T_TC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_H
=======
#endif // COMPAREOPTIONS_T4130014775_H
#ifndef DATETIMEFORMATFLAGS_T1884407083_H
#define DATETIMEFORMATFLAGS_T1884407083_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct  unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1884407083 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1884407083, ___value___2)); }
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
#endif // UNITYTLS_X509LIST_CREATE_T_TC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_H
#ifndef UNITYTLS_X509LIST_FREE_T_TE3FC523507F07BD9901D84E9F6968CD8A583FF09_H
#define UNITYTLS_X509LIST_FREE_T_TE3FC523507F07BD9901D84E9F6968CD8A583FF09_H
=======
#endif // DATETIMEFORMATFLAGS_T1884407083_H
#ifndef FOUNDDATEPATTERN_T1218817278_H
#define FOUNDDATEPATTERN_T1218817278_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct  unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern
struct  FoundDatePattern_t1218817278 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FoundDatePattern_t1218817278, ___value___2)); }
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
#endif // UNITYTLS_X509LIST_FREE_T_TE3FC523507F07BD9901D84E9F6968CD8A583FF09_H
#ifndef UNITYTLS_X509LIST_GET_REF_T_T1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_H
#define UNITYTLS_X509LIST_GET_REF_T_T1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_H
=======
#endif // FOUNDDATEPATTERN_T1218817278_H
#ifndef CALENDARID_T491731612_H
#define CALENDARID_T491731612_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct  unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.CalendarId
struct  CalendarId_t491731612 
{
public:
	// System.UInt16 System.Globalization.CalendarId::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CalendarId_t491731612, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_X509LIST_GET_REF_T_T1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_H
#ifndef UNITYTLS_X509LIST_GET_X509_T_T028BB06EEB95E8F62511F2301B90D8181F4FFDB5_H
#define UNITYTLS_X509LIST_GET_X509_T_T028BB06EEB95E8F62511F2301B90D8181F4FFDB5_H
=======
#endif // CALENDARID_T491731612_H
#ifndef FORMATFLAGS_T986820117_H
#define FORMATFLAGS_T986820117_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct  unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.FORMATFLAGS
struct  FORMATFLAGS_t986820117 
{
public:
	// System.Int32 System.Globalization.FORMATFLAGS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FORMATFLAGS_t986820117, ___value___2)); }
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
#endif // UNITYTLS_X509LIST_GET_X509_T_T028BB06EEB95E8F62511F2301B90D8181F4FFDB5_H
#ifndef UNITYTLS_X509VERIFY_DEFAULT_CA_T_T4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_H
#define UNITYTLS_X509VERIFY_DEFAULT_CA_T_T4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_H
=======
#endif // FORMATFLAGS_T986820117_H
#ifndef PARSEFAILUREKIND_T3456414874_H
#define PARSEFAILUREKIND_T3456414874_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct  unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.TimeSpanParse/ParseFailureKind
struct  ParseFailureKind_t3456414874 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t3456414874, ___value___2)); }
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
#endif // UNITYTLS_X509VERIFY_DEFAULT_CA_T_T4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_H
#ifndef UNITYTLS_X509VERIFY_EXPLICIT_CA_T_T6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_H
#define UNITYTLS_X509VERIFY_EXPLICIT_CA_T_T6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_H
=======
#endif // PARSEFAILUREKIND_T3456414874_H
#ifndef TIMESPANTHROWSTYLE_T421362192_H
#define TIMESPANTHROWSTYLE_T421362192_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct  unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.TimeSpanParse/TimeSpanThrowStyle
struct  TimeSpanThrowStyle_t421362192 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanThrowStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeSpanThrowStyle_t421362192, ___value___2)); }
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
#endif // UNITYTLS_X509VERIFY_EXPLICIT_CA_T_T6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_H
#ifndef UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_T55149A988CA1CE32772ACAC0031DAF4DC0F6D740_H
#define UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_T55149A988CA1CE32772ACAC0031DAF4DC0F6D740_H
=======
#endif // TIMESPANTHROWSTYLE_T421362192_H
#ifndef TEXTINFO_T3810425522_H
#define TEXTINFO_T3810425522_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct  unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.TextInfo
struct  TextInfo_t3810425522  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_0;
	// System.String System.Globalization.TextInfo::m_cultureName
	String_t* ___m_cultureName_1;
	// System.Globalization.CultureData System.Globalization.TextInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_2;
	// System.String System.Globalization.TextInfo::m_textInfoName
	String_t* ___m_textInfoName_3;
	// System.Nullable`1<System.Boolean> System.Globalization.TextInfo::m_IsAsciiCasingSameAsInvariant
	Nullable_1_t1819850047  ___m_IsAsciiCasingSameAsInvariant_4;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_6;
	// System.Boolean System.Globalization.TextInfo::m_useUserOverride
	bool ___m_useUserOverride_7;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_8;

public:
	inline static int32_t get_offset_of_m_isReadOnly_0() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___m_isReadOnly_0)); }
	inline bool get_m_isReadOnly_0() const { return ___m_isReadOnly_0; }
	inline bool* get_address_of_m_isReadOnly_0() { return &___m_isReadOnly_0; }
	inline void set_m_isReadOnly_0(bool value)
	{
		___m_isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_m_cultureName_1() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___m_cultureName_1)); }
	inline String_t* get_m_cultureName_1() const { return ___m_cultureName_1; }
	inline String_t** get_address_of_m_cultureName_1() { return &___m_cultureName_1; }
	inline void set_m_cultureName_1(String_t* value)
	{
		___m_cultureName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureName_1), value);
	}

	inline static int32_t get_offset_of_m_cultureData_2() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___m_cultureData_2)); }
	inline CultureData_t1899656083 * get_m_cultureData_2() const { return ___m_cultureData_2; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_2() { return &___m_cultureData_2; }
	inline void set_m_cultureData_2(CultureData_t1899656083 * value)
	{
		___m_cultureData_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_2), value);
	}

	inline static int32_t get_offset_of_m_textInfoName_3() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___m_textInfoName_3)); }
	inline String_t* get_m_textInfoName_3() const { return ___m_textInfoName_3; }
	inline String_t** get_address_of_m_textInfoName_3() { return &___m_textInfoName_3; }
	inline void set_m_textInfoName_3(String_t* value)
	{
		___m_textInfoName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_textInfoName_3), value);
	}

	inline static int32_t get_offset_of_m_IsAsciiCasingSameAsInvariant_4() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___m_IsAsciiCasingSameAsInvariant_4)); }
	inline Nullable_1_t1819850047  get_m_IsAsciiCasingSameAsInvariant_4() const { return ___m_IsAsciiCasingSameAsInvariant_4; }
	inline Nullable_1_t1819850047 * get_address_of_m_IsAsciiCasingSameAsInvariant_4() { return &___m_IsAsciiCasingSameAsInvariant_4; }
	inline void set_m_IsAsciiCasingSameAsInvariant_4(Nullable_1_t1819850047  value)
	{
		___m_IsAsciiCasingSameAsInvariant_4 = value;
	}

	inline static int32_t get_offset_of_customCultureName_6() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___customCultureName_6)); }
	inline String_t* get_customCultureName_6() const { return ___customCultureName_6; }
	inline String_t** get_address_of_customCultureName_6() { return &___customCultureName_6; }
	inline void set_customCultureName_6(String_t* value)
	{
		___customCultureName_6 = value;
		Il2CppCodeGenWriteBarrier((&___customCultureName_6), value);
	}

	inline static int32_t get_offset_of_m_useUserOverride_7() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___m_useUserOverride_7)); }
	inline bool get_m_useUserOverride_7() const { return ___m_useUserOverride_7; }
	inline bool* get_address_of_m_useUserOverride_7() { return &___m_useUserOverride_7; }
	inline void set_m_useUserOverride_7(bool value)
	{
		___m_useUserOverride_7 = value;
	}

	inline static int32_t get_offset_of_m_win32LangID_8() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522, ___m_win32LangID_8)); }
	inline int32_t get_m_win32LangID_8() const { return ___m_win32LangID_8; }
	inline int32_t* get_address_of_m_win32LangID_8() { return &___m_win32LangID_8; }
	inline void set_m_win32LangID_8(int32_t value)
	{
		___m_win32LangID_8 = value;
	}
};

struct TextInfo_t3810425522_StaticFields
{
public:
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.TextInfo::s_Invariant
	TextInfo_t3810425522 * ___s_Invariant_5;

public:
	inline static int32_t get_offset_of_s_Invariant_5() { return static_cast<int32_t>(offsetof(TextInfo_t3810425522_StaticFields, ___s_Invariant_5)); }
	inline TextInfo_t3810425522 * get_s_Invariant_5() const { return ___s_Invariant_5; }
	inline TextInfo_t3810425522 ** get_address_of_s_Invariant_5() { return &___s_Invariant_5; }
	inline void set_s_Invariant_5(TextInfo_t3810425522 * value)
	{
		___s_Invariant_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_Invariant_5), value);
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_T55149A988CA1CE32772ACAC0031DAF4DC0F6D740_H
#ifndef UNITYTLS_TLSCTX_READ_CALLBACK_TD85E7923018681355C1D851137CEC527F04093F5_H
#define UNITYTLS_TLSCTX_READ_CALLBACK_TD85E7923018681355C1D851137CEC527F04093F5_H
=======
#endif // TEXTINFO_T3810425522_H
#ifndef TTT_T2628677491_H
#define TTT_T2628677491_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
struct  unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.TimeSpanParse/TTT
struct  TTT_t2628677491 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TTT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TTT_t2628677491, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_READ_CALLBACK_TD85E7923018681355C1D851137CEC527F04093F5_H
#ifndef UNITYTLS_TLSCTX_TRACE_CALLBACK_T2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_H
#define UNITYTLS_TLSCTX_TRACE_CALLBACK_T2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_H
=======
#endif // TTT_T2628677491_H
#ifndef UNICODECATEGORY_T3356078642_H
#define UNICODECATEGORY_T3356078642_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct  unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.UnicodeCategory
struct  UnicodeCategory_t3356078642 
{
public:
	// System.Int32 System.Globalization.UnicodeCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnicodeCategory_t3356078642, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_TRACE_CALLBACK_T2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_H
#ifndef UNITYTLS_TLSCTX_WRITE_CALLBACK_TBDF40F27E011F577C3E834B14788491861F870D6_H
#define UNITYTLS_TLSCTX_WRITE_CALLBACK_TBDF40F27E011F577C3E834B14788491861F870D6_H
=======
#endif // UNICODECATEGORY_T3356078642_H
#ifndef TIMESPANSTANDARDSTYLES_T3017350002_H
#define TIMESPANSTANDARDSTYLES_T3017350002_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
struct  unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.TimeSpanParse/TimeSpanStandardStyles
struct  TimeSpanStandardStyles_t3017350002 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanStandardStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeSpanStandardStyles_t3017350002, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_WRITE_CALLBACK_TBDF40F27E011F577C3E834B14788491861F870D6_H
#ifndef UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_T5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_H
#define UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_T5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_H
=======
#endif // TIMESPANSTANDARDSTYLES_T3017350002_H
#ifndef TIMESPANSTYLES_T2738235750_H
#define TIMESPANSTYLES_T2738235750_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct  unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.TimeSpanStyles
struct  TimeSpanStyles_t2738235750 
{
public:
	// System.Int32 System.Globalization.TimeSpanStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeSpanStyles_t2738235750, ___value___2)); }
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
#endif // UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_T5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_H
#ifndef UNITYTLS_X509VERIFY_CALLBACK_T90C02C529DB2B9F434C18797BACC456BCB5400A9_H
#define UNITYTLS_X509VERIFY_CALLBACK_T90C02C529DB2B9F434C18797BACC456BCB5400A9_H
=======
#endif // TIMESPANSTYLES_T2738235750_H
#ifndef TAIWANCALENDAR_T118153794_H
#define TAIWANCALENDAR_T118153794_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct  unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9  : public MulticastDelegate_t
{
public:

public:
=======
// System.Globalization.TaiwanCalendar
struct  TaiwanCalendar_t118153794  : public Calendar_t1661121569
{
public:
	// System.Globalization.GregorianCalendarHelper System.Globalization.TaiwanCalendar::helper
	GregorianCalendarHelper_t3016720499 * ___helper_5;

public:
	inline static int32_t get_offset_of_helper_5() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t118153794, ___helper_5)); }
	inline GregorianCalendarHelper_t3016720499 * get_helper_5() const { return ___helper_5; }
	inline GregorianCalendarHelper_t3016720499 ** get_address_of_helper_5() { return &___helper_5; }
	inline void set_helper_5(GregorianCalendarHelper_t3016720499 * value)
	{
		___helper_5 = value;
		Il2CppCodeGenWriteBarrier((&___helper_5), value);
	}
};

struct TaiwanCalendar_t118153794_StaticFields
{
public:
	// System.Globalization.EraInfo[] System.Globalization.TaiwanCalendar::taiwanEraInfo
	EraInfoU5BU5D_t2775298796* ___taiwanEraInfo_3;
	// System.Globalization.Calendar modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.TaiwanCalendar::s_defaultInstance
	Calendar_t1661121569 * ___s_defaultInstance_4;
	// System.DateTime System.Globalization.TaiwanCalendar::calendarMinValue
	DateTime_t3738529785  ___calendarMinValue_6;

public:
	inline static int32_t get_offset_of_taiwanEraInfo_3() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t118153794_StaticFields, ___taiwanEraInfo_3)); }
	inline EraInfoU5BU5D_t2775298796* get_taiwanEraInfo_3() const { return ___taiwanEraInfo_3; }
	inline EraInfoU5BU5D_t2775298796** get_address_of_taiwanEraInfo_3() { return &___taiwanEraInfo_3; }
	inline void set_taiwanEraInfo_3(EraInfoU5BU5D_t2775298796* value)
	{
		___taiwanEraInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___taiwanEraInfo_3), value);
	}

	inline static int32_t get_offset_of_s_defaultInstance_4() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t118153794_StaticFields, ___s_defaultInstance_4)); }
	inline Calendar_t1661121569 * get_s_defaultInstance_4() const { return ___s_defaultInstance_4; }
	inline Calendar_t1661121569 ** get_address_of_s_defaultInstance_4() { return &___s_defaultInstance_4; }
	inline void set_s_defaultInstance_4(Calendar_t1661121569 * value)
	{
		___s_defaultInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultInstance_4), value);
	}

	inline static int32_t get_offset_of_calendarMinValue_6() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t118153794_StaticFields, ___calendarMinValue_6)); }
	inline DateTime_t3738529785  get_calendarMinValue_6() const { return ___calendarMinValue_6; }
	inline DateTime_t3738529785 * get_address_of_calendarMinValue_6() { return &___calendarMinValue_6; }
	inline void set_calendarMinValue_6(DateTime_t3738529785  value)
	{
		___calendarMinValue_6 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLS_X509VERIFY_CALLBACK_T90C02C529DB2B9F434C18797BACC456BCB5400A9_H
#ifndef UNITYTLSSTREAM_TE8613CD306315DCC3E00A7B1036E20E280F83166_H
#define UNITYTLSSTREAM_TE8613CD306315DCC3E00A7B1036E20E280F83166_H
=======
#endif // TAIWANCALENDAR_T118153794_H
#ifndef SORTVERSION_T3332565609_H
#define SORTVERSION_T3332565609_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Mono.Unity.UnityTlsStream
struct  UnityTlsStream_tE8613CD306315DCC3E00A7B1036E20E280F83166  : public MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045
{
public:

public:
=======
// System.Globalization.SortVersion
struct  SortVersion_t3332565609  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.SortVersion::m_NlsVersion
	int32_t ___m_NlsVersion_0;
	// System.Guid System.Globalization.SortVersion::m_SortId
	Guid_t  ___m_SortId_1;

public:
	inline static int32_t get_offset_of_m_NlsVersion_0() { return static_cast<int32_t>(offsetof(SortVersion_t3332565609, ___m_NlsVersion_0)); }
	inline int32_t get_m_NlsVersion_0() const { return ___m_NlsVersion_0; }
	inline int32_t* get_address_of_m_NlsVersion_0() { return &___m_NlsVersion_0; }
	inline void set_m_NlsVersion_0(int32_t value)
	{
		___m_NlsVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_SortId_1() { return static_cast<int32_t>(offsetof(SortVersion_t3332565609, ___m_SortId_1)); }
	inline Guid_t  get_m_SortId_1() const { return ___m_SortId_1; }
	inline Guid_t * get_address_of_m_SortId_1() { return &___m_SortId_1; }
	inline void set_m_SortId_1(Guid_t  value)
	{
		___m_SortId_1 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNITYTLSSTREAM_TE8613CD306315DCC3E00A7B1036E20E280F83166_H
#ifndef THROWSTUB_TFA0E21DBAA52F61535595DCC8B44B0CD087A0406_H
#define THROWSTUB_TFA0E21DBAA52F61535595DCC8B44B0CD087A0406_H
=======
#endif // SORTVERSION_T3332565609_H
#ifndef RUNTIMEEVENTHANDLE_T2858913149_H
#define RUNTIMEEVENTHANDLE_T2858913149_H
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// Unity.ThrowStub
struct  ThrowStub_tFA0E21DBAA52F61535595DCC8B44B0CD087A0406  : public ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A
{
public:

public:
=======
// Mono.RuntimeEventHandle
struct  RuntimeEventHandle_t2858913149 
{
public:
	// System.IntPtr Mono.RuntimeEventHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeEventHandle_t2858913149, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // THROWSTUB_TFA0E21DBAA52F61535595DCC8B44B0CD087A0406_H





#ifdef __clang__
=======
#endif // RUNTIMEEVENTHANDLE_T2858913149_H
#ifndef TIMESPANFORMAT_T3126083837_H
#define TIMESPANFORMAT_T3126083837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanFormat
struct  TimeSpanFormat_t3126083837  : public RuntimeObject
{
public:

public:
};

struct TimeSpanFormat_t3126083837_StaticFields
{
public:
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanFormat::PositiveInvariantFormatLiterals
	FormatLiterals_t1376140638  ___PositiveInvariantFormatLiterals_0;
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanFormat::NegativeInvariantFormatLiterals
	FormatLiterals_t1376140638  ___NegativeInvariantFormatLiterals_1;

public:
	inline static int32_t get_offset_of_PositiveInvariantFormatLiterals_0() { return static_cast<int32_t>(offsetof(TimeSpanFormat_t3126083837_StaticFields, ___PositiveInvariantFormatLiterals_0)); }
	inline FormatLiterals_t1376140638  get_PositiveInvariantFormatLiterals_0() const { return ___PositiveInvariantFormatLiterals_0; }
	inline FormatLiterals_t1376140638 * get_address_of_PositiveInvariantFormatLiterals_0() { return &___PositiveInvariantFormatLiterals_0; }
	inline void set_PositiveInvariantFormatLiterals_0(FormatLiterals_t1376140638  value)
	{
		___PositiveInvariantFormatLiterals_0 = value;
	}

	inline static int32_t get_offset_of_NegativeInvariantFormatLiterals_1() { return static_cast<int32_t>(offsetof(TimeSpanFormat_t3126083837_StaticFields, ___NegativeInvariantFormatLiterals_1)); }
	inline FormatLiterals_t1376140638  get_NegativeInvariantFormatLiterals_1() const { return ___NegativeInvariantFormatLiterals_1; }
	inline FormatLiterals_t1376140638 * get_address_of_NegativeInvariantFormatLiterals_1() { return &___NegativeInvariantFormatLiterals_1; }
	inline void set_NegativeInvariantFormatLiterals_1(FormatLiterals_t1376140638  value)
	{
		___NegativeInvariantFormatLiterals_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANFORMAT_T3126083837_H
#ifndef PATTERN_T3441131214_H
#define PATTERN_T3441131214_H
#ifdef __clang__
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (__StaticArrayInitTypeSizeU3D1080_tCE36DA14009C45CFDEA7F63618BE90F8DF89AC84)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1080_tCE36DA14009C45CFDEA7F63618BE90F8DF89AC84 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (__StaticArrayInitTypeSizeU3D1208_tC58894ECFE2C4FFD2B8FCDF958800099A737C1DD)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1208_tC58894ECFE2C4FFD2B8FCDF958800099A737C1DD ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (__StaticArrayInitTypeSizeU3D1450_t58DE69DB537BA7DFBFF2C7084FFC6970FB3BAEA4)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1450_t58DE69DB537BA7DFBFF2C7084FFC6970FB3BAEA4 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (__StaticArrayInitTypeSizeU3D1665_tCD7752863825B82B07752CCE72A581C169E19C20)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1665_tCD7752863825B82B07752CCE72A581C169E19C20 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (__StaticArrayInitTypeSizeU3D2048_t95CEED630052F2BBE3122C058EEAD48DB4C2AD02)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2048_t95CEED630052F2BBE3122C058EEAD48DB4C2AD02 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (__StaticArrayInitTypeSizeU3D2100_t75CE52CDAFC7C95EDAB5CF1AF8B2621D502F1FAA)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2100_t75CE52CDAFC7C95EDAB5CF1AF8B2621D502F1FAA ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (__StaticArrayInitTypeSizeU3D2350_t96984AEF232104302694B7EFDA3F92BC42BF207D)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2350_t96984AEF232104302694B7EFDA3F92BC42BF207D ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (__StaticArrayInitTypeSizeU3D2382_tB4AF2C49C5120B6EB285BA4D247340D8E243A1BA)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2382_tB4AF2C49C5120B6EB285BA4D247340D8E243A1BA ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (__StaticArrayInitTypeSizeU3D3132_t7837B5DAEC2B2BEBD61C333545DB9AE2F35BF333)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3132_t7837B5DAEC2B2BEBD61C333545DB9AE2F35BF333 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (__StaticArrayInitTypeSizeU3D11614_tDF34959BE752359A89A4A577B8798D2D66A5E7F5)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D11614_tDF34959BE752359A89A4A577B8798D2D66A5E7F5 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (__StaticArrayInitTypeSizeU3D21252_tCA2B51BDF30FDECEBFCB55CC7530A0A7D6BC4462)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D21252_tCA2B51BDF30FDECEBFCB55CC7530A0A7D6BC4462 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (UnmanagedMarshal_tCF1F2DA6EAED118ED1459C8DFF35C5418259F3EE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (DynamicMethod_t983501153061387E39AA134BE68EB908A3E92AF3), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (ThrowStub_tFA0E21DBAA52F61535595DCC8B44B0CD087A0406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (__Il2CppComDelegate_t0A30496F74225C39A0CF7FADB94934C0536120FD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (U3CModuleU3E_tD81C26B45B0FBFD466203EB631D6270174412EE8), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (SR_tF6C259D0ADF333DE679CC02B526A504888CDD8AC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (CertHelper_t603EE753116E3B83EC5DB1CAC369F51DF9DC5A60), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (UnityTls_tFD87351846C601F716262E015308C6BB66000DEC), -1, sizeof(UnityTls_tFD87351846C601F716262E015308C6BB66000DEC_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1432[1] = 
{
	UnityTls_tFD87351846C601F716262E015308C6BB66000DEC_StaticFields::get_offset_of_marshalledInterface_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (unitytls_error_code_tA9272A71D51F7FE555C03185AE244FB01EAF998F)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1433[18] = 
{
	unitytls_error_code_tA9272A71D51F7FE555C03185AE244FB01EAF998F::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6)+ sizeof (RuntimeObject), sizeof(unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1434[3] = 
{
	unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6::get_offset_of_magic_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6::get_offset_of_code_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	unitytls_errorstate_t64FA817A583B1CD3CB1AFCFF9606F1F2782ABBE6::get_offset_of_reserved_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (unitytls_key_tABB3A1A923B658DC99FFDB3ED633FBBA64EF1BB9)+ sizeof (RuntimeObject), sizeof(unitytls_key_tABB3A1A923B658DC99FFDB3ED633FBBA64EF1BB9 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (unitytls_key_ref_tE908606656A7C49CA1EB734722E4C3DED7CE6E5B)+ sizeof (RuntimeObject), sizeof(unitytls_key_ref_tE908606656A7C49CA1EB734722E4C3DED7CE6E5B ), 0, 0 };
extern const int32_t g_FieldOffsetTable1436[1] = 
{
	unitytls_key_ref_tE908606656A7C49CA1EB734722E4C3DED7CE6E5B::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (unitytls_x509_ref_tE1ED17887226610A1328A57FF787396C9457E7B7)+ sizeof (RuntimeObject), sizeof(unitytls_x509_ref_tE1ED17887226610A1328A57FF787396C9457E7B7 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1437[1] = 
{
	unitytls_x509_ref_tE1ED17887226610A1328A57FF787396C9457E7B7::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (unitytls_x509list_tDFEEABB4254CDE9475890D0F2AE361B45EC357C7)+ sizeof (RuntimeObject), sizeof(unitytls_x509list_tDFEEABB4254CDE9475890D0F2AE361B45EC357C7 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (unitytls_x509list_ref_tF01A6BF5ADA9C454E6B975D2669AF22D27555BF6)+ sizeof (RuntimeObject), sizeof(unitytls_x509list_ref_tF01A6BF5ADA9C454E6B975D2669AF22D27555BF6 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1439[1] = 
{
	unitytls_x509list_ref_tF01A6BF5ADA9C454E6B975D2669AF22D27555BF6::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (unitytls_x509verify_result_t835FEA0265EFD70F0762B220C663474E03402278)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1440[17] = 
{
	unitytls_x509verify_result_t835FEA0265EFD70F0762B220C663474E03402278::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (unitytls_tlsctx_t6B948536BDFA3AAC0135FF136ABD7779A0B96A74)+ sizeof (RuntimeObject), sizeof(unitytls_tlsctx_t6B948536BDFA3AAC0135FF136ABD7779A0B96A74 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (unitytls_x509name_t551F433869F1BAA39C78962C7ACA1BAB9A4D6337)+ sizeof (RuntimeObject), sizeof(unitytls_x509name_t551F433869F1BAA39C78962C7ACA1BAB9A4D6337 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (unitytls_ciphersuite_tA99DBE84EF3BB26740AEF7A5CC6DEA1227B5F9DC)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1444[2] = 
{
	unitytls_ciphersuite_tA99DBE84EF3BB26740AEF7A5CC6DEA1227B5F9DC::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (unitytls_protocol_t4E7BF0D3D575EDD09EA7BF6593AAB40BBAC60DF8)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1445[5] = 
{
	unitytls_protocol_t4E7BF0D3D575EDD09EA7BF6593AAB40BBAC60DF8::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47)+ sizeof (RuntimeObject), sizeof(unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1446[2] = 
{
	unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47::get_offset_of_min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	unitytls_tlsctx_protocolrange_t36243D72F83DAD47C95928314F58026DE8D38F47::get_offset_of_max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2)+ sizeof (RuntimeObject), sizeof(unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1452[3] = 
{
	unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2::get_offset_of_read_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2::get_offset_of_write_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2::get_offset_of_data_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF), sizeof(unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1453[33] = 
{
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_UNITYTLS_INVALID_HANDLE_0(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT_1(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_errorstate_create_2(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_errorstate_raise_error_3(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_key_get_ref_4(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_key_parse_der_5(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_key_parse_pem_6(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_key_free_7(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509_export_der_8(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509list_get_ref_9(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509list_get_x509_10(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509list_create_11(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509list_append_12(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509list_append_der_13(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509list_append_pem_14(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509list_free_15(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509verify_default_ca_16(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_x509verify_explicit_ca_17(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_create_server_18(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_create_client_19(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_server_require_client_authentication_20(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_set_certificate_callback_21(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_set_trace_callback_22(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_set_x509verify_callback_23(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_set_supported_ciphersuites_24(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_get_ciphersuite_25(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_get_protocol_26(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_process_handshake_27(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_read_28(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_write_29(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_notify_close_30(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_tlsctx_free_31(),
	unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF::get_offset_of_unitytls_random_generate_bytes_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (UnityTlsConversions_t46A0D2F58860BE3A6D8ACA6B2B1D3A579B2F8F71), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (UnityTlsProvider_t38A61346F4CF37E18E390610CF6092AEFCA65965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (UnityTlsStream_tE8613CD306315DCC3E00A7B1036E20E280F83166), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1487[5] = 
{
	BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9::get_offset_of_Buffer_0(),
	BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9::get_offset_of_Offset_1(),
	BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9::get_offset_of_Size_2(),
	BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9::get_offset_of_TotalBytes_3(),
	BufferOffsetSize_tE5F3806876A6484AE343C760B6E04195202A2CC9::get_offset_of_Complete_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1488[1] = 
{
	BufferOffsetSize2_t2E9889F6FB134EF92FC0B930BF630243553F4E00::get_offset_of_InitialSize_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (AsyncOperationStatus_t355A724E020AF86BA40298A468EB739EA41B9E27)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1489[5] = 
{
	AsyncOperationStatus_t355A724E020AF86BA40298A468EB739EA41B9E27::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (AsyncProtocolResult_t957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1490[2] = 
{
	AsyncProtocolResult_t957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0::get_offset_of_U3CUserResultU3Ek__BackingField_0(),
	AsyncProtocolResult_t957DDFF1A4D0CC662F930F5C9E09E4FA1FBBFBC0::get_offset_of_U3CErrorU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1491[7] = 
{
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027::get_offset_of_U3CParentU3Ek__BackingField_0(),
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027::get_offset_of_U3CRunSynchronouslyU3Ek__BackingField_1(),
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027::get_offset_of_U3CUserResultU3Ek__BackingField_2(),
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027::get_offset_of_Started_3(),
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027::get_offset_of_RequestedSize_4(),
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027::get_offset_of_WriteRequested_5(),
	AsyncProtocolRequest_tC1F08D36027FBF2F0252CA11DD18AD0F3BE37027::get_offset_of_locker_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1492[5] = 
{
	U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9::get_offset_of_cancellationToken_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartOperationU3Ed__23_tF07DD38BEEE955EB5B1359B816079584899DDEC9::get_offset_of_U3CU3Eu__1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1493[8] = 
{
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_cancellationToken_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_U3CU3E4__this_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_U3CstatusU3E5__1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_U3CnewStatusU3E5__2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_U3CU3Eu__1_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CProcessOperationU3Ed__24_t969904EA513B205F08A3ED1624FE3890853645AA::get_offset_of_U3CU3Eu__2_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1494[7] = 
{
	U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E::get_offset_of_cancellationToken_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E::get_offset_of_U3CrequestedSizeU3E5__1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E::get_offset_of_U3CtotalReadU3E5__2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CInnerReadU3Ed__25_tCE25EDB99323C3358577085230EE086DE0CADA5E::get_offset_of_U3CU3Eu__1_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1495[2] = 
{
	AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F::get_offset_of_U3CUserBufferU3Ek__BackingField_7(),
	AsyncReadOrWriteRequest_t991B91E93F3980A5879ABAC6738F9BAC770E3B8F::get_offset_of_U3CCurrentSizeU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (AsyncReadRequest_t10B0459470C14DC065B5AD60AF378AB78CD138C1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (AsyncWriteRequest_tFE4740D02401F295910B4006A8390590D5E2C27B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045), -1, sizeof(MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1498[14] = 
{
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_xobileTlsContext_6(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_lastException_7(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_asyncReadRequest_8(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_asyncWriteRequest_9(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_readBuffer_10(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_writeBuffer_11(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_ioLock_12(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_shutdown_13(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045_StaticFields::get_offset_of_uniqueNameInteger_14(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_U3CSslStreamU3Ek__BackingField_15(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_U3CSettingsU3Ek__BackingField_16(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_U3CProviderU3Ek__BackingField_17(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045_StaticFields::get_offset_of_nextId_18(),
	MobileAuthenticatedStream_tB6E77FB644434B5B525191DC671462A6461B9045::get_offset_of_ID_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (OperationType_t76DD3B06699CAF7714C8E801F9B1FBD9FCAF9ED0)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1499[4] = 
{
	OperationType_t76DD3B06699CAF7714C8E801F9B1FBD9FCAF9ED0::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
=======

// System.Globalization.TimeSpanFormat/Pattern
struct  Pattern_t3441131214 
{
public:
	// System.Int32 System.Globalization.TimeSpanFormat/Pattern::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pattern_t3441131214, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERN_T3441131214_H
#ifndef DATETIMEFORMATINFO_T2405853701_H
#define DATETIMEFORMATINFO_T2405853701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2405853701  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t1092934962 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t4157843068 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t1661121569 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1281789340* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1281789340* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1281789340* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1281789340* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1281789340* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1281789340* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1281789340* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1281789340* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t1281789340* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1281789340* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1281789340* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1281789340* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1281789340* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1281789340* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t385246372* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1281789340* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t818561467* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_cultureData_1)); }
	inline CultureData_t1899656083 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t1899656083 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_1), value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_2), value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_langName_3), value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_compareInfo_4)); }
	inline CompareInfo_t1092934962 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t1092934962 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t1092934962 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_4), value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_cultureInfo_5)); }
	inline CultureInfo_t4157843068 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t4157843068 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t4157843068 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureInfo_5), value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_6), value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_7), value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_8), value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_9), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_10), value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_11), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_12), value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeOffsetPattern_13), value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendar_17)); }
	inline Calendar_t1661121569 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t1661121569 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t1661121569 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_17), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_20), value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_21), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t1281789340* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t1281789340** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t1281789340* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_22), value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dayNames_23)); }
	inline StringU5BU5D_t1281789340* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t1281789340** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t1281789340* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_23), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_24), value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthNames_25)); }
	inline StringU5BU5D_t1281789340* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t1281789340** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t1281789340* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_25), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t1281789340* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t1281789340** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t1281789340* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_26), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t1281789340* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t1281789340** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t1281789340* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_27), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t1281789340* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t1281789340** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t1281789340* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_28), value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_29), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_30), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_31), value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_32), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_33), value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t1281789340* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t1281789340** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t1281789340* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allYearMonthPatterns_34), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t1281789340* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t1281789340* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_35), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t1281789340* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t1281789340* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_36), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t1281789340* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t1281789340* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_37), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t1281789340* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t1281789340* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_38), value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_eraNames_39)); }
	inline StringU5BU5D_t1281789340* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t1281789340** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t1281789340* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_39), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_40), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_41), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t385246372* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t385246372** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t385246372* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_42), value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dateWords_53)); }
	inline StringU5BU5D_t1281789340* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t1281789340** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t1281789340* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_53), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanPositivePattern_54), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanNegativePattern_55), value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t818561467* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t818561467** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t818561467* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_dtfiTokenHash_57), value);
	}
};

struct DateTimeFormatInfo_t2405853701_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t2405853701 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t1853889766 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t2405853701 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t2405853701 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t2405853701 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t2405853701 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t1853889766 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t1853889766 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t1853889766 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___s_calendarNativeNames_52), value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t2405853701 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t2405853701 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((&___s_jajpDTFI_82), value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t2405853701 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t2405853701 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((&___s_zhtwDTFI_83), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2405853701_H
#ifndef TOKENHASHVALUE_T1081334094_H
#define TOKENHASHVALUE_T1081334094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TokenHashValue
struct  TokenHashValue_t1081334094  : public RuntimeObject
{
public:
	// System.String System.Globalization.TokenHashValue::tokenString
	String_t* ___tokenString_0;
	// System.TokenType System.Globalization.TokenHashValue::tokenType
	int32_t ___tokenType_1;
	// System.Int32 System.Globalization.TokenHashValue::tokenValue
	int32_t ___tokenValue_2;

public:
	inline static int32_t get_offset_of_tokenString_0() { return static_cast<int32_t>(offsetof(TokenHashValue_t1081334094, ___tokenString_0)); }
	inline String_t* get_tokenString_0() const { return ___tokenString_0; }
	inline String_t** get_address_of_tokenString_0() { return &___tokenString_0; }
	inline void set_tokenString_0(String_t* value)
	{
		___tokenString_0 = value;
		Il2CppCodeGenWriteBarrier((&___tokenString_0), value);
	}

	inline static int32_t get_offset_of_tokenType_1() { return static_cast<int32_t>(offsetof(TokenHashValue_t1081334094, ___tokenType_1)); }
	inline int32_t get_tokenType_1() const { return ___tokenType_1; }
	inline int32_t* get_address_of_tokenType_1() { return &___tokenType_1; }
	inline void set_tokenType_1(int32_t value)
	{
		___tokenType_1 = value;
	}

	inline static int32_t get_offset_of_tokenValue_2() { return static_cast<int32_t>(offsetof(TokenHashValue_t1081334094, ___tokenValue_2)); }
	inline int32_t get_tokenValue_2() const { return ___tokenValue_2; }
	inline int32_t* get_address_of_tokenValue_2() { return &___tokenValue_2; }
	inline void set_tokenValue_2(int32_t value)
	{
		___tokenValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENHASHVALUE_T1081334094_H
#ifndef TIMESPANRESULT_T3304031259_H
#define TIMESPANRESULT_T3304031259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanResult
struct  TimeSpanResult_t3304031259 
{
public:
	// System.TimeSpan System.Globalization.TimeSpanParse/TimeSpanResult::parsedTimeSpan
	TimeSpan_t881159249  ___parsedTimeSpan_0;
	// System.Globalization.TimeSpanParse/TimeSpanThrowStyle System.Globalization.TimeSpanParse/TimeSpanResult::throwStyle
	int32_t ___throwStyle_1;
	// System.Globalization.TimeSpanParse/ParseFailureKind System.Globalization.TimeSpanParse/TimeSpanResult::m_failure
	int32_t ___m_failure_2;
	// System.String System.Globalization.TimeSpanParse/TimeSpanResult::m_failureMessageID
	String_t* ___m_failureMessageID_3;
	// System.Object System.Globalization.TimeSpanParse/TimeSpanResult::m_failureMessageFormatArgument
	RuntimeObject * ___m_failureMessageFormatArgument_4;
	// System.String System.Globalization.TimeSpanParse/TimeSpanResult::m_failureArgumentName
	String_t* ___m_failureArgumentName_5;

public:
	inline static int32_t get_offset_of_parsedTimeSpan_0() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3304031259, ___parsedTimeSpan_0)); }
	inline TimeSpan_t881159249  get_parsedTimeSpan_0() const { return ___parsedTimeSpan_0; }
	inline TimeSpan_t881159249 * get_address_of_parsedTimeSpan_0() { return &___parsedTimeSpan_0; }
	inline void set_parsedTimeSpan_0(TimeSpan_t881159249  value)
	{
		___parsedTimeSpan_0 = value;
	}

	inline static int32_t get_offset_of_throwStyle_1() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3304031259, ___throwStyle_1)); }
	inline int32_t get_throwStyle_1() const { return ___throwStyle_1; }
	inline int32_t* get_address_of_throwStyle_1() { return &___throwStyle_1; }
	inline void set_throwStyle_1(int32_t value)
	{
		___throwStyle_1 = value;
	}

	inline static int32_t get_offset_of_m_failure_2() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3304031259, ___m_failure_2)); }
	inline int32_t get_m_failure_2() const { return ___m_failure_2; }
	inline int32_t* get_address_of_m_failure_2() { return &___m_failure_2; }
	inline void set_m_failure_2(int32_t value)
	{
		___m_failure_2 = value;
	}

	inline static int32_t get_offset_of_m_failureMessageID_3() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3304031259, ___m_failureMessageID_3)); }
	inline String_t* get_m_failureMessageID_3() const { return ___m_failureMessageID_3; }
	inline String_t** get_address_of_m_failureMessageID_3() { return &___m_failureMessageID_3; }
	inline void set_m_failureMessageID_3(String_t* value)
	{
		___m_failureMessageID_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageID_3), value);
	}

	inline static int32_t get_offset_of_m_failureMessageFormatArgument_4() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3304031259, ___m_failureMessageFormatArgument_4)); }
	inline RuntimeObject * get_m_failureMessageFormatArgument_4() const { return ___m_failureMessageFormatArgument_4; }
	inline RuntimeObject ** get_address_of_m_failureMessageFormatArgument_4() { return &___m_failureMessageFormatArgument_4; }
	inline void set_m_failureMessageFormatArgument_4(RuntimeObject * value)
	{
		___m_failureMessageFormatArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageFormatArgument_4), value);
	}

	inline static int32_t get_offset_of_m_failureArgumentName_5() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3304031259, ___m_failureArgumentName_5)); }
	inline String_t* get_m_failureArgumentName_5() const { return ___m_failureArgumentName_5; }
	inline String_t** get_address_of_m_failureArgumentName_5() { return &___m_failureArgumentName_5; }
	inline void set_m_failureArgumentName_5(String_t* value)
	{
		___m_failureArgumentName_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureArgumentName_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanResult
struct TimeSpanResult_t3304031259_marshaled_pinvoke
{
	TimeSpan_t881159249  ___parsedTimeSpan_0;
	int32_t ___throwStyle_1;
	int32_t ___m_failure_2;
	char* ___m_failureMessageID_3;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_4;
	char* ___m_failureArgumentName_5;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanResult
struct TimeSpanResult_t3304031259_marshaled_com
{
	TimeSpan_t881159249  ___parsedTimeSpan_0;
	int32_t ___throwStyle_1;
	int32_t ___m_failure_2;
	Il2CppChar* ___m_failureMessageID_3;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_4;
	Il2CppChar* ___m_failureArgumentName_5;
};
#endif // TIMESPANRESULT_T3304031259_H
#ifndef CULTURENOTFOUNDEXCEPTION_T958859199_H
#define CULTURENOTFOUNDEXCEPTION_T958859199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureNotFoundException
struct  CultureNotFoundException_t958859199  : public ArgumentException_t132251570
{
public:
	// System.String System.Globalization.CultureNotFoundException::m_invalidCultureName
	String_t* ___m_invalidCultureName_17;
	// System.Nullable`1<System.Int32> System.Globalization.CultureNotFoundException::m_invalidCultureId
	Nullable_1_t378540539  ___m_invalidCultureId_18;

public:
	inline static int32_t get_offset_of_m_invalidCultureName_17() { return static_cast<int32_t>(offsetof(CultureNotFoundException_t958859199, ___m_invalidCultureName_17)); }
	inline String_t* get_m_invalidCultureName_17() const { return ___m_invalidCultureName_17; }
	inline String_t** get_address_of_m_invalidCultureName_17() { return &___m_invalidCultureName_17; }
	inline void set_m_invalidCultureName_17(String_t* value)
	{
		___m_invalidCultureName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_invalidCultureName_17), value);
	}

	inline static int32_t get_offset_of_m_invalidCultureId_18() { return static_cast<int32_t>(offsetof(CultureNotFoundException_t958859199, ___m_invalidCultureId_18)); }
	inline Nullable_1_t378540539  get_m_invalidCultureId_18() const { return ___m_invalidCultureId_18; }
	inline Nullable_1_t378540539 * get_address_of_m_invalidCultureId_18() { return &___m_invalidCultureId_18; }
	inline void set_m_invalidCultureId_18(Nullable_1_t378540539  value)
	{
		___m_invalidCultureId_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURENOTFOUNDEXCEPTION_T958859199_H
#ifndef DAYLIGHTTIME_T2582425773_H
#define DAYLIGHTTIME_T2582425773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DaylightTime
struct  DaylightTime_t2582425773  : public RuntimeObject
{
public:
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t3738529785  ___m_start_0;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t3738529785  ___m_end_1;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t881159249  ___m_delta_2;

public:
	inline static int32_t get_offset_of_m_start_0() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_start_0)); }
	inline DateTime_t3738529785  get_m_start_0() const { return ___m_start_0; }
	inline DateTime_t3738529785 * get_address_of_m_start_0() { return &___m_start_0; }
	inline void set_m_start_0(DateTime_t3738529785  value)
	{
		___m_start_0 = value;
	}

	inline static int32_t get_offset_of_m_end_1() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_end_1)); }
	inline DateTime_t3738529785  get_m_end_1() const { return ___m_end_1; }
	inline DateTime_t3738529785 * get_address_of_m_end_1() { return &___m_end_1; }
	inline void set_m_end_1(DateTime_t3738529785  value)
	{
		___m_end_1 = value;
	}

	inline static int32_t get_offset_of_m_delta_2() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_delta_2)); }
	inline TimeSpan_t881159249  get_m_delta_2() const { return ___m_delta_2; }
	inline TimeSpan_t881159249 * get_address_of_m_delta_2() { return &___m_delta_2; }
	inline void set_m_delta_2(TimeSpan_t881159249  value)
	{
		___m_delta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYLIGHTTIME_T2582425773_H
#ifndef HEBREWNUMBERPARSINGCONTEXT_T267102816_H
#define HEBREWNUMBERPARSINGCONTEXT_T267102816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumberParsingContext
struct  HebrewNumberParsingContext_t267102816 
{
public:
	// System.Globalization.HebrewNumber/HS System.Globalization.HebrewNumberParsingContext::state
	int32_t ___state_0;
	// System.Int32 System.Globalization.HebrewNumberParsingContext::result
	int32_t ___result_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(HebrewNumberParsingContext_t267102816, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(HebrewNumberParsingContext_t267102816, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEBREWNUMBERPARSINGCONTEXT_T267102816_H
#ifndef GREGORIANCALENDAR_T2054525052_H
#define GREGORIANCALENDAR_T2054525052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendar
struct  GregorianCalendar_t2054525052  : public Calendar_t1661121569
{
public:
	// System.Globalization.GregorianCalendarTypes System.Globalization.GregorianCalendar::m_type
	int32_t ___m_type_3;

public:
	inline static int32_t get_offset_of_m_type_3() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2054525052, ___m_type_3)); }
	inline int32_t get_m_type_3() const { return ___m_type_3; }
	inline int32_t* get_address_of_m_type_3() { return &___m_type_3; }
	inline void set_m_type_3(int32_t value)
	{
		___m_type_3 = value;
	}
};

struct GregorianCalendar_t2054525052_StaticFields
{
public:
	// System.Int32[] System.Globalization.GregorianCalendar::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_4;
	// System.Int32[] System.Globalization.GregorianCalendar::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_5;
	// System.Globalization.Calendar modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.GregorianCalendar::s_defaultInstance
	Calendar_t1661121569 * ___s_defaultInstance_6;

public:
	inline static int32_t get_offset_of_DaysToMonth365_4() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2054525052_StaticFields, ___DaysToMonth365_4)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_4() const { return ___DaysToMonth365_4; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_4() { return &___DaysToMonth365_4; }
	inline void set_DaysToMonth365_4(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_4 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_4), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_5() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2054525052_StaticFields, ___DaysToMonth366_5)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_5() const { return ___DaysToMonth366_5; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_5() { return &___DaysToMonth366_5; }
	inline void set_DaysToMonth366_5(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_5 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_5), value);
	}

	inline static int32_t get_offset_of_s_defaultInstance_6() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2054525052_StaticFields, ___s_defaultInstance_6)); }
	inline Calendar_t1661121569 * get_s_defaultInstance_6() const { return ___s_defaultInstance_6; }
	inline Calendar_t1661121569 ** get_address_of_s_defaultInstance_6() { return &___s_defaultInstance_6; }
	inline void set_s_defaultInstance_6(Calendar_t1661121569 * value)
	{
		___s_defaultInstance_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultInstance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGORIANCALENDAR_T2054525052_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_1), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_2), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_3), value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_4), value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_5), value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_6), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_9), value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_10), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_11), value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_12), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_15), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_16), value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_17), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_18), value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_19)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_19), value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t435877138 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t435877138 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t435877138 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t435877138 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
#ifndef HEBREWVALUE_T1606459855_H
#define HEBREWVALUE_T1606459855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumber/HebrewValue
struct  HebrewValue_t1606459855  : public RuntimeObject
{
public:
	// System.Globalization.HebrewNumber/HebrewToken System.Globalization.HebrewNumber/HebrewValue::token
	int32_t ___token_0;
	// System.Int32 System.Globalization.HebrewNumber/HebrewValue::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(HebrewValue_t1606459855, ___token_0)); }
	inline int32_t get_token_0() const { return ___token_0; }
	inline int32_t* get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(int32_t value)
	{
		___token_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(HebrewValue_t1606459855, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEBREWVALUE_T1606459855_H
#ifndef TIMESPANTOKEN_T993347374_H
#define TIMESPANTOKEN_T993347374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanToken
struct  TimeSpanToken_t993347374 
{
public:
	// System.Globalization.TimeSpanParse/TTT System.Globalization.TimeSpanParse/TimeSpanToken::ttt
	int32_t ___ttt_0;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanToken::num
	int32_t ___num_1;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanToken::zeroes
	int32_t ___zeroes_2;
	// System.String System.Globalization.TimeSpanParse/TimeSpanToken::sep
	String_t* ___sep_3;

public:
	inline static int32_t get_offset_of_ttt_0() { return static_cast<int32_t>(offsetof(TimeSpanToken_t993347374, ___ttt_0)); }
	inline int32_t get_ttt_0() const { return ___ttt_0; }
	inline int32_t* get_address_of_ttt_0() { return &___ttt_0; }
	inline void set_ttt_0(int32_t value)
	{
		___ttt_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(TimeSpanToken_t993347374, ___num_1)); }
	inline int32_t get_num_1() const { return ___num_1; }
	inline int32_t* get_address_of_num_1() { return &___num_1; }
	inline void set_num_1(int32_t value)
	{
		___num_1 = value;
	}

	inline static int32_t get_offset_of_zeroes_2() { return static_cast<int32_t>(offsetof(TimeSpanToken_t993347374, ___zeroes_2)); }
	inline int32_t get_zeroes_2() const { return ___zeroes_2; }
	inline int32_t* get_address_of_zeroes_2() { return &___zeroes_2; }
	inline void set_zeroes_2(int32_t value)
	{
		___zeroes_2 = value;
	}

	inline static int32_t get_offset_of_sep_3() { return static_cast<int32_t>(offsetof(TimeSpanToken_t993347374, ___sep_3)); }
	inline String_t* get_sep_3() const { return ___sep_3; }
	inline String_t** get_address_of_sep_3() { return &___sep_3; }
	inline void set_sep_3(String_t* value)
	{
		___sep_3 = value;
		Il2CppCodeGenWriteBarrier((&___sep_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanToken
struct TimeSpanToken_t993347374_marshaled_pinvoke
{
	int32_t ___ttt_0;
	int32_t ___num_1;
	int32_t ___zeroes_2;
	char* ___sep_3;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanToken
struct TimeSpanToken_t993347374_marshaled_com
{
	int32_t ___ttt_0;
	int32_t ___num_1;
	int32_t ___zeroes_2;
	Il2CppChar* ___sep_3;
};
#endif // TIMESPANTOKEN_T993347374_H
#ifndef TIMESPANRAWINFO_T580170265_H
#define TIMESPANRAWINFO_T580170265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct  TimeSpanRawInfo_t580170265 
{
public:
	// System.Globalization.TimeSpanParse/TTT System.Globalization.TimeSpanParse/TimeSpanRawInfo::lastSeenTTT
	int32_t ___lastSeenTTT_0;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanRawInfo::tokenCount
	int32_t ___tokenCount_1;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanRawInfo::SepCount
	int32_t ___SepCount_2;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanRawInfo::NumCount
	int32_t ___NumCount_3;
	// System.String[] System.Globalization.TimeSpanParse/TimeSpanRawInfo::literals
	StringU5BU5D_t1281789340* ___literals_4;
	// System.Globalization.TimeSpanParse/TimeSpanToken[] System.Globalization.TimeSpanParse/TimeSpanRawInfo::numbers
	TimeSpanTokenU5BU5D_t3901423707* ___numbers_5;
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_posLoc
	FormatLiterals_t1376140638  ___m_posLoc_6;
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_negLoc
	FormatLiterals_t1376140638  ___m_negLoc_7;
	// System.Boolean System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_posLocInit
	bool ___m_posLocInit_8;
	// System.Boolean System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_negLocInit
	bool ___m_negLocInit_9;
	// System.String System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_fullPosPattern
	String_t* ___m_fullPosPattern_10;
	// System.String System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_fullNegPattern
	String_t* ___m_fullNegPattern_11;

public:
	inline static int32_t get_offset_of_lastSeenTTT_0() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___lastSeenTTT_0)); }
	inline int32_t get_lastSeenTTT_0() const { return ___lastSeenTTT_0; }
	inline int32_t* get_address_of_lastSeenTTT_0() { return &___lastSeenTTT_0; }
	inline void set_lastSeenTTT_0(int32_t value)
	{
		___lastSeenTTT_0 = value;
	}

	inline static int32_t get_offset_of_tokenCount_1() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___tokenCount_1)); }
	inline int32_t get_tokenCount_1() const { return ___tokenCount_1; }
	inline int32_t* get_address_of_tokenCount_1() { return &___tokenCount_1; }
	inline void set_tokenCount_1(int32_t value)
	{
		___tokenCount_1 = value;
	}

	inline static int32_t get_offset_of_SepCount_2() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___SepCount_2)); }
	inline int32_t get_SepCount_2() const { return ___SepCount_2; }
	inline int32_t* get_address_of_SepCount_2() { return &___SepCount_2; }
	inline void set_SepCount_2(int32_t value)
	{
		___SepCount_2 = value;
	}

	inline static int32_t get_offset_of_NumCount_3() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___NumCount_3)); }
	inline int32_t get_NumCount_3() const { return ___NumCount_3; }
	inline int32_t* get_address_of_NumCount_3() { return &___NumCount_3; }
	inline void set_NumCount_3(int32_t value)
	{
		___NumCount_3 = value;
	}

	inline static int32_t get_offset_of_literals_4() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___literals_4)); }
	inline StringU5BU5D_t1281789340* get_literals_4() const { return ___literals_4; }
	inline StringU5BU5D_t1281789340** get_address_of_literals_4() { return &___literals_4; }
	inline void set_literals_4(StringU5BU5D_t1281789340* value)
	{
		___literals_4 = value;
		Il2CppCodeGenWriteBarrier((&___literals_4), value);
	}

	inline static int32_t get_offset_of_numbers_5() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___numbers_5)); }
	inline TimeSpanTokenU5BU5D_t3901423707* get_numbers_5() const { return ___numbers_5; }
	inline TimeSpanTokenU5BU5D_t3901423707** get_address_of_numbers_5() { return &___numbers_5; }
	inline void set_numbers_5(TimeSpanTokenU5BU5D_t3901423707* value)
	{
		___numbers_5 = value;
		Il2CppCodeGenWriteBarrier((&___numbers_5), value);
	}

	inline static int32_t get_offset_of_m_posLoc_6() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___m_posLoc_6)); }
	inline FormatLiterals_t1376140638  get_m_posLoc_6() const { return ___m_posLoc_6; }
	inline FormatLiterals_t1376140638 * get_address_of_m_posLoc_6() { return &___m_posLoc_6; }
	inline void set_m_posLoc_6(FormatLiterals_t1376140638  value)
	{
		___m_posLoc_6 = value;
	}

	inline static int32_t get_offset_of_m_negLoc_7() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___m_negLoc_7)); }
	inline FormatLiterals_t1376140638  get_m_negLoc_7() const { return ___m_negLoc_7; }
	inline FormatLiterals_t1376140638 * get_address_of_m_negLoc_7() { return &___m_negLoc_7; }
	inline void set_m_negLoc_7(FormatLiterals_t1376140638  value)
	{
		___m_negLoc_7 = value;
	}

	inline static int32_t get_offset_of_m_posLocInit_8() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___m_posLocInit_8)); }
	inline bool get_m_posLocInit_8() const { return ___m_posLocInit_8; }
	inline bool* get_address_of_m_posLocInit_8() { return &___m_posLocInit_8; }
	inline void set_m_posLocInit_8(bool value)
	{
		___m_posLocInit_8 = value;
	}

	inline static int32_t get_offset_of_m_negLocInit_9() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___m_negLocInit_9)); }
	inline bool get_m_negLocInit_9() const { return ___m_negLocInit_9; }
	inline bool* get_address_of_m_negLocInit_9() { return &___m_negLocInit_9; }
	inline void set_m_negLocInit_9(bool value)
	{
		___m_negLocInit_9 = value;
	}

	inline static int32_t get_offset_of_m_fullPosPattern_10() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___m_fullPosPattern_10)); }
	inline String_t* get_m_fullPosPattern_10() const { return ___m_fullPosPattern_10; }
	inline String_t** get_address_of_m_fullPosPattern_10() { return &___m_fullPosPattern_10; }
	inline void set_m_fullPosPattern_10(String_t* value)
	{
		___m_fullPosPattern_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullPosPattern_10), value);
	}

	inline static int32_t get_offset_of_m_fullNegPattern_11() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t580170265, ___m_fullNegPattern_11)); }
	inline String_t* get_m_fullNegPattern_11() const { return ___m_fullNegPattern_11; }
	inline String_t** get_address_of_m_fullNegPattern_11() { return &___m_fullNegPattern_11; }
	inline void set_m_fullNegPattern_11(String_t* value)
	{
		___m_fullNegPattern_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullNegPattern_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct TimeSpanRawInfo_t580170265_marshaled_pinvoke
{
	int32_t ___lastSeenTTT_0;
	int32_t ___tokenCount_1;
	int32_t ___SepCount_2;
	int32_t ___NumCount_3;
	char** ___literals_4;
	TimeSpanToken_t993347374_marshaled_pinvoke* ___numbers_5;
	FormatLiterals_t1376140638_marshaled_pinvoke ___m_posLoc_6;
	FormatLiterals_t1376140638_marshaled_pinvoke ___m_negLoc_7;
	int32_t ___m_posLocInit_8;
	int32_t ___m_negLocInit_9;
	char* ___m_fullPosPattern_10;
	char* ___m_fullNegPattern_11;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct TimeSpanRawInfo_t580170265_marshaled_com
{
	int32_t ___lastSeenTTT_0;
	int32_t ___tokenCount_1;
	int32_t ___SepCount_2;
	int32_t ___NumCount_3;
	Il2CppChar** ___literals_4;
	TimeSpanToken_t993347374_marshaled_com* ___numbers_5;
	FormatLiterals_t1376140638_marshaled_com ___m_posLoc_6;
	FormatLiterals_t1376140638_marshaled_com ___m_negLoc_7;
	int32_t ___m_posLocInit_8;
	int32_t ___m_negLocInit_9;
	Il2CppChar* ___m_fullPosPattern_10;
	Il2CppChar* ___m_fullNegPattern_11;
};
#endif // TIMESPANRAWINFO_T580170265_H
#ifndef SORTKEY_T3955336732_H
#define SORTKEY_T3955336732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.SortKey
struct  SortKey_t3955336732  : public RuntimeObject
{
public:
	// System.String System.Globalization.SortKey::source
	String_t* ___source_0;
	// System.Byte[] System.Globalization.SortKey::key
	ByteU5BU5D_t4116647657* ___key_1;
	// System.Globalization.CompareOptions System.Globalization.SortKey::options
	int32_t ___options_2;
	// System.Int32 System.Globalization.SortKey::lcid
	int32_t ___lcid_3;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___source_0)); }
	inline String_t* get_source_0() const { return ___source_0; }
	inline String_t** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(String_t* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___key_1)); }
	inline ByteU5BU5D_t4116647657* get_key_1() const { return ___key_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(ByteU5BU5D_t4116647657* value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___options_2)); }
	inline int32_t get_options_2() const { return ___options_2; }
	inline int32_t* get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(int32_t value)
	{
		___options_2 = value;
	}

	inline static int32_t get_offset_of_lcid_3() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___lcid_3)); }
	inline int32_t get_lcid_3() const { return ___lcid_3; }
	inline int32_t* get_address_of_lcid_3() { return &___lcid_3; }
	inline void set_lcid_3(int32_t value)
	{
		___lcid_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.SortKey
struct SortKey_t3955336732_marshaled_pinvoke
{
	char* ___source_0;
	uint8_t* ___key_1;
	int32_t ___options_2;
	int32_t ___lcid_3;
};
// Native definition for COM marshalling of System.Globalization.SortKey
struct SortKey_t3955336732_marshaled_com
{
	Il2CppChar* ___source_0;
	uint8_t* ___key_1;
	int32_t ___options_2;
	int32_t ___lcid_3;
};
#endif // SORTKEY_T3955336732_H
#ifndef DATETIMEFORMATINFOSCANNER_T3285495966_H
#define DATETIMEFORMATINFOSCANNER_T3285495966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfoScanner
struct  DateTimeFormatInfoScanner_t3285495966  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> System.Globalization.DateTimeFormatInfoScanner::m_dateWords
	List_1_t3319525431 * ___m_dateWords_0;
	// System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern System.Globalization.DateTimeFormatInfoScanner::m_ymdFlags
	int32_t ___m_ymdFlags_2;

public:
	inline static int32_t get_offset_of_m_dateWords_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfoScanner_t3285495966, ___m_dateWords_0)); }
	inline List_1_t3319525431 * get_m_dateWords_0() const { return ___m_dateWords_0; }
	inline List_1_t3319525431 ** get_address_of_m_dateWords_0() { return &___m_dateWords_0; }
	inline void set_m_dateWords_0(List_1_t3319525431 * value)
	{
		___m_dateWords_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_0), value);
	}

	inline static int32_t get_offset_of_m_ymdFlags_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfoScanner_t3285495966, ___m_ymdFlags_2)); }
	inline int32_t get_m_ymdFlags_2() const { return ___m_ymdFlags_2; }
	inline int32_t* get_address_of_m_ymdFlags_2() { return &___m_ymdFlags_2; }
	inline void set_m_ymdFlags_2(int32_t value)
	{
		___m_ymdFlags_2 = value;
	}
};

struct DateTimeFormatInfoScanner_t3285495966_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfoScanner::s_knownWords
	Dictionary_2_t1632706988 * ___s_knownWords_1;

public:
	inline static int32_t get_offset_of_s_knownWords_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfoScanner_t3285495966_StaticFields, ___s_knownWords_1)); }
	inline Dictionary_2_t1632706988 * get_s_knownWords_1() const { return ___s_knownWords_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_s_knownWords_1() { return &___s_knownWords_1; }
	inline void set_s_knownWords_1(Dictionary_2_t1632706988 * value)
	{
		___s_knownWords_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_knownWords_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFOSCANNER_T3285495966_H
#ifndef TIMESPANPARSE_T144409160_H
#define TIMESPANPARSE_T144409160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse
struct  TimeSpanParse_t144409160  : public RuntimeObject
{
public:

public:
};

struct TimeSpanParse_t144409160_StaticFields
{
public:
	// System.Globalization.TimeSpanParse/TimeSpanToken System.Globalization.TimeSpanParse::zero
	TimeSpanToken_t993347374  ___zero_0;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(TimeSpanParse_t144409160_StaticFields, ___zero_0)); }
	inline TimeSpanToken_t993347374  get_zero_0() const { return ___zero_0; }
	inline TimeSpanToken_t993347374 * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(TimeSpanToken_t993347374  value)
	{
		___zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANPARSE_T144409160_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (StringBuilderCache_t3006348846), -1, 0, sizeof(StringBuilderCache_t3006348846_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable1400[1] = 
{
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (SortKey_t3955336732), sizeof(SortKey_t3955336732_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1401[4] = 
{
	SortKey_t3955336732::get_offset_of_source_0(),
	SortKey_t3955336732::get_offset_of_key_1(),
	SortKey_t3955336732::get_offset_of_options_2(),
	SortKey_t3955336732::get_offset_of_lcid_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (CultureInfo_t4157843068), -1, sizeof(CultureInfo_t4157843068_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1402[38] = 
{
	CultureInfo_t4157843068_StaticFields::get_offset_of_invariant_culture_info_0(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_shared_table_lock_1(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_default_current_culture_2(),
	CultureInfo_t4157843068::get_offset_of_m_isReadOnly_3(),
	CultureInfo_t4157843068::get_offset_of_cultureID_4(),
	CultureInfo_t4157843068::get_offset_of_parent_lcid_5(),
	CultureInfo_t4157843068::get_offset_of_datetime_index_6(),
	CultureInfo_t4157843068::get_offset_of_number_index_7(),
	CultureInfo_t4157843068::get_offset_of_default_calendar_type_8(),
	CultureInfo_t4157843068::get_offset_of_m_useUserOverride_9(),
	CultureInfo_t4157843068::get_offset_of_numInfo_10(),
	CultureInfo_t4157843068::get_offset_of_dateTimeInfo_11(),
	CultureInfo_t4157843068::get_offset_of_textInfo_12(),
	CultureInfo_t4157843068::get_offset_of_m_name_13(),
	CultureInfo_t4157843068::get_offset_of_englishname_14(),
	CultureInfo_t4157843068::get_offset_of_nativename_15(),
	CultureInfo_t4157843068::get_offset_of_iso3lang_16(),
	CultureInfo_t4157843068::get_offset_of_iso2lang_17(),
	CultureInfo_t4157843068::get_offset_of_win3lang_18(),
	CultureInfo_t4157843068::get_offset_of_territory_19(),
	CultureInfo_t4157843068::get_offset_of_native_calendar_names_20(),
	CultureInfo_t4157843068::get_offset_of_compareInfo_21(),
	CultureInfo_t4157843068::get_offset_of_textinfo_data_22(),
	CultureInfo_t4157843068::get_offset_of_m_dataItem_23(),
	CultureInfo_t4157843068::get_offset_of_calendar_24(),
	CultureInfo_t4157843068::get_offset_of_parent_culture_25(),
	CultureInfo_t4157843068::get_offset_of_constructed_26(),
	CultureInfo_t4157843068::get_offset_of_cached_serialized_form_27(),
	CultureInfo_t4157843068::get_offset_of_m_cultureData_28(),
	CultureInfo_t4157843068::get_offset_of_m_isInherited_29(),
	0,
	0,
	0,
	CultureInfo_t4157843068_StaticFields::get_offset_of_s_DefaultThreadCurrentUICulture_33(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_s_DefaultThreadCurrentCulture_34(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_shared_by_number_35(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_shared_by_name_36(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_IsTaiwanSku_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (Data_t191216285)+ sizeof (RuntimeObject), sizeof(Data_t191216285_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1403[6] = 
{
	Data_t191216285::get_offset_of_ansi_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t191216285::get_offset_of_ebcdic_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t191216285::get_offset_of_mac_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t191216285::get_offset_of_oem_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t191216285::get_offset_of_right_to_left_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t191216285::get_offset_of_list_sep_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (IdnMapping_t1700667501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[3] = 
{
	IdnMapping_t1700667501::get_offset_of_allow_unassigned_0(),
	IdnMapping_t1700667501::get_offset_of_use_std3_1(),
	IdnMapping_t1700667501::get_offset_of_puny_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (Bootstring_t3302426383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1405[8] = 
{
	Bootstring_t3302426383::get_offset_of_delimiter_0(),
	Bootstring_t3302426383::get_offset_of_base_num_1(),
	Bootstring_t3302426383::get_offset_of_tmin_2(),
	Bootstring_t3302426383::get_offset_of_tmax_3(),
	Bootstring_t3302426383::get_offset_of_skew_4(),
	Bootstring_t3302426383::get_offset_of_damp_5(),
	Bootstring_t3302426383::get_offset_of_initial_bias_6(),
	Bootstring_t3302426383::get_offset_of_initial_n_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (Punycode_t2881783740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (RegionInfo_t1090270226), sizeof(RegionInfo_t1090270226_marshaled_pinvoke), sizeof(RegionInfo_t1090270226_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1407[11] = 
{
	RegionInfo_t1090270226_StaticFields::get_offset_of_currentRegion_0(),
	RegionInfo_t1090270226::get_offset_of_regionId_1(),
	RegionInfo_t1090270226::get_offset_of_iso2Name_2(),
	RegionInfo_t1090270226::get_offset_of_iso3Name_3(),
	RegionInfo_t1090270226::get_offset_of_win3Name_4(),
	RegionInfo_t1090270226::get_offset_of_englishName_5(),
	RegionInfo_t1090270226::get_offset_of_nativeName_6(),
	RegionInfo_t1090270226::get_offset_of_currencySymbol_7(),
	RegionInfo_t1090270226::get_offset_of_isoCurrencySymbol_8(),
	RegionInfo_t1090270226::get_offset_of_currencyEnglishName_9(),
	RegionInfo_t1090270226::get_offset_of_currencyNativeName_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (CalendarData_t473118650), -1, sizeof(CalendarData_t473118650_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1408[21] = 
{
	0,
	CalendarData_t473118650::get_offset_of_sNativeName_1(),
	CalendarData_t473118650::get_offset_of_saShortDates_2(),
	CalendarData_t473118650::get_offset_of_saYearMonths_3(),
	CalendarData_t473118650::get_offset_of_saLongDates_4(),
	CalendarData_t473118650::get_offset_of_sMonthDay_5(),
	CalendarData_t473118650::get_offset_of_saEraNames_6(),
	CalendarData_t473118650::get_offset_of_saAbbrevEraNames_7(),
	CalendarData_t473118650::get_offset_of_saAbbrevEnglishEraNames_8(),
	CalendarData_t473118650::get_offset_of_saDayNames_9(),
	CalendarData_t473118650::get_offset_of_saAbbrevDayNames_10(),
	CalendarData_t473118650::get_offset_of_saSuperShortDayNames_11(),
	CalendarData_t473118650::get_offset_of_saMonthNames_12(),
	CalendarData_t473118650::get_offset_of_saAbbrevMonthNames_13(),
	CalendarData_t473118650::get_offset_of_saMonthGenitiveNames_14(),
	CalendarData_t473118650::get_offset_of_saAbbrevMonthGenitiveNames_15(),
	CalendarData_t473118650::get_offset_of_saLeapYearMonthNames_16(),
	CalendarData_t473118650::get_offset_of_iTwoDigitYearMax_17(),
	CalendarData_t473118650::get_offset_of_iCurrentEra_18(),
	CalendarData_t473118650::get_offset_of_bUseUserOverrides_19(),
	CalendarData_t473118650_StaticFields::get_offset_of_Invariant_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (CultureData_t1899656083), -1, sizeof(CultureData_t1899656083_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1409[21] = 
{
	CultureData_t1899656083::get_offset_of_sAM1159_0(),
	CultureData_t1899656083::get_offset_of_sPM2359_1(),
	CultureData_t1899656083::get_offset_of_sTimeSeparator_2(),
	CultureData_t1899656083::get_offset_of_saLongTimes_3(),
	CultureData_t1899656083::get_offset_of_saShortTimes_4(),
	CultureData_t1899656083::get_offset_of_iFirstDayOfWeek_5(),
	CultureData_t1899656083::get_offset_of_iFirstWeekOfYear_6(),
	CultureData_t1899656083::get_offset_of_waCalendars_7(),
	CultureData_t1899656083::get_offset_of_calendars_8(),
	CultureData_t1899656083::get_offset_of_sISO639Language_9(),
	CultureData_t1899656083::get_offset_of_sRealName_10(),
	CultureData_t1899656083::get_offset_of_bUseOverrides_11(),
	CultureData_t1899656083::get_offset_of_calendarId_12(),
	CultureData_t1899656083::get_offset_of_numberIndex_13(),
	CultureData_t1899656083::get_offset_of_iDefaultAnsiCodePage_14(),
	CultureData_t1899656083::get_offset_of_iDefaultOemCodePage_15(),
	CultureData_t1899656083::get_offset_of_iDefaultMacCodePage_16(),
	CultureData_t1899656083::get_offset_of_iDefaultEbcdicCodePage_17(),
	CultureData_t1899656083::get_offset_of_isRightToLeft_18(),
	CultureData_t1899656083::get_offset_of_sListSeparator_19(),
	CultureData_t1899656083_StaticFields::get_offset_of_s_Invariant_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (CodePageDataItem_t2285235057), -1, sizeof(CodePageDataItem_t2285235057_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1410[7] = 
{
	CodePageDataItem_t2285235057::get_offset_of_m_dataIndex_0(),
	CodePageDataItem_t2285235057::get_offset_of_m_uiFamilyCodePage_1(),
	CodePageDataItem_t2285235057::get_offset_of_m_webName_2(),
	CodePageDataItem_t2285235057::get_offset_of_m_headerName_3(),
	CodePageDataItem_t2285235057::get_offset_of_m_bodyName_4(),
	CodePageDataItem_t2285235057::get_offset_of_m_flags_5(),
	CodePageDataItem_t2285235057_StaticFields::get_offset_of_sep_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (EncodingTable_t568191682), -1, sizeof(EncodingTable_t568191682_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1411[5] = 
{
	EncodingTable_t568191682_StaticFields::get_offset_of_encodingDataPtr_0(),
	EncodingTable_t568191682_StaticFields::get_offset_of_codePageDataPtr_1(),
	EncodingTable_t568191682_StaticFields::get_offset_of_lastEncodingItem_2(),
	EncodingTable_t568191682_StaticFields::get_offset_of_hashByName_3(),
	EncodingTable_t568191682_StaticFields::get_offset_of_hashByCodePage_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (InternalEncodingDataItem_t3158859817)+ sizeof (RuntimeObject), sizeof(InternalEncodingDataItem_t3158859817_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1412[2] = 
{
	InternalEncodingDataItem_t3158859817::get_offset_of_webName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalEncodingDataItem_t3158859817::get_offset_of_codePage_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (InternalCodePageDataItem_t2575532933)+ sizeof (RuntimeObject), sizeof(InternalCodePageDataItem_t2575532933_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1413[4] = 
{
	InternalCodePageDataItem_t2575532933::get_offset_of_codePage_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalCodePageDataItem_t2575532933::get_offset_of_uiFamilyCodePage_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalCodePageDataItem_t2575532933::get_offset_of_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalCodePageDataItem_t2575532933::get_offset_of_Names_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (CompareInfo_t1092934962), -1, sizeof(CompareInfo_t1092934962_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1414[9] = 
{
	CompareInfo_t1092934962::get_offset_of_collator_0(),
	CompareInfo_t1092934962_StaticFields::get_offset_of_collators_1(),
	CompareInfo_t1092934962_StaticFields::get_offset_of_managedCollation_2(),
	CompareInfo_t1092934962_StaticFields::get_offset_of_managedCollationChecked_3(),
	CompareInfo_t1092934962::get_offset_of_m_name_4(),
	CompareInfo_t1092934962::get_offset_of_m_sortName_5(),
	CompareInfo_t1092934962::get_offset_of_win32LCID_6(),
	CompareInfo_t1092934962::get_offset_of_culture_7(),
	CompareInfo_t1092934962::get_offset_of_m_SortVersion_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (TextInfo_t3810425522), -1, sizeof(TextInfo_t3810425522_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1415[9] = 
{
	TextInfo_t3810425522::get_offset_of_m_isReadOnly_0(),
	TextInfo_t3810425522::get_offset_of_m_cultureName_1(),
	TextInfo_t3810425522::get_offset_of_m_cultureData_2(),
	TextInfo_t3810425522::get_offset_of_m_textInfoName_3(),
	TextInfo_t3810425522::get_offset_of_m_IsAsciiCasingSameAsInvariant_4(),
	TextInfo_t3810425522_StaticFields::get_offset_of_s_Invariant_5(),
	TextInfo_t3810425522::get_offset_of_customCultureName_6(),
	TextInfo_t3810425522::get_offset_of_m_useUserOverride_7(),
	TextInfo_t3810425522::get_offset_of_m_win32LangID_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (TextInfoToUpperData_t2556594888), -1, sizeof(TextInfoToUpperData_t2556594888_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1416[8] = 
{
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_00e0_0586_0(),
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_1e01_1ff3_1(),
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_2170_2184_2(),
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_24d0_24e9_3(),
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_2c30_2ce3_4(),
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_2d00_2d25_5(),
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_a641_a697_6(),
	TextInfoToUpperData_t2556594888_StaticFields::get_offset_of_range_a723_a78c_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (TextInfoToLowerData_t154700191), -1, sizeof(TextInfoToLowerData_t154700191_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1417[9] = 
{
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_00c0_0556_0(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_10a0_10c5_1(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_1e00_1ffc_2(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_2160_216f_3(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_24b6_24cf_4(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_2c00_2c2e_5(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_2c60_2ce2_6(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_a640_a696_7(),
	TextInfoToLowerData_t154700191_StaticFields::get_offset_of_range_a722_a78b_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (Calendar_t1661121569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[3] = 
{
	Calendar_t1661121569::get_offset_of_m_currentEraValue_0(),
	Calendar_t1661121569::get_offset_of_m_isReadOnly_1(),
	Calendar_t1661121569::get_offset_of_twoDigitYearMax_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (CharUnicodeInfo_t4268073907), -1, sizeof(CharUnicodeInfo_t4268073907_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1419[6] = 
{
	CharUnicodeInfo_t4268073907_StaticFields::get_offset_of_s_initialized_0(),
	CharUnicodeInfo_t4268073907_StaticFields::get_offset_of_s_pCategoryLevel1Index_1(),
	CharUnicodeInfo_t4268073907_StaticFields::get_offset_of_s_pCategoriesValue_2(),
	CharUnicodeInfo_t4268073907_StaticFields::get_offset_of_s_pNumericLevel1Index_3(),
	CharUnicodeInfo_t4268073907_StaticFields::get_offset_of_s_pNumericValues_4(),
	CharUnicodeInfo_t4268073907_StaticFields::get_offset_of_s_pDigitValues_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (UnicodeDataHeader_t1790070607)+ sizeof (RuntimeObject), sizeof(UnicodeDataHeader_t1790070607_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1420[7] = 
{
	UnicodeDataHeader_t1790070607::get_offset_of_TableName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t1790070607::get_offset_of_version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t1790070607::get_offset_of_OffsetToCategoriesIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t1790070607::get_offset_of_OffsetToCategoriesValue_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t1790070607::get_offset_of_OffsetToNumbericIndex_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t1790070607::get_offset_of_OffsetToDigitValue_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t1790070607::get_offset_of_OffsetToNumbericValue_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (DigitValues_t1637379909)+ sizeof (RuntimeObject), sizeof(DigitValues_t1637379909 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1421[2] = 
{
	DigitValues_t1637379909::get_offset_of_decimalDigit_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DigitValues_t1637379909::get_offset_of_digit_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (CompareOptions_t4130014775)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1422[10] = 
{
	CompareOptions_t4130014775::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (CultureNotFoundException_t958859199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[2] = 
{
	CultureNotFoundException_t958859199::get_offset_of_m_invalidCultureName_17(),
	CultureNotFoundException_t958859199::get_offset_of_m_invalidCultureId_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (CultureTypes_t3483192109)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1424[9] = 
{
	CultureTypes_t3483192109::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (DaylightTime_t2582425773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1425[3] = 
{
	DaylightTime_t2582425773::get_offset_of_m_start_0(),
	DaylightTime_t2582425773::get_offset_of_m_end_1(),
	DaylightTime_t2582425773::get_offset_of_m_delta_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (MonthNameStyles_t616550403)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1426[4] = 
{
	MonthNameStyles_t616550403::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (DateTimeFormatFlags_t1884407083)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1427[9] = 
{
	DateTimeFormatFlags_t1884407083::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (DateTimeFormatInfo_t2405853701), -1, sizeof(DateTimeFormatInfo_t2405853701_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1428[84] = 
{
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_invariantInfo_0(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_cultureData_1(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_name_2(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_langName_3(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_compareInfo_4(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_cultureInfo_5(),
	DateTimeFormatInfo_t2405853701::get_offset_of_amDesignator_6(),
	DateTimeFormatInfo_t2405853701::get_offset_of_pmDesignator_7(),
	DateTimeFormatInfo_t2405853701::get_offset_of_dateSeparator_8(),
	DateTimeFormatInfo_t2405853701::get_offset_of_generalShortTimePattern_9(),
	DateTimeFormatInfo_t2405853701::get_offset_of_generalLongTimePattern_10(),
	DateTimeFormatInfo_t2405853701::get_offset_of_timeSeparator_11(),
	DateTimeFormatInfo_t2405853701::get_offset_of_monthDayPattern_12(),
	DateTimeFormatInfo_t2405853701::get_offset_of_dateTimeOffsetPattern_13(),
	0,
	0,
	0,
	DateTimeFormatInfo_t2405853701::get_offset_of_calendar_17(),
	DateTimeFormatInfo_t2405853701::get_offset_of_firstDayOfWeek_18(),
	DateTimeFormatInfo_t2405853701::get_offset_of_calendarWeekRule_19(),
	DateTimeFormatInfo_t2405853701::get_offset_of_fullDateTimePattern_20(),
	DateTimeFormatInfo_t2405853701::get_offset_of_abbreviatedDayNames_21(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_superShortDayNames_22(),
	DateTimeFormatInfo_t2405853701::get_offset_of_dayNames_23(),
	DateTimeFormatInfo_t2405853701::get_offset_of_abbreviatedMonthNames_24(),
	DateTimeFormatInfo_t2405853701::get_offset_of_monthNames_25(),
	DateTimeFormatInfo_t2405853701::get_offset_of_genitiveMonthNames_26(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_genitiveAbbreviatedMonthNames_27(),
	DateTimeFormatInfo_t2405853701::get_offset_of_leapYearMonthNames_28(),
	DateTimeFormatInfo_t2405853701::get_offset_of_longDatePattern_29(),
	DateTimeFormatInfo_t2405853701::get_offset_of_shortDatePattern_30(),
	DateTimeFormatInfo_t2405853701::get_offset_of_yearMonthPattern_31(),
	DateTimeFormatInfo_t2405853701::get_offset_of_longTimePattern_32(),
	DateTimeFormatInfo_t2405853701::get_offset_of_shortTimePattern_33(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allYearMonthPatterns_34(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allShortDatePatterns_35(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allLongDatePatterns_36(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allShortTimePatterns_37(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allLongTimePatterns_38(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_eraNames_39(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_abbrevEraNames_40(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_abbrevEnglishEraNames_41(),
	DateTimeFormatInfo_t2405853701::get_offset_of_optionalCalendars_42(),
	0,
	DateTimeFormatInfo_t2405853701::get_offset_of_m_isReadOnly_44(),
	DateTimeFormatInfo_t2405853701::get_offset_of_formatFlags_45(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_preferExistingTokens_46(),
	DateTimeFormatInfo_t2405853701::get_offset_of_CultureID_47(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_useUserOverride_48(),
	DateTimeFormatInfo_t2405853701::get_offset_of_bUseCalendarInfo_49(),
	DateTimeFormatInfo_t2405853701::get_offset_of_nDataItem_50(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_isDefaultCalendar_51(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_s_calendarNativeNames_52(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_dateWords_53(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_fullTimeSpanPositivePattern_54(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_fullTimeSpanNegativePattern_55(),
	0,
	DateTimeFormatInfo_t2405853701::get_offset_of_m_dtfiTokenHash_57(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_s_jajpDTFI_82(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_s_zhtwDTFI_83(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (TokenHashValue_t1081334094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1429[3] = 
{
	TokenHashValue_t1081334094::get_offset_of_tokenString_0(),
	TokenHashValue_t1081334094::get_offset_of_tokenType_1(),
	TokenHashValue_t1081334094::get_offset_of_tokenValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (FORMATFLAGS_t986820117)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1430[8] = 
{
	FORMATFLAGS_t986820117::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (CalendarId_t491731612)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1431[25] = 
{
	CalendarId_t491731612::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (DateTimeFormatInfoScanner_t3285495966), -1, sizeof(DateTimeFormatInfoScanner_t3285495966_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1432[3] = 
{
	DateTimeFormatInfoScanner_t3285495966::get_offset_of_m_dateWords_0(),
	DateTimeFormatInfoScanner_t3285495966_StaticFields::get_offset_of_s_knownWords_1(),
	DateTimeFormatInfoScanner_t3285495966::get_offset_of_m_ymdFlags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (FoundDatePattern_t1218817278)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1433[6] = 
{
	FoundDatePattern_t1218817278::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (DateTimeStyles_t840957420)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1434[11] = 
{
	DateTimeStyles_t840957420::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (GlobalizationAssembly_t2435901830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (GregorianCalendar_t2054525052), -1, sizeof(GregorianCalendar_t2054525052_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1436[4] = 
{
	GregorianCalendar_t2054525052::get_offset_of_m_type_3(),
	GregorianCalendar_t2054525052_StaticFields::get_offset_of_DaysToMonth365_4(),
	GregorianCalendar_t2054525052_StaticFields::get_offset_of_DaysToMonth366_5(),
	GregorianCalendar_t2054525052_StaticFields::get_offset_of_s_defaultInstance_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (EraInfo_t4167091505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[8] = 
{
	EraInfo_t4167091505::get_offset_of_era_0(),
	EraInfo_t4167091505::get_offset_of_ticks_1(),
	EraInfo_t4167091505::get_offset_of_yearOffset_2(),
	EraInfo_t4167091505::get_offset_of_minEraYear_3(),
	EraInfo_t4167091505::get_offset_of_maxEraYear_4(),
	EraInfo_t4167091505::get_offset_of_eraName_5(),
	EraInfo_t4167091505::get_offset_of_abbrevEraName_6(),
	EraInfo_t4167091505::get_offset_of_englishEraName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (GregorianCalendarHelper_t3016720499), -1, sizeof(GregorianCalendarHelper_t3016720499_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1438[8] = 
{
	GregorianCalendarHelper_t3016720499_StaticFields::get_offset_of_DaysToMonth365_0(),
	GregorianCalendarHelper_t3016720499_StaticFields::get_offset_of_DaysToMonth366_1(),
	GregorianCalendarHelper_t3016720499::get_offset_of_m_maxYear_2(),
	GregorianCalendarHelper_t3016720499::get_offset_of_m_minYear_3(),
	GregorianCalendarHelper_t3016720499::get_offset_of_m_Cal_4(),
	GregorianCalendarHelper_t3016720499::get_offset_of_m_EraInfo_5(),
	GregorianCalendarHelper_t3016720499::get_offset_of_m_eras_6(),
	GregorianCalendarHelper_t3016720499::get_offset_of_m_minDate_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (GregorianCalendarTypes_t3815403233)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1439[7] = 
{
	GregorianCalendarTypes_t3815403233::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (HebrewNumberParsingContext_t267102816)+ sizeof (RuntimeObject), sizeof(HebrewNumberParsingContext_t267102816 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1440[2] = 
{
	HebrewNumberParsingContext_t267102816::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HebrewNumberParsingContext_t267102816::get_offset_of_result_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (HebrewNumberParsingState_t2098543808)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1441[5] = 
{
	HebrewNumberParsingState_t2098543808::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (HebrewNumber_t2955723309), -1, sizeof(HebrewNumber_t2955723309_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1442[3] = 
{
	HebrewNumber_t2955723309_StaticFields::get_offset_of_HebrewValues_0(),
	HebrewNumber_t2955723309_StaticFields::get_offset_of_maxHebrewNumberCh_1(),
	HebrewNumber_t2955723309_StaticFields::get_offset_of_NumberPasingState_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (HebrewToken_t2721214809)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1443[12] = 
{
	HebrewToken_t2721214809::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (HebrewValue_t1606459855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1444[2] = 
{
	HebrewValue_t1606459855::get_offset_of_token_0(),
	HebrewValue_t1606459855::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (HS_t3339773016)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1445[20] = 
{
	HS_t3339773016::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (JapaneseCalendar_t1037108350), -1, sizeof(JapaneseCalendar_t1037108350_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1446[4] = 
{
	JapaneseCalendar_t1037108350_StaticFields::get_offset_of_calendarMinValue_3(),
	JapaneseCalendar_t1037108350_StaticFields::get_offset_of_japaneseEraInfo_4(),
	JapaneseCalendar_t1037108350_StaticFields::get_offset_of_s_defaultInstance_5(),
	JapaneseCalendar_t1037108350::get_offset_of_helper_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (NumberStyles_t617258130)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1447[18] = 
{
	NumberStyles_t617258130::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (NumberFormatInfo_t435877138), -1, sizeof(NumberFormatInfo_t435877138_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1448[36] = 
{
	NumberFormatInfo_t435877138_StaticFields::get_offset_of_invariantInfo_0(),
	NumberFormatInfo_t435877138::get_offset_of_numberGroupSizes_1(),
	NumberFormatInfo_t435877138::get_offset_of_currencyGroupSizes_2(),
	NumberFormatInfo_t435877138::get_offset_of_percentGroupSizes_3(),
	NumberFormatInfo_t435877138::get_offset_of_positiveSign_4(),
	NumberFormatInfo_t435877138::get_offset_of_negativeSign_5(),
	NumberFormatInfo_t435877138::get_offset_of_numberDecimalSeparator_6(),
	NumberFormatInfo_t435877138::get_offset_of_numberGroupSeparator_7(),
	NumberFormatInfo_t435877138::get_offset_of_currencyGroupSeparator_8(),
	NumberFormatInfo_t435877138::get_offset_of_currencyDecimalSeparator_9(),
	NumberFormatInfo_t435877138::get_offset_of_currencySymbol_10(),
	NumberFormatInfo_t435877138::get_offset_of_ansiCurrencySymbol_11(),
	NumberFormatInfo_t435877138::get_offset_of_nanSymbol_12(),
	NumberFormatInfo_t435877138::get_offset_of_positiveInfinitySymbol_13(),
	NumberFormatInfo_t435877138::get_offset_of_negativeInfinitySymbol_14(),
	NumberFormatInfo_t435877138::get_offset_of_percentDecimalSeparator_15(),
	NumberFormatInfo_t435877138::get_offset_of_percentGroupSeparator_16(),
	NumberFormatInfo_t435877138::get_offset_of_percentSymbol_17(),
	NumberFormatInfo_t435877138::get_offset_of_perMilleSymbol_18(),
	NumberFormatInfo_t435877138::get_offset_of_nativeDigits_19(),
	NumberFormatInfo_t435877138::get_offset_of_m_dataItem_20(),
	NumberFormatInfo_t435877138::get_offset_of_numberDecimalDigits_21(),
	NumberFormatInfo_t435877138::get_offset_of_currencyDecimalDigits_22(),
	NumberFormatInfo_t435877138::get_offset_of_currencyPositivePattern_23(),
	NumberFormatInfo_t435877138::get_offset_of_currencyNegativePattern_24(),
	NumberFormatInfo_t435877138::get_offset_of_numberNegativePattern_25(),
	NumberFormatInfo_t435877138::get_offset_of_percentPositivePattern_26(),
	NumberFormatInfo_t435877138::get_offset_of_percentNegativePattern_27(),
	NumberFormatInfo_t435877138::get_offset_of_percentDecimalDigits_28(),
	NumberFormatInfo_t435877138::get_offset_of_digitSubstitution_29(),
	NumberFormatInfo_t435877138::get_offset_of_isReadOnly_30(),
	NumberFormatInfo_t435877138::get_offset_of_m_useUserOverride_31(),
	NumberFormatInfo_t435877138::get_offset_of_m_isInvariant_32(),
	NumberFormatInfo_t435877138::get_offset_of_validForParseAsNumber_33(),
	NumberFormatInfo_t435877138::get_offset_of_validForParseAsCurrency_34(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (SortVersion_t3332565609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1449[2] = 
{
	SortVersion_t3332565609::get_offset_of_m_NlsVersion_0(),
	SortVersion_t3332565609::get_offset_of_m_SortId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (TaiwanCalendar_t118153794), -1, sizeof(TaiwanCalendar_t118153794_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1450[4] = 
{
	TaiwanCalendar_t118153794_StaticFields::get_offset_of_taiwanEraInfo_3(),
	TaiwanCalendar_t118153794_StaticFields::get_offset_of_s_defaultInstance_4(),
	TaiwanCalendar_t118153794::get_offset_of_helper_5(),
	TaiwanCalendar_t118153794_StaticFields::get_offset_of_calendarMinValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (TimeSpanFormat_t3126083837), -1, sizeof(TimeSpanFormat_t3126083837_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1451[2] = 
{
	TimeSpanFormat_t3126083837_StaticFields::get_offset_of_PositiveInvariantFormatLiterals_0(),
	TimeSpanFormat_t3126083837_StaticFields::get_offset_of_NegativeInvariantFormatLiterals_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (Pattern_t3441131214)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1452[4] = 
{
	Pattern_t3441131214::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (FormatLiterals_t1376140638)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[7] = 
{
	FormatLiterals_t1376140638::get_offset_of_AppCompatLiteral_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t1376140638::get_offset_of_dd_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t1376140638::get_offset_of_hh_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t1376140638::get_offset_of_mm_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t1376140638::get_offset_of_ss_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t1376140638::get_offset_of_ff_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t1376140638::get_offset_of_literals_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (TimeSpanStyles_t2738235750)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[3] = 
{
	TimeSpanStyles_t2738235750::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (TimeSpanParse_t144409160), -1, sizeof(TimeSpanParse_t144409160_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1455[1] = 
{
	TimeSpanParse_t144409160_StaticFields::get_offset_of_zero_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (TimeSpanThrowStyle_t421362192)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1456[3] = 
{
	TimeSpanThrowStyle_t421362192::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (ParseFailureKind_t3456414874)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1457[6] = 
{
	ParseFailureKind_t3456414874::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (TimeSpanStandardStyles_t3017350002)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1458[6] = 
{
	TimeSpanStandardStyles_t3017350002::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (TTT_t2628677491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1459[6] = 
{
	TTT_t2628677491::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (TimeSpanToken_t993347374)+ sizeof (RuntimeObject), sizeof(TimeSpanToken_t993347374_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1460[4] = 
{
	TimeSpanToken_t993347374::get_offset_of_ttt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanToken_t993347374::get_offset_of_num_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanToken_t993347374::get_offset_of_zeroes_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanToken_t993347374::get_offset_of_sep_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (TimeSpanTokenizer_t3293824704)+ sizeof (RuntimeObject), sizeof(TimeSpanTokenizer_t3293824704_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1461[2] = 
{
	TimeSpanTokenizer_t3293824704::get_offset_of_m_pos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanTokenizer_t3293824704::get_offset_of_m_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (TimeSpanRawInfo_t580170265)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[12] = 
{
	TimeSpanRawInfo_t580170265::get_offset_of_lastSeenTTT_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_tokenCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_SepCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_NumCount_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_literals_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_numbers_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_m_posLoc_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_m_negLoc_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_m_posLocInit_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_m_negLocInit_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_m_fullPosPattern_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t580170265::get_offset_of_m_fullNegPattern_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (TimeSpanResult_t3304031259)+ sizeof (RuntimeObject), sizeof(TimeSpanResult_t3304031259_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1463[6] = 
{
	TimeSpanResult_t3304031259::get_offset_of_parsedTimeSpan_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3304031259::get_offset_of_throwStyle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3304031259::get_offset_of_m_failure_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3304031259::get_offset_of_m_failureMessageID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3304031259::get_offset_of_m_failureMessageFormatArgument_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3304031259::get_offset_of_m_failureArgumentName_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (StringParser_t3469098761)+ sizeof (RuntimeObject), sizeof(StringParser_t3469098761_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1464[4] = 
{
	StringParser_t3469098761::get_offset_of_str_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StringParser_t3469098761::get_offset_of_ch_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StringParser_t3469098761::get_offset_of_pos_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StringParser_t3469098761::get_offset_of_len_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (UnicodeCategory_t3356078642)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1465[31] = 
{
	UnicodeCategory_t3356078642::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (Runtime_t3174508158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (RuntimeClassHandle_t4196268768)+ sizeof (RuntimeObject), sizeof(RuntimeClassHandle_t4196268768_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1467[1] = 
{
	RuntimeClassHandle_t4196268768::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (RuntimeRemoteClassHandle_t2479637696)+ sizeof (RuntimeObject), sizeof(RuntimeRemoteClassHandle_t2479637696_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1468[1] = 
{
	RuntimeRemoteClassHandle_t2479637696::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (RuntimeGenericParamInfoHandle_t3649234556)+ sizeof (RuntimeObject), sizeof(RuntimeGenericParamInfoHandle_t3649234556_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1469[1] = 
{
	RuntimeGenericParamInfoHandle_t3649234556::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (RuntimeEventHandle_t2858913149)+ sizeof (RuntimeObject), sizeof(RuntimeEventHandle_t2858913149 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1470[1] = 
{
	RuntimeEventHandle_t2858913149::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (RuntimePropertyHandle_t359893900)+ sizeof (RuntimeObject), sizeof(RuntimePropertyHandle_t359893900 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1471[1] = 
{
	RuntimePropertyHandle_t359893900::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (RuntimeGPtrArrayHandle_t2690631865)+ sizeof (RuntimeObject), sizeof(RuntimeGPtrArrayHandle_t2690631865_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1472[1] = 
{
	RuntimeGPtrArrayHandle_t2690631865::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (RuntimeMarshal_t1127693947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (RuntimeStructs_t1215331603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (RemoteClass_t4006407480)+ sizeof (RuntimeObject), sizeof(RemoteClass_t4006407480_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1475[5] = 
{
	RemoteClass_t4006407480::get_offset_of_default_vtable_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t4006407480::get_offset_of_xdomain_vtable_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t4006407480::get_offset_of_proxy_class_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t4006407480::get_offset_of_proxy_class_name_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RemoteClass_t4006407480::get_offset_of_interface_count_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (MonoClass_t3449698282)+ sizeof (RuntimeObject), sizeof(MonoClass_t3449698282 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (GenericParamInfo_t1825140006)+ sizeof (RuntimeObject), sizeof(GenericParamInfo_t1825140006_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1477[5] = 
{
	GenericParamInfo_t1825140006::get_offset_of_pklass_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1825140006::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1825140006::get_offset_of_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1825140006::get_offset_of_token_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GenericParamInfo_t1825140006::get_offset_of_constraints_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (GPtrArray_t1503373745)+ sizeof (RuntimeObject), sizeof(GPtrArray_t1503373745_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1478[2] = 
{
	GPtrArray_t1503373745::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GPtrArray_t1503373745::get_offset_of_len_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (HandleStackMark_t1309497343)+ sizeof (RuntimeObject), sizeof(HandleStackMark_t1309497343 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1479[2] = 
{
	HandleStackMark_t1309497343::get_offset_of_size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HandleStackMark_t1309497343::get_offset_of_chunk_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (MonoError_t4245851944)+ sizeof (RuntimeObject), sizeof(MonoError_t4245851944 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1480[18] = 
{
	MonoError_t4245851944::get_offset_of_error_code_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_0_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_1_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_2_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_3_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_4_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_5_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_6_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_7_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_8_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_11_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_12_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_13_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_14_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_15_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_16_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_17_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoError_t4245851944::get_offset_of_hidden_18_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (MonoAssemblyName_t4195151589)+ sizeof (RuntimeObject), sizeof(MonoAssemblyName_t4195151589 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1481[13] = 
{
	MonoAssemblyName_t4195151589::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_culture_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_hash_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_public_key_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_public_key_token_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_hash_alg_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_hash_len_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_flags_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_major_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_minor_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_build_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_revision_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoAssemblyName_t4195151589::get_offset_of_arch_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253)+ sizeof (RuntimeObject), sizeof(U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1482[1] = 
{
	U3Cpublic_key_tokenU3Ee__FixedBuffer_t3250456253::get_offset_of_FixedElementField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (SafeGPtrArrayHandle_t2768407725)+ sizeof (RuntimeObject), sizeof(SafeGPtrArrayHandle_t2768407725_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1483[1] = 
{
	SafeGPtrArrayHandle_t2768407725::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (SafeStringMarshal_t1394540657)+ sizeof (RuntimeObject), sizeof(SafeStringMarshal_t1394540657_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1484[2] = 
{
	SafeStringMarshal_t1394540657::get_offset_of_str_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SafeStringMarshal_t1394540657::get_offset_of_marshaled_string_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (SmallXmlParser_t973787839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[12] = 
{
	SmallXmlParser_t973787839::get_offset_of_handler_0(),
	SmallXmlParser_t973787839::get_offset_of_reader_1(),
	SmallXmlParser_t973787839::get_offset_of_elementNames_2(),
	SmallXmlParser_t973787839::get_offset_of_xmlSpaces_3(),
	SmallXmlParser_t973787839::get_offset_of_xmlSpace_4(),
	SmallXmlParser_t973787839::get_offset_of_buffer_5(),
	SmallXmlParser_t973787839::get_offset_of_nameBuffer_6(),
	SmallXmlParser_t973787839::get_offset_of_isWhitespace_7(),
	SmallXmlParser_t973787839::get_offset_of_attributes_8(),
	SmallXmlParser_t973787839::get_offset_of_line_9(),
	SmallXmlParser_t973787839::get_offset_of_column_10(),
	SmallXmlParser_t973787839::get_offset_of_resetColumn_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (AttrListImpl_t567962447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1488[2] = 
{
	AttrListImpl_t567962447::get_offset_of_attrNames_0(),
	AttrListImpl_t567962447::get_offset_of_attrValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (SmallXmlParserException_t1329648272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1489[2] = 
{
	SmallXmlParserException_t1329648272::get_offset_of_line_16(),
	SmallXmlParserException_t1329648272::get_offset_of_column_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (SecurityParser_t4124480077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1490[3] = 
{
	SecurityParser_t4124480077::get_offset_of_root_12(),
	SecurityParser_t4124480077::get_offset_of_current_13(),
	SecurityParser_t4124480077::get_offset_of_stack_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (ASN1_t2114160832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1491[3] = 
{
	ASN1_t2114160832::get_offset_of_m_nTag_0(),
	ASN1_t2114160832::get_offset_of_m_aValue_1(),
	ASN1_t2114160832::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (ASN1Convert_t2839890152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (BitConverterLE_t2108532978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (PKCS7_t1860834338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (ContentInfo_t3218159895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1495[2] = 
{
	ContentInfo_t3218159895::get_offset_of_contentType_0(),
	ContentInfo_t3218159895::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (EncryptedData_t3577548732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1496[4] = 
{
	EncryptedData_t3577548732::get_offset_of__version_0(),
	EncryptedData_t3577548732::get_offset_of__content_1(),
	EncryptedData_t3577548732::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t3577548732::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (SignedData_t2897824243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1497[7] = 
{
	SignedData_t2897824243::get_offset_of_version_0(),
	SignedData_t2897824243::get_offset_of_hashAlgorithm_1(),
	SignedData_t2897824243::get_offset_of_contentInfo_2(),
	SignedData_t2897824243::get_offset_of_certs_3(),
	SignedData_t2897824243::get_offset_of_crls_4(),
	SignedData_t2897824243::get_offset_of_signerInfo_5(),
	SignedData_t2897824243::get_offset_of_mda_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (SignerInfo_t1701070648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1498[8] = 
{
	SignerInfo_t1701070648::get_offset_of_version_0(),
	SignerInfo_t1701070648::get_offset_of_hashAlgorithm_1(),
	SignerInfo_t1701070648::get_offset_of_authenticatedAttributes_2(),
	SignerInfo_t1701070648::get_offset_of_unauthenticatedAttributes_3(),
	SignerInfo_t1701070648::get_offset_of_signature_4(),
	SignerInfo_t1701070648::get_offset_of_issuer_5(),
	SignerInfo_t1701070648::get_offset_of_serial_6(),
	SignerInfo_t1701070648::get_offset_of_ski_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (StrongName_t4093849377), -1, sizeof(StrongName_t4093849377_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1499[5] = 
{
	StrongName_t4093849377::get_offset_of_rsa_0(),
	StrongName_t4093849377::get_offset_of_publicKey_1(),
	StrongName_t4093849377::get_offset_of_keyToken_2(),
	StrongName_t4093849377::get_offset_of_tokenAlgorithm_3(),
	StrongName_t4093849377_StaticFields::get_offset_of_lockObject_4(),
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
