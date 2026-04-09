// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f19d08
// Entry Point: 00f19d08
// Size: 512 bytes
// Signature: undefined FUN_00f19d08(void)


int FUN_00f19d08(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = luaL_checklstring(param_1,1,&local_50);
  iVar3 = luaL_optinteger(param_1,2,1);
  if (iVar3 < 0) {
    if (local_50 < (ulong)-(long)iVar3) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + (int)local_50 + 1;
    }
  }
  iVar4 = luaL_optinteger(param_1,3,iVar3);
  if (iVar4 < 0) {
    if (local_50 < (ulong)-(long)iVar4) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + (int)local_50 + 1;
    }
  }
  if (iVar3 < 1) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,2,"out of range");
  }
  if ((int)local_50 < iVar4) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"out of range");
  }
  if (iVar3 <= iVar4) {
    luaL_checkstack(param_1,(iVar4 - iVar3) + 1,"string slice too long");
    if ((long)(ulong)(iVar3 - 1) < (long)iVar4) {
      iVar10 = 0;
      pbVar11 = (byte *)(lVar5 + (ulong)(iVar3 - 1));
      do {
        uVar6 = (uint)*pbVar11;
        if ((char)*pbVar11 < '\0') {
          uVar8 = 0;
          uVar7 = 0;
          uVar9 = 0;
          while ((uVar6 >> 6 & 1) != 0) {
            lVar2 = uVar7 + 1;
            uVar7 = uVar7 + 1;
            uVar6 = uVar6 << 1;
            uVar8 = uVar8 + 5;
            uVar9 = pbVar11[lVar2] & 0x3f | uVar9 << 6;
            if ((pbVar11[lVar2] & 0xc0) != 0x80) goto LAB_00f19e9c;
          }
          if (((3 < (uint)uVar7) ||
              (uVar6 = (uVar6 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar9, 0x10 < uVar6 >> 0x10)) ||
             (uVar6 <= (uint)(&DAT_004c3270)[uVar7 & 0xffffffff])) {
LAB_00f19e9c:
                    /* WARNING: Subroutine does not return */
            luaL_errorL(param_1,"invalid UTF-8 code");
          }
          pbVar11 = pbVar11 + (uVar7 & 0xffffffff);
        }
        pbVar11 = pbVar11 + 1;
        lua_pushinteger(param_1,uVar6);
        iVar10 = iVar10 + 1;
      } while (pbVar11 < (byte *)(lVar5 + iVar4));
      goto LAB_00f19eb0;
    }
  }
  iVar10 = 0;
LAB_00f19eb0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}


