// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleWeight
// Entry Point: 0086a6b8
// Size: 148 bytes
// Signature: undefined __thiscall scaleWeight(ConditionalAnimationBlending * this, float param_1)


/* ConditionalAnimationBlending::scaleWeight(float) */

void __thiscall
ConditionalAnimationBlending::scaleWeight(ConditionalAnimationBlending *this,float param_1)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = *(long *)(this + 0x10);
  uVar5 = (*(long *)(this + 0x18) - lVar1 >> 3) * 0xb6db6db7;
  if ((int)uVar5 != 0) {
    uVar3 = uVar5 & 0xffffffff;
    if (uVar3 < 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = uVar3 - (uVar5 & 1);
      pfVar2 = (float *)(lVar1 + 0x68);
      lVar4 = lVar6;
      do {
        lVar4 = lVar4 + -2;
        pfVar2[-0xe] = pfVar2[-0xe] * param_1;
        *pfVar2 = *pfVar2 * param_1;
        pfVar2 = pfVar2 + 0x1c;
      } while (lVar4 != 0);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    lVar4 = uVar3 - lVar6;
    pfVar2 = (float *)(lVar1 + lVar6 * 0x38 + 0x30);
    do {
      lVar4 = lVar4 + -1;
      *pfVar2 = *pfVar2 * param_1;
      pfVar2 = pfVar2 + 0xe;
    } while (lVar4 != 0);
  }
  return;
}


