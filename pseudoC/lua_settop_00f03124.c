// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_settop
// Entry Point: 00f03124
// Size: 156 bytes
// Signature: undefined __cdecl lua_settop(lua_State * param_1, int param_2)


/* lua_settop(lua_State*, int) */

void lua_settop(lua_State *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 < 0) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)(param_2 + 1) * 0x10;
    return;
  }
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = *(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10;
  if (uVar3 < uVar1) {
    uVar2 = *(long *)(param_1 + 0x10) + (ulong)(uint)param_2 * 0x10;
    if (uVar2 <= uVar3 + 0x10) {
      uVar2 = uVar3 + 0x10;
    }
    if (0xf < uVar2 + ~uVar3) {
      uVar2 = (uVar2 + ~uVar3 >> 4) + 1;
      uVar5 = uVar2 & 0x1ffffffffffffffe;
      puVar4 = (undefined4 *)(uVar3 + 0x1c);
      uVar6 = uVar5;
      do {
        uVar6 = uVar6 - 2;
        puVar4[-4] = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 8;
      } while (uVar6 != 0);
      uVar3 = uVar3 + uVar5 * 0x10;
      if (uVar2 == uVar5) goto LAB_00f031a4;
    }
    do {
      uVar2 = uVar3 + 0x10;
      *(undefined4 *)(uVar3 + 0xc) = 0;
      uVar3 = uVar2;
    } while (uVar2 < uVar1);
  }
LAB_00f031a4:
  *(ulong *)(param_1 + 8) = uVar1;
  return;
}


