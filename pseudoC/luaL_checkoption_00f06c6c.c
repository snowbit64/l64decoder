// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checkoption
// Entry Point: 00f06c6c
// Size: 216 bytes
// Signature: undefined __cdecl luaL_checkoption(lua_State * param_1, int param_2, char * param_3, char * * param_4)


/* luaL_checkoption(lua_State*, int, char const*, char const* const*) */

ulong luaL_checkoption(lua_State *param_1,int param_2,char *param_3,char **param_4)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (((param_3 == (char *)0x0) || (iVar1 = lua_type(param_1,param_2), 0 < iVar1)) &&
     (param_3 = (char *)lua_tolstring(param_1,param_2,(ulong *)0x0), param_3 == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f06fc0(param_1,param_2,5);
  }
  pcVar2 = *param_4;
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = strcmp(pcVar2,param_3);
      if (iVar1 == 0) {
        return uVar3 & 0xffffffff;
      }
      pcVar2 = param_4[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (pcVar2 != (char *)0x0);
  }
  pcVar2 = (char *)lua_pushfstringL(param_1,"invalid option \'%s\'",param_3);
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,param_2,pcVar2);
}


