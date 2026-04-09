// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setmetatable
// Entry Point: 00f057a0
// Size: 272 bytes
// Signature: undefined __cdecl lua_setmetatable(lua_State * param_1, int param_2)


/* lua_setmetatable(lua_State*, int) */

undefined8 lua_setmetatable(lua_State *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00f068dc(param_1);
      plVar4 = *(long **)(param_1 + 8);
      iVar3 = *(int *)((long)plVar4 + -4);
      goto joined_r0x00f0584c;
    }
    plVar4 = *(long **)(param_1 + 8);
    plVar1 = plVar4 + (long)param_2 * 2;
    if (*(int *)((long)plVar4 + -4) != 0) goto LAB_00f057f8;
LAB_00f05850:
    lVar2 = 0;
    iVar3 = *(int *)((long)plVar1 + 0xc);
    if (iVar3 == 8) goto LAB_00f05860;
LAB_00f05808:
    if (iVar3 != 6) {
      *(long *)(*(long *)(param_1 + 0x18) + (long)iVar3 * 8 + 0xaa0) = lVar2;
      goto LAB_00f0588c;
    }
    if (*(char *)(*plVar1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00f09e04(param_1);
    }
    *(long *)(*plVar1 + 0x10) = lVar2;
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (plVar4 <= plVar1) {
      plVar1 = (long *)&DAT_0056fdf8;
    }
    iVar3 = *(int *)((long)plVar4 + -4);
joined_r0x00f0584c:
    if (iVar3 == 0) goto LAB_00f05850;
LAB_00f057f8:
    lVar2 = plVar4[-2];
    iVar3 = *(int *)((long)plVar1 + 0xc);
    if (iVar3 != 8) goto LAB_00f05808;
LAB_00f05860:
    *(long *)(*plVar1 + 8) = lVar2;
  }
  if (((lVar2 != 0) && ((*(byte *)(*plVar1 + 1) >> 2 & 1) != 0)) &&
     ((*(byte *)(lVar2 + 1) & 3) != 0)) {
    FUN_00f0c888(param_1);
  }
LAB_00f0588c:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return 1;
}


