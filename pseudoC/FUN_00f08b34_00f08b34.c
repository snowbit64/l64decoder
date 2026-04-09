// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08b34
// Entry Point: 00f08b34
// Size: 284 bytes
// Signature: undefined FUN_00f08b34(void)


undefined8 FUN_00f08b34(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  int __base;
  byte *__nptr;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  double dVar6;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __base = luaL_optinteger(param_1,2,10);
  if (__base == 10) {
    local_40._0_4_ = 0;
    dVar6 = (double)lua_tonumberx(param_1,1,(int *)&local_40);
    if ((int)local_40 != 0) {
LAB_00f08c20:
      lua_pushnumber(param_1,dVar6);
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return 1;
      }
      goto LAB_00f08c38;
    }
    luaL_checkany(param_1,1);
  }
  else {
    __nptr = (byte *)luaL_checklstring(param_1,1,(ulong *)0x0);
    if (0x22 < __base - 2U) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,2,"base out of range");
    }
    uVar3 = strtoull((char *)__nptr,(char **)&local_40,__base);
    pbVar4 = (byte *)CONCAT44(local_40._4_4_,(int)local_40);
    if (__nptr != (byte *)CONCAT44(local_40._4_4_,(int)local_40)) {
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)bVar1;
        pbVar4 = pbVar4 + 1;
      } while ((uVar5 == 0x20 || 0xfffffff9 < uVar5 - 0xe) &&
               (uVar5 == 0x20 || uVar5 - 0xe != 0xfffffffa));
      if (bVar1 == 0) {
        dVar6 = (double)(unkuint9)uVar3;
        goto LAB_00f08c20;
      }
    }
  }
  lua_pushnil(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
LAB_00f08c38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


