// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_typeerrorL
// Entry Point: 00f06ac8
// Size: 264 bytes
// Signature: noreturn undefined __cdecl luaL_typeerrorL(lua_State * param_1, int param_2, char * param_3)


/* luaL_typeerrorL(lua_State*, int, char const*) */

void luaL_typeerrorL(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  char *__s1;
  
  uVar4 = (ulong)(uint)param_2;
  if (((*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x20)) &&
      (lVar3 = **(long **)(*(ulong *)(param_1 + 0x20) + 8), lVar3 != 0)) &&
     (*(char *)(lVar3 + 3) != '\0')) {
    __s1 = *(char **)(lVar3 + 0x28);
    if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,"__namecall"), iVar1 == 0)) {
      __s1 = (char *)0x0;
      if (*(long *)(param_1 + 0x70) != 0) {
        __s1 = (char *)(*(long *)(param_1 + 0x70) + 0x18);
      }
    }
  }
  else {
    __s1 = (char *)0x0;
  }
  lVar3 = FUN_00f02d28(param_1,uVar4);
  if (lVar3 != 0) {
    uVar2 = FUN_00f1990c(param_1,lVar3);
    if (__s1 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"invalid argument #%d to \'%s\' (%s expected, got %s)",uVar4,__s1,param_3)
      ;
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"invalid argument #%d (%s expected, got %s)",uVar4,param_3,uVar2);
  }
  if (__s1 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"missing argument #%d to \'%s\' (%s expected)",uVar4,__s1,param_3);
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"missing argument #%d (%s expected)",uVar4,param_3);
}


