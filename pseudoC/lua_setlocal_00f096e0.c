// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setlocal
// Entry Point: 00f096e0
// Size: 276 bytes
// Signature: undefined __cdecl lua_setlocal(lua_State * param_1, int param_2, int param_3)


/* lua_setlocal(lua_State*, int, int) */

long lua_setlocal(lua_State *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 0x20);
  if ((uint)((int)((ulong)(lVar6 - *(long *)(param_1 + 0x40)) >> 3) * -0x33333333) <= (uint)param_2)
  {
    return 0;
  }
  lVar2 = (long)param_2;
  plVar4 = *(long **)(lVar6 + lVar2 * -0x28 + 8);
  if (((*(int *)((long)plVar4 + 0xc) == 7) && (lVar5 = *plVar4, *(char *)(lVar5 + 3) == '\0')) &&
     (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
    uVar3 = *(ulong *)(lVar6 + lVar2 * -0x28 + 0x18);
    if (uVar3 != 0) {
      uVar3 = (ulong)((int)(uVar3 - *(long *)(lVar5 + 0x10) >> 2) - 1);
    }
    plVar4 = (long *)FUN_00f0bd58(lVar5,param_3,uVar3 & 0xffffffff);
    if (plVar4 != (long *)0x0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
      puVar1 = (undefined8 *)
               (*(long *)(lVar6 + lVar2 * -0x28) + (ulong)*(byte *)(plVar4 + 2) * 0x10);
      puVar1[1] = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
      *puVar1 = uVar7;
      lVar6 = *plVar4;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
      return lVar6 + 0x18;
    }
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return 0;
}


