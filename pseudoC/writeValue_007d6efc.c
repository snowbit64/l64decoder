// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValue
// Entry Point: 007d6efc
// Size: 200 bytes
// Signature: undefined __cdecl writeValue(BitVector * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* DensityMapAccessUtil::writeValue(BitVector*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void DensityMapAccessUtil::writeValue
               (BitVector *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)param_1;
  uVar3 = (param_4 + param_5 * param_3) * param_2;
  uVar4 = ~(-1 << (ulong)(param_2 & 0x1f));
  uVar2 = uVar3 & 7;
  uVar6 = (ulong)(uVar3 >> 3) & 0xffff;
  lVar5 = *(long *)(lVar7 + (ulong)(uVar3 >> 0x13) * 8);
  if (0xfffc < (uint)uVar6) {
    uVar1 = (uVar3 >> 3) + 1;
    uVar3 = (uVar3 >> 3) + 2;
    lVar10 = (ulong)(uVar1 >> 0x10) * 8;
    lVar11 = (ulong)(uVar3 >> 0x10) * 8;
    uVar9 = (ulong)uVar1 & 0xffff;
    uVar8 = (ulong)uVar3 & 0xffff;
    uVar2 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar7 + lVar11) + uVar8),
                           CONCAT11(*(undefined *)(*(long *)(lVar7 + lVar10) + uVar9),
                                    *(undefined *)(lVar5 + uVar6))) &
            (uVar4 << (ulong)uVar2 ^ 0xffffffff) | param_6 << (ulong)uVar2;
    *(char *)(lVar5 + uVar6) = (char)uVar2;
    *(char *)(*(long *)(*(long *)param_1 + lVar10) + uVar9) = (char)(uVar2 >> 8);
    *(char *)(*(long *)(*(long *)param_1 + lVar11) + uVar8) = (char)(uVar2 >> 0x10);
    return;
  }
  *(uint *)(lVar5 + uVar6) =
       *(uint *)(lVar5 + uVar6) & (uVar4 << (ulong)uVar2 ^ 0xffffffff) | param_6 << (ulong)uVar2;
  return;
}


