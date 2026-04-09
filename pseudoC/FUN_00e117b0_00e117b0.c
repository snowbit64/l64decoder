// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e117b0
// Entry Point: 00e117b0
// Size: 508 bytes
// Signature: undefined FUN_00e117b0(void)


long FUN_00e117b0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong *puVar17;
  float fVar18;
  int iVar19;
  
  lVar16 = *(long *)(param_2 + 0x18);
  lVar8 = param_1 + 8;
  iVar5 = oggpack_read(lVar8,*(undefined4 *)(lVar16 + 0x18));
  if (0 < iVar5) {
    uVar3 = *(uint *)(lVar16 + 0x18);
    iVar19 = *(int *)(lVar16 + 0x1c);
    uVar6 = ov_ilog(*(undefined4 *)(lVar16 + 0x20));
    uVar7 = oggpack_read(lVar8,uVar6);
    if ((uVar7 != 0xffffffff) && ((int)uVar7 < *(int *)(lVar16 + 0x20))) {
      puVar17 = (ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x30) +
                                   0x1328) +
                         (long)*(int *)(lVar16 + ((long)((ulong)uVar7 << 0x20) >> 0x1e) + 0x24) *
                         0x60);
      lVar16 = _vorbis_block_alloc(param_1,(*puVar17 + (long)*(int *)(param_2 + 4)) * 4 + 4);
      lVar8 = vorbis_book_decodev_set(puVar17,lVar16,lVar8,*(undefined4 *)(param_2 + 4));
      if (lVar8 != -1) {
        iVar4 = *(int *)(param_2 + 4);
        if (0 < iVar4) {
          fVar18 = 0.0;
          lVar8 = 0;
          do {
            iVar9 = (int)lVar8;
            if (iVar9 < iVar4) {
              uVar10 = *puVar17;
              uVar11 = (ulong)(uint)(iVar4 - iVar9) - 1;
              lVar14 = (long)iVar9;
              if ((long)uVar10 < 1) {
                uVar10 = 0;
              }
              uVar1 = uVar10;
              if (uVar11 <= uVar10) {
                uVar1 = uVar11;
              }
              if (uVar1 < 8) {
                lVar12 = 0;
                lVar8 = lVar14;
              }
              else {
                uVar11 = uVar1 + 1;
                uVar2 = 8;
                if ((uVar11 & 7) != 0) {
                  uVar2 = uVar11 & 7;
                }
                lVar12 = uVar11 - uVar2;
                lVar13 = ~uVar1 + uVar2;
                lVar8 = lVar12 + lVar14;
                puVar15 = (undefined8 *)(lVar16 + 0x10 + lVar14 * 4);
                do {
                  lVar13 = lVar13 + 8;
                  puVar15[-1] = CONCAT44(fVar18 + (float)((ulong)puVar15[-1] >> 0x20),
                                         fVar18 + (float)puVar15[-1]);
                  puVar15[-2] = CONCAT44(fVar18 + (float)((ulong)puVar15[-2] >> 0x20),
                                         fVar18 + (float)puVar15[-2]);
                  puVar15[1] = CONCAT44(fVar18 + (float)((ulong)puVar15[1] >> 0x20),
                                        fVar18 + (float)puVar15[1]);
                  *puVar15 = CONCAT44(fVar18 + (float)((ulong)*puVar15 >> 0x20),
                                      fVar18 + (float)*puVar15);
                  puVar15 = puVar15 + 4;
                } while (lVar13 != 0);
              }
              lVar14 = uVar10 - lVar12;
              lVar12 = (ulong)(uint)(iVar4 - iVar9) - lVar12;
              do {
                if (lVar14 == 0) break;
                lVar13 = lVar8 * 4;
                lVar8 = lVar8 + 1;
                lVar14 = lVar14 + -1;
                lVar12 = lVar12 + -1;
                *(float *)(lVar16 + lVar13) = fVar18 + *(float *)(lVar16 + lVar13);
              } while (lVar12 != 0);
            }
            fVar18 = *(float *)(lVar16 + (long)((int)lVar8 + -1) * 4);
          } while ((int)lVar8 < iVar4);
        }
        *(float *)(lVar16 + (long)iVar4 * 4) =
             ((float)iVar5 / (float)~(-1 << (ulong)(uVar3 & 0x1f))) * (float)iVar19;
        return lVar16;
      }
    }
  }
  return 0;
}


