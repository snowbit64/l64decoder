// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_tolstring
// Entry Point: 00f03ed4
// Size: 360 bytes
// Signature: undefined __cdecl lua_tolstring(lua_State * param_1, int param_2, ulong * param_3)


/* lua_tolstring(lua_State*, int, unsigned long*) */

long lua_tolstring(lua_State *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00f068dc(param_1,param_2);
      iVar1 = *(int *)((long)plVar2 + 0xc);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)plVar2 + 0xc);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = (long *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)plVar2 + 0xc);
  }
  if (iVar1 != 5) {
    if (((byte)param_1[1] >> 2 & 1) != 0) {
      FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
    }
    iVar1 = FUN_00f25cec(param_1,plVar2);
    if (iVar1 == 0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = 0;
      }
      return 0;
    }
    if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48)
       ) {
      FUN_00f0bdd8(param_1,1);
    }
    if (param_2 < 1) {
      if (param_2 < -9999) {
        plVar2 = (long *)FUN_00f068dc(param_1,param_2);
      }
      else {
        plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
      if (*(long **)(param_1 + 8) <= plVar2) {
        plVar2 = (long *)&DAT_0056fdf8;
      }
    }
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)*(uint *)(*plVar2 + 0x14);
  }
  return *plVar2 + 0x18;
}


