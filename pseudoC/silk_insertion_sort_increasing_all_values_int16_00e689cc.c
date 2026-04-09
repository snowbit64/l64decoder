// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_insertion_sort_increasing_all_values_int16
// Entry Point: 00e689cc
// Size: 96 bytes
// Signature: undefined silk_insertion_sort_increasing_all_values_int16(void)


void silk_insertion_sort_increasing_all_values_int16(long param_1,uint param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (1 < (int)param_2) {
    uVar4 = 1;
    do {
      sVar2 = *(short *)(param_1 + uVar4 * 2);
      uVar5 = uVar4;
      do {
        sVar3 = *(short *)(param_1 + (uVar5 - 1 & 0xffffffff) * 2);
        if (sVar3 <= sVar2) goto LAB_00e689e0;
        *(short *)(param_1 + uVar5 * 2) = sVar3;
        bVar1 = 1 < (long)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
      uVar5 = 0;
LAB_00e689e0:
      uVar4 = uVar4 + 1;
      *(short *)(param_1 + (-(uVar5 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar5 & 0xffffffff) << 1))
           = sVar2;
    } while (uVar4 != param_2);
  }
  return;
}


