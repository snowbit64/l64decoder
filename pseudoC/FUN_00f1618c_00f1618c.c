// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1618c
// Entry Point: 00f1618c
// Size: 280 bytes
// Signature: undefined FUN_00f1618c(void)


int FUN_00f1618c(lua_State **param_1,uint param_2,char **param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00f162a4(param_1,param_3,param_4);
  local_4c = *param_4;
  if ((iVar3 == 7) &&
     (((**param_3 == '\0' || (iVar4 = FUN_00f162a4(param_1,param_3,&local_4c), iVar4 == 3)) ||
      (local_4c == 0)))) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(*param_1,1,"invalid next option for option \'X\'");
  }
  uVar5 = 0;
  if ((iVar3 != 3) && (1 < (int)local_4c)) {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if ((int)local_4c <= (int)*(uint *)((long)param_1 + 0xc)) {
      uVar1 = local_4c;
    }
    uVar5 = uVar1 - 1;
    if ((uVar1 & uVar5) != 0) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(*param_1,1,"format asks for alignment not power of 2");
    }
    uVar5 = uVar1 - (uVar5 & param_2) & uVar5;
  }
  *param_5 = uVar5;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


