// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSolver
// Entry Point: 00f755f8
// Size: 3120 bytes
// Signature: undefined __thiscall setSolver(btSoftBody * this, _ param_1)


/* btSoftBody::setSolver(btSoftBody::eSolverPresets::_) */

void __thiscall btSoftBody::setSolver(btSoftBody *this,_ param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar9 = (undefined8 *)(this + 0x1e4);
  if ((*(long *)(this + 0x1f0) != 0) && (this[0x1f8] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x1f0) = 0;
  *puVar9 = 0;
  this[0x1f8] = (btSoftBody)0x1;
  if ((*(long *)(this + 0x210) != 0) && (this[0x218] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x218] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x210) = 0;
  puVar14 = (uint *)(this + 0x204);
  *puVar14 = 0;
  *(undefined4 *)(this + 0x208) = 0;
  if ((*(long *)(this + 0x230) != 0) && (this[0x238] != (btSoftBody)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  puVar13 = (ulong *)(this + 0x210);
  *(undefined8 *)(this + 0x230) = 0;
  puVar17 = (uint *)(this + 0x224);
  *puVar17 = 0;
  *(undefined4 *)(this + 0x228) = 0;
  this[0x238] = (btSoftBody)0x1;
  if (param_1 == 1) {
    uVar19 = *(uint *)(this + 0x1e4);
    if (uVar19 == *(uint *)(this + 0x1e8)) {
      uVar16 = uVar19 << 1;
      if (uVar19 == 0) {
        uVar16 = 1;
      }
      if ((int)uVar19 < (int)uVar16) {
        if (uVar16 == 0) {
          uVar18 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          uVar18 = (*(code *)PTR_FUN_01048e38)
                             (-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2,
                              0x10);
          uVar19 = *(uint *)puVar9;
        }
        uVar2 = *(ulong *)(this + 0x1f0);
        if ((int)uVar19 < 1) {
          if (uVar2 != 0) goto LAB_00f759e0;
        }
        else {
          uVar3 = (ulong)uVar19;
          if ((uVar19 < 8) || ((uVar18 < uVar2 + uVar3 * 4 && (uVar2 < uVar18 + uVar3 * 4)))) {
            uVar4 = 0;
          }
          else {
            uVar4 = uVar3 & 0xfffffff8;
            puVar10 = (undefined8 *)(uVar2 + 0x10);
            puVar11 = (undefined8 *)(uVar18 + 0x10);
            uVar7 = uVar4;
            do {
              puVar1 = puVar10 + -1;
              uVar20 = puVar10[-2];
              uVar22 = puVar10[1];
              uVar21 = *puVar10;
              uVar7 = uVar7 - 8;
              puVar10 = puVar10 + 4;
              puVar11[-1] = *puVar1;
              puVar11[-2] = uVar20;
              puVar11[1] = uVar22;
              *puVar11 = uVar21;
              puVar11 = puVar11 + 4;
            } while (uVar7 != 0);
            if (uVar4 == uVar3) goto LAB_00f759e0;
          }
          lVar5 = uVar3 - uVar4;
          puVar6 = (undefined4 *)(uVar2 + uVar4 * 4);
          puVar8 = (undefined4 *)(uVar18 + uVar4 * 4);
          do {
            lVar5 = lVar5 + -1;
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar5 != 0);
LAB_00f759e0:
          if (this[0x1f8] != (btSoftBody)0x0) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar19 = *(uint *)puVar9;
          }
        }
        *(ulong *)(this + 0x1f0) = uVar18;
        *(uint *)(this + 0x1e8) = uVar16;
        this[0x1f8] = (btSoftBody)0x1;
      }
    }
    uVar15 = *(uint *)(this + 0x204);
    uVar16 = *(uint *)(this + 0x208);
    uVar18 = (ulong)uVar16;
    *(uint *)(this + 0x1e4) = uVar19 + 1;
    *(undefined4 *)(*(long *)(this + 0x1f0) + (long)(int)uVar19 * 4) = 0;
    if (uVar15 == uVar16) {
      uVar19 = uVar15 << 1;
      if (uVar15 == 0) {
        uVar19 = 1;
      }
      uVar18 = (ulong)uVar19;
      if ((int)uVar15 < (int)uVar19) {
        if (uVar19 == 0) {
          uVar2 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          uVar2 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2,0x10);
          uVar15 = *puVar14;
        }
        uVar3 = *puVar13;
        if ((int)uVar15 < 1) {
          if (uVar3 != 0) goto LAB_00f75c64;
        }
        else {
          uVar4 = (ulong)uVar15;
          if ((uVar15 < 8) || ((uVar2 < uVar3 + uVar4 * 4 && (uVar3 < uVar2 + uVar4 * 4)))) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar4 & 0xfffffff8;
            puVar9 = (undefined8 *)(uVar3 + 0x10);
            puVar10 = (undefined8 *)(uVar2 + 0x10);
            uVar12 = uVar7;
            do {
              puVar11 = puVar9 + -1;
              uVar20 = puVar9[-2];
              uVar22 = puVar9[1];
              uVar21 = *puVar9;
              uVar12 = uVar12 - 8;
              puVar9 = puVar9 + 4;
              puVar10[-1] = *puVar11;
              puVar10[-2] = uVar20;
              puVar10[1] = uVar22;
              *puVar10 = uVar21;
              puVar10 = puVar10 + 4;
            } while (uVar12 != 0);
            if (uVar7 == uVar4) goto LAB_00f75c64;
          }
          lVar5 = uVar4 - uVar7;
          puVar6 = (undefined4 *)(uVar3 + uVar7 * 4);
          puVar8 = (undefined4 *)(uVar2 + uVar7 * 4);
          do {
            lVar5 = lVar5 + -1;
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar5 != 0);
LAB_00f75c64:
          if (this[0x218] != (btSoftBody)0x0) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar15 = *puVar14;
          }
        }
        *(ulong *)(this + 0x210) = uVar2;
        *(uint *)(this + 0x208) = uVar19;
        this[0x218] = (btSoftBody)0x1;
      }
      else {
        uVar18 = (ulong)uVar15;
      }
    }
    uVar19 = uVar15 + 1;
    uVar16 = (uint)uVar18;
    *(undefined4 *)(*puVar13 + (long)(int)uVar15 * 4) = 1;
    *puVar14 = uVar19;
    if (uVar19 == uVar16) {
      uVar15 = uVar16 << 1;
      if (uVar16 == 0) {
        uVar15 = 1;
      }
      uVar19 = uVar16;
      if ((int)uVar16 < (int)uVar15) {
        if (uVar15 == 0) {
          uVar2 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          uVar2 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2,0x10
                            );
          uVar18 = (ulong)*puVar14;
        }
        uVar3 = *puVar13;
        uVar19 = (uint)uVar18;
        if ((int)uVar19 < 1) {
          if (uVar3 != 0) goto LAB_00f75ee8;
        }
        else {
          if ((uVar19 < 8) || ((uVar2 < uVar3 + uVar18 * 4 && (uVar3 < uVar2 + uVar18 * 4)))) {
            uVar4 = 0;
          }
          else {
            uVar4 = uVar18 & 0xfffffff8;
            puVar9 = (undefined8 *)(uVar3 + 0x10);
            puVar10 = (undefined8 *)(uVar2 + 0x10);
            uVar7 = uVar4;
            do {
              puVar11 = puVar9 + -1;
              uVar20 = puVar9[-2];
              uVar22 = puVar9[1];
              uVar21 = *puVar9;
              uVar7 = uVar7 - 8;
              puVar9 = puVar9 + 4;
              puVar10[-1] = *puVar11;
              puVar10[-2] = uVar20;
              puVar10[1] = uVar22;
              *puVar10 = uVar21;
              puVar10 = puVar10 + 4;
            } while (uVar7 != 0);
            if (uVar4 == uVar18) goto LAB_00f75ee8;
          }
          lVar5 = uVar18 - uVar4;
          puVar6 = (undefined4 *)(uVar3 + uVar4 * 4);
          puVar8 = (undefined4 *)(uVar2 + uVar4 * 4);
          do {
            lVar5 = lVar5 + -1;
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar5 != 0);
LAB_00f75ee8:
          if (this[0x218] != (btSoftBody)0x0) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar19 = *puVar14;
          }
        }
        *(ulong *)(this + 0x210) = uVar2;
        *(uint *)(this + 0x208) = uVar15;
        this[0x218] = (btSoftBody)0x1;
        uVar18 = (ulong)uVar15;
      }
    }
    uVar16 = uVar19 + 1;
    uVar15 = (uint)uVar18;
    *(undefined4 *)(*puVar13 + (long)(int)uVar19 * 4) = 2;
    *puVar14 = uVar16;
    if (uVar16 == uVar15) {
      uVar19 = uVar15 << 1;
      if (uVar15 == 0) {
        uVar19 = 1;
      }
      uVar16 = uVar15;
      if ((int)uVar15 < (int)uVar19) {
        if (uVar19 == 0) {
          uVar2 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          uVar2 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2,0x10
                            );
          uVar18 = (ulong)*puVar14;
        }
        uVar3 = *puVar13;
        uVar16 = (uint)uVar18;
        if ((int)uVar16 < 1) {
          if (uVar3 != 0) goto LAB_00f7608c;
        }
        else {
          if ((uVar16 < 8) || ((uVar2 < uVar3 + uVar18 * 4 && (uVar3 < uVar2 + uVar18 * 4)))) {
            uVar4 = 0;
          }
          else {
            uVar4 = uVar18 & 0xfffffff8;
            puVar9 = (undefined8 *)(uVar3 + 0x10);
            puVar10 = (undefined8 *)(uVar2 + 0x10);
            uVar7 = uVar4;
            do {
              puVar11 = puVar9 + -1;
              uVar20 = puVar9[-2];
              uVar22 = puVar9[1];
              uVar21 = *puVar9;
              uVar7 = uVar7 - 8;
              puVar9 = puVar9 + 4;
              puVar10[-1] = *puVar11;
              puVar10[-2] = uVar20;
              puVar10[1] = uVar22;
              *puVar10 = uVar21;
              puVar10 = puVar10 + 4;
            } while (uVar7 != 0);
            if (uVar4 == uVar18) goto LAB_00f7608c;
          }
          lVar5 = uVar18 - uVar4;
          puVar6 = (undefined4 *)(uVar3 + uVar4 * 4);
          puVar8 = (undefined4 *)(uVar2 + uVar4 * 4);
          do {
            lVar5 = lVar5 + -1;
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar5 != 0);
LAB_00f7608c:
          if (this[0x218] != (btSoftBody)0x0) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar16 = *puVar14;
          }
        }
        *(ulong *)(this + 0x210) = uVar2;
        *(uint *)(this + 0x208) = uVar19;
        this[0x218] = (btSoftBody)0x1;
      }
    }
    uVar19 = *(uint *)(this + 0x224);
    uVar15 = *(uint *)(this + 0x228);
    puVar13 = (ulong *)(this + 0x230);
    *(uint *)(this + 0x204) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x210) + (long)(int)uVar16 * 4) = 3;
    puVar14 = puVar17;
    if (uVar19 != uVar15) goto LAB_00f761fc;
    uVar16 = uVar19 << 1;
    if (uVar19 == 0) {
      uVar16 = 1;
    }
    if ((int)uVar16 <= (int)uVar19) goto LAB_00f761fc;
    if (uVar16 == 0) {
      uVar18 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar18 = (*(code *)PTR_FUN_01048e38)
                         (-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2,0x10);
      uVar19 = *puVar17;
    }
    uVar3 = (ulong)uVar19;
    uVar2 = *puVar13;
    if ((int)uVar19 < 1) {
      if (uVar2 != 0) goto LAB_00f761cc;
    }
    else {
      if ((uVar19 < 8) || ((uVar18 < uVar2 + uVar3 * 4 && (uVar2 < uVar18 + uVar3 * 4)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar3 & 0xfffffff8;
        puVar9 = (undefined8 *)(uVar2 + 0x10);
        puVar10 = (undefined8 *)(uVar18 + 0x10);
        uVar7 = uVar4;
        do {
          puVar11 = puVar9 + -1;
          uVar20 = puVar9[-2];
          uVar22 = puVar9[1];
          uVar21 = *puVar9;
          uVar7 = uVar7 - 8;
          puVar9 = puVar9 + 4;
          puVar10[-1] = *puVar11;
          puVar10[-2] = uVar20;
          puVar10[1] = uVar22;
          *puVar10 = uVar21;
          puVar10 = puVar10 + 4;
        } while (uVar7 != 0);
        if (uVar4 == uVar3) goto LAB_00f761cc;
      }
      lVar5 = uVar3 - uVar4;
      puVar6 = (undefined4 *)(uVar2 + uVar4 * 4);
      puVar8 = (undefined4 *)(uVar18 + uVar4 * 4);
      do {
        lVar5 = lVar5 + -1;
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
LAB_00f761cc:
      if (this[0x238] != (btSoftBody)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar19 = *puVar17;
      }
    }
    *(ulong *)(this + 0x230) = uVar18;
    *(uint *)(this + 0x228) = uVar16;
    this[0x238] = (btSoftBody)0x1;
    goto LAB_00f761fc;
  }
  if (param_1 != 0) {
    return;
  }
  uVar19 = *(uint *)(this + 0x204);
  uVar18 = (ulong)*(uint *)(this + 0x208);
  if (uVar19 == *(uint *)(this + 0x208)) {
    uVar16 = uVar19 << 1;
    if (uVar19 == 0) {
      uVar16 = 1;
    }
    uVar18 = (ulong)uVar16;
    if ((int)uVar19 < (int)uVar16) {
      if (uVar16 == 0) {
        uVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        uVar2 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2,0x10);
        uVar19 = *puVar14;
      }
      uVar3 = *puVar13;
      if ((int)uVar19 < 1) {
        if (uVar3 != 0) goto LAB_00f7589c;
      }
      else {
        uVar4 = (ulong)uVar19;
        if ((uVar19 < 8) || ((uVar2 < uVar3 + uVar4 * 4 && (uVar3 < uVar2 + uVar4 * 4)))) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar4 & 0xfffffff8;
          puVar9 = (undefined8 *)(uVar3 + 0x10);
          puVar10 = (undefined8 *)(uVar2 + 0x10);
          uVar12 = uVar7;
          do {
            puVar11 = puVar9 + -1;
            uVar20 = puVar9[-2];
            uVar22 = puVar9[1];
            uVar21 = *puVar9;
            uVar12 = uVar12 - 8;
            puVar9 = puVar9 + 4;
            puVar10[-1] = *puVar11;
            puVar10[-2] = uVar20;
            puVar10[1] = uVar22;
            *puVar10 = uVar21;
            puVar10 = puVar10 + 4;
          } while (uVar12 != 0);
          if (uVar7 == uVar4) goto LAB_00f7589c;
        }
        lVar5 = uVar4 - uVar7;
        puVar6 = (undefined4 *)(uVar3 + uVar7 * 4);
        puVar8 = (undefined4 *)(uVar2 + uVar7 * 4);
        do {
          lVar5 = lVar5 + -1;
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
LAB_00f7589c:
        if (this[0x218] != (btSoftBody)0x0) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar19 = *puVar14;
        }
      }
      *(ulong *)(this + 0x210) = uVar2;
      *(uint *)(this + 0x208) = uVar16;
      this[0x218] = (btSoftBody)0x1;
    }
    else {
      uVar18 = (ulong)uVar19;
    }
  }
  uVar16 = uVar19 + 1;
  uVar15 = (uint)uVar18;
  *(undefined4 *)(*puVar13 + (long)(int)uVar19 * 4) = 1;
  *puVar14 = uVar16;
  if (uVar16 == uVar15) {
    uVar19 = uVar15 << 1;
    if (uVar15 == 0) {
      uVar19 = 1;
    }
    uVar16 = uVar15;
    if ((int)uVar15 < (int)uVar19) {
      if (uVar19 == 0) {
        uVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        uVar2 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2,0x10);
        uVar18 = (ulong)*puVar14;
      }
      uVar3 = *puVar13;
      uVar16 = (uint)uVar18;
      if ((int)uVar16 < 1) {
        if (uVar3 != 0) goto LAB_00f75b1c;
      }
      else {
        if ((uVar16 < 8) || ((uVar2 < uVar3 + uVar18 * 4 && (uVar3 < uVar2 + uVar18 * 4)))) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar18 & 0xfffffff8;
          puVar9 = (undefined8 *)(uVar3 + 0x10);
          puVar10 = (undefined8 *)(uVar2 + 0x10);
          uVar7 = uVar4;
          do {
            puVar11 = puVar9 + -1;
            uVar20 = puVar9[-2];
            uVar22 = puVar9[1];
            uVar21 = *puVar9;
            uVar7 = uVar7 - 8;
            puVar9 = puVar9 + 4;
            puVar10[-1] = *puVar11;
            puVar10[-2] = uVar20;
            puVar10[1] = uVar22;
            *puVar10 = uVar21;
            puVar10 = puVar10 + 4;
          } while (uVar7 != 0);
          if (uVar4 == uVar18) goto LAB_00f75b1c;
        }
        lVar5 = uVar18 - uVar4;
        puVar6 = (undefined4 *)(uVar3 + uVar4 * 4);
        puVar8 = (undefined4 *)(uVar2 + uVar4 * 4);
        do {
          lVar5 = lVar5 + -1;
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
LAB_00f75b1c:
        if (this[0x218] != (btSoftBody)0x0) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar16 = *puVar14;
        }
      }
      *(ulong *)(this + 0x210) = uVar2;
      *(uint *)(this + 0x208) = uVar19;
      this[0x218] = (btSoftBody)0x1;
      uVar18 = (ulong)uVar19;
    }
  }
  uVar15 = uVar16 + 1;
  uVar19 = (uint)uVar18;
  *(undefined4 *)(*puVar13 + (long)(int)uVar16 * 4) = 2;
  *puVar14 = uVar15;
  if (uVar15 == uVar19) {
    uVar16 = uVar19 << 1;
    if (uVar19 == 0) {
      uVar16 = 1;
    }
    uVar15 = uVar19;
    if ((int)uVar19 < (int)uVar16) {
      if (uVar16 == 0) {
        uVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        uVar2 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2,0x10);
        uVar18 = (ulong)*puVar14;
      }
      uVar3 = *puVar13;
      uVar15 = (uint)uVar18;
      if ((int)uVar15 < 1) {
        if (uVar3 != 0) goto LAB_00f75da8;
      }
      else {
        if ((uVar15 < 8) || ((uVar2 < uVar3 + uVar18 * 4 && (uVar3 < uVar2 + uVar18 * 4)))) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar18 & 0xfffffff8;
          puVar9 = (undefined8 *)(uVar3 + 0x10);
          puVar10 = (undefined8 *)(uVar2 + 0x10);
          uVar7 = uVar4;
          do {
            puVar11 = puVar9 + -1;
            uVar20 = puVar9[-2];
            uVar22 = puVar9[1];
            uVar21 = *puVar9;
            uVar7 = uVar7 - 8;
            puVar9 = puVar9 + 4;
            puVar10[-1] = *puVar11;
            puVar10[-2] = uVar20;
            puVar10[1] = uVar22;
            *puVar10 = uVar21;
            puVar10 = puVar10 + 4;
          } while (uVar7 != 0);
          if (uVar4 == uVar18) goto LAB_00f75da8;
        }
        lVar5 = uVar18 - uVar4;
        puVar6 = (undefined4 *)(uVar3 + uVar4 * 4);
        puVar8 = (undefined4 *)(uVar2 + uVar4 * 4);
        do {
          lVar5 = lVar5 + -1;
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
LAB_00f75da8:
        if (this[0x218] != (btSoftBody)0x0) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar15 = *puVar14;
        }
      }
      *(ulong *)(this + 0x210) = uVar2;
      *(uint *)(this + 0x208) = uVar16;
      this[0x218] = (btSoftBody)0x1;
      uVar18 = (ulong)uVar16;
    }
  }
  uVar19 = uVar15 + 1;
  uVar16 = (uint)uVar18;
  *(undefined4 *)(*puVar13 + (long)(int)uVar15 * 4) = 3;
  *puVar14 = uVar19;
  if (uVar19 != uVar16) goto LAB_00f761fc;
  uVar15 = uVar16 << 1;
  if (uVar16 == 0) {
    uVar15 = 1;
  }
  uVar19 = uVar16;
  if ((int)uVar15 <= (int)uVar16) goto LAB_00f761fc;
  if (uVar15 == 0) {
    uVar2 = 0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    uVar2 = (*(code *)PTR_FUN_01048e38)
                      (-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2,0x10);
    uVar18 = (ulong)*puVar14;
  }
  uVar3 = *puVar13;
  uVar19 = (uint)uVar18;
  if ((int)uVar19 < 1) {
    if (uVar3 != 0) goto LAB_00f76024;
  }
  else {
    if ((uVar19 < 8) || ((uVar2 < uVar3 + uVar18 * 4 && (uVar3 < uVar2 + uVar18 * 4)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar18 & 0xfffffff8;
      puVar9 = (undefined8 *)(uVar3 + 0x10);
      puVar10 = (undefined8 *)(uVar2 + 0x10);
      uVar7 = uVar4;
      do {
        puVar11 = puVar9 + -1;
        uVar20 = puVar9[-2];
        uVar22 = puVar9[1];
        uVar21 = *puVar9;
        uVar7 = uVar7 - 8;
        puVar9 = puVar9 + 4;
        puVar10[-1] = *puVar11;
        puVar10[-2] = uVar20;
        puVar10[1] = uVar22;
        *puVar10 = uVar21;
        puVar10 = puVar10 + 4;
      } while (uVar7 != 0);
      if (uVar4 == uVar18) goto LAB_00f76024;
    }
    lVar5 = uVar18 - uVar4;
    puVar6 = (undefined4 *)(uVar3 + uVar4 * 4);
    puVar8 = (undefined4 *)(uVar2 + uVar4 * 4);
    do {
      lVar5 = lVar5 + -1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar5 != 0);
LAB_00f76024:
    if (this[0x218] != (btSoftBody)0x0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
      uVar19 = *puVar14;
    }
  }
  *(ulong *)(this + 0x210) = uVar2;
  *(uint *)(this + 0x208) = uVar15;
  this[0x218] = (btSoftBody)0x1;
LAB_00f761fc:
  *(undefined4 *)(*puVar13 + (long)(int)uVar19 * 4) = 0;
  *puVar14 = uVar19 + 1;
  return;
}


