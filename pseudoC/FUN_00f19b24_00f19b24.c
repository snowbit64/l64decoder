// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f19b24
// Entry Point: 00f19b24
// Size: 484 bytes
// Signature: undefined FUN_00f19b24(void)


undefined8 FUN_00f19b24(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  int local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = luaL_checklstring(param_1,1,(ulong *)&local_50);
  uVar3 = luaL_checkinteger(param_1,2);
  iVar4 = 1;
  if ((int)uVar3 < 0) {
    iVar4 = local_50 + 1;
  }
  uVar7 = luaL_optinteger(param_1,3,iVar4);
  iVar4 = (int)uVar7;
  if (iVar4 < 0) {
    if (CONCAT44(uStack_4c,local_50) < (ulong)-(long)iVar4) goto LAB_00f19ce0;
    uVar7 = (ulong)(iVar4 + local_50 + 1);
  }
  uVar5 = (uint)uVar7;
  uVar9 = uVar5 - 1;
  uVar8 = (ulong)uVar9;
  if (((int)uVar5 < 1) || (local_50 < (int)uVar9)) {
LAB_00f19ce0:
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"position out of range");
  }
  if (uVar3 == 0) {
    if (1 < uVar5) {
      do {
        uVar3 = (int)uVar7 - 1;
        uVar7 = (ulong)uVar3;
        if ((*(byte *)(lVar6 + uVar7) & 0xc0) != 0x80) goto LAB_00f19ca8;
      } while (1 < (int)uVar3);
    }
    uVar3 = 0;
LAB_00f19ca8:
    lua_pushinteger(param_1,uVar3 + 1);
  }
  else {
    if ((*(byte *)(lVar6 + uVar8) & 0xc0) == 0x80) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"initial position is a continuation byte");
    }
    if ((int)uVar3 < 0) {
      if (uVar9 != 0) {
        do {
          uVar8 = uVar8 & 0xffffffff;
          do {
            if (uVar8 < 2) {
              uVar8 = 0;
              uVar9 = uVar3 + 1;
              if (uVar3 != 0xfffffffe && (int)(uVar3 + 2) < 0 == SCARRY4(uVar3,2))
              goto LAB_00f19c94;
              goto LAB_00f19c8c;
            }
            uVar8 = uVar8 - 1;
          } while ((*(byte *)(lVar6 + (uVar8 & 0xffffffff)) & 0xc0) == 0x80);
          uVar9 = uVar3 + 1;
          if (uVar3 != 0xfffffffe && (int)(uVar3 + 2) < 0 == SCARRY4(uVar3,2)) break;
LAB_00f19c8c:
          uVar9 = uVar3 + 1;
          uVar3 = uVar9;
        } while ((int)uVar8 != 0);
        goto LAB_00f19c94;
      }
    }
    else {
      uVar9 = uVar3 - 1;
      if ((1 < uVar3) && ((int)uVar5 <= local_50)) {
        uVar3 = uVar9;
        do {
          pbVar10 = (byte *)(lVar6 + 1 + (long)(int)uVar8);
          do {
            bVar1 = *pbVar10;
            uVar5 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar5;
            pbVar10 = pbVar10 + 1;
          } while ((bVar1 & 0xc0) == 0x80);
          uVar9 = uVar3 - 1;
        } while ((1 < (int)uVar3) && (uVar3 = uVar9, (int)uVar5 < local_50));
      }
LAB_00f19c94:
      uVar3 = (uint)uVar8;
      if (uVar9 == 0) goto LAB_00f19ca8;
    }
    lua_pushnil(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


