// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_costatus
// Entry Point: 00f05b2c
// Size: 108 bytes
// Signature: undefined __cdecl lua_costatus(lua_State * param_1, lua_State * param_2)


/* lua_costatus(lua_State*, lua_State*) */

undefined4 lua_costatus(lua_State *param_1,lua_State *param_2)

{
  lua_State lVar1;
  undefined4 uVar2;
  
  if (param_2 == param_1) {
    return 0;
  }
  lVar1 = param_2[3];
  if (lVar1 == (lua_State)0x0) {
    if (*(long *)(param_2 + 0x20) != *(long *)(param_2 + 0x40)) {
      return 2;
    }
    uVar2 = 3;
    if (*(long *)(param_2 + 8) != *(long *)(param_2 + 0x10)) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if (lVar1 == (lua_State)0x1) {
    return 1;
  }
  if (lVar1 == (lua_State)0x6) {
    return 2;
  }
  return 4;
}


