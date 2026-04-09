// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f15e08
// Entry Point: 00f15e08
// Size: 148 bytes
// Signature: undefined FUN_00f15e08(void)


void FUN_00f15e08(long param_1,int param_2,char *param_3,long param_4)

{
  long lVar1;
  char **ppcVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) <= param_2) {
    if (param_2 == 0) {
      lua_pushlstring(*(lua_State **)(param_1 + 0x20),param_3,param_4 - (long)param_3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(*(lua_State **)(param_1 + 0x20),"invalid capture index");
  }
  lVar1 = param_1 + (long)param_2 * 0x10;
  uVar3 = *(ulong *)(lVar1 + 0x38);
  ppcVar2 = (char **)(lVar1 + 0x30);
  if (uVar3 != 0xfffffffffffffffe) {
    if (uVar3 != 0xffffffffffffffff) {
      lua_pushlstring(*(lua_State **)(param_1 + 0x20),*ppcVar2,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(*(lua_State **)(param_1 + 0x20),"unfinished capture");
  }
  lua_pushinteger(*(lua_State **)(param_1 + 0x20),(*(int *)ppcVar2 - *(int *)(param_1 + 8)) + 1);
  return;
}


