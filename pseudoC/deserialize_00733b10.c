// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00733b10
// Size: 448 bytes
// Signature: undefined __thiscall deserialize(RoadSegment * this, File * param_1)


/* RoadSegment::deserialize(File&) */

void __thiscall RoadSegment::deserialize(RoadSegment *this,File *param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  CubicSpline *this_00;
  long *plVar5;
  float *pfVar6;
  uint local_50;
  FORM local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_4c,4);
  if (iVar4 == 4) {
    this_00 = (CubicSpline *)operator_new(0x40);
                    /* try { // try from 00733b6c to 00733b6f has its CatchHandler @ 00733cd0 */
    CubicSpline::CubicSpline(this_00,local_4c);
    plVar5 = *(long **)this;
    *(CubicSpline **)this = this_00;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_50,4);
    uVar2 = local_50;
    if (iVar4 == 4) {
      pfVar6 = (float *)operator_new__((ulong)(local_50 * 3) << 2);
      iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,pfVar6,uVar2 * 0xc);
      if (iVar4 == 0) {
        operator_delete__(pfVar6);
      }
      else {
        Spline::setCVs(*(Spline **)this,local_50,pfVar6);
        operator_delete__(pfVar6);
        iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 8,4);
        if ((((iVar4 == 4) &&
             (iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 0xc,4), iVar4 == 4)) &&
            (iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 0x10,4), iVar4 == 4)) &&
           (iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 0x14,4), iVar4 == 4)) {
          iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 0x18,1);
          bVar3 = iVar4 == 1;
          goto LAB_00733ca4;
        }
      }
    }
  }
  bVar3 = false;
LAB_00733ca4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


