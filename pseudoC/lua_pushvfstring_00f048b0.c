// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushvfstring
// Entry Point: 00f048b0
// Size: 160 bytes
// Signature: undefined __cdecl lua_pushvfstring(lua_State * param_1, char * param_2, __va_list param_3)


/* lua_pushvfstring(lua_State*, char const*, std::__va_list) */

void lua_pushvfstring(lua_State *param_1,char *param_2,__va_list param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar2 = (undefined8 *)(ulong)param_3;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_00f0bdd8(param_1,1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  uStack_48 = puVar2[3];
  uStack_50 = puVar2[2];
  FUN_00f1127c(param_1,param_2,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


