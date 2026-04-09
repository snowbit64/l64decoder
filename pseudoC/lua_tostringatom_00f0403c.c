// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_tostringatom
// Entry Point: 00f0403c
// Size: 228 bytes
// Signature: undefined __cdecl lua_tostringatom(lua_State * param_1, int param_2, int * param_3)


/* lua_tostringatom(lua_State*, int, int*) */

long lua_tostringatom(lua_State *param_1,int param_2,int *param_3)

{
  int iVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00f068dc(param_1);
      iVar1 = *(int *)((long)plVar3 + 0xc);
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)plVar3 + 0xc);
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar3) {
      plVar3 = (long *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)plVar3 + 0xc);
  }
  if (iVar1 != 5) {
    return 0;
  }
  lVar4 = *plVar3;
  if (param_3 != (int *)0x0) {
    sVar2 = *(short *)(lVar4 + 4);
    if (sVar2 == -0x8000) {
      if (*(code **)(*(long *)(param_1 + 0x18) + 0x1058) == (code *)0x0) {
        sVar2 = -1;
      }
      else {
        sVar2 = (**(code **)(*(long *)(param_1 + 0x18) + 0x1058))
                          (lVar4 + 0x18,*(undefined4 *)(lVar4 + 0x14));
      }
      *(short *)(lVar4 + 4) = sVar2;
    }
    *param_3 = (int)sVar2;
  }
  return lVar4 + 0x18;
}


