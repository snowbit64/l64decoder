// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_rawseti
// Entry Point: 00f056c4
// Size: 220 bytes
// Signature: undefined __cdecl lua_rawseti(lua_State * param_1, int param_2, int param_3)


/* lua_rawseti(lua_State*, int, int) */

void lua_rawseti(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00f068dc(param_1,param_2,param_3);
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = (long *)&DAT_0056fdf8;
    }
  }
  if (*(char *)(*plVar1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00f09e04(param_1);
  }
  lVar3 = *(long *)(param_1 + 8);
  puVar2 = (undefined8 *)FUN_00f178d4(param_1,*plVar1,param_3);
  uVar4 = *(undefined8 *)(lVar3 + -0x10);
  puVar2[1] = *(undefined8 *)(lVar3 + -8);
  *puVar2 = uVar4;
  lVar3 = *(long *)(param_1 + 8);
  if (((4 < *(int *)(lVar3 + -4)) && ((*(byte *)(*plVar1 + 1) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar3 + -0x10) + 1) & 3) != 0)) {
    FUN_00f0c9ec(param_1);
    lVar3 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 8) = lVar3 + -0x10;
  return;
}


