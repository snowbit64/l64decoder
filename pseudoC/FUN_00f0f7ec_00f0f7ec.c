// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f7ec
// Entry Point: 00f0f7ec
// Size: 468 bytes
// Signature: undefined FUN_00f0f7ec(void)


undefined8 FUN_00f0f7ec(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  double dVar11;
  
  lVar10 = *(long *)(param_1 + 0x18);
  iVar1 = lua_gettop(param_1);
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        uVar5 = *(ulong *)(lVar10 + 0xc10);
        uVar6 = uVar5 * 0x5851f42d4c957f2d + 0x69;
        uVar7 = (uint)(uVar6 >> 0x20);
        uVar3 = uVar7 >> 0xd ^ (uint)(uVar6 >> 0x1b);
        uVar7 = uVar7 >> 0x1b;
        uVar9 = (uint)(uVar5 >> 0x20);
        uVar8 = uVar9 >> 0xd ^ (uint)(uVar5 >> 0x1b);
        uVar9 = uVar9 >> 0x1b;
        *(ulong *)(lVar10 + 0xc10) = uVar6 * 0x5851f42d4c957f2d + 0x69;
        dVar11 = ldexp((double)(unkuint9)
                               CONCAT44(uVar3 >> uVar7 | uVar3 << 0x20 - uVar7,
                                        uVar8 >> uVar9 | uVar8 << 0x20 - uVar9),-0x40);
        lua_pushnumber(param_1,dVar11);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"wrong number of arguments");
    }
    uVar3 = luaL_checkinteger(param_1,1);
    if ((int)uVar3 < 1) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,1,"interval is empty");
    }
    uVar6 = *(ulong *)(lVar10 + 0xc10);
    uVar7 = (uint)(uVar6 >> 0x20);
    uVar8 = uVar7 >> 0xd ^ (uint)(uVar6 >> 0x1b);
    uVar7 = uVar7 >> 0x1b;
    iVar1 = (int)((ulong)(uVar8 >> uVar7 | uVar8 << 0x20 - uVar7) * (ulong)uVar3 >> 0x20) + 1;
    *(ulong *)(lVar10 + 0xc10) = uVar6 * 0x5851f42d4c957f2d + 0x69;
LAB_00f0f960:
    lua_pushinteger(param_1,iVar1);
    return 1;
  }
  iVar1 = luaL_checkinteger(param_1,1);
  iVar2 = luaL_checkinteger(param_1,2);
  if (iVar2 < iVar1) {
    pcVar4 = "interval is empty";
  }
  else {
    if (iVar2 - iVar1 != -1) {
      uVar6 = *(ulong *)(lVar10 + 0xc10);
      uVar8 = (uint)(uVar6 >> 0x20);
      uVar3 = uVar8 >> 0xd ^ (uint)(uVar6 >> 0x1b);
      uVar8 = uVar8 >> 0x1b;
      iVar1 = iVar1 + (int)((ulong)(uVar3 >> uVar8 | uVar3 << 0x20 - uVar8) *
                            (ulong)((iVar2 - iVar1) + 1) >> 0x20);
      *(ulong *)(lVar10 + 0xc10) = uVar6 * 0x5851f42d4c957f2d + 0x69;
      goto LAB_00f0f960;
    }
    pcVar4 = "interval is too large";
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,2,pcVar4);
}


