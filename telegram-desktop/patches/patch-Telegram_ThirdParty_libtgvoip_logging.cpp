Index: Telegram/ThirdParty/libtgvoip/logging.cpp
--- Telegram/ThirdParty/libtgvoip/logging.cpp.orig
+++ Telegram/ThirdParty/libtgvoip/logging.cpp
@@ -13,7 +13,7 @@
 
 #ifdef __ANDROID__
 #include <sys/system_properties.h>
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
 #include <sys/utsname.h>
 #endif
 
@@ -51,7 +51,7 @@ void tgvoip_log_file_write_header(FILE* file){
 #else
 			char* systemVersion="Windows RT";
 #endif
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
 #ifdef __ANDROID__
 		char systemVersion[128];
 		char sysRel[PROP_VALUE_MAX];
