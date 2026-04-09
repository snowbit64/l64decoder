// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWeights
// Entry Point: 00864b1c
// Size: 752 bytes
// Signature: undefined __cdecl updateWeights(float param_1, ConditionalAnimationInformation * param_2, vector * param_3)


/* ConditionalAnimationPlayer::updateWeights(float, ConditionalAnimationInformation const&,
   std::__ndk1::vector<ConditionalAnimationTracks::Track,
   std::__ndk1::allocator<ConditionalAnimationTracks::Track> >&) */

void ConditionalAnimationPlayer::updateWeights
               (float param_1,ConditionalAnimationInformation *param_2,vector *param_3)

{
  ConditionalAnimationItem *this;
  char cVar1;
  char cVar2;
  vector *in_x2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float in_s1;
  
  lVar3 = *(long *)(param_2 + 8);
  uVar4 = (*(long *)(param_2 + 0x10) - lVar3 >> 3) * 0xbdef7bdf;
  if ((int)uVar4 == 0) {
    return;
  }
  uVar5 = uVar4 & 0xffffffff;
  if (uVar5 < 2) {
    lVar6 = 0;
    uVar10 = 0;
LAB_00864c24:
    lVar7 = uVar5 - lVar6;
    pcVar9 = (char *)(lVar3 + lVar6 * 0xf8 + 0xbc);
    do {
      if ((*pcVar9 != '\0') && (0.0 < *(float *)(pcVar9 + -0x84))) {
        uVar10 = uVar10 + 1;
      }
      lVar7 = lVar7 + -1;
      pcVar9 = pcVar9 + 0xf8;
    } while (lVar7 != 0);
  }
  else {
    iVar11 = 0;
    lVar6 = uVar5 - (uVar4 & 1);
    iVar12 = 0;
    pfVar8 = (float *)(lVar3 + 0x130);
    lVar7 = lVar6;
    fVar13 = param_1;
    do {
      cVar2 = *(char *)(pfVar8 + -0x1d);
      if (cVar2 != '\0') {
        fVar13 = pfVar8[-0x3e];
      }
      cVar1 = *(char *)(pfVar8 + 0x21);
      if (cVar1 != '\0') {
        in_s1 = *pfVar8;
      }
      pfVar8 = pfVar8 + 0x7c;
      iVar11 = iVar11 + (uint)(cVar2 != '\0' && (cVar2 == '\0' || 0.0 < fVar13));
      lVar7 = lVar7 + -2;
      iVar12 = iVar12 + (uint)(cVar1 != '\0' && (cVar1 == '\0' || 0.0 < in_s1));
    } while (lVar7 != 0);
    uVar10 = iVar12 + iVar11;
    if ((uVar4 & 1) != 0) goto LAB_00864c24;
  }
  if (uVar10 != 0) {
    fVar13 = (float)(ulong)uVar10;
    if (uVar5 < 2) {
      lVar6 = 0;
    }
    else {
      pfVar8 = (float *)(lVar3 + 0x130);
      lVar6 = uVar5 - (uVar4 & 1);
      lVar7 = lVar6;
      do {
        if (0.0 < pfVar8[-0x3e]) {
          pfVar8[-0x3e] = pfVar8[-0x3e] / fVar13;
        }
        if (0.0 < *pfVar8) {
          *pfVar8 = *pfVar8 / fVar13;
        }
        pfVar8 = pfVar8 + 0x7c;
        lVar7 = lVar7 + -2;
      } while (lVar7 != 0);
      if ((uVar4 & 1) == 0) goto LAB_00864cac;
    }
    lVar7 = uVar5 - lVar6;
    pfVar8 = (float *)(lVar3 + lVar6 * 0xf8 + 0x38);
    do {
      if (0.0 < *pfVar8) {
        *pfVar8 = *pfVar8 / fVar13;
      }
      lVar7 = lVar7 + -1;
      pfVar8 = pfVar8 + 0x3e;
    } while (lVar7 != 0);
  }
LAB_00864cac:
  if ((int)uVar4 != 0) {
    lVar7 = 0;
    while( true ) {
      this = (ConditionalAnimationItem *)(lVar3 + lVar7);
      if (this[0xbc] != (ConditionalAnimationItem)0x0) {
        ConditionalAnimationItem::updateTransition(this,param_1);
        ConditionalAnimationItem::updateBlendingNodeWeights
                  (this,(ConditionalAnimationInformation *)param_3);
        ConditionalAnimationItem::getAnimationsToPlay(this,in_x2);
      }
      if ((uVar4 & 0xffffffff) * 0xf8 + -0xf8 == lVar7) break;
      lVar3 = *(long *)(param_2 + 8);
      lVar7 = lVar7 + 0xf8;
    }
    lVar3 = *(long *)(param_2 + 8);
    uVar4 = (*(long *)(param_2 + 0x10) - lVar3 >> 3) * 0xbdef7bdf;
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      fVar13 = 0.0;
      lVar7 = 0;
      while( true ) {
        if (*(char *)(lVar3 + lVar7 + 0xbc) != '\0') {
          fVar14 = (float)ConditionalAnimationItem::getCurrentWeightFromItem();
          fVar13 = fVar13 + fVar14;
        }
        if (uVar4 * 0xf8 + -0xf8 == lVar7) break;
        lVar3 = *(long *)(param_2 + 8);
        lVar7 = lVar7 + 0xf8;
      }
      if ((0.0 < fVar13) && (fVar13 != 1.0)) {
        lVar3 = 0;
        do {
          if (((ConditionalAnimationItem *)(*(long *)(param_2 + 8) + lVar3))[0xbc] !=
              (ConditionalAnimationItem)0x0) {
            ConditionalAnimationItem::scaleWeight
                      ((ConditionalAnimationItem *)(*(long *)(param_2 + 8) + lVar3),1.0 / fVar13);
          }
          lVar3 = lVar3 + 0xf8;
        } while (uVar4 * 0xf8 - lVar3 != 0);
      }
    }
  }
  return;
}


