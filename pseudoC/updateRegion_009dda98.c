// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRegion
// Entry Point: 009dda98
// Size: 804 bytes
// Signature: undefined updateRegion(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRaycastObjectsMask::updateRegion() */

void ProceduralPlacementRaycastObjectsMask::updateRegion(void)

{
  long **pplVar1;
  float *pfVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *in_x0;
  ulong uVar6;
  ProceduralPlacementRaycastObjectsMask *this;
  long **pplVar7;
  long **pplVar8;
  long lVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  if ((long **)in_x0[0x1d] != (long **)(in_x0 + 0x1e)) {
    pplVar1 = (long **)(in_x0 + 0x21);
    pplVar10 = (long **)in_x0[0x1d];
    do {
      pplVar8 = (long **)*pplVar1;
      plVar11 = pplVar10[4];
      pplVar7 = pplVar1;
      if (pplVar8 == (long **)0x0) {
LAB_009ddb64:
        if ((*(byte *)((long)plVar11 + 0x11) >> 3 & 1) != 0) {
          GsShape::updateShapeWorldBoundingVolume();
          fVar19 = *(float *)(plVar11 + 0x36);
          GsShape::updateShapeWorldBoundingVolume();
          fVar20 = *(float *)((long)plVar11 + 0x1a4);
          GsShape::updateShapeWorldBoundingVolume();
          local_b0 = 0;
          fVar17 = fVar19 + *(float *)((long)plVar11 + 0x1ac);
          fVar22 = *(float *)((long)plVar11 + 0x1ac) - fVar19;
          local_b8 = 0xbf80000000000000;
          if (fVar22 < fVar17) {
            fVar23 = fVar19 + fVar20;
            fVar20 = fVar20 - fVar19;
            do {
              if (fVar20 < fVar23) {
                lVar13 = in_x0[0x19];
                lVar9 = in_x0[0x1a];
                fVar19 = fVar20;
                do {
                  bVar4 = lVar9 != lVar13;
                  lVar9 = lVar13;
                  if (bVar4) {
                    uVar12 = 0;
                    do {
                      fVar15 = *(float *)(in_x0 + 0x23);
                      pfVar2 = (float *)(lVar13 + uVar12 * 8);
                      local_c4 = 0x447a0000;
                      local_c8 = fVar19 + *pfVar2;
                      local_c0 = fVar22 + pfVar2[1];
                      uVar6 = (**(code **)(*in_x0 + 0x40))();
                      fVar21 = fVar19 / fVar15 + (float)(uVar6 & 0xffffffff) * 0.5;
                      uVar6 = (**(code **)(*in_x0 + 0x40))();
                      fVar18 = *(float *)(in_x0 + 0x23);
                      fVar15 = (float)(uVar6 & 0xffffffff) + -1.0;
                      if (fVar21 <= fVar15) {
                        fVar15 = fVar21;
                      }
                      fVar16 = 0.0;
                      if (0.0 <= fVar21) {
                        fVar16 = fVar15;
                      }
                      uVar6 = (**(code **)(*in_x0 + 0x48))();
                      fVar18 = fVar22 / fVar18 + (float)(uVar6 & 0xffffffff) * 0.5;
                      this = (ProceduralPlacementRaycastObjectsMask *)(**(code **)(*in_x0 + 0x48))()
                      ;
                      fVar15 = (float)((ulong)this & 0xffffffff) + -1.0;
                      if (fVar18 <= fVar15) {
                        fVar15 = fVar18;
                      }
                      fVar21 = 0.0;
                      if (0.0 <= fVar18) {
                        fVar21 = fVar15;
                      }
                      uVar6 = raycastAllNodes(this,(TransformGroup *)plVar11,(set *)(in_x0 + 0x20),
                                              (Vector3 *)&local_c8,(Vector3 *)&local_b8);
                      lVar13 = in_x0[0xb];
                      iVar5 = (**(code **)(*in_x0 + 0x40))();
                      uVar14 = 0x437f0000;
                      uVar12 = (ulong)((int)uVar12 + 1);
                      if ((uVar6 & 1) == 0) {
                        uVar14 = 0;
                      }
                      *(undefined4 *)(lVar13 + (ulong)(uint)((int)fVar16 + iVar5 * (int)fVar21) * 4)
                           = uVar14;
                      lVar13 = in_x0[0x19];
                      lVar9 = in_x0[0x1a];
                    } while (uVar12 < (ulong)(lVar9 - lVar13 >> 3));
                  }
                  fVar19 = fVar19 + 1.0;
                } while (fVar19 < fVar23);
              }
              fVar22 = fVar22 + 1.0;
            } while (fVar22 < fVar17);
          }
        }
      }
      else {
        do {
          if (pplVar8[4] >= plVar11) {
            pplVar7 = pplVar8;
          }
          pplVar8 = (long **)pplVar8[pplVar8[4] < plVar11];
        } while (pplVar8 != (long **)0x0);
        if ((pplVar7 == pplVar1) || (plVar11 < pplVar7[4])) goto LAB_009ddb64;
      }
      pplVar7 = (long **)pplVar10[1];
      if ((long **)pplVar10[1] == (long **)0x0) {
        pplVar7 = pplVar10 + 2;
        pplVar8 = (long **)*pplVar7;
        if ((long **)*pplVar8 != pplVar10) {
          do {
            plVar11 = *pplVar7;
            pplVar7 = (long **)(plVar11 + 2);
            pplVar8 = (long **)*pplVar7;
          } while (*pplVar8 != plVar11);
        }
      }
      else {
        do {
          pplVar8 = pplVar7;
          pplVar7 = (long **)*pplVar8;
        } while ((long **)*pplVar8 != (long **)0x0);
      }
      pplVar10 = pplVar8;
    } while (pplVar8 != (long **)(in_x0 + 0x1e));
  }
  if (*(long *)(lVar3 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


