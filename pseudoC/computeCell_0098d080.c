// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCell
// Entry Point: 0098d080
// Size: 836 bytes
// Signature: undefined __thiscall computeCell(PlayerCenteredCollisionHeightmap * this, uint param_1, uint param_2)


/* PlayerCenteredCollisionHeightmap::computeCell(unsigned int, unsigned int) */

void __thiscall
PlayerCenteredCollisionHeightmap::computeCell
          (PlayerCenteredCollisionHeightmap *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float *pfVar9;
  undefined uVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar5 = *(uint *)(this + 8);
  lVar4 = *(long *)(this + 0x28);
  pfVar9 = (float *)(lVar4 + (ulong)param_1 * 0xc + (ulong)(uVar5 * param_2) * 0xc);
  pfVar11 = pfVar9 + (ulong)uVar5 * 3;
  if (*(char *)(pfVar9 + 2) == '\0') {
    bVar8 = false;
    fVar13 = -1e+38;
  }
  else {
    bVar8 = true;
    fVar13 = *pfVar9;
    if (*pfVar9 <= -1e+38) {
      fVar13 = -1e+38;
    }
  }
  fVar15 = fVar13;
  if (*(char *)(pfVar9 + 5) != '\0') {
    bVar8 = true;
    fVar15 = pfVar9[3];
    if (pfVar9[3] <= fVar13) {
      fVar15 = fVar13;
    }
  }
  pfVar9 = (float *)(*(long *)(this + 0x30) + (ulong)param_1 * 8 +
                    (ulong)(*(int *)this * param_2) * 8);
  if (*(char *)(pfVar11 + 2) == '\0') {
    if (*(char *)(pfVar11 + 5) != '\0') goto LAB_0098d120;
    fVar13 = fVar15;
    if (!bVar8) {
      iVar2 = *(int *)(this + 0x1c);
      iVar3 = *(int *)(this + 0x20);
      iVar6 = (iVar2 + param_1 & 0xfffffffe) - iVar2;
      iVar7 = (iVar3 + param_2 & 0xfffffffe) - iVar3;
      bVar8 = false;
      if ((((-1 < iVar6) && (iVar6 < (int)uVar5)) && (-1 < iVar7)) && (iVar7 < *(int *)(this + 0xc))
         ) {
        uVar12 = (ulong)(iVar6 + iVar7 * uVar5);
        if (*(char *)(lVar4 + uVar12 * 0xc + 8) == '\0') {
          bVar8 = false;
        }
        else {
          fVar13 = *(float *)(lVar4 + uVar12 * 0xc);
          bVar8 = true;
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
        }
      }
      iVar1 = iVar6 + 2;
      fVar14 = fVar13;
      if (((-1 < iVar1) && (iVar1 < (int)uVar5)) &&
         ((-1 < iVar7 &&
          ((iVar7 < *(int *)(this + 0xc) &&
           (uVar12 = (ulong)(iVar1 + iVar7 * uVar5), *(char *)(lVar4 + uVar12 * 0xc + 8) != '\0'))))
         )) {
        fVar14 = *(float *)(lVar4 + uVar12 * 0xc);
        bVar8 = true;
        if (fVar14 <= fVar13) {
          fVar14 = fVar13;
        }
      }
      iVar7 = iVar7 + 2;
      fVar15 = fVar14;
      if ((((-1 < iVar6) && (iVar6 < (int)uVar5)) && (-1 < iVar7)) &&
         ((iVar7 < *(int *)(this + 0xc) &&
          (uVar12 = (ulong)(iVar6 + iVar7 * uVar5), *(char *)(lVar4 + uVar12 * 0xc + 8) != '\0'))))
      {
        fVar15 = *(float *)(lVar4 + uVar12 * 0xc);
        bVar8 = true;
        if (fVar15 <= fVar14) {
          fVar15 = fVar14;
        }
      }
      if (((iVar1 < 0) || ((int)uVar5 <= iVar1)) ||
         ((iVar7 < 0 ||
          ((*(int *)(this + 0xc) <= iVar7 ||
           (uVar12 = (ulong)(iVar1 + iVar7 * uVar5), *(char *)(lVar4 + uVar12 * 0xc + 8) == '\0'))))
         )) {
        fVar13 = fVar15;
        if (bVar8) goto LAB_0098d12c;
        iVar2 = (iVar2 + param_1 & 0xfffffffc) - iVar2;
        iVar3 = (iVar3 + param_2 & 0xfffffffc) - iVar3;
        uVar10 = 0;
        if ((((-1 < iVar2) && (iVar2 < (int)uVar5)) && (-1 < iVar3)) &&
           (iVar3 < *(int *)(this + 0xc))) {
          uVar12 = (ulong)(iVar2 + iVar3 * uVar5);
          if (*(char *)(lVar4 + uVar12 * 0xc + 8) == '\0') {
            uVar10 = 0;
          }
          else {
            fVar13 = *(float *)(lVar4 + uVar12 * 0xc);
            uVar10 = 1;
            if (fVar13 <= fVar15) {
              fVar13 = fVar15;
            }
          }
        }
        iVar7 = iVar2 + 4;
        fVar14 = fVar13;
        if (((-1 < iVar7) && (iVar7 < (int)uVar5)) &&
           ((-1 < iVar3 &&
            ((iVar3 < *(int *)(this + 0xc) &&
             (uVar12 = (ulong)(iVar7 + iVar3 * uVar5), *(char *)(lVar4 + uVar12 * 0xc + 8) != '\0'))
            )))) {
          fVar14 = *(float *)(lVar4 + uVar12 * 0xc);
          uVar10 = 1;
          if (fVar14 <= fVar13) {
            fVar14 = fVar13;
          }
        }
        iVar3 = iVar3 + 4;
        fVar15 = fVar14;
        if ((((-1 < iVar2) && (iVar2 < (int)uVar5)) && (-1 < iVar3)) &&
           ((iVar3 < *(int *)(this + 0xc) &&
            (uVar12 = (ulong)(iVar2 + iVar3 * uVar5), *(char *)(lVar4 + uVar12 * 0xc + 8) != '\0')))
           ) {
          fVar15 = *(float *)(lVar4 + uVar12 * 0xc);
          uVar10 = 1;
          if (fVar15 <= fVar14) {
            fVar15 = fVar14;
          }
        }
        if (((iVar7 < 0) || ((int)uVar5 <= iVar7)) ||
           ((iVar3 < 0 ||
            ((*(int *)(this + 0xc) <= iVar3 ||
             (uVar12 = (ulong)(iVar7 + iVar3 * uVar5), *(char *)(lVar4 + uVar12 * 0xc + 8) == '\0'))
            )))) goto LAB_0098d130;
      }
      fVar13 = *(float *)(lVar4 + uVar12 * 0xc);
      goto LAB_0098d124;
    }
  }
  else {
    fVar13 = *pfVar11;
    if (*pfVar11 <= fVar15) {
      fVar13 = fVar15;
    }
    fVar15 = fVar13;
    if (*(char *)(pfVar11 + 5) == '\0') goto LAB_0098d12c;
LAB_0098d120:
    fVar13 = pfVar11[3];
LAB_0098d124:
    if (fVar13 <= fVar15) {
      fVar13 = fVar15;
    }
  }
LAB_0098d12c:
  fVar15 = fVar13;
  uVar10 = 1;
LAB_0098d130:
  *(undefined *)(pfVar9 + 1) = uVar10;
  *pfVar9 = fVar15;
  return;
}


