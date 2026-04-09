// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: countAudioSource
// Entry Point: 00e3c948
// Size: 296 bytes
// Signature: undefined __thiscall countAudioSource(Soloud * this, AudioSource * param_1)


/* SoLoud::Soloud::countAudioSource(SoLoud::AudioSource&) */

int __thiscall SoLoud::Soloud::countAudioSource(Soloud *this,AudioSource *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  ulong extraout_x16;
  ulong uVar11;
  int iVar12;
  ulong extraout_x17;
  ulong uVar13;
  int iVar14;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  lockAudioMutex();
  uVar1 = *(uint *)(this + 0x54);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    iVar14 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (uVar1 == 1) {
      uVar6 = 0;
      iVar14 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffffe;
      iVar7 = 0;
      iVar14 = 0;
      plVar8 = (long *)(this + 0xa8);
      uVar9 = uVar6;
      uVar11 = extraout_x16;
      uVar13 = extraout_x17;
      do {
        iVar12 = (int)uVar13;
        iVar10 = (int)uVar11;
        lVar5 = plVar8[-1];
        if (lVar5 != 0) {
          iVar10 = *(int *)(lVar5 + 0x180);
        }
        lVar3 = *plVar8;
        if (lVar3 != 0) {
          iVar12 = *(int *)(lVar3 + 0x180);
        }
        plVar8 = plVar8 + 2;
        uVar13 = (ulong)(iVar12 == iVar2);
        uVar1 = (uint)(lVar3 != 0 && iVar12 == iVar2);
        uVar11 = (ulong)uVar1;
        iVar7 = iVar7 + (uint)(lVar5 != 0 && iVar10 == iVar2);
        iVar14 = iVar14 + uVar1;
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
      iVar14 = iVar14 + iVar7;
      if (uVar6 == uVar4) goto LAB_00e3ca24;
    }
    lVar5 = uVar4 - uVar6;
    plVar8 = (long *)(this + uVar6 * 8 + 0xa0);
    do {
      if ((*plVar8 != 0) && (*(int *)(*plVar8 + 0x180) == iVar2)) {
        iVar14 = iVar14 + 1;
      }
      plVar8 = plVar8 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
LAB_00e3ca24:
  unlockAudioMutex();
  return iVar14;
}


