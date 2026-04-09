// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializePriorityQueue
// Entry Point: 00d580e8
// Size: 412 bytes
// Signature: undefined InitializePriorityQueue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::MeshDecimator::InitializePriorityQueue() */

void HACD::MeshDecimator::InitializePriorityQueue(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  MeshDecimator *in_x0;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  ulong local_4a0;
  undefined8 local_498;
  undefined auStack_490 [1024];
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  if (*(long *)(in_x0 + 0x60) - *(long *)(in_x0 + 0x58) != 0) {
    lVar9 = 0;
    uVar10 = 0;
    dVar12 = -1.0;
    uVar6 = (*(long *)(in_x0 + 0x60) - *(long *)(in_x0 + 0x58)) / 0x38;
    uVar2 = uVar6;
    if (uVar6 < 2) {
      uVar2 = 1;
    }
    do {
      dVar11 = ((double)(unkuint9)uVar10 * 100.0) / (double)(unkuint9)uVar6;
      if (1.0 < ABS(dVar11 - dVar12) && *(long *)(in_x0 + 0x90) != 0) {
        FUN_00d58284(dVar11,auStack_490);
        (**(code **)(in_x0 + 0x90))(dVar11,0,auStack_490,*(undefined8 *)(in_x0 + 0x20));
        dVar12 = dVar11;
      }
      lVar8 = *(long *)(in_x0 + 0x58);
      plVar1 = (long *)(lVar8 + lVar9);
      if (*(char *)((long)plVar1 + 0x31) != '\0') {
        lVar3 = *plVar1;
        lVar4 = plVar1[1];
        if (in_x0[0xa0] != (MeshDecimator)0x0) {
          uVar7 = ManifoldConstraint(in_x0,lVar3,lVar4);
          if ((uVar7 & 1) == 0) goto LAB_00d581b0;
          lVar8 = *(long *)(in_x0 + 0x58);
        }
        local_498 = ComputeEdgeCost(in_x0,lVar3,lVar4,(Vec3 *)(lVar8 + lVar9 + 0x18));
        *(undefined8 *)(*(long *)(in_x0 + 0x58) + lVar9 + 0x10) = local_498;
        local_4a0 = uVar10;
        FUN_00d58f78(in_x0 + 0x70,&local_4a0);
      }
LAB_00d581b0:
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x38;
    } while (uVar2 != uVar10);
  }
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


