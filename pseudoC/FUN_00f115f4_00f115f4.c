// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f115f4
// Entry Point: 00f115f4
// Size: 852 bytes
// Signature: undefined FUN_00f115f4(void)


undefined8 FUN_00f115f4(lua_State *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char *__s1;
  tm *__tp;
  long lVar4;
  size_t sVar5;
  char cVar6;
  double dVar7;
  tm tStack_388;
  long local_350;
  char local_344;
  char local_343;
  undefined local_342;
  char acStack_340 [200];
  char *local_278;
  char *pcStack_270;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __s1 = (char *)luaL_optlstring(param_1,1,"%c",(ulong *)0x0);
  iVar3 = lua_type(param_1,2);
  if (iVar3 < 1) {
    local_350 = time((time_t *)0x0);
    if (*__s1 != '!') goto LAB_00f116a0;
LAB_00f1166c:
    __tp = gmtime_r(&local_350,&tStack_388);
    __s1 = __s1 + 1;
joined_r0x00f11680:
    if (__tp != (tm *)0x0) {
      iVar3 = strcmp(__s1,"*t");
      if (iVar3 == 0) {
        lua_createtable(param_1,0,9);
        lua_pushinteger(param_1,__tp->tm_sec);
        lua_setfield(param_1,-2,"sec");
        lua_pushinteger(param_1,__tp->tm_min);
        lua_setfield(param_1,-2,"min");
        lua_pushinteger(param_1,__tp->tm_hour);
        lua_setfield(param_1,-2,"hour");
        lua_pushinteger(param_1,__tp->tm_mday);
        lua_setfield(param_1,-2,"day");
        lua_pushinteger(param_1,__tp->tm_mon + 1);
        lua_setfield(param_1,-2,"month");
        lua_pushinteger(param_1,__tp->tm_year + 0x76c);
        lua_setfield(param_1,-2,"year");
        lua_pushinteger(param_1,__tp->tm_wday + 1);
        lua_setfield(param_1,-2,"wday");
        lua_pushinteger(param_1,__tp->tm_yday + 1);
        lua_setfield(param_1,-2,"yday");
        if (-1 < __tp->tm_isdst) {
          lua_pushboolean(param_1,__tp->tm_isdst);
          lua_setfield(param_1,-2,"isdst");
        }
      }
      else {
        local_342 = 0;
        local_344 = '%';
        luaL_buffinit(param_1,(luaL_Buffer *)&local_278);
        cVar6 = *__s1;
        while( true ) {
          while (cVar6 == '%') {
            cVar1 = __s1[1];
            if (cVar1 == '\0') goto LAB_00f1177c;
            lVar4 = __strchr_chk("aAbBcdHIjmMpSUwWxXyYzZ%",cVar1,0x18);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              luaL_argerrorL(param_1,1,"invalid conversion specifier");
            }
            local_343 = __s1[1];
            sVar5 = strftime(acStack_340,200,&local_344,__tp);
            luaL_addlstring((luaL_Buffer *)&local_278,acStack_340,sVar5);
            __s1 = __s1 + 2;
            cVar6 = *__s1;
          }
          if (cVar6 == '\0') break;
LAB_00f1177c:
          if (pcStack_270 <= local_278) {
            luaL_extendbuffer((luaL_Buffer *)&local_278,1,-1);
            cVar6 = *__s1;
          }
          *local_278 = cVar6;
          __s1 = __s1 + 1;
          cVar6 = *__s1;
          local_278 = local_278 + 1;
        }
        luaL_pushresult((luaL_Buffer *)&local_278);
      }
      goto LAB_00f11900;
    }
  }
  else {
    dVar7 = (double)luaL_checknumber(param_1,2);
    local_350 = (long)dVar7;
    if (*__s1 == '!') goto LAB_00f1166c;
LAB_00f116a0:
    if (-1 < local_350) {
      __tp = localtime_r(&local_350,&tStack_388);
      goto joined_r0x00f11680;
    }
  }
  lua_pushnil(param_1);
LAB_00f11900:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


