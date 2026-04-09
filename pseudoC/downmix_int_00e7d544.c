// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downmix_int
// Entry Point: 00e7d544
// Size: 580 bytes
// Signature: undefined downmix_int(void)


void downmix_int(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                uint param_7)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if ((int)param_3 < 1) goto LAB_00e7d60c;
  lVar7 = (long)(int)param_7;
  uVar5 = (ulong)param_3;
  if (param_3 == 1) {
    uVar8 = 0;
LAB_00e7d5b8:
    lVar9 = uVar5 - uVar8;
    psVar3 = (short *)(param_1 + ((long)param_5 + (uVar8 + (long)param_4) * lVar7) * 2);
    piVar2 = (int *)(param_2 + uVar8 * 4);
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + lVar7;
      lVar9 = lVar9 + -1;
      *piVar2 = (int)sVar1;
      piVar2 = piVar2 + 1;
    } while (lVar9 != 0);
  }
  else {
    lVar11 = lVar7 * param_4;
    uVar8 = uVar5 & 0xfffffffe;
    lVar9 = (long)param_5 << 1;
    piVar2 = (int *)(param_2 + 4);
    uVar6 = uVar8;
    do {
      psVar3 = (short *)(param_1 + lVar11 * 2 + lVar9);
      uVar6 = uVar6 - 2;
      sVar1 = *(short *)(param_1 + (lVar7 + lVar11) * 2 + lVar9);
      lVar9 = lVar9 + lVar7 * 4;
      piVar2[-1] = (int)*psVar3;
      *piVar2 = (int)sVar1;
      piVar2 = piVar2 + 2;
    } while (uVar6 != 0);
    if (uVar8 != uVar5) goto LAB_00e7d5b8;
  }
  if (-1 < (int)param_6) {
    if ((int)param_3 < 1) {
      return;
    }
    lVar7 = (long)(int)param_7;
    if (param_3 == 1) {
      uVar8 = 0;
    }
    else {
      lVar11 = lVar7 * param_4;
      uVar8 = uVar5 & 0xfffffffe;
      lVar9 = (ulong)param_6 << 1;
      piVar2 = (int *)(param_2 + 4);
      uVar6 = uVar8;
      do {
        psVar3 = (short *)(param_1 + lVar11 * 2 + lVar9);
        uVar6 = uVar6 - 2;
        sVar1 = *(short *)(param_1 + (lVar7 + lVar11) * 2 + lVar9);
        lVar9 = lVar9 + lVar7 * 4;
        piVar2[-1] = piVar2[-1] + (int)*psVar3;
        *piVar2 = *piVar2 + (int)sVar1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
      if (uVar8 == uVar5) {
        return;
      }
    }
    lVar9 = uVar5 - uVar8;
    psVar3 = (short *)(param_1 + ((ulong)param_6 + (uVar8 + (long)param_4) * lVar7) * 2);
    piVar2 = (int *)(param_2 + uVar8 * 4);
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + lVar7;
      lVar9 = lVar9 + -1;
      *piVar2 = *piVar2 + (int)sVar1;
      piVar2 = piVar2 + 1;
    } while (lVar9 != 0);
    return;
  }
LAB_00e7d60c:
  if (((param_6 == 0xfffffffe) && (1 < (int)param_7)) && (0 < (int)param_3)) {
    uVar6 = (ulong)param_7;
    uVar8 = (ulong)param_3;
    lVar9 = (long)param_4 * uVar6;
    uVar10 = uVar8 & 0xfffffffe;
    uVar5 = 1;
    lVar7 = param_1 + lVar9 * 2;
    lVar9 = param_1 + (uVar6 + lVar9) * 2;
    do {
      lVar9 = lVar9 + 2;
      lVar7 = lVar7 + 2;
      if (param_3 < 2) {
        uVar4 = 0;
LAB_00e7d6c4:
        lVar11 = uVar8 - uVar4;
        psVar3 = (short *)(param_1 + (uVar5 + uVar6 * ((long)param_4 + uVar4)) * 2);
        piVar2 = (int *)(param_2 + uVar4 * 4);
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + uVar6;
          lVar11 = lVar11 + -1;
          *piVar2 = *piVar2 + (int)sVar1;
          piVar2 = piVar2 + 1;
        } while (lVar11 != 0);
      }
      else {
        lVar11 = 0;
        piVar2 = (int *)(param_2 + 4);
        uVar4 = uVar10;
        do {
          psVar3 = (short *)(lVar7 + lVar11);
          uVar4 = uVar4 - 2;
          sVar1 = *(short *)(lVar9 + lVar11);
          lVar11 = lVar11 + uVar6 * 4;
          piVar2[-1] = piVar2[-1] + (int)*psVar3;
          *piVar2 = *piVar2 + (int)sVar1;
          piVar2 = piVar2 + 2;
        } while (uVar4 != 0);
        uVar4 = uVar10;
        if (uVar10 != uVar8) goto LAB_00e7d6c4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}


