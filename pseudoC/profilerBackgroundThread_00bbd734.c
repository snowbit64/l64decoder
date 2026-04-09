// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: profilerBackgroundThread
// Entry Point: 00bbd734
// Size: 244 bytes
// Signature: undefined __thiscall profilerBackgroundThread(LuaScriptProfiler * this, bool * param_1)


/* LuaScriptProfiler::profilerBackgroundThread(bool volatile&) */

void __thiscall LuaScriptProfiler::profilerBackgroundThread(LuaScriptProfiler *this,bool *param_1)

{
  LuaScriptProfiler LVar1;
  double dVar2;
  double dVar3;
  
  if (*param_1 == false) {
    do {
      Event::wait((Event *)(this + 0x70),0xffffffff);
      dVar2 = (double)lua_clock();
      LVar1 = this[1];
      while (LVar1 == (LuaScriptProfiler)0x0) {
        while( true ) {
          if (*param_1 != false) goto LAB_00bbd7a4;
          dVar3 = (double)lua_clock();
          if (dVar3 - dVar2 < 0.001) break;
          dVar3 = (dVar3 - dVar2) * 1000000.0;
          FUN_00f27730((long)dVar3,this + 0xe0);
          *(code **)(*(long *)(this + 0xe8) + 8) = LuauProfilerCallback::staticProfilerTrigger;
          dVar2 = (double)NEON_fmadd((double)(long)dVar3,0x3eb0c6f7a0b5ed8d,dVar2);
          if (this[1] != (LuaScriptProfiler)0x0) goto LAB_00bbd7a4;
        }
        ThreadUtil::usleep(0);
        LVar1 = this[1];
      }
LAB_00bbd7a4:
    } while (*param_1 == false);
  }
  return;
}


