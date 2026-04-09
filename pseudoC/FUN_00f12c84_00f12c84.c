// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f12c84
// Entry Point: 00f12c84
// Size: 300 bytes
// Signature: undefined FUN_00f12c84(void)


int FUN_00f12c84(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = luaL_checklstring(param_1,1,(ulong *)&local_50);
  iVar5 = luaL_optinteger(param_1,2,1);
  uVar1 = (local_50 + 1 & iVar5 >> 0x1f) + iVar5;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  iVar5 = luaL_optinteger(param_1,3,uVar1);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar2 = (local_50 + 1 & iVar5 >> 0x1f) + iVar5;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if ((ulong)uVar2 <= CONCAT44(uStack_4c,local_50)) {
    local_50 = uVar2;
  }
  iVar5 = local_50 - uVar1;
  if ((int)local_50 < (int)uVar1) {
    iVar7 = 0;
  }
  else {
    if (local_50 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"string slice too long");
    }
    iVar7 = iVar5 + 1;
    luaL_checkstack(param_1,iVar7,"string slice too long");
    if (-1 < iVar5) {
      iVar8 = uVar1 - 1;
      lVar9 = -(ulong)(iVar5 + 1);
      do {
        lua_pushinteger(param_1,(uint)*(byte *)(lVar6 + iVar8));
        iVar8 = iVar8 + 1;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


