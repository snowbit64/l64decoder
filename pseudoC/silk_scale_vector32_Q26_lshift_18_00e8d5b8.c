// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_scale_vector32_Q26_lshift_18
// Entry Point: 00e8d5b8
// Size: 168 bytes
// Signature: undefined silk_scale_vector32_Q26_lshift_18(void)


void silk_scale_vector32_Q26_lshift_18(undefined8 *param_1,int param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  
  if (0 < (int)param_3) {
    lVar1 = (long)param_2;
    uVar2 = (ulong)param_3;
    if (param_3 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar2 & 0xfffffffc;
      uVar5 = uVar4;
      puVar7 = param_1;
      do {
        uVar5 = uVar5 - 4;
        puVar7[1] = CONCAT44((int)((ulong)(lVar1 * (int)((ulong)puVar7[1] >> 0x20)) >> 8),
                             (int)((ulong)(lVar1 * (int)puVar7[1]) >> 8));
        *puVar7 = CONCAT44((int)((ulong)(lVar1 * (int)((ulong)*puVar7 >> 0x20)) >> 8),
                           (int)((ulong)(lVar1 * (int)*puVar7) >> 8));
        puVar7 = puVar7 + 2;
      } while (uVar5 != 0);
      if (uVar4 == uVar2) {
        return;
      }
    }
    lVar3 = uVar2 - uVar4;
    piVar6 = (int *)((long)param_1 + uVar4 * 4);
    do {
      lVar3 = lVar3 + -1;
      *piVar6 = (int)((ulong)(*piVar6 * lVar1) >> 8);
      piVar6 = piVar6 + 1;
    } while (lVar3 != 0);
  }
  return;
}


