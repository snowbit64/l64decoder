// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 0073398c
// Size: 388 bytes
// Signature: undefined __thiscall serialize(RoadSegment * this, File * param_1)


/* RoadSegment::serialize(File&) const */

void __thiscall RoadSegment::serialize(RoadSegment *this,File *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = Spline::getForm();
  iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_3c,4);
  if (iVar2 == 4) {
    local_40 = Spline::getNumOfCV();
    iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_40,4);
    if (iVar2 == 4) {
      uVar3 = (**(code **)(*(long *)param_1 + 0x30))
                        (param_1,*(long *)(*(long *)this + 0x18) +
                                 (ulong)(uint)(*(int *)(*(long *)this + 0x20) * 3) * 4,
                         local_40 * 0xc);
      if ((int)uVar3 == 0) goto LAB_00733ae8;
      iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 8,4);
      if ((((iVar2 == 4) &&
           (iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0xc,4), iVar2 == 4)) &&
          (iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x10,4), iVar2 == 4)) &&
         (iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x14,4), iVar2 == 4)) {
        iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x18,1);
        uVar3 = (ulong)(iVar2 == 1);
        goto LAB_00733ae8;
      }
    }
  }
  uVar3 = 0;
LAB_00733ae8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


