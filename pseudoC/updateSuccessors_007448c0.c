// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSuccessors
// Entry Point: 007448c0
// Size: 1024 bytes
// Signature: undefined __thiscall updateSuccessors(VehicleNavigationPlanner * this, VehicleNavigationAgent * param_1, NodeId param_2)


/* VehicleNavigationPlanner::updateSuccessors(VehicleNavigationAgent&, NodeId) */

void __thiscall
VehicleNavigationPlanner::updateSuccessors
          (VehicleNavigationPlanner *this,VehicleNavigationAgent *param_1,NodeId param_2)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  NodeId NVar5;
  
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(0x744920) {
  case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
    updateNode(this,param_1,param_2 & 0xffff0000 | param_2 - 1 & 0xffff);
    updateNode(this,param_1,
               (uint)(((ulong)((param_2 >> 0x10) - 1) & 0xffff) << 0x10) | param_2 - 2 & 0xffff);
    NVar5 = (uint)(((ulong)((param_2 >> 0x10) + 1) & 0xffff) << 0x10) | param_2 - 2 & 0xffff;
    goto LAB_00744c00;
  case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uVar4 = param_2 - 1;
    uVar2 = (ulong)((param_2 >> 0x10) + 1) & 0xffff;
    updateNode(this,param_1,(uint)(uVar2 << 0x10) | uVar4 & 0xffff);
    updateNode(this,param_1,(uint)(uVar2 << 0x10) | param_2 - 2 & 0xffff);
    uVar3 = (param_2 >> 0x10) + 2;
    goto LAB_00744b30;
  case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
    updateNode(this,param_1,param_2 & 0xffff | param_2 + 0x10000 & 0xffff0000);
    uVar4 = (uint)(((ulong)((param_2 >> 0x10) + 2) & 0xffff) << 0x10);
    updateNode(this,param_1,uVar4 | param_2 - 1 & 0xffff);
    uVar3 = param_2 + 1;
    break;
  case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uVar2 = (ulong)((param_2 >> 0x10) + 1) & 0xffff;
    uVar4 = (uint)(uVar2 << 0x10);
    updateNode(this,param_1,(uint)(uVar2 << 0x10) | param_2 + 1 & 0xffff);
    updateNode(this,param_1,
               (uint)(((ulong)((param_2 >> 0x10) + 2) & 0xffff) << 0x10) | param_2 + 1 & 0xffff);
    uVar3 = param_2 + 2;
    break;
  case 4:
                    /* WARNING: This code block may not be properly labeled as switch case */
    updateNode(this,param_1,param_2 & 0xffff0000 | param_2 + 1 & 0xffff);
    updateNode(this,param_1,
               (uint)(((ulong)((param_2 >> 0x10) + 1) & 0xffff) << 0x10) | param_2 + 2 & 0xffff);
    NVar5 = (uint)(((ulong)((param_2 >> 0x10) - 1) & 0xffff) << 0x10) | param_2 + 2 & 0xffff;
    goto LAB_00744c00;
  case 5:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uVar4 = param_2 + 1;
    uVar2 = (ulong)((param_2 >> 0x10) - 1) & 0xffff;
    updateNode(this,param_1,(uint)(uVar2 << 0x10) | uVar4 & 0xffff);
    updateNode(this,param_1,(uint)(uVar2 << 0x10) | param_2 + 2 & 0xffff);
    uVar3 = (param_2 >> 0x10) - 2;
LAB_00744b30:
    NVar5 = (uint)(((ulong)uVar3 & 0xffff) << 0x10) | uVar4 & 0xffff;
    goto LAB_00744c00;
  case 6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    updateNode(this,param_1,param_2 & 0xffff | param_2 - 0x10000 & 0xffff0000);
    uVar4 = (uint)(((ulong)((param_2 >> 0x10) - 2) & 0xffff) << 0x10);
    updateNode(this,param_1,uVar4 | param_2 + 1 & 0xffff);
    uVar3 = param_2 - 1;
    break;
  case 7:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uVar2 = (ulong)((param_2 >> 0x10) - 1) & 0xffff;
    uVar4 = (uint)(uVar2 << 0x10);
    updateNode(this,param_1,(uint)(uVar2 << 0x10) | param_2 - 1 & 0xffff);
    updateNode(this,param_1,
               (uint)(((ulong)((param_2 >> 0x10) - 2) & 0xffff) << 0x10) | param_2 - 1 & 0xffff);
    uVar3 = param_2 - 2;
  }
  NVar5 = uVar4 | uVar3 & 0xffff;
LAB_00744c00:
  updateNode(this,param_1,NVar5);
  if (param_1[0x1382] != (VehicleNavigationAgent)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00744c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_00744c44)();
    return;
  }
  uVar1 = VehicleNavigationGridAdapter::retrieveTeleportAtTarget
                    (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),param_2);
  if (uVar1 != 0xffff) {
    updateNode(this,param_1,
               *(NodeId *)(*(long *)(*(long *)(param_1 + 0x12a0) + 0x68) + (ulong)uVar1 * 0xe + 2));
    return;
  }
  return;
}


