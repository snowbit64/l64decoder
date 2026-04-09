// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getfenv
// Entry Point: 00f052a0
// Size: 232 bytes
// Signature: undefined __cdecl lua_getfenv(lua_State * param_1, int param_2)


/* lua_getfenv(lua_State*, int) */

void lua_getfenv(lua_State *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00f068dc(param_1,param_2);
      iVar2 = *(int *)((long)plVar1 + 0xc);
      goto joined_r0x00f05354;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    iVar2 = *(int *)((long)plVar1 + 0xc);
    if (iVar2 != 9) goto LAB_00f0531c;
LAB_00f05358:
    puVar3 = *(undefined8 **)(param_1 + 8);
    uVar5 = *(undefined8 *)(*plVar1 + 0x58);
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = (long *)&DAT_0056fdf8;
    }
    iVar2 = *(int *)((long)plVar1 + 0xc);
joined_r0x00f05354:
    if (iVar2 == 9) goto LAB_00f05358;
LAB_00f0531c:
    if (iVar2 != 7) {
      uVar4 = 0;
      puVar3 = *(undefined8 **)(param_1 + 8);
      goto LAB_00f0536c;
    }
    puVar3 = *(undefined8 **)(param_1 + 8);
    uVar5 = *(undefined8 *)(*plVar1 + 0x10);
  }
  uVar4 = 6;
  *puVar3 = uVar5;
LAB_00f0536c:
  lVar6 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar3 + 0xc) = uVar4;
  *(long *)(param_1 + 8) = lVar6 + 0x10;
  return;
}


