//Find
#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	0);
#endif

///Add
#if defined(__BL__DETAILS_UI__)
	PyModule_AddIntConstant(poModule, "ENABLE_DETAILS_UI", true);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_DETAILS_UI", false);
#endif