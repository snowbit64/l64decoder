// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSplitContour
// Entry Point: 00b67da0
// Size: 908 bytes
// Signature: undefined __thiscall findSplitContour(Brep * this, vector * param_1, vector * param_2)


/* Brep::findSplitContour(std::__ndk1::vector<Brep::Split, std::__ndk1::allocator<Brep::Split> >&,
   std::__ndk1::vector<Brep::SplitTuple, std::__ndk1::allocator<Brep::SplitTuple> >&) */

bool __thiscall Brep::findSplitContour(Brep *this,vector *param_1,vector *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar12 = *(long *)param_2;
  lVar10 = *(long *)(param_2 + 8);
  uVar11 = (ulong)(uint)((int)((ulong)(lVar10 - lVar12) >> 2) * 0x286bca1b);
  piVar13 = (int *)(lVar12 + uVar11 * 0x4c);
  do {
    piVar13 = piVar13 + -0x13;
    if ((int)uVar11 < 1) goto LAB_00b67edc;
    uVar11 = uVar11 - 1;
    if (*piVar13 == 1) {
      lVar12 = lVar12 + (uVar11 & 0xffffffff) * 0x4c;
      goto LAB_00b67e6c;
    }
  } while (*piVar13 != 2);
  uVar14 = uVar11 & 0xffffffff;
  lVar10 = lVar12 + uVar14 * 0x4c;
  iVar2 = *(int *)(lVar10 + 0x14);
  iVar4 = iVar2 + -2;
  if ((iVar2 + 1U & 3) != 0) {
    iVar4 = iVar2 + 1;
  }
  if (iVar4 == *(int *)(lVar10 + 0x2c)) {
    FUN_00b681ac(param_1,lVar12 + uVar14 * 0x4c + 0x1c);
    lVar12 = *(long *)param_2 + uVar14 * 0x4c;
LAB_00b67e6c:
    lVar12 = lVar12 + 4;
  }
  else {
    FUN_00b681ac(param_1,lVar12 + uVar14 * 0x4c + 4);
    lVar12 = *(long *)param_2 + uVar14 * 0x4c + 0x1c;
  }
  FUN_00b681ac(param_1,lVar12);
  lVar12 = *(long *)(param_2 + 8);
  puVar9 = (undefined8 *)(*(long *)param_2 + (uVar11 & 0xffffffff) * 0x4c);
  uVar18 = *(undefined8 *)(lVar12 + -0x10);
  uVar20 = *(undefined8 *)(lVar12 + -0x14);
  uVar19 = *(undefined8 *)(lVar12 + -0x1c);
  uVar22 = *(undefined8 *)(lVar12 + -0x34);
  uVar21 = *(undefined8 *)(lVar12 + -0x3c);
  uVar24 = *(undefined8 *)(lVar12 + -0x24);
  uVar23 = *(undefined8 *)(lVar12 + -0x2c);
  *(undefined8 *)((long)puVar9 + 0x44) = *(undefined8 *)(lVar12 + -8);
  *(undefined8 *)((long)puVar9 + 0x3c) = uVar18;
  puVar9[3] = uVar22;
  puVar9[2] = uVar21;
  puVar9[5] = uVar24;
  puVar9[4] = uVar23;
  puVar9[7] = uVar20;
  puVar9[6] = uVar19;
  uVar18 = *(undefined8 *)(lVar12 + -0x4c);
  puVar9[1] = *(undefined8 *)(lVar12 + -0x44);
  *puVar9 = uVar18;
  lVar10 = *(long *)(param_2 + 8) + -0x4c;
  *(long *)(param_2 + 8) = lVar10;
LAB_00b67edc:
  lVar12 = *(long *)param_1;
  if (*(long *)(param_1 + 8) == lVar12) {
    if (lVar10 == *(long *)param_2) {
      bVar6 = false;
    }
    else {
      bVar6 = false;
      *(long *)(param_2 + 8) = *(long *)param_2;
    }
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0x10);
    uVar15 = uVar3 - 2;
    if ((uVar3 + 1 & 3) != 0) {
      uVar15 = uVar3 + 1;
    }
    uVar8 = *(uint *)(*(long *)(this + 0x2f68) + (ulong)*(uint *)(*(long *)(param_1 + 8) + -8) * 8 +
                     4);
    uVar1 = uVar3;
    if (*(float *)(lVar12 + 0xc) == 1.0) {
      uVar1 = uVar15;
    }
    if (uVar8 == uVar3 || uVar8 == uVar1) {
      bVar6 = true;
    }
    else {
LAB_00b67f5c:
      lVar12 = *(long *)param_2;
      uVar11 = (lVar10 - lVar12 >> 2) * 0x286bca1b;
      uVar15 = (uint)uVar11;
      if (uVar15 != 0) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          if (*(int *)(lVar12 + lVar10) == 1) {
            uVar17 = *(uint *)(lVar12 + lVar10 + 0x14);
            if (uVar17 == uVar8) {
              uVar17 = uVar8 - 2;
              if ((uVar8 + 1 & 3) != 0) {
                uVar17 = uVar8 + 1;
              }
              lVar12 = *(long *)(this + 0x2f68) + (ulong)uVar17 * 8;
              goto LAB_00b680a8;
            }
            uVar5 = uVar17 - 2;
            if ((uVar17 + 1 & 3) != 0) {
              uVar5 = uVar17 + 1;
            }
            if (uVar5 == uVar8) {
              lVar12 = *(long *)(this + 0x2f68) + (ulong)uVar17 * 8;
              goto LAB_00b680a8;
            }
          }
          else if (*(int *)(lVar12 + lVar10) == 2) {
            lVar7 = lVar12 + lVar10;
            uVar17 = *(uint *)(lVar7 + 0x14);
            if (uVar17 == uVar8) {
LAB_00b68068:
              lVar7 = lVar7 + 0x1c;
              goto LAB_00b68074;
            }
            if (*(float *)(lVar7 + 0x10) == 1.0) {
              uVar5 = uVar17 - 2;
              if ((uVar17 + 1 & 3) != 0) {
                uVar5 = uVar17 + 1;
              }
              if (uVar5 == uVar8) goto LAB_00b68068;
            }
            lVar7 = lVar12 + lVar10;
            uVar17 = *(uint *)(lVar7 + 0x2c);
            if (uVar17 == uVar8) goto LAB_00b68070;
            if (*(float *)(lVar7 + 0x28) == 1.0) {
              uVar5 = uVar17 - 2;
              if ((uVar17 + 1 & 3) != 0) {
                uVar5 = uVar17 + 1;
              }
              if (uVar5 == uVar8) goto LAB_00b68070;
            }
          }
          uVar16 = uVar16 + 1;
          lVar10 = lVar10 + 0x4c;
          uVar17 = uVar15;
          if ((uVar11 & 0xffffffff) * 0x4c - lVar10 == 0) goto LAB_00b680fc;
        } while( true );
      }
      uVar17 = 0;
LAB_00b680fc:
      bVar6 = uVar17 != uVar15;
    }
  }
  return bVar6;
LAB_00b68070:
  lVar7 = lVar7 + 4;
LAB_00b68074:
  FUN_00b681ac(param_1,lVar7);
  lVar12 = *(long *)(this + 0x2f68) + (ulong)*(uint *)(*(long *)(param_1 + 8) + -8) * 8;
LAB_00b680a8:
  uVar8 = *(uint *)(lVar12 + 4);
  uVar17 = uVar16;
  if (uVar16 == uVar15) goto LAB_00b680fc;
  lVar12 = *(long *)(param_2 + 8);
  puVar9 = (undefined8 *)(*(long *)param_2 + (ulong)uVar16 * 0x4c);
  uVar18 = *(undefined8 *)(lVar12 + -0x10);
  uVar20 = *(undefined8 *)(lVar12 + -0x14);
  uVar19 = *(undefined8 *)(lVar12 + -0x1c);
  uVar22 = *(undefined8 *)(lVar12 + -0x34);
  uVar21 = *(undefined8 *)(lVar12 + -0x3c);
  uVar24 = *(undefined8 *)(lVar12 + -0x24);
  uVar23 = *(undefined8 *)(lVar12 + -0x2c);
  *(undefined8 *)((long)puVar9 + 0x44) = *(undefined8 *)(lVar12 + -8);
  *(undefined8 *)((long)puVar9 + 0x3c) = uVar18;
  puVar9[3] = uVar22;
  puVar9[2] = uVar21;
  puVar9[5] = uVar24;
  puVar9[4] = uVar23;
  puVar9[7] = uVar20;
  puVar9[6] = uVar19;
  uVar18 = *(undefined8 *)(lVar12 + -0x4c);
  puVar9[1] = *(undefined8 *)(lVar12 + -0x44);
  *puVar9 = uVar18;
  lVar10 = *(long *)(param_2 + 8) + -0x4c;
  *(long *)(param_2 + 8) = lVar10;
  if ((uVar8 == uVar3) || (uVar8 == uVar1)) goto LAB_00b680fc;
  goto LAB_00b67f5c;
}


