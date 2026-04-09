// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11998
// Entry Point: 00f11998
// Size: 788 bytes
// Signature: undefined FUN_00f11998(void)


undefined8 FUN_00f11998(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  tm local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type(param_1,1);
  if (iVar2 < 1) {
    lVar4 = time((time_t *)0x0);
  }
  else {
    luaL_checktype(param_1,1,6);
    lua_settop(param_1,1);
    lua_rawgetfield(param_1,-1,"sec");
    iVar2 = lua_isnumber(param_1,-1);
    if (iVar2 == 0) {
      local_70.tm_sec = 0;
    }
    else {
      local_70.tm_sec = lua_tointegerx(param_1,-1,(int *)0x0);
    }
    lua_settop(param_1,-2);
    lua_rawgetfield(param_1,-1,"min");
    iVar2 = lua_isnumber(param_1,-1);
    if (iVar2 == 0) {
      local_70.tm_min = 0;
    }
    else {
      local_70.tm_min = lua_tointegerx(param_1,-1,(int *)0x0);
    }
    lua_settop(param_1,-2);
    lua_rawgetfield(param_1,-1,"hour");
    iVar2 = lua_isnumber(param_1,-1);
    if (iVar2 == 0) {
      local_70.tm_hour = 0xc;
    }
    else {
      local_70.tm_hour = lua_tointegerx(param_1,-1,(int *)0x0);
    }
    lua_settop(param_1,-2);
    lua_rawgetfield(param_1,-1,"day");
    iVar2 = lua_isnumber(param_1,-1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"field \'%s\' missing in date table",&DAT_004f386b);
    }
    iVar2 = lua_tointegerx(param_1,-1,(int *)0x0);
    lua_settop(param_1,-2);
    local_70.tm_mday = iVar2;
    lua_rawgetfield(param_1,-1,"month");
    iVar2 = lua_isnumber(param_1,-1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"field \'%s\' missing in date table","month");
    }
    iVar2 = lua_tointegerx(param_1,-1,(int *)0x0);
    lua_settop(param_1,-2);
    local_70.tm_mon = iVar2 + -1;
    lua_rawgetfield(param_1,-1,"year");
    iVar2 = lua_isnumber(param_1,-1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"field \'%s\' missing in date table",&DAT_004df454);
    }
    iVar3 = -1;
    iVar2 = lua_tointegerx(param_1,-1,(int *)0x0);
    lua_settop(param_1,-2);
    local_70.tm_year = iVar2 + -0x76c;
    lua_rawgetfield(param_1,-1,"isdst");
    iVar2 = lua_type(param_1,-1);
    if (iVar2 != 0) {
      iVar3 = lua_toboolean(param_1,-1);
    }
    lua_settop(param_1,-2);
    local_70.tm_isdst = iVar3;
    lVar4 = timegm(&local_70);
  }
  if (lVar4 == -1) {
    lua_pushnil(param_1);
  }
  else {
    lua_pushnumber(param_1,(double)lVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


