// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0dd9c
// Entry Point: 00f0dd9c
// Size: 96 bytes
// Signature: undefined FUN_00f0dd9c(void)


undefined8 FUN_00f0dd9c(lua_State *param_1)

{
  int iVar1;
  lua_State *plVar2;
  
  plVar2 = (lua_State *)lua_tothread(param_1,1);
  if (plVar2 != (lua_State *)0x0) {
    iVar1 = lua_costatus(param_1,plVar2);
    lua_pushstring(param_1,(&PTR_s_running_01017180)[iVar1]);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,1,"thread");
}


