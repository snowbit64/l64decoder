// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: trimVoiceGroup
// Entry Point: 00e3f884
// Size: 300 bytes
// Signature: undefined __thiscall trimVoiceGroup(Soloud * this, uint param_1)


/* SoLoud::Soloud::trimVoiceGroup(unsigned int) */

void __thiscall SoLoud::Soloud::trimVoiceGroup(Soloud *this,uint param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (0xffffefff < param_1) {
    plVar1 = (long *)(this + 0x214e0);
    uVar3 = param_1 & 0xfff;
    uVar7 = (ulong)uVar3;
    if (uVar3 < *(uint *)(this + 0x214e8)) {
      lockAudioMutex();
      lVar8 = *(long *)(*plVar1 + (ulong)uVar3 * 8);
      unlockAudioMutex();
      if (lVar8 != 0) {
        lockAudioMutex();
        puVar4 = *(uint **)(*plVar1 + uVar7 * 8);
        uVar3 = puVar4[1];
        if ((uVar3 != 0) && (1 < *puVar4)) {
          uVar9 = 0;
          uVar10 = 1;
          do {
            while (uVar2 = isValidVoiceHandleLocked(this,uVar3), (uVar2 & 1) == 0) {
              piVar5 = *(int **)(*plVar1 + uVar7 * 8);
              uVar2 = uVar9;
              do {
                uVar6 = (ulong)(*piVar5 - 1);
                if (uVar6 <= uVar2 + 1) goto LAB_00e3f908;
                lVar8 = uVar2 + 2;
                piVar5[uVar2 + 1] = piVar5[lVar8];
                uVar2 = uVar2 + 1;
              } while (piVar5[lVar8] != 0);
              uVar6 = (ulong)(*piVar5 - 1);
LAB_00e3f908:
              piVar5[uVar6] = 0;
              uVar3 = piVar5[uVar10];
              if (uVar3 == 0) goto LAB_00e3f984;
            }
            uVar3 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar3;
            puVar4 = *(uint **)(*plVar1 + uVar7 * 8);
            if (*puVar4 <= uVar3) break;
            uVar3 = puVar4[uVar3];
            uVar9 = uVar9 + 1;
          } while (uVar3 != 0);
        }
LAB_00e3f984:
        unlockAudioMutex();
        return;
      }
    }
  }
  return;
}


