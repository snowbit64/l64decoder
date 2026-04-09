// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_rawgetfield
// Entry Point: 00f04d98
// Size: 208 bytes
// Signature: undefined __cdecl lua_rawgetfield(lua_State * param_1, int param_2, char * param_3)


/* lua_rawgetfield(lua_State*, int, char const*) */

undefined4 lua_rawgetfield(lua_State *param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar4 = (undefined8 *)FUN_00f068dc(param_1,param_2);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar4) {
      puVar4 = (undefined8 *)&DAT_0056fdf8;
    }
  }
  sVar2 = strlen(param_3);
  uVar3 = FUN_00f128c0(param_1,param_3,sVar2);
  puVar4 = (undefined8 *)FUN_00f17180(*puVar4,uVar3);
  puVar5 = *(undefined8 **)(param_1 + 8);
  uVar3 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar3;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return uVar1;
}


