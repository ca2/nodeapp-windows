#include "framework.h"


extern "C" int32_t APIENTRY
DllMain(HINSTANCE hInstance, uint32_t dwReason, LPVOID lpReserved)
{


   UNREFERENCED_PARAMETER(hInstance);
   UNREFERENCED_PARAMETER(lpReserved);


   if (dwReason == DLL_PROCESS_ATTACH)
   {


      ::OutputDebugString("::ca2:: backup.dll :: initializing!\n");
      

   }
   else if (dwReason == DLL_PROCESS_DETACH)
   {


      ::OutputDebugString("::ca2:: backup.dll :: terminating!\n");


   }


   return 1;   // ok


}


