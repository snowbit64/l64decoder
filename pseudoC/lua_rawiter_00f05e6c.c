// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_rawiter
// Entry Point: 00f05e6c
// Size: 384 bytes
// Signature: undefined __cdecl lua_rawiter(lua_State * param_1, int param_2, int param_3)


/* lua_rawiter(lua_State*, int, int) */

uint lua_rawiter(lua_State *param_1,int param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  double *pdVar3;
  long lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00f068dc(param_1,param_2);
      lVar4 = *plVar2;
      uVar1 = *(uint *)(lVar4 + 8);
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      uVar1 = *(uint *)(lVar4 + 8);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = (long *)&DAT_0056fdf8;
    }
    lVar4 = *plVar2;
    uVar1 = *(uint *)(lVar4 + 8);
  }
  if ((uint)param_3 < uVar1) {
    pdVar5 = (double *)(*(long *)(lVar4 + 0x18) + (long)param_3 * 0x10);
    do {
      if (*(int *)((long)pdVar5 + 0xc) != 0) {
        param_3 = param_3 + 1;
        pdVar3 = *(double **)(param_1 + 8);
        *(undefined4 *)((long)pdVar3 + 0xc) = 3;
        *pdVar3 = (double)param_3;
        dVar7 = pdVar5[1];
        dVar6 = *pdVar5;
        goto LAB_00f05fd0;
      }
      param_3 = param_3 + 1;
      pdVar5 = pdVar5 + 2;
    } while ((uint)param_3 < uVar1);
  }
  if (param_3 - uVar1 >> (ulong)(*(byte *)(lVar4 + 6) & 0x1f) == 0) {
    do {
      param_3 = param_3 + 1;
      pdVar5 = (double *)(*(long *)(lVar4 + 0x20) + (long)(int)((param_3 - uVar1) - 1) * 0x20);
      if (*(int *)((long)pdVar5 + 0xc) != 0) {
        pdVar3 = *(double **)(param_1 + 8);
        *pdVar3 = pdVar5[2];
        *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)(pdVar5 + 3);
        *(uint *)((long)pdVar3 + 0xc) = *(uint *)((long)pdVar5 + 0x1c) & 0xf;
        dVar7 = pdVar5[1];
        dVar6 = *pdVar5;
LAB_00f05fd0:
        pdVar3[3] = dVar7;
        pdVar3[2] = dVar6;
        *(double **)(param_1 + 8) = pdVar3 + 4;
        return param_3;
      }
    } while (param_3 - uVar1 >> (ulong)(*(byte *)(lVar4 + 6) & 0x1f) == 0);
  }
  return 0xffffffff;
}


