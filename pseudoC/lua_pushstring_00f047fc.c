// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushstring
// Entry Point: 00f047fc
// Size: 180 bytes
// Signature: undefined __cdecl lua_pushstring(lua_State * param_1, char * param_2)


/* lua_pushstring(lua_State*, char const*) */

void lua_pushstring(lua_State *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_2 == (char *)0x0) {
    lVar3 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar3 + 0xc) = 0;
  }
  else {
    sVar1 = strlen(param_2);
    if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48)
       ) {
      FUN_00f0bdd8(param_1,1);
    }
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
    }
    puVar4 = *(undefined8 **)(param_1 + 8);
    uVar2 = FUN_00f128c0(param_1,param_2,sVar1);
    *puVar4 = uVar2;
    lVar3 = *(long *)(param_1 + 8);
    *(undefined4 *)((long)puVar4 + 0xc) = 5;
  }
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return;
}


