// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_tonumberx
// Entry Point: 00f03bc0
// Size: 212 bytes
// Signature: undefined __cdecl lua_tonumberx(lua_State * param_1, int param_2, int * param_3)


/* lua_tonumberx(lua_State*, int, int*) */

void lua_tonumberx(lua_State *param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined auStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar3 = (undefined8 *)FUN_00f068dc();
      iVar1 = *(int *)((long)puVar3 + 0xc);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)puVar3 + 0xc);
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar3) {
      puVar3 = (undefined8 *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)puVar3 + 0xc);
  }
  if ((iVar1 == 3) ||
     (puVar3 = (undefined8 *)FUN_00f25c40(puVar3,auStack_38), puVar3 != (undefined8 *)0x0)) {
    if (param_3 != (int *)0x0) {
      *param_3 = 1;
    }
    uVar4 = *puVar3;
  }
  else {
    uVar4 = 0;
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


