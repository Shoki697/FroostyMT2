Special thanks to Mali: https://metin2.dev/topic/22115-compile-client-with-visual-studio-2022-src/

----------------------------------------------------------------------------------------------------------

You need to install C++ MFC for latest v143 build tools too when you install your visual studio.
If you did not install that then open Microsoft Visal Studio Installer and you can install retrospectively.

Check Install.png.

A possible dirty workaround if you don't want to install updates is to open
ClientVS22\source\UserInterface\UserInterface.rc and modify #include "afxres.h" to #include <Windows.h>
