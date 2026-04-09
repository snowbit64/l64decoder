// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushfstringL
// Entry Point: 00f04950
// Size: 236 bytes
// Signature: undefined __cdecl lua_pushfstringL(lua_State * param_1, char * param_2, ...)


/* lua_pushfstringL(lua_State*, char const*, ...) */

void lua_pushfstringL(lua_State *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  local_c0 = in_x2;
  local_b8 = in_x3;
  uStack_b0 = in_x4;
  local_a8 = in_x5;
  uStack_a0 = in_x6;
  local_98 = in_x7;
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_00f0bdd8(param_1,1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  puStack_80 = &local_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd0;
  local_90 = (undefined *)register0x00000008;
  FUN_00f1127c(param_1,param_2,&local_90);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


