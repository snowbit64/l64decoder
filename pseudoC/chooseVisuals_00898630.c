// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: chooseVisuals
// Entry Point: 00898630
// Size: 672 bytes
// Signature: undefined __thiscall chooseVisuals(PedestrianSystem * this, PedestrianGroupData * param_1, PedestrianVisuals * * param_2, PedestrianData * * param_3)


/* PedestrianSystem::chooseVisuals(PedestrianGroupData*, PedestrianVisuals*&, PedestrianData*&) */

bool __thiscall
PedestrianSystem::chooseVisuals
          (PedestrianSystem *this,PedestrianGroupData *param_1,PedestrianVisuals **param_2,
          PedestrianData **param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  PedestrianData *pPVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar17 = *(long *)(param_1 + 0x60);
  uVar15 = *(long *)(param_1 + 0x68) - lVar17;
  if (uVar15 == 0) {
    iVar16 = -1;
  }
  else {
    iVar16 = *(int *)(*(long *)(param_1 + 0x68) + -4);
    iVar9 = (int)(uVar15 >> 2);
    if (1 < iVar9) {
      uVar10 = uVar15 >> 2 & 0xffffffff;
      lVar11 = 0;
      if (1 < uVar10) {
        lVar11 = uVar10 - 2;
      }
      uVar3 = lVar11 + 1;
      uVar14 = uVar10;
      if (7 < uVar3) {
        uVar8 = (uint)(uVar15 >> 2);
        uVar4 = 0;
        if (1 < uVar8) {
          uVar4 = uVar8 - 2;
        }
        uVar15 = 0;
        if (1 < uVar10) {
          uVar15 = uVar10 - 2;
        }
        if ((((uVar4 <= iVar9 - 1U) && (uVar15 >> 0x20 == 0)) && (uVar4 <= iVar9 - 2U)) &&
           ((uVar12 = lVar17 + (ulong)(iVar9 - 1U) * 4, uVar12 + uVar15 * -4 <= uVar12 &&
            (uVar12 = lVar17 + (ulong)(iVar9 - 2U) * 4, uVar12 + uVar15 * -4 <= uVar12)))) {
          uVar15 = uVar10;
          if (1 < uVar10) {
            uVar15 = 2;
          }
          if ((lVar17 + (ulong)(iVar9 - 2) * 4 + 4 <= lVar17 + ((uVar15 + (iVar9 - 1)) - uVar10) * 4
              ) || (lVar17 + (ulong)(iVar9 - 1) * 4 + 4 <=
                    lVar17 + ((uVar15 + (iVar9 - 2)) - uVar10) * 4)) {
            uVar12 = uVar3 & 0xfffffffffffffff8;
            uVar14 = uVar10 - uVar12;
            uVar10 = uVar10 + 0xffffffff;
            uVar15 = uVar12;
            do {
              iVar9 = (int)uVar10;
              lVar11 = lVar17 + (uVar10 & 0xffffffff) * 4;
              uVar15 = uVar15 - 8;
              uVar10 = uVar10 - 8;
              lVar2 = lVar17 + (ulong)(iVar9 - 1) * 4;
              uVar18 = *(undefined8 *)(lVar2 + -0xc);
              uVar20 = *(undefined8 *)(lVar2 + -0x14);
              uVar19 = *(undefined8 *)(lVar2 + -0x1c);
              *(undefined8 *)(lVar11 + -4) = *(undefined8 *)(lVar2 + -4);
              *(undefined8 *)(lVar11 + -0xc) = uVar18;
              *(undefined8 *)(lVar11 + -0x14) = uVar20;
              *(undefined8 *)(lVar11 + -0x1c) = uVar19;
            } while (uVar15 != 0);
            if (uVar3 == uVar12) goto LAB_008986ac;
          }
        }
      }
      do {
        *(undefined4 *)(lVar17 + (uVar14 - 1 & 0xffffffff) * 4) =
             *(undefined4 *)(lVar17 + (ulong)((int)uVar14 - 2) * 4);
        bVar1 = 2 < uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar1);
    }
  }
LAB_008986ac:
  iVar5 = MathUtil::getRandomMinMax
                    (0,(int)((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) >> 2) +
                       -1);
  iVar9 = *(int *)(*(long *)(param_1 + 0x78) + (long)iVar5 * 4);
  if (iVar16 != -1) {
    piVar13 = *(int **)(param_1 + 0x60);
    *(int *)(*(long *)(param_1 + 0x78) + (long)iVar5 * 4) = iVar16;
    *piVar13 = iVar9;
  }
  lVar17 = *(long *)(this + (long)iVar9 * 0x3b0 + 0x6708);
  if (lVar17 != 0) {
    *param_3 = (PedestrianData *)(this + (long)iVar9 * 0x3b0 + 0x6398);
    *param_2 = (PedestrianVisuals *)0x0;
    pPVar7 = *param_3;
    if (pPVar7[0xd4] == (PedestrianData)0x0) {
      lVar11 = 0;
    }
    else if (pPVar7[0x1a4] == (PedestrianData)0x0) {
      lVar11 = 1;
    }
    else if (pPVar7[0x274] == (PedestrianData)0x0) {
      lVar11 = 2;
    }
    else {
      if (pPVar7[0x344] != (PedestrianData)0x0) {
        puVar6 = (undefined8 *)operator_new(0xd0);
        *puVar6 = &PTR__PedestrianVisuals_00fdd2b0;
                    /* try { // try from 00898750 to 00898753 has its CatchHandler @ 008988d0 */
        PedestrianAnimationBlender::PedestrianAnimationBlender
                  ((PedestrianAnimationBlender *)(puVar6 + 1));
        *param_2 = (PedestrianVisuals *)puVar6;
        pPVar7 = *param_3;
        puVar6[0x18] = 0;
        puVar6[0x15] = 0;
        puVar6[0x14] = 0;
        puVar6[0x17] = 0;
        puVar6[0x16] = 0;
        puVar6[0x11] = 0;
        puVar6[0x10] = 0;
        puVar6[0x13] = 0;
        puVar6[0x12] = 0;
        *(undefined4 *)(puVar6 + 0x19) = 0x3f800000;
        *(undefined2 *)((long)puVar6 + 0xcc) = 0;
        initPedestrianVisuals(this,pPVar7,(PedestrianVisuals *)puVar6);
        (*param_2)[0xcd] = (PedestrianVisuals)0x1;
        goto LAB_008988b4;
      }
      lVar11 = 3;
    }
    *param_2 = (PedestrianVisuals *)(pPVar7 + lVar11 * 0xd0 + 8);
  }
LAB_008988b4:
  return lVar17 != 0;
}


