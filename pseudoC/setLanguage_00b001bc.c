// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLanguage
// Entry Point: 00b001bc
// Size: 192 bytes
// Signature: undefined __thiscall setLanguage(LocalizationManager * this, LANGUAGE_TYPE param_1)


/* LocalizationManager::setLanguage(LanguageUtil::LANGUAGE_TYPE) */

ulong __thiscall LocalizationManager::setLanguage(LocalizationManager *this,LANGUAGE_TYPE param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (uVar2 == 0) {
LAB_00b00274:
    return uVar2 & 0xffffffff;
  }
  uVar3 = (ulong)param_1;
  uVar9 = NEON_cnt(uVar2,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
  if ((uVar10 & 0xffffffff) < 2) {
    uVar4 = (ulong)((int)uVar2 - 1U & param_1);
  }
  else {
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      uVar4 = uVar3 - uVar4 * uVar2;
    }
  }
  pplVar5 = *(long ***)(*(long *)(this + 8) + uVar4 * 8);
  if ((pplVar5 != (long **)0x0) && (plVar6 = *pplVar5, plVar6 != (long *)0x0)) {
    do {
      uVar7 = plVar6[1];
      if (uVar7 == uVar3) {
        if (*(LANGUAGE_TYPE *)(plVar6 + 2) == param_1) {
          uVar2 = 1;
          *(LANGUAGE_TYPE *)this = param_1;
          goto LAB_00b00274;
        }
      }
      else {
        if ((uVar10 & 0xffffffff) < 2) {
          uVar7 = uVar7 & uVar2 - 1;
        }
        else if (uVar2 <= uVar7) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar7 / uVar2;
          }
          uVar7 = uVar7 - uVar1 * uVar2;
        }
        if (uVar7 != uVar4) {
          return 0;
        }
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return 0;
}


