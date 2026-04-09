// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCostToGoal
// Entry Point: 0073b1e4
// Size: 2356 bytes
// Signature: undefined __thiscall computeCostToGoal(VehicleNavigationAgent * this, NodeId param_1)


/* WARNING: Removing unreachable block (ram,0x0073bb2c) */
/* WARNING: Removing unreachable block (ram,0x0073bb38) */
/* WARNING: Removing unreachable block (ram,0x0073bb44) */
/* WARNING: Removing unreachable block (ram,0x0073bf70) */
/* WARNING: Removing unreachable block (ram,0x0073c038) */
/* WARNING: Removing unreachable block (ram,0x0073bebc) */
/* WARNING: Removing unreachable block (ram,0x0073c024) */
/* WARNING: Removing unreachable block (ram,0x0073bc0c) */
/* WARNING: Removing unreachable block (ram,0x0073be0c) */
/* WARNING: Removing unreachable block (ram,0x0073bd68) */
/* WARNING: Removing unreachable block (ram,0x0073bcac) */
/* WARNING: Removing unreachable block (ram,0x0073c028) */
/* WARNING: Removing unreachable block (ram,0x0073bb6c) */
/* WARNING: Removing unreachable block (ram,0x0073be04) */
/* WARNING: Removing unreachable block (ram,0x0073c0e4) */
/* WARNING: Removing unreachable block (ram,0x0073c0f0) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* VehicleNavigationAgent::computeCostToGoal(NodeId) const */

void __thiscall
VehicleNavigationAgent::computeCostToGoal(VehicleNavigationAgent *this,NodeId param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar5 = tpidr_el0;
  if (((uint)*(ushort *)(this + 0x30) <= (param_1 & 0xffff)) ||
     ((uint)*(ushort *)(this + 0x30) <= param_1 >> 0x10)) {
    if (*(long *)(lVar5 + 0x28) != *(long *)(lVar5 + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(0xffff);
    }
    return;
  }
  uVar4 = VehicleNavigationGridAdapter::retrieveTeleportAtSource
                    (*(VehicleNavigationGridAdapter **)(this + 0x12a0),param_1);
  if (uVar4 != 0xffff) {
    uVar2 = *(ushort *)(this + 0x30);
    lVar5 = *(long *)(*(long *)(this + 0x12a0) + 0x68) + (ulong)uVar4 * 0xe;
    uVar7 = *(uint *)(lVar5 + 8);
    if ((uVar7 & 0xffff) < (uint)uVar2) {
      uVar4 = *(ushort *)(lVar5 + 0xc);
      if (uVar7 >> 0x10 < (uint)uVar2) {
        if (((uVar7 - *(ushort *)(this + 0x32) & 0xffff) < 0xe) &&
           (uVar3 = (int)(CONCAT24(uVar4,uVar7) >> 0x10) - (uint)*(ushort *)(this + 0x34),
           (uVar3 & 0xffff) < 0xe)) {
          uVar7 = (uint)(byte)this[(ulong)uVar4 +
                                   (ulong)(ushort)(uVar7 - *(ushort *)(this + 0x32)) * 8 +
                                   ((ulong)uVar3 & 0xffff) * 0x70 + 0xc76];
        }
        else {
          lVar5 = ((ulong)(CONCAT24(uVar4,uVar7) >> 0x10) & 0xffff) * (ulong)uVar2 +
                  ((ulong)uVar7 & 0xffff);
          lVar6 = *(long *)(this + 0x28);
          if ((*(short *)(lVar6 + lVar5 * 6) == -1) ||
             ((bVar1 = *(byte *)(lVar6 + lVar5 * 6 + 4), uVar7 = (uint)bVar1, uVar4 != bVar1 >> 5 &&
              ((*(short *)(lVar6 + lVar5 * 6 + 2) == -1 ||
               (bVar1 = *(byte *)(lVar6 + lVar5 * 6 + 5), uVar7 = (uint)bVar1, uVar4 != bVar1 >> 5))
              )))) goto code_r0x0073b4f0;
        }
        if ((uVar7 >> 4 & 1) == 0) {
          Spline::getLength();
        }
      }
    }
  }
code_r0x0073b4f0:
                    /* WARNING: Could not recover jumptable at 0x0073b50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_0073b510)();
  return;
}


