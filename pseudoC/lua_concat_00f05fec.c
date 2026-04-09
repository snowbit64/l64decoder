// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_concat
// Entry Point: 00f05fec
// Size: 224 bytes
// Signature: undefined __cdecl lua_concat(lua_State * param_1, int param_2)


/* lua_concat(lua_State*, int) */

void lua_concat(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (((byte)param_1[1] >> 2 & 1) != 0) {
        FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
      }
      puVar3 = *(undefined8 **)(param_1 + 8);
      uVar1 = FUN_00f128c0(param_1,&DAT_0050a39f,0);
      *puVar3 = uVar1;
      lVar2 = *(long *)(param_1 + 8);
      *(undefined4 *)((long)puVar3 + 0xc) = 5;
      *(long *)(param_1 + 8) = lVar2 + 0x10;
      return;
    }
  }
  else {
    if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48)
       ) {
      FUN_00f0bdd8(param_1,1);
    }
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
    }
    FUN_00f2673c(param_1,param_2,
                 (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4) + -1);
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)(param_2 - 1) * -0x10;
  }
  return;
}


