// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doBuffer
// Entry Point: 00bb7c00
// Size: 96 bytes
// Signature: undefined __thiscall doBuffer(LuauScriptSystem * this, uchar * param_1, uint param_2, char * param_3, char * param_4, bool param_5)


/* LuauScriptSystem::doBuffer(unsigned char const*, unsigned int, char const*, char const*, bool) */

void __thiscall
LuauScriptSystem::doBuffer
          (LuauScriptSystem *this,uchar *param_1,uint param_2,char *param_3,char *param_4,
          bool param_5)

{
  checkYieldState();
  doBuffer(this,*(lua_State **)(this + 8),param_1,param_2,param_3,param_4,param_5);
  return;
}


