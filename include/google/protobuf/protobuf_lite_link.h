#ifndef GOOGLE_INCLUDE_GOOGLE_PROTOBUF_LITE_LINK_H_
#define GOOGLE_INCLUDE_GOOGLE_PROTOBUF_LITE_LINK_H_


#ifdef _DEBUG
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smdd_libprotobuf-lited.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smdd_libprotobuf-lited.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smtd_libprotobuf-lited.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smtd_libprotobuf-lited.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smd_libprotobuf-lite.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smd_libprotobuf-lite.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smt_libprotobuf-lite.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smt_libprotobuf-lite.lib")
		#endif
	#endif
#endif


#endif  // GOOGLE_INCLUDE_GOOGLE_PROTOBUF_LITE_LINK_H_
