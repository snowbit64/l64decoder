// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_math
// Entry Point: 00f0f0c4
// Size: 192 bytes
// Signature: undefined __cdecl luaopen_math(lua_State * param_1)


/* luaopen_math(lua_State*) */

undefined8 luaopen_math(lua_State *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = time((time_t *)0x0);
  uVar2 = clock();
  *(ulong *)(*(long *)(param_1 + 0x18) + 0xc10) =
       (uVar1 ^ (ulong)param_1 ^ uVar2) * 0x5851f42d4c957f2d + 0x399d2694695129de;
  luaL_register(param_1,"math",(luaL_Reg *)&PTR_DAT_01017298);
  lua_pushnumber(param_1,3.141592653589793);
  lua_setfield(param_1,-2,"pi");
  lua_pushnumber(param_1,INFINITY);
  lua_setfield(param_1,-2,"huge");
  return 1;
}


