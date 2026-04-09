// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18b70
// Entry Point: 00f18b70
// Size: 168 bytes
// Signature: undefined FUN_00f18b70(void)


undefined8 FUN_00f18b70(lua_State *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = luaL_checkinteger(param_1,1);
  if (-1 < (int)uVar3) {
    iVar4 = lua_type(param_1,2);
    lua_createtable(param_1,uVar3,0);
    if ((0 < iVar4) && (uVar3 != 0)) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar5 = 0;
      lVar6 = *(long *)(*(long *)(param_1 + 8) + -0x10);
      do {
        uVar7 = *(undefined8 *)(lVar1 + 0x10);
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x18) + lVar5);
        puVar2[1] = *(undefined8 *)(lVar1 + 0x18);
        *puVar2 = uVar7;
        lVar5 = lVar5 + 0x10;
      } while ((ulong)uVar3 * 0x10 - lVar5 != 0);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,"size out of range");
}


