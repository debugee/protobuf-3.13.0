#pragma once


#ifdef _DEBUG
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smdd_libprotobufd.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smdd_libprotobufd.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smtd_libprotobufd.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smtd_libprotobufd.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smd_libprotobuf.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smd_libprotobuf.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smt_libprotobuf.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smt_libprotobuf.lib")
		#endif
	#endif
#endif