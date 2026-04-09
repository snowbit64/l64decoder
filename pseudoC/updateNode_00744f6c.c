// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateNode
// Entry Point: 00744f6c
// Size: 616 bytes
// Signature: undefined __thiscall updateNode(VehicleNavigationPlanner * this, VehicleNavigationAgent * param_1, NodeId param_2)


/* VehicleNavigationPlanner::updateNode(VehicleNavigationAgent&, NodeId) */

void __thiscall
VehicleNavigationPlanner::updateNode
          (VehicleNavigationPlanner *this,VehicleNavigationAgent *param_1,NodeId param_2)

{
  long lVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined2 local_68 [4];
  ushort local_60;
  ushort uStack_5e;
  short local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar6 = VehicleNavigationAgent::computeCostToGoal(param_1,param_2);
  uVar3 = *(ushort *)(param_1 + 0x30);
  uVar5 = (uint)uVar6;
  plVar2 = (long *)(param_1 + 0x28);
  uVar8 = 0xffff;
  if (((param_2 & 0xffff) < (uint)uVar3) && (param_2 >> 0x10 < (uint)uVar3)) {
    if (((param_2 - *(ushort *)(param_1 + 0x32) & 0xffff) < 0xe) &&
       (uVar8 = (param_2 >> 0x10) - (uint)*(ushort *)(param_1 + 0x34), (uVar8 & 0xffff) < 0xe)) {
      uVar8 = (uint)*(ushort *)
                     (param_1 +
                     (ulong)(ushort)(param_2 - *(ushort *)(param_1 + 0x32)) * 0x10 +
                     ((ulong)uVar8 & 0xffff) * 0xe0 + 0x36);
    }
    else {
      lVar7 = *plVar2;
      uVar8 = 0xffff;
      lVar1 = (ulong)(param_2 >> 0x10) * (ulong)uVar3 + (ulong)(ushort)param_2;
      uVar3 = *(ushort *)(lVar7 + lVar1 * 6);
      if (uVar3 != 0xffff) {
        if (*(byte *)(lVar7 + lVar1 * 6 + 4) >> 5 == 0) {
LAB_00745060:
          uVar8 = (uint)uVar3;
        }
        else {
          uVar8 = 0xffff;
          uVar3 = *(ushort *)(lVar7 + lVar1 * 6 + 2);
          if (uVar3 != 0xffff) {
            if (*(byte *)(lVar7 + lVar1 * 6 + 5) >> 5 == 0) goto LAB_00745060;
            uVar8 = 0xffff;
          }
        }
      }
    }
  }
  if ((uVar5 & 0xffff) < uVar8) {
    uVar8 = uVar5 & 0xffff;
    local_60 = 0xffff;
    uStack_5e = 0xffff;
    local_5c = -1;
    uVar6 = SearchTree::setCostToGoal
                      ((SearchTree *)plVar2,param_2,uVar8,(uVar6 & 0xffffffff) >> 0x10,&local_60,
                       local_68);
    if ((uVar6 & 1) != 0) {
      if ((((uint)local_60 == (param_2 & 0xffff)) && ((uint)uStack_5e == param_2 >> 0x10)) &&
         (local_5c == 0)) goto LAB_007451a4;
      updateCandidate(this,param_1,(ulong)CONCAT24(local_5c,CONCAT22(uStack_5e,local_60)),
                      local_68[0]);
    }
  }
  else {
    fVar9 = INFINITY;
    if ((uVar5 & 0xffff) != 0xffff) {
      fVar9 = (float)(uVar5 & 0xffff | 0x49800000) + -1048576.0;
    }
    fVar10 = INFINITY;
    if (uVar8 != 0xffff) {
      fVar10 = (float)(uVar8 | 0x49800000) + -1048576.0;
    }
    if (fVar9 <= fVar10) goto LAB_007451a4;
    local_60 = 0xffff;
    uStack_5e = 0xffff;
    local_5c = -1;
    SearchTree::setCostToGoal
              ((SearchTree *)plVar2,param_2,uVar5 & 0xffff,uVar5 >> 0x10,&local_60,local_68);
  }
  updateCandidate(this,param_1,param_2,uVar8);
LAB_007451a4:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


