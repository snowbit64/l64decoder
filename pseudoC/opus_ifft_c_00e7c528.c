// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_ifft_c
// Entry Point: 00e7c528
// Size: 316 bytes
// Signature: undefined opus_ifft_c(void)


void opus_ifft_c(uint *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  
  if (0 < (int)*param_1) {
    lVar4 = 0;
    do {
      lVar1 = lVar4 * 8;
      lVar2 = lVar4 * 2;
      lVar4 = lVar4 + 1;
      *(undefined8 *)(param_3 + (long)*(short *)(*(long *)(param_1 + 0xc) + lVar2) * 8) =
           *(undefined8 *)(param_2 + lVar1);
      uVar3 = *param_1;
    } while (lVar4 < (int)uVar3);
    uVar5 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar5 & 0xfffffffe;
        piVar7 = (int *)(param_3 + 0xc);
        uVar8 = uVar6;
        do {
          uVar8 = uVar8 - 2;
          piVar7[-2] = -piVar7[-2];
          *piVar7 = -*piVar7;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
        if (uVar6 == uVar5) goto LAB_00e7c5dc;
      }
      lVar4 = uVar5 - uVar6;
      piVar7 = (int *)(param_3 + uVar6 * 8 + 4);
      do {
        lVar4 = lVar4 + -1;
        *piVar7 = -*piVar7;
        piVar7 = piVar7 + 2;
      } while (lVar4 != 0);
    }
  }
LAB_00e7c5dc:
  opus_fft_impl(param_1,param_3);
  uVar3 = *param_1;
  uVar5 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar5 & 0xfffffffe;
      piVar7 = (int *)(param_3 + 0xc);
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 2;
        piVar7[-2] = -piVar7[-2];
        *piVar7 = -*piVar7;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
      if (uVar6 == uVar5) {
        return;
      }
    }
    lVar4 = uVar5 - uVar6;
    piVar7 = (int *)(param_3 + uVar6 * 8 + 4);
    do {
      lVar4 = lVar4 + -1;
      *piVar7 = -*piVar7;
      piVar7 = piVar7 + 2;
    } while (lVar4 != 0);
  }
  return;
}


