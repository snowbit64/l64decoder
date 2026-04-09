// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setfenv
// Entry Point: 00f058b0
// Size: 264 bytes
// Signature: undefined __cdecl lua_setfenv(lua_State * param_1, int param_2)


/* lua_setfenv(lua_State*, int) */

undefined8 lua_setfenv(lua_State *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00f068dc(param_1);
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
  if (iVar1 == 9) {
    lVar4 = *(long *)(param_1 + 8);
    *(undefined8 *)(*plVar3 + 0x58) = *(undefined8 *)(lVar4 + -0x10);
    bVar2 = *(byte *)(*plVar3 + 1);
  }
  else {
    if (iVar1 != 7) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
      return 0;
    }
    lVar4 = *(long *)(param_1 + 8);
    *(undefined8 *)(*plVar3 + 0x10) = *(undefined8 *)(lVar4 + -0x10);
    bVar2 = *(byte *)(*plVar3 + 1);
  }
  if (((bVar2 >> 2 & 1) != 0) && ((*(byte *)(*(long *)(lVar4 + -0x10) + 1) & 3) != 0)) {
    FUN_00f0c888(param_1);
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return 1;
}


