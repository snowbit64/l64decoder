// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_debugtrace
// Entry Point: 00f0a510
// Size: 616 bytes
// Signature: undefined __cdecl lua_debugtrace(lua_State * param_1)


/* lua_debugtrace(lua_State*) */

undefined1 * lua_debugtrace(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  int iVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  undefined auStack_1c0 [32];
  char *local_1a0 [2];
  long local_190;
  int local_184;
  undefined auStack_17d [269];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x40);
  iVar3 = lua_getinfo(param_1,0,"sln",(lua_Debug *)local_1a0);
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    iVar3 = 0;
    iVar1 = (int)((ulong)(lVar7 - lVar8) >> 3) * -0x33333333;
    lVar7 = 0;
    do {
      if (local_190 != 0) {
        sVar5 = __strlen_chk(auStack_17d,0x10d);
        sVar6 = 0xfff - lVar7;
        if (sVar5 + lVar7 < 0x1000) {
          sVar6 = sVar5;
        }
        memcpy(&DAT_0212384b + lVar7,auStack_17d,sVar6);
        lVar7 = sVar6 + lVar7;
      }
      if (0 < local_184) {
        FUN_00f0a778(auStack_1c0);
        sVar5 = __strlen_chk(auStack_1c0,0x20);
        sVar6 = 0xfff - lVar7;
        if (sVar5 + lVar7 < 0x1000) {
          sVar6 = sVar5;
        }
        memcpy(&DAT_0212384b + lVar7,auStack_1c0,sVar6);
        lVar7 = sVar6 + lVar7;
      }
      __s = local_1a0[0];
      if (local_1a0[0] != (char *)0x0) {
        sVar6 = 0xfff - lVar7;
        if (0xffffffffffffefff < lVar7 - 0xff6U) {
          sVar6 = 10;
        }
        memcpy(&DAT_0212384b + lVar7," function ",sVar6);
        lVar7 = sVar6 + lVar7;
        sVar5 = strlen(__s);
        sVar6 = 0xfff - lVar7;
        if (sVar5 + lVar7 < 0x1000) {
          sVar6 = sVar5;
        }
        memcpy(&DAT_0212384b + lVar7,__s,sVar6);
        lVar7 = sVar6 + lVar7;
      }
      sVar6 = 0xfff - lVar7;
      if (0xffffffffffffefff < lVar7 - 0xfffU) {
        sVar6 = 1;
      }
      memcpy(&DAT_0212384b + lVar7,&DAT_004fddf9,sVar6);
      lVar7 = sVar6 + lVar7;
      if ((0x14 < iVar1) && (iVar3 == 9)) {
        FUN_00f0a778(auStack_1c0);
        sVar5 = __strlen_chk(auStack_1c0,0x20);
        sVar6 = 0xfff - lVar7;
        if (sVar5 + lVar7 < 0x1000) {
          sVar6 = sVar5;
        }
        memcpy(&DAT_0212384b + lVar7,auStack_1c0,sVar6);
        lVar7 = sVar6 + lVar7;
        iVar3 = iVar1 + -0xb;
      }
      iVar3 = iVar3 + 1;
      iVar4 = lua_getinfo(param_1,iVar3,"sln",(lua_Debug *)local_1a0);
    } while (iVar4 != 0);
  }
  (&DAT_0212384b)[lVar7] = 0;
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return &DAT_0212384b;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


