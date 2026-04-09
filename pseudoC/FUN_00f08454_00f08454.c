// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08454
// Entry Point: 00f08454
// Size: 100 bytes
// Signature: undefined FUN_00f08454(void)


void FUN_00f08454(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_toboolean(param_1,1);
  if (iVar1 != 0) {
    lua_gettop(param_1);
    return;
  }
  uVar2 = luaL_optlstring(param_1,2,"assertion failed!",(ulong *)0x0);
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"%s",uVar2);
}


