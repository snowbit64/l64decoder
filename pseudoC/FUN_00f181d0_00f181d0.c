// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f181d0
// Entry Point: 00f181d0
// Size: 380 bytes
// Signature: undefined FUN_00f181d0(void)


uint FUN_00f181d0(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  luaL_checktype(param_1,1,6);
  lVar9 = **(long **)(param_1 + 0x10);
  uVar4 = luaL_optinteger(param_1,2,1);
  iVar5 = lua_type(param_1,3);
  if (iVar5 < 1) {
    uVar6 = lua_objlen(param_1,1);
    uVar2 = uVar6 - uVar4;
  }
  else {
    uVar6 = luaL_checkinteger(param_1,3);
    uVar2 = uVar6 - uVar4;
  }
  if ((int)uVar6 < (int)uVar4) {
    return 0;
  }
  if (uVar2 < 0x7fffffff) {
    uVar1 = uVar2 + 1;
    iVar5 = lua_checkstack(param_1,uVar1);
    if (iVar5 != 0) {
      if ((uVar4 == 1) && ((int)uVar2 < *(int *)(lVar9 + 8))) {
        lVar7 = 0;
        do {
          puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x18) + lVar7);
          uVar10 = *puVar3;
          lVar8 = *(long *)(param_1 + 8);
          ((undefined8 *)(lVar8 + lVar7))[1] = puVar3[1];
          *(undefined8 *)(lVar8 + lVar7) = uVar10;
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar6 * 0x10 - lVar7 != 0);
        *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)uVar1 * 0x10;
        return uVar1;
      }
      if ((int)uVar4 < (int)uVar6) {
        do {
          lua_rawgeti(param_1,1,uVar4);
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      lua_rawgeti(param_1,1,uVar6);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"too many results to unpack");
}


