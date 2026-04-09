// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f19f08
// Entry Point: 00f19f08
// Size: 520 bytes
// Signature: undefined FUN_00f19f08(void)


undefined8 FUN_00f19f08(lua_State *param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  luaL_Buffer alStack_290 [544];
  undefined auStack_70 [7];
  byte local_69;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar4 = lua_gettop(param_1);
  if (iVar4 == 1) {
    uVar5 = luaL_checkinteger(param_1,1);
    if (0x10ffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,1,"value out of range");
    }
    uVar7 = (ulong)uVar5;
    if (uVar5 < 0x80) {
      uVar6 = 1;
      lVar9 = 7;
    }
    else {
      uVar10 = 0x3f;
      lVar9 = 0x700000000;
      lVar11 = 0x100000000;
      pbVar12 = &local_69;
      do {
        uVar10 = uVar10 >> 1;
        bVar2 = (byte)uVar7;
        uVar7 = uVar7 >> 6;
        lVar9 = lVar9 + -0x100000000;
        lVar11 = lVar11 + 0x100000000;
        *pbVar12 = bVar2 & 0x3f | 0x80;
        pbVar12 = pbVar12 + -1;
      } while (uVar10 < uVar7);
      lVar9 = lVar9 >> 0x20;
      uVar6 = lVar11 >> 0x20;
      uVar5 = (uint)uVar7 | ~(uint)uVar10 << 1;
    }
    auStack_70[lVar9] = (char)uVar5;
    lua_pushlstring(param_1,(char *)((long)&local_68 - uVar6),uVar6);
  }
  else {
    luaL_buffinit(param_1,alStack_290);
    if (0 < iVar4) {
      iVar13 = 1;
      do {
        uVar5 = luaL_checkinteger(param_1,iVar13);
        if (0x10ffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          luaL_argerrorL(param_1,iVar13,"value out of range");
        }
        uVar7 = (ulong)uVar5;
        if (uVar5 < 0x80) {
          lVar9 = 7;
          iVar8 = 1;
        }
        else {
          lVar11 = 0;
          uVar10 = 0x3f;
          lVar9 = 0x700000000;
          do {
            uVar10 = uVar10 >> 1;
            bVar2 = (byte)uVar7;
            uVar7 = uVar7 >> 6;
            lVar9 = lVar9 + -0x100000000;
            (&local_69)[lVar11] = bVar2 & 0x3f | 0x80;
            lVar11 = lVar11 + -1;
          } while (uVar10 < uVar7);
          lVar9 = lVar9 >> 0x20;
          iVar8 = 1 - (int)lVar11;
          uVar5 = (uint)uVar7 | ~(uint)uVar10 << 1;
        }
        auStack_70[lVar9] = (char)uVar5;
        luaL_addlstring(alStack_290,(char *)((long)&local_68 - (long)iVar8),(long)iVar8);
        bVar3 = iVar13 != iVar4;
        iVar13 = iVar13 + 1;
      } while (bVar3);
    }
    luaL_pushresult(alStack_290);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


