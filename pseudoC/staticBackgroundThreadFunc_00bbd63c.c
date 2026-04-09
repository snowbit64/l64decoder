// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticBackgroundThreadFunc
// Entry Point: 00bbd63c
// Size: 248 bytes
// Signature: undefined __cdecl staticBackgroundThreadFunc(void * param_1, bool * param_2)


/* LuaScriptProfiler::staticBackgroundThreadFunc(void*, bool volatile&) */

undefined8 LuaScriptProfiler::staticBackgroundThreadFunc(void *param_1,bool *param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  
  if (*param_2 == false) {
    do {
      Event::wait((Event *)((long)param_1 + 0x70),0xffffffff);
      dVar2 = (double)lua_clock();
      cVar1 = *(char *)((long)param_1 + 1);
      while (cVar1 == '\0') {
        while( true ) {
          if (*param_2 != false) goto LAB_00bbd6b0;
          dVar3 = (double)lua_clock();
          if (dVar3 - dVar2 < 0.001) break;
          dVar3 = (dVar3 - dVar2) * 1000000.0;
          FUN_00f27730((long)dVar3,(long)param_1 + 0xe0);
          *(code **)(*(long *)((long)param_1 + 0xe8) + 8) =
               LuauProfilerCallback::staticProfilerTrigger;
          dVar2 = (double)NEON_fmadd((double)(long)dVar3,0x3eb0c6f7a0b5ed8d,dVar2);
          if (*(char *)((long)param_1 + 1) != '\0') goto LAB_00bbd6b0;
        }
        ThreadUtil::usleep(0);
        cVar1 = *(char *)((long)param_1 + 1);
      }
LAB_00bbd6b0:
    } while (*param_2 == false);
  }
  return 0;
}


