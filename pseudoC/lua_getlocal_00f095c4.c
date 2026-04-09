// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getlocal
// Entry Point: 00f095c4
// Size: 284 bytes
// Signature: undefined __cdecl lua_getlocal(lua_State * param_1, int param_2, int param_3)


/* lua_getlocal(lua_State*, int, int) */

long * lua_getlocal(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  if ((uint)((int)((ulong)(lVar6 - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333) <= (uint)param_2)
  {
    return (long *)0x0;
  }
  lVar2 = (long)param_2;
  plVar1 = (long *)0x0;
  plVar4 = *(long **)(lVar6 + lVar2 * -0x28 + 8);
  if (*(int *)((long)plVar4 + 0xc) == 7) {
    lVar5 = *plVar4;
    if (*(char *)(lVar5 + 3) == '\0') {
      plVar1 = *(long **)(lVar5 + 0x18);
      if (plVar1 != (long *)0x0) {
        uVar3 = *(ulong *)(lVar6 + lVar2 * -0x28 + 0x18);
        if (uVar3 != 0) {
          uVar3 = (ulong)((int)(uVar3 - plVar1[2] >> 2) - 1);
        }
        plVar1 = (long *)FUN_00f0bd58(plVar1,param_3,uVar3 & 0xffffffff);
        if (plVar1 != (long *)0x0) {
          if (((byte)param_1[1] >> 2 & 1) != 0) {
            FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
          }
          FUN_00f02da8(param_1,*(long *)(lVar6 + lVar2 * -0x28) +
                               (ulong)*(byte *)(plVar1 + 2) * 0x10);
          return (long *)(*plVar1 + 0x18);
        }
      }
    }
    else {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}


