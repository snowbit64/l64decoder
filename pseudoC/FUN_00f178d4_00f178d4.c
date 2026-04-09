// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f178d4
// Entry Point: 00f178d4
// Size: 276 bytes
// Signature: undefined FUN_00f178d4(void)


undefined * FUN_00f178d4(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  double dVar5;
  double local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_3 - 1U < *(uint *)(param_2 + 8)) {
    puVar3 = (undefined *)(*(long *)(param_2 + 0x18) + (long)(int)(param_3 - 1U) * 0x10);
  }
  else {
    puVar3 = *(undefined **)(param_2 + 0x20);
    dVar5 = (double)param_3;
    if (puVar3 != luaH_dummynode) {
      uVar1 = (uint)((ulong)dVar5 >> 0x20) & 0x7fffffff;
      uVar4 = (SUB84(dVar5,0) ^ uVar1 >> 0x12) * 0x5bd1e995;
      uVar1 = (uVar1 ^ uVar4 >> 0x16) * 0x5bd1e995;
      uVar4 = (uVar1 ^ (uVar4 ^ uVar1 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
              (-1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f) ^ 0xffffffffU);
      do {
        puVar3 = puVar3 + (long)(int)uVar4 * 0x20;
        uVar1 = *(uint *)(puVar3 + 0x1c);
        if (((uVar1 & 0xf) == 3) && (*(double *)(puVar3 + 0x10) == dVar5)) {
          if (puVar3 != &DAT_0056fdf8) goto LAB_00f179c0;
          break;
        }
        uVar4 = (int)uVar1 >> 4;
      } while (0xf < uVar1);
    }
    local_2c = 3;
    local_38 = dVar5;
    puVar3 = (undefined *)FUN_00f17668(param_1,param_2,&local_38);
  }
LAB_00f179c0:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


