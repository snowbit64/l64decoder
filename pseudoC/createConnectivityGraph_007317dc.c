// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConnectivityGraph
// Entry Point: 007317dc
// Size: 496 bytes
// Signature: undefined createConnectivityGraph(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationMap::createConnectivityGraph() */

void VehicleNavigationMap::createConnectivityGraph(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  RoadSegment *this;
  RoadSegment *this_00;
  float fVar11;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  float fStack_6c;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(in_x0 + 0x18);
  lVar1 = *(long *)(in_x0 + 0x20);
  if (lVar5 != lVar1) {
    uVar7 = (lVar1 - lVar5) - 0x50;
    lVar6 = lVar5;
    if (0x4f < uVar7) {
      uVar7 = uVar7 / 0x50 + 1;
      uVar8 = uVar7 & 0x7fffffffffffffe;
      lVar6 = lVar5 + uVar8 * 0x50;
      puVar9 = (undefined8 *)(lVar5 + 0x90);
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 2;
        puVar9[-0xd] = puVar9[-0xe];
        puVar9[-3] = puVar9[-4];
        puVar9[-10] = puVar9[-0xb];
        *puVar9 = puVar9[-1];
        puVar9 = puVar9 + 0x14;
      } while (uVar10 != 0);
      if (uVar7 == uVar8) goto LAB_007318a0;
    }
    do {
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar6 + 0x38);
      lVar6 = lVar6 + 0x50;
    } while (lVar6 != lVar1);
  }
LAB_007318a0:
  uVar7 = (lVar1 - lVar5 >> 4) * 0xcccd;
  if ((uVar7 & 0xffff) != 0) {
    uVar10 = 0;
    uVar7 = uVar7 & 0xffff;
    while( true ) {
      this = (RoadSegment *)(lVar5 + uVar10 * 0x50);
      uVar8 = 0;
      while( true ) {
        this_00 = (RoadSegment *)(lVar5 + uVar8 * 0x50);
        RoadSegment::getPositionAndDirection((uint)this_00,0.0,(PlanarPose *)0x0);
        iVar3 = Spline::getNumOfCV();
        RoadSegment::getPositionAndDirection((uint)this,1.0,(PlanarPose *)(ulong)(iVar3 - 2));
        fVar11 = (float)NEON_fmadd(fStack_74 - fStack_84,fStack_74 - fStack_84,
                                   (local_78 - local_88) * (local_78 - local_88));
        if ((fVar11 <= 0.05) &&
           (fVar11 = (float)NEON_fmadd(local_70,local_80,fStack_6c * local_7c), 0.99 <= fVar11)) {
          RoadSegment::addSuccessor(this,(ushort)uVar8);
          RoadSegment::addPredecessor(this_00,(ushort)uVar10);
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == uVar7) break;
        lVar5 = *(long *)(in_x0 + 0x18);
      }
      uVar10 = uVar10 + 1;
      if (uVar10 == uVar7) break;
      lVar5 = *(long *)(in_x0 + 0x18);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


