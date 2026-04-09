// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pcall
// Entry Point: 00f05a14
// Size: 256 bytes
// Signature: undefined __cdecl lua_pcall(lua_State * param_1, int param_2, int param_3, int param_4)


/* lua_pcall(lua_State*, int, int, int) */

void lua_pcall(lua_State *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar3 = 0;
  }
  else {
    if (param_4 < 1) {
      if ((uint)param_4 < 0xffffd8f1) {
        puVar2 = (undefined *)FUN_00f068dc(param_1,param_4);
      }
      else {
        puVar2 = (undefined *)(*(long *)(param_1 + 8) + (long)param_4 * 0x10);
      }
    }
    else {
      puVar2 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_4 - 1) * 0x10);
      if (*(undefined **)(param_1 + 8) <= puVar2) {
        puVar2 = &DAT_0056fdf8;
      }
    }
    lVar4 = *(long *)(param_1 + 0x30);
    lVar3 = (long)puVar2 - lVar4;
  }
  local_48 = *(long *)(param_1 + 8) + (long)~param_2 * 0x10;
  local_40 = param_3;
  FUN_00f0b5c8(param_1,FUN_00f05b14,&local_48,local_48 - lVar4,lVar3);
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) <= *(ulong *)(param_1 + 8)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


