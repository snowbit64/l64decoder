// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_errorL
// Entry Point: 00f06a34
// Size: 148 bytes
// Signature: noreturn undefined __cdecl luaL_errorL(lua_State * param_1, char * param_2, ...)


/* luaL_errorL(lua_State*, char const*, ...) */

void luaL_errorL(lua_State *param_1,char *param_2,...)

{
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  local_a0 = in_x2;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined *)register0x00000008;
  luaL_where(param_1,1);
  uStack_58 = 0xffffff80ffffffd0;
  ppuStack_68 = &local_70;
  puStack_60 = &local_a0;
  lua_pushvfstring(param_1,param_2,(int)&stack0xffffffffffffffd0 - 0x40);
  lua_concat(param_1,2);
                    /* WARNING: Subroutine does not return */
  lua_error(param_1);
}


