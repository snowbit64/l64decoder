// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f14784
// Entry Point: 00f14784
// Size: 236 bytes
// Signature: undefined FUN_00f14784(void)


undefined8 FUN_00f14784(lua_State *param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int local_58;
  int iStack_54;
  char *local_50;
  lua_State *plStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (char *)luaL_checklstring(param_1,1,(ulong *)0x0);
  cVar1 = *local_50;
  iVar5 = 0;
  local_40 = 0x100000001;
  plStack_48 = param_1;
  while( true ) {
    if (cVar1 == '\0') {
      lua_pushinteger(param_1,iVar5);
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar3 = FUN_00f1618c(&plStack_48,(long)iVar5,&local_50,&iStack_54,&local_58);
    if ((uVar3 & 0xe) == 4) break;
    if (0x40000000 - (iStack_54 + local_58) < iVar5) {
      pcVar4 = "format result too large";
      goto LAB_00f14860;
    }
    iVar5 = iStack_54 + local_58 + iVar5;
    cVar1 = *local_50;
  }
  pcVar4 = "variable-length format";
LAB_00f14860:
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,pcVar4);
}


