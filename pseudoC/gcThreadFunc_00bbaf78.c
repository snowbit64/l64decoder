// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gcThreadFunc
// Entry Point: 00bbaf78
// Size: 120 bytes
// Signature: undefined __thiscall gcThreadFunc(LuauScriptSystem * this, bool * param_1)


/* LuauScriptSystem::gcThreadFunc(bool volatile&) */

undefined8 __thiscall LuauScriptSystem::gcThreadFunc(LuauScriptSystem *this,bool *param_1)

{
  if (*param_1 == false) {
    do {
      Event::wait((Event *)(this + 0x58),0xffffffff);
      if (*param_1 == false) {
        lua_gc(*(lua_State **)(this + 8),6,0xfa);
      }
      Event::post();
    } while (*param_1 == false);
  }
  return 0;
}


