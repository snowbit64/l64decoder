// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setupvalue
// Entry Point: 00f06374
// Size: 384 bytes
// Signature: undefined __cdecl lua_setupvalue(lua_State * param_1, int param_2, int param_3)


/* lua_setupvalue(lua_State*, int, int) */

undefined * lua_setupvalue(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00f068dc(param_1);
      iVar1 = *(int *)((long)plVar2 + 0xc);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)plVar2 + 0xc);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = (long *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)plVar2 + 0xc);
  }
  if (iVar1 == 7) {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 3) == '\0') {
      if (param_3 < 1) {
        return (undefined *)0x0;
      }
      if (*(int *)(*(long *)(lVar3 + 0x18) + 0x6c) < param_3) {
        return (undefined *)0x0;
      }
      lVar6 = lVar3 + (ulong)(param_3 - 1) * 0x10;
      plVar4 = (long *)(lVar6 + 0x20);
      if (*(int *)(lVar6 + 0x2c) == 0xb) {
        plVar4 = *(long **)(*plVar4 + 8);
      }
      puVar5 = (undefined *)
               (*(long *)(*(long *)(*(long *)(lVar3 + 0x18) + 0x38) + (ulong)(param_3 - 1) * 8) +
               0x18);
    }
    else {
      if (param_3 < 1) {
        return (undefined *)0x0;
      }
      if ((uint)*(byte *)(lVar3 + 4) < (uint)param_3) {
        return (undefined *)0x0;
      }
      plVar4 = (long *)(lVar3 + (ulong)(param_3 - 1) * 0x10 + 0x30);
      puVar5 = &DAT_0050a39f;
    }
    lVar3 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar3 + -0x10;
    lVar6 = *(long *)(lVar3 + -0x10);
    plVar4[1] = *(long *)(lVar3 + -8);
    *plVar4 = lVar6;
    if (((4 < *(int *)((long)*(long **)(param_1 + 8) + 0xc)) &&
        ((*(byte *)(*plVar2 + 1) >> 2 & 1) != 0)) &&
       ((*(byte *)(**(long **)(param_1 + 8) + 1) & 3) != 0)) {
      FUN_00f0c888(param_1);
      return puVar5;
    }
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}


