// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00731ffc
// Size: 296 bytes
// Signature: undefined __thiscall serialize(VehicleNavigationMap * this, File * param_1)


/* VehicleNavigationMap::serialize(File&) const */

void __thiscall VehicleNavigationMap::serialize(VehicleNavigationMap *this,File *param_1)

{
  RoadSegment *this_00;
  RoadSegment *pRVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  RoadSegment *pRVar5;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x14,2);
  if ((iVar3 == 2) &&
     (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 8,4), iVar3 == 4)) {
    uVar4 = (**(code **)(*(long *)param_1 + 0x30))
                      (param_1,*(undefined8 *)this,
                       (uint)*(ushort *)(this + 0x14) * (uint)*(ushort *)(this + 0x14));
    if ((int)uVar4 == 0) goto LAB_007320fc;
    local_3c = (int)((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 4) * -0x33333333;
    iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_3c,4);
    if (iVar3 == 4) {
      this_00 = *(RoadSegment **)(this + 0x18);
      pRVar1 = *(RoadSegment **)(this + 0x20);
      pRVar5 = this_00;
      while ((this_00 != pRVar1 &&
             (uVar4 = RoadSegment::serialize(this_00,param_1), pRVar5 = this_00, (uVar4 & 1) != 0)))
      {
        this_00 = this_00 + 0x50;
        pRVar5 = pRVar1;
      }
      uVar4 = (ulong)(pRVar5 == pRVar1);
      goto LAB_007320fc;
    }
  }
  uVar4 = 0;
LAB_007320fc:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


