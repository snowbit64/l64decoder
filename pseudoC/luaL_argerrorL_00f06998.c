// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_argerrorL
// Entry Point: 00f06998
// Size: 156 bytes
// Signature: noreturn undefined __cdecl luaL_argerrorL(lua_State * param_1, int param_2, char * param_3)


/* luaL_argerrorL(lua_State*, int, char const*) */

void luaL_argerrorL(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  if ((((*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x20)) &&
       (lVar2 = **(long **)(*(ulong *)(param_1 + 0x20) + 8), lVar2 != 0)) &&
      (*(char *)(lVar2 + 3) != '\0')) && (__s1 = *(char **)(lVar2 + 0x28), __s1 != (char *)0x0)) {
    iVar1 = strcmp(__s1,"__namecall");
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_00f069fc;
      __s1 = (char *)(*(long *)(param_1 + 0x70) + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"invalid argument #%d to \'%s\' (%s)",(ulong)(uint)param_2,__s1,param_3);
  }
LAB_00f069fc:
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"invalid argument #%d (%s)",(ulong)(uint)param_2,param_3);
}


