// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_createtable
// Entry Point: 00f04fc0
// Size: 140 bytes
// Signature: undefined __cdecl lua_createtable(lua_State * param_1, int param_2, int param_3)


/* lua_createtable(lua_State*, int, int) */

void lua_createtable(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_00f0bdd8(param_1,1,param_3);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = FUN_00f16e6c(param_1,param_2,param_3);
  *puVar3 = uVar1;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar3 + 0xc) = 6;
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  return;
}


