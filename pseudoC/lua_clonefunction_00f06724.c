// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_clonefunction
// Entry Point: 00f06724
// Size: 268 bytes
// Signature: undefined __cdecl lua_clonefunction(lua_State * param_1, int param_2)


/* lua_clonefunction(lua_State*, int) */

void lua_clonefunction(lua_State *param_1,int param_2)

{
  lua_State lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x48) < *(ulong *)(*(long *)(param_1 + 0x18) + 0x40)) {
    lVar1 = param_1[1];
  }
  else {
    FUN_00f0bdd8(param_1,1);
    lVar1 = param_1[1];
  }
  if (((byte)lVar1 >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar4 = (long *)FUN_00f068dc(param_1,param_2);
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar4) {
      plVar4 = (long *)&DAT_0056fdf8;
    }
  }
  lVar7 = *plVar4;
  lVar2 = FUN_00f0b980(param_1,*(undefined *)(lVar7 + 4),*(undefined8 *)(param_1 + 0x58),
                       *(undefined8 *)(lVar7 + 0x18));
  if (*(char *)(lVar7 + 4) != '\0') {
    uVar3 = 0;
    puVar5 = (undefined8 *)(lVar2 + 0x20);
    puVar6 = (undefined8 *)(lVar7 + 0x20);
    do {
      uVar8 = *puVar6;
      uVar3 = uVar3 + 1;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar8;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (uVar3 < *(byte *)(lVar7 + 4));
  }
  plVar4 = *(long **)(param_1 + 8);
  *plVar4 = lVar2;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar4 + 0xc) = 7;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


