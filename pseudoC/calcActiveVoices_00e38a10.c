// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcActiveVoices
// Entry Point: 00e38a10
// Size: 500 bytes
// Signature: undefined calcActiveVoices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::calcActiveVoices() */

void SoLoud::Soloud::calcActiveVoices(void)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long in_x0;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  int local_88 [24];
  long local_28;
  
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
  uVar5 = *(uint *)(in_x0 + 0x54);
  *(undefined *)(in_x0 + 0x224f0) = 0;
  if (uVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar11 = 0;
    uVar9 = 0;
    uVar10 = 0;
    do {
      lVar16 = *(long *)(in_x0 + uVar11 * 8 + 0xa0);
      if ((lVar16 != 0) &&
         ((*(uint *)(lVar16 + 0x14) & 0x12) == 0 || (*(uint *)(lVar16 + 0x14) & 0x40) != 0)) {
        uVar1 = (ulong)uVar9;
        uVar9 = uVar9 + 1;
        puVar3 = (undefined4 *)(in_x0 + uVar1 * 4 + 0x214ec);
        *puVar3 = (int)uVar11;
        if ((*(byte *)(lVar16 + 0x14) >> 6 & 1) != 0) {
          lVar16 = in_x0 + (ulong)uVar10 * 4;
          uVar10 = uVar10 + 1;
          *puVar3 = *(undefined4 *)(lVar16 + 0x214ec);
          *(int *)(lVar16 + 0x214ec) = (int)uVar11;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
    uVar5 = *(uint *)(in_x0 + 0x50);
    if (uVar5 < uVar9) {
      *(uint *)(in_x0 + 0x224ec) = uVar5;
      if (uVar10 < uVar5) {
        lVar16 = in_x0 + (ulong)uVar10 * 4;
        iVar17 = uVar9 - uVar10;
        uVar11 = 0;
        iVar14 = 0;
        lVar2 = lVar16 + 0x214ec;
        iVar13 = 1;
        lVar12 = 0;
        if (iVar17 < 2) goto LAB_00e38ba4;
        do {
          do {
            iVar19 = *(int *)(lVar2 + lVar12 * 4);
            iVar15 = (int)uVar11;
            iVar4 = 0;
            if (iVar15 != 0x18) {
              iVar4 = iVar15;
            }
            iVar18 = local_88[0];
            if (iVar15 != 0x18) {
              iVar18 = iVar17;
            }
            local_88[iVar4] = iVar18;
            fVar20 = *(float *)(*(long *)(in_x0 + (long)iVar19 * 8 + 0xa0) + 0x40);
            iVar19 = iVar14 + -1;
            while( true ) {
              puVar8 = (uint *)(lVar16 + 0x214f0 + (long)iVar19 * 4);
              do {
                puVar7 = puVar8;
                uVar9 = *puVar7;
                iVar19 = iVar19 + 1;
                puVar8 = puVar7 + 1;
              } while (fVar20 < *(float *)(*(long *)(in_x0 + (ulong)uVar9 * 8 + 0xa0) + 0x40));
              puVar8 = (uint *)(lVar2 + (long)iVar18 * 4);
              do {
                iVar17 = iVar18;
                puVar8 = puVar8 + -1;
                iVar18 = iVar17 + -1;
              } while (*(float *)(*(long *)(in_x0 + (ulong)*puVar8 * 8 + 0xa0) + 0x40) < fVar20);
              if (iVar18 <= iVar19) break;
              *puVar7 = *puVar8;
              *puVar8 = uVar9;
            }
            uVar11 = (ulong)(iVar4 + 1);
          } while (iVar13 < iVar17);
LAB_00e38ba4:
          do {
            iVar14 = iVar17;
            if (((int)uVar11 == 0) || ((int)uVar5 <= (int)lVar12)) goto LAB_00e38bdc;
            uVar11 = (long)(int)uVar11 - 1;
            iVar17 = local_88[uVar11];
            iVar13 = iVar14 + 1;
            lVar12 = (long)iVar14;
          } while (iVar17 <= iVar13);
        } while( true );
      }
      goto LAB_00e38be0;
    }
  }
  *(uint *)(in_x0 + 0x224ec) = uVar9;
LAB_00e38bdc:
  mapResampleBuffers();
LAB_00e38be0:
  if (*(long *)(lVar6 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


