// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1a3ac
// Entry Point: 00f1a3ac
// Size: 384 bytes
// Signature: undefined FUN_00f1a3ac(void)


void FUN_00f1a3ac(lua_State *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = luaL_checklstring(param_1,1,(ulong *)&local_40);
  uVar4 = lua_tointegerx(param_1,2,(int *)0x0);
  if ((int)uVar4 < 1) {
    iVar7 = 0;
    if (local_40 < 1) goto LAB_00f1a498;
  }
  else {
    iVar7 = uVar4 - 1;
    if ((int)uVar4 <= local_40) {
      pbVar8 = (byte *)(lVar5 + (ulong)uVar4);
      do {
        bVar2 = *pbVar8;
        iVar7 = iVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while ((bVar2 & 0xc0) == 0x80);
    }
    if (local_40 <= iVar7) {
LAB_00f1a498:
      uVar6 = 0;
      goto LAB_00f1a504;
    }
  }
  pbVar8 = (byte *)(lVar5 + iVar7);
  uVar4 = (uint)*pbVar8;
  if ((char)*pbVar8 < '\0') {
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = 0;
    do {
      if ((uVar4 >> 6 & 1) == 0) {
        if ((((uint)uVar9 < 4) &&
            (uVar4 = (uVar4 & 0x7f) << (ulong)(uVar10 & 0x1f) | uVar11, uVar4 >> 0x10 < 0x11)) &&
           ((uint)(&DAT_004c3270)[uVar9 & 0xffffffff] < uVar4)) {
          pbVar8 = pbVar8 + (uVar9 & 0xffffffff);
          goto LAB_00f1a4d8;
        }
        break;
      }
      pbVar1 = (byte *)(iVar7 + lVar5 + 1 + uVar9);
      uVar9 = uVar9 + 1;
      uVar4 = uVar4 << 1;
      uVar10 = uVar10 + 5;
      uVar12 = (uint)*pbVar1;
      uVar11 = uVar12 & 0x3f | uVar11 << 6;
    } while ((uVar12 & 0xc0) == 0x80);
  }
  else {
LAB_00f1a4d8:
    if ((pbVar8[1] & 0xc0) != 0x80) {
      lua_pushinteger(param_1,iVar7 + 1);
      lua_pushinteger(param_1,uVar4);
      uVar6 = 2;
LAB_00f1a504:
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"invalid UTF-8 code");
}


