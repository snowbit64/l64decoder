// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f06fc0
// Entry Point: 00f06fc0
// Size: 44 bytes
// Signature: noreturn undefined FUN_00f06fc0(void)


void FUN_00f06fc0(lua_State *param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)lua_typename(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,param_2,pcVar1);
}


