// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bb6530
// Entry Point: 00bb6530
// Size: 168 bytes
// Signature: undefined FUN_00bb6530(void)


undefined8 FUN_00bb6530(lua_State *param_1)

{
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  
  __s1 = (char *)luaL_optlstring(param_1,1,"collect",(ulong *)0x0);
  iVar1 = strcmp(__s1,"collect");
  if (iVar1 == 0) {
    lua_gc(param_1,2,0);
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(__s1,"count");
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"collectgarbage must be called with \'count\' or \'collect\'");
    }
    iVar1 = lua_gc(param_1,3,0);
    lua_pushnumber(param_1,(double)iVar1);
    uVar2 = 1;
  }
  return uVar2;
}


