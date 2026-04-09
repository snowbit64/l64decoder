// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0074727c
// Entry Point: 0074727c
// Size: 552 bytes
// Signature: undefined FUN_0074727c(void)


void FUN_0074727c(long param_1,VehicleNavigationPlanner *param_2,VehicleNavigationAgent *param_3,
                 float *param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 0x12a0);
  fVar12 = *(float *)(lVar4 + 0x20);
  fVar9 = *param_4 + *(float *)(lVar4 + 0x34);
  fVar11 = fVar9 * *(float *)(lVar4 + 0x24);
  fVar13 = *(float *)(lVar4 + 0x24) * (*(float *)(lVar4 + 0x34) + param_4[1]);
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
  fVar7 = (float)OrientedBox::computeWorldExtent();
  fVar10 = *(float *)(*(long *)(param_1 + 0x12a0) + 0x24);
  fVar8 = fVar10 * (fVar12 + fVar7);
  fVar10 = fVar10 * (fVar12 + fVar9);
  fVar7 = fVar11 + fVar8;
  fVar9 = fVar13 + fVar10;
  fVar13 = fVar13 - fVar10;
  if (fVar14 < fVar7) {
    fVar7 = fVar14;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (fVar14 < fVar9) {
    fVar9 = fVar14;
  }
  uVar5 = (uint)fVar13;
  if (uVar5 <= (uint)(int)fVar9) {
    fVar11 = fVar11 - fVar8;
    uVar6 = (uint)fVar7;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    do {
      if ((uint)(int)fVar11 <= uVar6) {
        uVar1 = (int)fVar11;
        do {
          local_90 = (float)VehicleNavigationGridAdapter::getNodePos
                                      (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),
                                       (ushort)uVar1,(ushort)uVar5);
          fStack_8c = fVar7;
          fVar13 = (float)OrientedBox::closestPoint((OrientedBox *)param_4,(Vector2 *)&local_90);
          fVar7 = fVar7 - fStack_8c;
          fVar13 = (float)NEON_fmadd(fVar7,fVar7,(fVar13 - local_90) * (fVar13 - local_90));
          if (fVar13 <= fVar12 * fVar12) {
            uVar3 = (uint)(((ulong)uVar5 & 0xffff) << 0x10) | uVar1 & 0xffff;
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
            VehicleNavigationPlanner::updateNode(param_2,param_3,uVar3);
          }
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xffff) <= uVar6);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffff) <= (uint)(int)fVar9);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


