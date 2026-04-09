// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_process_gains_FIX
// Entry Point: 00e954b8
// Size: 824 bytes
// Signature: undefined silk_process_gains_FIX(void)


void silk_process_gains_FIX(long param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  if ((*(byte *)(param_1 + 0x12ad) == 2) &&
     (lVar10 = silk_sigm_Q15((*(int *)((long)param_2 + 0x18c) + -0x600 >> 3) + 1 >> 1),
     0 < *(int *)(param_1 + 0x11e4))) {
    lVar12 = 0;
    do {
      lVar13 = lVar12 * 4;
      lVar12 = lVar12 + 1;
      iVar5 = *(int *)((long)param_2 + lVar13);
      *(int *)((long)param_2 + lVar13) =
           iVar5 + (int)((ulong)((-(lVar10 << 0x30) >> 0x30) * (long)iVar5) >> 0x10);
    } while (lVar12 < *(int *)(param_1 + 0x11e4));
  }
  iVar5 = silk_log2lin((ulong)((0x22be - (long)*(int *)(param_1 + 0x127c)) * 0x547b) >> 0x10);
  uVar7 = *(uint *)(param_1 + 0x11e4);
  if (0 < (int)uVar7) {
    lVar10 = 0;
    iVar4 = 0;
    if (*(int *)(param_1 + 0x11ec) != 0) {
      iVar4 = iVar5 / *(int *)(param_1 + 0x11ec);
    }
    do {
      iVar5 = *(int *)((long)param_2 + lVar10 * 4 + 0x1a0);
      uVar7 = (uint)((ulong)((long)*(int *)((long)param_2 + lVar10 * 4 + 400) * (long)iVar4) >> 0x10
                    );
      if (iVar5 < 1) {
        iVar8 = uVar7 << (ulong)(-iVar5 & 0x1f);
        if ((int)(0x7fffffffU >> (ulong)(-iVar5 & 0x1f)) <= (int)uVar7) {
          iVar8 = 0x7fffffff;
        }
      }
      else {
        iVar8 = ((int)uVar7 >> (iVar5 - 1U & 0x1f)) + 1 >> 1;
        if (iVar5 == 1) {
          iVar8 = (uVar7 & 1) + ((int)uVar7 >> 1);
        }
      }
      lVar12 = (long)*(int *)((long)param_2 + lVar10 * 4);
      lVar12 = lVar12 * lVar12;
      uVar7 = iVar8 + (int)((ulong)lVar12 >> 0x20);
      uVar14 = 0x7fffffff;
      if (iVar8 < 0) {
        uVar14 = uVar7;
      }
      if ((int)uVar7 < 0) {
        uVar7 = uVar14;
      }
      uVar14 = 0xb486;
      if ((int)uVar7 < 0x7fff) {
        uVar7 = (int)((ulong)lVar12 >> 0x10) + iVar8 * 0x10000;
        if ((int)uVar7 < 1) {
          iVar5 = 0;
        }
        else {
          uVar11 = LZCOUNT(uVar7);
          uVar9 = (uint)uVar11;
          if (uVar9 - 0x18 != 0) {
            if (uVar7 < 0x80) {
              uVar7 = uVar7 >> (ulong)(0x38 - uVar9 & 0x1f) | uVar7 << (ulong)(uVar9 - 0x18 & 0x1f);
            }
            else {
              uVar7 = uVar7 << (ulong)(uVar9 + 8 & 0x1f) | uVar7 >> (ulong)(0x18 - uVar9 & 0x1f);
            }
          }
          if ((uVar11 & 1) != 0) {
            uVar14 = 0x8000;
          }
          uVar14 = uVar14 >> (ulong)(uVar9 >> 1);
          iVar5 = (uVar14 + (int)(((ulong)(uVar7 & 0x7f) * 0xd5000000000000 >> 0x30) * (ulong)uVar14
                                 >> 0x10)) * 0x100;
        }
      }
      else {
        uVar6 = (uint)LZCOUNT(uVar7);
        uVar3 = 0x18 - uVar6 & 0x1f;
        uVar9 = uVar7;
        if (uVar6 != 0x18) {
          uVar9 = uVar7 >> uVar3 | uVar7 << 0x20 - uVar3;
        }
        if ((LZCOUNT(uVar7) & 1U) != 0) {
          uVar14 = 0x8000;
        }
        uVar14 = uVar14 >> (ulong)(uVar6 >> 1);
        uVar14 = uVar14 + (int)(((ulong)(uVar9 & 0x7f) * 0xd5000000000000 >> 0x30) * (ulong)uVar14
                               >> 0x10);
        if (0x7ffe < uVar14) {
          uVar14 = 0x7fff;
        }
        iVar5 = uVar14 << 0x10;
      }
      *(int *)((long)param_2 + lVar10 * 4) = iVar5;
      lVar10 = lVar10 + 1;
      uVar7 = *(uint *)(param_1 + 0x11e4);
    } while (lVar10 < (int)uVar7);
  }
  memcpy((void *)((long)param_2 + 0x1b0),param_2,
         -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2);
  uVar1 = *(undefined4 *)(param_1 + 0x11e4);
  *(undefined *)((long)param_2 + 0x1c0) = *(undefined *)(param_1 + 0x1c18);
  silk_gains_quant(param_1 + 0x1290,param_2,param_1 + 0x1c18,param_3 == 2,uVar1);
  bVar2 = *(byte *)(param_1 + 0x12ad);
  if (bVar2 == 2) {
    if (*(int *)((long)param_2 + 0x18c) + (*(int *)(param_1 + 0x1278) >> 8) < 0x81) {
      lVar10 = 1;
      *(undefined *)(param_1 + 0x12ae) = 1;
    }
    else {
      lVar10 = 0;
      *(undefined *)(param_1 + 0x12ae) = 0;
    }
  }
  else {
    lVar10 = (long)*(char *)(param_1 + 0x12ae);
  }
  *(int *)((long)param_2 + 0x17c) =
       (int)((ulong)((long)*(short *)((long)&silk_Quantization_Offsets_Q10 +
                                     lVar10 * 2 + (long)((int)((uint)bVar2 << 0x18) >> 0x19) * 4) *
                    0xcccd) >> 0x10) + *(short *)(param_1 + 0x1214) * -0x32 +
       (int)((ulong)((long)*(short *)(param_1 + 0x11b4) * -0xcccc) >> 0x10) +
       (int)((ulong)((long)*(short *)((long)param_2 + 0x180) * -0x199) >> 0x10) +
       (int)((ulong)((long)*(short *)((long)param_2 + 0x184) * -0x332) >> 0x10) + 0x4cd;
  return;
}


