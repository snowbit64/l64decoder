// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVoiceToGroup
// Entry Point: 00e3f704
// Size: 384 bytes
// Signature: undefined __thiscall addVoiceToGroup(Soloud * this, uint param_1, uint param_2)


/* SoLoud::Soloud::addVoiceToGroup(unsigned int, unsigned int) */

undefined8 __thiscall SoLoud::Soloud::addVoiceToGroup(Soloud *this,uint param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if (0xffffefff < param_1) {
    plVar1 = (long *)(this + 0x214e0);
    uVar3 = param_1 & 0xfff;
    uVar8 = (ulong)uVar3;
    if (uVar3 < *(uint *)(this + 0x214e8)) {
      lockAudioMutex();
      lVar9 = *(long *)(*plVar1 + (ulong)uVar3 * 8);
      unlockAudioMutex();
      if (lVar9 != 0) {
        uVar4 = isValidVoiceHandle(this,param_2);
        if ((uVar4 & 1) != 0) {
          trimVoiceGroup(this,param_1);
          lockAudioMutex();
          lVar9 = *plVar1;
          puVar6 = *(uint **)(lVar9 + uVar8 * 8);
          uVar3 = *puVar6;
          if (1 < uVar3) {
            lVar7 = (ulong)uVar3 - 1;
            do {
              puVar5 = puVar6 + 1;
              if (*puVar5 == param_2) goto LAB_00e3f85c;
              if (*puVar5 == 0) {
                *puVar5 = param_2;
                puVar6[2] = 0;
                goto LAB_00e3f85c;
              }
              lVar7 = lVar7 + -1;
              puVar6 = puVar5;
            } while (lVar7 != 0);
          }
          puVar6 = (uint *)operator_new__((ulong)(uVar3 << 1 | 1) << 2);
          puVar5 = *(uint **)(lVar9 + uVar8 * 8);
          if (*puVar5 == 0) {
            uVar4 = 0;
          }
          else {
            *puVar6 = *puVar5;
            if (1 < *puVar5) {
              uVar4 = 1;
              do {
                uVar2 = uVar4 + 1;
                puVar6[uVar4] = puVar5[uVar4];
                uVar4 = uVar2;
              } while (uVar2 < *puVar5);
            }
            uVar4 = (ulong)*puVar6;
          }
          puVar6[uVar4] = param_2;
          puVar6[*puVar6 + 1] = 0;
          *puVar6 = *puVar6 << 1;
          operator_delete__(puVar5);
          *(uint **)(*plVar1 + uVar8 * 8) = puVar6;
LAB_00e3f85c:
          unlockAudioMutex();
        }
        return 0;
      }
    }
  }
  return 1;
}


