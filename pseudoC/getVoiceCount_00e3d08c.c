// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVoiceCount
// Entry Point: 00e3d08c
// Size: 204 bytes
// Signature: undefined getVoiceCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::getVoiceCount() */

int SoLoud::Soloud::getVoiceCount(void)

{
  uint uVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined (*pauVar5) [16];
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  
  lockAudioMutex();
  uVar1 = *(uint *)(in_x0 + 0x54);
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    iVar8 = 0;
  }
  else {
    if (uVar1 < 8) {
      uVar4 = 0;
      iVar8 = 0;
    }
    else {
      uVar4 = uVar2 & 0xfffffff8;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      pauVar5 = (undefined (*) [16])(in_x0 + 0xc0);
      uVar7 = uVar4;
      do {
        uVar7 = uVar7 - 8;
        auVar16 = NEON_cmtst(pauVar5[-2],pauVar5[-2],8);
        auVar17 = NEON_cmtst(pauVar5[-1],pauVar5[-1],8);
        auVar18 = NEON_cmtst(*pauVar5,*pauVar5,8);
        auVar19 = NEON_cmtst(pauVar5[1],pauVar5[1],8);
        iVar8 = iVar8 - auVar16._0_4_;
        iVar9 = iVar9 - auVar16._8_4_;
        iVar10 = iVar10 - auVar17._0_4_;
        iVar11 = iVar11 - auVar17._8_4_;
        iVar12 = iVar12 - auVar18._0_4_;
        iVar13 = iVar13 - auVar18._8_4_;
        iVar14 = iVar14 - auVar19._0_4_;
        iVar15 = iVar15 - auVar19._8_4_;
        pauVar5 = pauVar5 + 4;
      } while (uVar7 != 0);
      iVar8 = iVar12 + iVar8 + iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11;
      if (uVar4 == uVar2) goto LAB_00e3d140;
    }
    lVar3 = uVar2 - uVar4;
    plVar6 = (long *)(in_x0 + uVar4 * 8 + 0xa0);
    do {
      if (*plVar6 != 0) {
        iVar8 = iVar8 + 1;
      }
      lVar3 = lVar3 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar3 != 0);
  }
LAB_00e3d140:
  unlockAudioMutex();
  return iVar8;
}


