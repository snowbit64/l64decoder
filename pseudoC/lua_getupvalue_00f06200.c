// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getupvalue
// Entry Point: 00f06200
// Size: 372 bytes
// Signature: undefined __cdecl lua_getupvalue(lua_State * param_1, int param_2, int param_3)


/* lua_getupvalue(lua_State*, int, int) */

undefined * lua_getupvalue(lua_State *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar5 = (long *)FUN_00f068dc(param_1,param_2);
      iVar2 = *(int *)((long)plVar5 + 0xc);
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar2 = *(int *)((long)plVar5 + 0xc);
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar5) {
      plVar5 = (long *)&DAT_0056fdf8;
    }
    iVar2 = *(int *)((long)plVar5 + 0xc);
  }
  if (iVar2 != 7) {
    return (undefined *)0x0;
  }
  lVar4 = *plVar5;
  if (*(char *)(lVar4 + 3) == '\0') {
    if (param_3 < 1) {
      return (undefined *)0x0;
    }
    if (*(int *)(*(long *)(lVar4 + 0x18) + 0x6c) < param_3) {
      return (undefined *)0x0;
    }
    lVar1 = lVar4 + (ulong)(param_3 - 1) * 0x10;
    plVar5 = (long *)(lVar1 + 0x20);
    if (*(int *)(lVar1 + 0x2c) == 0xb) {
      plVar5 = *(long **)(*plVar5 + 8);
    }
    puVar3 = (undefined *)
             (*(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0x38) + (ulong)(param_3 - 1) * 8) + 0x18
             );
  }
  else {
    if (param_3 < 1) {
      return (undefined *)0x0;
    }
    if ((uint)*(byte *)(lVar4 + 4) < (uint)param_3) {
      return (undefined *)0x0;
    }
    plVar5 = (long *)(lVar4 + (ulong)(param_3 - 1) * 0x10 + 0x30);
    puVar3 = &DAT_0050a39f;
  }
  plVar6 = *(long **)(param_1 + 8);
  lVar4 = *plVar5;
  plVar6[1] = plVar5[1];
  *plVar6 = lVar4;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return puVar3;
}


