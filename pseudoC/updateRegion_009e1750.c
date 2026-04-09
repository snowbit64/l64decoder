// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRegion
// Entry Point: 009e1750
// Size: 732 bytes
// Signature: undefined updateRegion(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRaycastPhysicsMask::updateRegion() */

void ProceduralPlacementRaycastPhysicsMask::updateRegion(void)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *in_x0;
  ulong uVar6;
  ulong uVar7;
  Bt2ScenegraphPhysicsContext *pBVar8;
  undefined4 uVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined **local_d8;
  char local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  iVar3 = (**(code **)(*in_x0 + 0x48))();
  if (iVar3 != 0) {
    uVar13 = 0;
    do {
      iVar3 = (**(code **)(*in_x0 + 0x40))();
      if (iVar3 != 0) {
        uVar4 = 0;
        do {
          uVar6 = (**(code **)(*in_x0 + 0x40))();
          fVar18 = *(float *)(in_x0 + 0x1e);
          uVar7 = (**(code **)(*in_x0 + 0x48))();
          lVar11 = in_x0[0x19];
          if (in_x0[0x1a] == lVar11) {
LAB_009e1810:
            uVar9 = 0;
          }
          else {
            uVar12 = 0;
            fVar18 = fVar18 * ((float)(ulong)uVar4 - (float)(uVar6 & 0xffffffff) * 0.5);
            fVar20 = *(float *)(in_x0 + 0x1e) *
                     ((float)(ulong)uVar13 - (float)(uVar7 & 0xffffffff) * 0.5);
            do {
              pfVar1 = (float *)(lVar11 + uVar12 * 8);
              local_d0 = '\0';
              fVar15 = *(float *)(in_x0[0x1c] + 0xa8);
              fVar17 = *(float *)(in_x0[0x1c] + 0x94);
              local_b4 = 0x461c4000;
              local_c8 = 0xbf80000000000000;
              local_c0 = 0;
              local_b8 = fVar18 + *pfVar1;
              local_b0 = fVar20 + pfVar1[1];
              fVar19 = fVar18 / fVar15 + fVar17;
              fVar17 = fVar20 / fVar15 + fVar17;
              local_d8 = &PTR__IRaycastReport_00fe28a8;
              ScenegraphPhysicsContextManager::getInstance();
              pBVar8 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
              Bt2ScenegraphPhysicsContext::raycastShapes
                        (pBVar8,(Vector3 *)&local_b8,(Vector3 *)&local_c8,
                         (IRaycastReport *)&local_d8,20000.0,false,*(uint *)(in_x0 + 0x1d),false,
                         true,0);
              fVar15 = local_cc;
              if ((local_d0 == '\0') ||
                 (fVar16 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                            ((BaseTerrain *)in_x0[0x1c],fVar19,fVar17),
                 fVar15 < fVar16)) {
                bVar14 = 1;
              }
              else {
                bVar14 = 0;
              }
              local_d0 = '\0';
              local_cc = -1000.0;
              ScenegraphPhysicsContextManager::getInstance();
              pBVar8 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
              Bt2ScenegraphPhysicsContext::raycastShapes
                        (pBVar8,(Vector3 *)&local_b8,(Vector3 *)&local_c8,
                         (IRaycastReport *)&local_d8,20000.0,false,*(uint *)((long)in_x0 + 0xec),
                         false,true,0);
              fVar15 = local_cc;
              if ((local_d0 == '\0') ||
                 (fVar17 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                            ((BaseTerrain *)in_x0[0x1c],fVar19,fVar17),
                 fVar15 < fVar17)) {
                bVar10 = 0;
              }
              else {
                bVar10 = 1;
              }
              lVar11 = in_x0[0x19];
              uVar12 = (ulong)((int)uVar12 + 1);
            } while (uVar12 < (ulong)(in_x0[0x1a] - lVar11 >> 3));
            if ((bool)(bVar10 | bVar14)) goto LAB_009e1810;
            uVar9 = 0x437f0000;
          }
          lVar11 = in_x0[0xb];
          iVar3 = (**(code **)(*in_x0 + 0x40))();
          uVar5 = uVar4 + iVar3 * uVar13;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(lVar11 + (ulong)uVar5 * 4) = uVar9;
          uVar5 = (**(code **)(*in_x0 + 0x40))();
        } while (uVar4 < uVar5);
      }
      uVar13 = uVar13 + 1;
      uVar4 = (**(code **)(*in_x0 + 0x48))();
    } while (uVar13 < uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


