// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gcThreadFunc
// Entry Point: 00bb65d8
// Size: 120 bytes
// Signature: undefined __cdecl gcThreadFunc(void * param_1, bool * param_2)


/* LuauScriptSystem::gcThreadFunc(void*, bool volatile&) */

undefined8 LuauScriptSystem::gcThreadFunc(void *param_1,bool *param_2)

{
  if (*param_2 == false) {
    do {
      Event::wait((Event *)((long)param_1 + 0x58),0xffffffff);
      if (*param_2 == false) {
        lua_gc(*(lua_State **)((long)param_1 + 8),6,0xfa);
      }
      Event::post();
    } while (*param_2 == false);
  }
  return 0;
}


