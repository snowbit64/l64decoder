// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compareValue
// Entry Point: 0086d858
// Size: 404 bytes
// Signature: undefined __cdecl compareValue(COMPARE_OPERATION param_1, ConditionalAnimationValue * param_2, ConditionalAnimationValue * param_3)


/* ConditionalAnimationComparisons::compareValue(ConditionalAnimationComparison::COMPARE_OPERATION,
   ConditionalAnimationValue const&, ConditionalAnimationValue const&) */

byte ConditionalAnimationComparisons::compareValue
               (COMPARE_OPERATION param_1,ConditionalAnimationValue *param_2,
               ConditionalAnimationValue *param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = ConditionalAnimationValue::sameTag(param_2,param_3);
  if ((uVar3 & 1) != 0) {
    uVar3 = ConditionalAnimationValue::isBool();
    if ((uVar3 & 1) == 0) {
      uVar3 = ConditionalAnimationValue::isFloat();
      if ((uVar3 & 1) != 0) {
        switch(param_1) {
        case 0:
          fVar4 = (float)ConditionalAnimationValue::getFloat();
          fVar5 = (float)ConditionalAnimationValue::getFloat();
          bVar1 = fVar5 < fVar4;
          break;
        case 1:
          fVar4 = (float)ConditionalAnimationValue::getFloat();
          fVar5 = (float)ConditionalAnimationValue::getFloat();
          bVar1 = fVar5 <= fVar4;
          break;
        case 2:
          fVar4 = (float)ConditionalAnimationValue::getFloat();
          fVar5 = (float)ConditionalAnimationValue::getFloat();
          bVar1 = fVar4 < fVar5;
          break;
        case 3:
          fVar4 = (float)ConditionalAnimationValue::getFloat();
          fVar5 = (float)ConditionalAnimationValue::getFloat();
          bVar1 = fVar4 <= fVar5;
          break;
        case 4:
          fVar4 = (float)ConditionalAnimationValue::getFloat();
          fVar5 = (float)ConditionalAnimationValue::getFloat();
          bVar1 = fVar4 == fVar5;
          break;
        case 5:
          fVar4 = (float)ConditionalAnimationValue::getFloat();
          fVar5 = (float)ConditionalAnimationValue::getFloat();
          bVar1 = fVar4 != fVar5;
          break;
        default:
          goto switchD_0086d8f0_caseD_6;
        }
        goto LAB_0086d918;
      }
    }
    else {
      if (param_1 == 5) {
        bVar1 = ConditionalAnimationValue::getBool();
        bVar2 = ConditionalAnimationValue::getBool();
        bVar1 = bVar1 ^ bVar2;
        goto LAB_0086d918;
      }
      if (param_1 == 4) {
        bVar1 = ConditionalAnimationValue::getBool();
        bVar2 = ConditionalAnimationValue::getBool();
        bVar1 = bVar1 ^ bVar2 ^ 1;
        goto LAB_0086d918;
      }
    }
  }
switchD_0086d8f0_caseD_6:
  bVar1 = 0;
LAB_0086d918:
  return bVar1 & 1;
}


