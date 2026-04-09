// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1896c
// Entry Point: 00f1896c
// Size: 176 bytes
// Signature: undefined FUN_00f1896c(void)


undefined8 FUN_00f1896c(lua_State *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = lua_gettop(param_1);
  lua_createtable(param_1,uVar2,1);
  lVar6 = *(long *)(*(long *)(param_1 + 8) + -0x10);
  if (0 < (int)uVar2) {
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar5);
      puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x18) + lVar5);
      puVar1[1] = ((undefined8 *)(*(long *)(param_1 + 0x10) + lVar5))[1];
      *puVar1 = uVar3;
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar2 * 0x10 - lVar5 != 0);
  }
  uVar3 = FUN_00f128c0(param_1,&DAT_004f48f0,1);
  pdVar4 = (double *)FUN_00f179e8(param_1,lVar6,uVar3);
  *pdVar4 = (double)uVar2;
  *(undefined4 *)((long)pdVar4 + 0xc) = 3;
  return 1;
}


