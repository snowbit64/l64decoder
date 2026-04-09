// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_xmove
// Entry Point: 00f02f18
// Size: 140 bytes
// Signature: undefined __cdecl lua_xmove(lua_State * param_1, lua_State * param_2, int param_3)


/* lua_xmove(lua_State*, lua_State*, int) */

void lua_xmove(lua_State *param_1,lua_State *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    if (((byte)param_2[1] >> 2 & 1) != 0) {
      FUN_00f0ca20(param_2,param_2,param_2 + 0x68);
    }
    puVar1 = *(undefined8 **)(param_2 + 8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * -0x10);
    if (0 < param_3) {
      uVar3 = (ulong)(uint)param_3;
      puVar4 = puVar2;
      puVar5 = puVar1;
      do {
        uVar6 = *puVar4;
        uVar3 = uVar3 - 1;
        puVar5[1] = puVar4[1];
        *puVar5 = uVar6;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar3 != 0);
    }
    *(undefined8 **)(param_1 + 8) = puVar2;
    *(undefined8 **)(param_2 + 8) = puVar1 + (long)param_3 * 2;
  }
  return;
}


