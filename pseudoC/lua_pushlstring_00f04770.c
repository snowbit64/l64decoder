// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushlstring
// Entry Point: 00f04770
// Size: 140 bytes
// Signature: undefined __cdecl lua_pushlstring(lua_State * param_1, char * param_2, ulong param_3)


/* lua_pushlstring(lua_State*, char const*, unsigned long) */

void lua_pushlstring(lua_State *param_1,char *param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_00f0bdd8(param_1,1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = FUN_00f128c0(param_1,param_2,param_3);
  *puVar3 = uVar1;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar3 + 0xc) = 5;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


