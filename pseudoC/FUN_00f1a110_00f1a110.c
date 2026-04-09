// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1a110
// Entry Point: 00f1a110
// Size: 572 bytes
// Signature: undefined FUN_00f1a110(void)


undefined8 FUN_00f1a110(lua_State *param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = luaL_checklstring(param_1,1,&local_40);
  iVar3 = luaL_optinteger(param_1,2,1);
  if (iVar3 < 0) {
    if (local_40 < (ulong)-(long)iVar3) {
      iVar3 = 0;
      iVar4 = luaL_optinteger(param_1,3,-1);
    }
    else {
      iVar3 = iVar3 + (int)local_40 + 1;
      iVar4 = luaL_optinteger(param_1,3,-1);
    }
  }
  else {
    iVar4 = luaL_optinteger(param_1,3,-1);
  }
  iVar6 = (int)local_40;
  if (iVar4 < 0) {
    if (local_40 < (ulong)-(long)iVar4) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + iVar6 + 1;
    }
  }
  if ((iVar3 < 1) || (iVar7 = iVar3 + -1, iVar6 < iVar7)) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,2,"initial position out of string");
  }
  if (iVar6 < iVar4) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"final position out of string");
  }
  if (iVar4 < iVar3) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      pbVar8 = (byte *)(lVar5 + iVar7);
      if ((char)*pbVar8 < '\0') {
        uVar10 = 0;
        uVar9 = 0;
        uVar12 = 0;
        uVar11 = (uint)*pbVar8;
        while ((uVar11 >> 6 & 1) != 0) {
          pbVar1 = (byte *)(lVar5 + 1 + (long)iVar7 + uVar9);
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 << 1;
          uVar10 = uVar10 + 5;
          uVar13 = (uint)*pbVar1;
          uVar12 = uVar13 & 0x3f | uVar12 << 6;
          if ((uVar13 & 0xc0) != 0x80) goto LAB_00f1a274;
        }
        if (((3 < (uint)uVar9) ||
            (uVar12 = (uVar11 & 0x7f) << (ulong)(uVar10 & 0x1f) | uVar12, 0x10 < uVar12 >> 0x10)) ||
           (uVar12 <= (uint)(&DAT_004c3270)[uVar9 & 0xffffffff])) {
LAB_00f1a274:
          lua_pushnil(param_1);
          lua_pushinteger(param_1,iVar7 + 1);
          if (*(long *)(lVar2 + 0x28) == local_38) {
            return 2;
          }
          goto LAB_00f1a29c;
        }
        pbVar8 = pbVar8 + (uVar9 & 0xffffffff);
      }
      iVar3 = iVar3 + 1;
      iVar7 = ((int)pbVar8 - (int)lVar5) + 1;
    } while (iVar7 < iVar4);
  }
  lua_pushinteger(param_1,iVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
LAB_00f1a29c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


