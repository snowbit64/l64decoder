// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getmetatable
// Entry Point: 00f05194
// Size: 268 bytes
// Signature: undefined __cdecl lua_getmetatable(lua_State * param_1, int param_2)


/* lua_getmetatable(lua_State*, int) */

bool lua_getmetatable(lua_State *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00f068dc(param_1,param_2);
      iVar1 = *(int *)((long)plVar3 + 0xc);
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)plVar3 + 0xc);
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar3) {
      plVar3 = (long *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)plVar3 + 0xc);
  }
  if (iVar1 == 8) {
    lVar2 = *(long *)(*plVar3 + 8);
  }
  else if (iVar1 == 6) {
    lVar2 = *(long *)(*plVar3 + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0xaa0);
  }
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    *plVar3 = lVar2;
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)plVar3 + 0xc) = 6;
    *(long *)(param_1 + 8) = lVar4 + 0x10;
  }
  return lVar2 != 0;
}


