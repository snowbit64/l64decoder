// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getfield
// Entry Point: 00f04c98
// Size: 256 bytes
// Signature: undefined __cdecl lua_getfield(lua_State * param_1, int param_2, char * param_3)


/* lua_getfield(lua_State*, int, char const*) */

void lua_getfield(lua_State *param_1,int param_2,char *param_3)

{
  long lVar1;
  undefined *puVar2;
  size_t sVar3;
  long lVar4;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined *)FUN_00f068dc(param_1,param_2);
    }
    else {
      puVar2 = (undefined *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_0056fdf8;
    }
  }
  sVar3 = strlen(param_3);
  local_48 = FUN_00f128c0(param_1,param_3,sVar3);
  local_3c = 5;
  FUN_00f25d84(param_1,puVar2,&local_48,*(undefined8 *)(param_1 + 8));
  lVar4 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar4 + 0x10;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)(lVar4 + 0xc));
  }
  return;
}


