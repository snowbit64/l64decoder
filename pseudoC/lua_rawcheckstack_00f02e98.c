// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_rawcheckstack
// Entry Point: 00f02e98
// Size: 128 bytes
// Signature: undefined __cdecl lua_rawcheckstack(lua_State * param_1, int param_2)


/* lua_rawcheckstack(lua_State*, int) */

void lua_rawcheckstack(lua_State *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((long)(param_2 << 4) < *(long *)(param_1 + 0x28) - *(long *)(param_1 + 8)) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 8) + (long)param_2 * 0x10;
    if (*(ulong *)(lVar2 + 0x10) < uVar1) {
LAB_00f02f08:
      *(ulong *)(lVar2 + 0x10) = uVar1;
      return;
    }
  }
  else {
    FUN_00f0ab24(param_1,param_2);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 8) + (long)param_2 * 0x10;
    if (*(ulong *)(lVar2 + 0x10) < uVar1) goto LAB_00f02f08;
  }
  return;
}


