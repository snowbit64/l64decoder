// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: equilibrateItemsEndWeights
// Entry Point: 00865390
// Size: 424 bytes
// Signature: undefined equilibrateItemsEndWeights(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationPlayer::equilibrateItemsEndWeights() */

void ConditionalAnimationPlayer::equilibrateItemsEndWeights(void)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long in_x0;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float in_s0;
  float fVar13;
  float in_s1;
  
  lVar1 = *(long *)(in_x0 + 8);
  uVar6 = (*(long *)(in_x0 + 0x10) - lVar1 >> 3) * 0xbdef7bdf;
  if ((int)uVar6 == 0) {
    return;
  }
  uVar5 = uVar6 & 0xffffffff;
  if (uVar5 < 2) {
    lVar7 = 0;
    uVar10 = 0;
  }
  else {
    iVar11 = 0;
    lVar7 = uVar5 - (uVar6 & 1);
    iVar12 = 0;
    pfVar4 = (float *)(lVar1 + 0x130);
    lVar8 = lVar7;
    do {
      cVar3 = *(char *)(pfVar4 + -0x1d);
      if (cVar3 != '\0') {
        in_s0 = pfVar4[-0x3e];
      }
      cVar2 = *(char *)(pfVar4 + 0x21);
      if (cVar2 != '\0') {
        in_s1 = *pfVar4;
      }
      pfVar4 = pfVar4 + 0x7c;
      iVar11 = iVar11 + (uint)(cVar3 != '\0' && (cVar3 == '\0' || 0.0 < in_s0));
      lVar8 = lVar8 + -2;
      iVar12 = iVar12 + (uint)(cVar2 != '\0' && (cVar2 == '\0' || 0.0 < in_s1));
    } while (lVar8 != 0);
    uVar10 = iVar12 + iVar11;
    if ((uVar6 & 1) == 0) goto LAB_00865458;
  }
  lVar8 = uVar5 - lVar7;
  pcVar9 = (char *)(lVar1 + lVar7 * 0xf8 + 0xbc);
  do {
    if ((*pcVar9 != '\0') && (0.0 < *(float *)(pcVar9 + -0x84))) {
      uVar10 = uVar10 + 1;
    }
    pcVar9 = pcVar9 + 0xf8;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
LAB_00865458:
  if ((uVar10 != 0) && ((int)uVar6 != 0)) {
    fVar13 = (float)(ulong)uVar10;
    if (uVar5 < 2) {
      lVar7 = 0;
    }
    else {
      pfVar4 = (float *)(lVar1 + 0x130);
      lVar7 = uVar5 - (uVar6 & 1);
      lVar8 = lVar7;
      do {
        if (0.0 < pfVar4[-0x3e]) {
          pfVar4[-0x3e] = pfVar4[-0x3e] / fVar13;
        }
        if (0.0 < *pfVar4) {
          *pfVar4 = *pfVar4 / fVar13;
        }
        pfVar4 = pfVar4 + 0x7c;
        lVar8 = lVar8 + -2;
      } while (lVar8 != 0);
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
    lVar8 = uVar5 - lVar7;
    pfVar4 = (float *)(lVar1 + lVar7 * 0xf8 + 0x38);
    do {
      if (0.0 < *pfVar4) {
        *pfVar4 = *pfVar4 / fVar13;
      }
      pfVar4 = pfVar4 + 0x3e;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}


