// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTransition
// Entry Point: 00868418
// Size: 300 bytes
// Signature: undefined __thiscall updateTransition(ConditionalAnimationItem * this, float param_1)


/* ConditionalAnimationItem::updateTransition(float) */

void __thiscall
ConditionalAnimationItem::updateTransition(ConditionalAnimationItem *this,float param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  fVar9 = *(float *)(this + 0x3c);
  if ((0.0 <= fVar9) && (0.0 < *(float *)(this + 0x40))) {
    fVar7 = fVar9 - param_1;
    fVar9 = 0.0;
    if (0.0 < fVar7) {
      fVar9 = fVar7;
    }
    *(float *)(this + 0x3c) = fVar9;
    uVar8 = NEON_fmadd(*(float *)(this + 0x38) - *(float *)(this + 0x34),
                       1.0 - fVar9 / *(float *)(this + 0x40),*(float *)(this + 0x34));
    *(undefined4 *)(this + 0x30) = uVar8;
  }
  if ((fVar9 != 0.0) || (*(float *)(this + 0x30) != 0.0)) {
    return;
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  ConditionalAnimationBlending::resetWeights();
  lVar1 = *(long *)(this + 0xd8);
  this[0xbc] = (ConditionalAnimationItem)0x0;
  *(undefined4 *)(this + 0xf0) = 0;
  uVar5 = (*(long *)(this + 0xe0) - lVar1 >> 3) * -0x5555555555555555;
  if ((int)uVar5 != 0) {
    uVar3 = uVar5 & 0xffffffff;
    if (uVar3 < 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = uVar3 - (uVar5 & 1);
      puVar4 = (undefined4 *)(lVar1 + 0x1c);
      lVar2 = lVar6;
      do {
        lVar2 = lVar2 + -2;
        puVar4[-6] = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 0xc;
      } while (lVar2 != 0);
      if ((uVar5 & 1) == 0) goto LAB_0086851c;
    }
    lVar2 = uVar3 - lVar6;
    puVar4 = (undefined4 *)(lVar1 + lVar6 * 0x18 + 4);
    do {
      lVar2 = lVar2 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 6;
    } while (lVar2 != 0);
  }
LAB_0086851c:
  if (this[0xc] != (ConditionalAnimationItem)0x0) {
    ConditionalAnimationBlending::resetClip();
    return;
  }
  ConditionalAnimationClipInfo::reset();
  return;
}


