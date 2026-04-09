// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcMarkBoxArea
// Entry Point: 00ddb97c
// Size: 468 bytes
// Signature: undefined __cdecl rcMarkBoxArea(rcContext * param_1, float * param_2, float * param_3, uchar param_4, rcCompactHeightfield * param_5)


/* rcMarkBoxArea(rcContext*, float const*, float const*, unsigned char, rcCompactHeightfield&) */

void rcMarkBoxArea(rcContext *param_1,float *param_2,float *param_3,uchar param_4,
                  rcCompactHeightfield *param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0xe);
  }
  fVar16 = *(float *)(param_5 + 0x34);
  uVar9 = (uint)((*param_3 - *(float *)(param_5 + 0x1c)) / fVar16);
  if (-1 < (int)uVar9) {
    iVar2 = *(int *)param_5;
    uVar11 = (uint)((*param_2 - *(float *)(param_5 + 0x1c)) / fVar16);
    if ((int)uVar11 < iVar2) {
      uVar12 = (uint)((param_3[2] - *(float *)(param_5 + 0x24)) / fVar16);
      if (-1 < (int)uVar12) {
        iVar3 = *(int *)(param_5 + 4);
        uVar10 = (uint)((param_2[2] - *(float *)(param_5 + 0x24)) / fVar16);
        if ((int)uVar10 < iVar3) {
          if (iVar2 <= (int)uVar9) {
            uVar9 = iVar2 - 1;
          }
          uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          if (iVar3 <= (int)uVar12) {
            uVar12 = iVar3 - 1;
          }
          if (((int)uVar10 <= (int)uVar12) &&
             (uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU), (int)uVar11 <= (int)uVar9)) {
            fVar16 = param_2[1];
            fVar17 = *(float *)(param_5 + 0x20);
            fVar18 = *(float *)(param_5 + 0x38);
            uVar13 = (uint)((param_3[1] - fVar17) / fVar18);
            uVar4 = uVar11;
            do {
              uVar8 = *(uint *)(*(long *)(param_5 + 0x40) +
                               (long)(int)(uVar4 + *(int *)param_5 * uVar10) * 4);
              if (uVar8 >> 0x18 != 0) {
                uVar14 = (ulong)uVar8 & 0xffffff;
                uVar1 = uVar14 + (uVar8 >> 0x18);
                lVar15 = uVar14 << 3;
                do {
                  bVar5 = false;
                  bVar6 = false;
                  bVar7 = false;
                  if ((int)((fVar16 - fVar17) / fVar18) <=
                      (int)(uint)*(ushort *)(*(long *)(param_5 + 0x48) + lVar15)) {
                    uVar8 = (uint)*(ushort *)(*(long *)(param_5 + 0x48) + lVar15);
                    bVar7 = SBORROW4(uVar8,uVar13);
                    bVar5 = (int)(uVar8 - uVar13) < 0;
                    bVar6 = uVar8 == uVar13;
                  }
                  if ((bVar6 || bVar5 != bVar7) &&
                     (*(char *)(*(long *)(param_5 + 0x58) + uVar14) != '\0')) {
                    *(uchar *)(*(long *)(param_5 + 0x58) + uVar14) = param_4;
                  }
                  uVar14 = uVar14 + 1;
                  lVar15 = lVar15 + 8;
                } while (uVar14 < uVar1);
              }
              bVar5 = uVar4 != uVar9;
              uVar4 = uVar4 + 1;
            } while ((bVar5) ||
                    (bVar5 = uVar10 != uVar12, uVar4 = uVar11, uVar10 = uVar10 + 1, bVar5));
          }
          if (param_1[9] != (rcContext)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ddbb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)param_1 + 0x30))(param_1,0xe);
            return;
          }
        }
      }
    }
  }
  return;
}


