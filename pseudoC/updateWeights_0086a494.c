// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWeights
// Entry Point: 0086a494
// Size: 516 bytes
// Signature: undefined __thiscall updateWeights(ConditionalAnimationBlending * this, ConditionalAnimationInformation * param_1, float param_2)


/* ConditionalAnimationBlending::updateWeights(ConditionalAnimationInformation const&, float) */

void __thiscall
ConditionalAnimationBlending::updateWeights
          (ConditionalAnimationBlending *this,ConditionalAnimationInformation *param_1,float param_2
          )

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ConditionalAnimationValue aCStack_78 [8];
  ConditionalAnimationValue aCStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ConditionalAnimationValue::ConditionalAnimationValue(aCStack_70);
  uVar2 = ConditionalAnimationInformation::getValue(param_1,*(uint *)this,aCStack_70);
  if (((uVar2 & 1) == 0) || (uVar2 = ConditionalAnimationValue::isFloat(), (uVar2 & 1) == 0))
  goto LAB_0086a660;
  fVar9 = (float)ConditionalAnimationValue::getFloat();
  fVar11 = *(float *)(this + 4);
  if (fVar11 <= fVar9) {
    fVar9 = (float)ConditionalAnimationValue::getFloat();
    fVar11 = *(float *)(this + 8);
    if (fVar9 <= fVar11) {
      fVar11 = (float)ConditionalAnimationValue::getFloat();
    }
  }
  lVar8 = *(long *)(this + 0x10);
  uVar2 = (*(long *)(this + 0x18) - lVar8 >> 3) * 0xb6db6db7;
  if ((int)uVar2 == 0) goto LAB_0086a660;
  uVar4 = uVar2 & 0xffffffff;
  if (uVar4 < 2) {
    lVar6 = 0;
LAB_0086a588:
    lVar5 = uVar4 - lVar6;
    puVar7 = (undefined4 *)(lVar8 + lVar6 * 0x38 + 0x30);
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 0xe;
    } while (lVar5 != 0);
  }
  else {
    lVar6 = uVar4 - (uVar2 & 1);
    puVar7 = (undefined4 *)(lVar8 + 0x68);
    lVar5 = lVar6;
    do {
      lVar5 = lVar5 + -2;
      puVar7[-0xe] = 0;
      *puVar7 = 0;
      puVar7 = puVar7 + 0x1c;
    } while (lVar5 != 0);
    if ((uVar2 & 1) != 0) goto LAB_0086a588;
  }
  if ((int)uVar2 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    lVar5 = 0;
    uVar4 = 1;
    if (uVar2 < 2) goto LAB_0086a610;
    do {
      fVar9 = *(float *)(lVar8 + lVar5 + 0x2c);
      if ((fVar9 <= fVar11) && (fVar10 = *(float *)(lVar8 + lVar5 + 100), fVar11 < fVar10)) {
        fVar9 = (fVar11 - fVar9) / (fVar10 - fVar9);
        *(float *)(lVar8 + lVar5 + 0x68) = fVar9 * param_2;
        *(float *)(lVar8 + lVar5 + 0x30) = (1.0 - fVar9) * param_2;
      }
      while( true ) {
        if (uVar2 * 0x38 + -0x38 == lVar5) goto LAB_0086a660;
        lVar8 = *(long *)(this + 0x10);
        lVar5 = lVar5 + 0x38;
        uVar4 = uVar4 + 1;
        if (uVar4 < uVar2) break;
LAB_0086a610:
        ConditionalAnimationValue::ConditionalAnimationValue(aCStack_78);
        ConditionalAnimationValue::setFloat(aCStack_78,*(float *)(lVar8 + lVar5 + 0x2c));
        uVar3 = ConditionalAnimationComparisons::compareValue(1,aCStack_70,aCStack_78);
        if ((uVar3 & 1) != 0) {
          *(float *)(lVar8 + lVar5 + 0x30) = param_2;
        }
      }
    } while( true );
  }
LAB_0086a660:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


