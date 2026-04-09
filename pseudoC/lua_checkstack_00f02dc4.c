// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_checkstack
// Entry Point: 00f02dc4
// Size: 212 bytes
// Signature: undefined __cdecl lua_checkstack(lua_State * param_1, int param_2)


/* lua_checkstack(lua_State*, int) */

undefined8 lua_checkstack(lua_State *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < 0x1f41) {
    lVar1 = *(long *)(param_1 + 8);
    lVar5 = (long)param_2;
    if (8000 < lVar5 + (lVar1 - *(long *)(param_1 + 0x10) >> 4)) {
      return 0;
    }
    if (param_2 < 1) {
      return 1;
    }
    if ((long)(ulong)(uint)(param_2 << 4) < *(long *)(param_1 + 0x28) - lVar1) {
      lVar4 = *(long *)(param_1 + 0x20);
      uVar3 = lVar1 + lVar5 * 0x10;
      uVar2 = 1;
      if (*(ulong *)(lVar4 + 0x10) < uVar3) {
LAB_00f02e88:
        *(ulong *)(lVar4 + 0x10) = uVar3;
        return 1;
      }
    }
    else {
      FUN_00f0ab24(param_1);
      lVar4 = *(long *)(param_1 + 0x20);
      uVar3 = *(long *)(param_1 + 8) + lVar5 * 0x10;
      uVar2 = 1;
      if (*(ulong *)(lVar4 + 0x10) < uVar3) goto LAB_00f02e88;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


