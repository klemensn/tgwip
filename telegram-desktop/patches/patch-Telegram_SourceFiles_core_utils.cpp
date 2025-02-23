Index: Telegram/SourceFiles/core/utils.cpp
--- Telegram/SourceFiles/core/utils.cpp.orig
+++ Telegram/SourceFiles/core/utils.cpp
@@ -101,6 +101,7 @@ namespace ThirdParty {
 		if (!sslSupported) {
 			LOG(("Error: current Qt build doesn't support SSL requests."));
 		}
+#ifndef LIBRESSL_VERSION_NUMBER
 		if (!CRYPTO_get_locking_callback()) {
 			// Qt didn't initialize OpenSSL, so we will.
 			auto numLocks = CRYPTO_num_locks();
@@ -118,6 +119,7 @@ namespace ThirdParty {
 		} else if (!CRYPTO_get_dynlock_lock_callback()) {
 			LOG(("MTP Error: dynlock_create callback is set without dynlock_lock callback!"));
 		}
+#endif
 
 		_sslInited = true;
 	}
