// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00732124
// Size: 516 bytes
// Signature: undefined __thiscall deserialize(VehicleNavigationMap * this, File * param_1)


/* VehicleNavigationMap::deserialize(File&) */

bool __thiscall VehicleNavigationMap::deserialize(VehicleNavigationMap *this,File *param_1)

{
  long lVar1;
  RoadSegment *this_00;
  RoadSegment *pRVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  RoadSegment *pRVar10;
  long lVar11;
  float local_64;
  ushort local_60 [2];
  uint local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_60,2);
  if ((iVar6 == 2) &&
     (iVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_64,4), iVar6 == 4)) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
    }
    uVar9 = (ulong)local_60[0] * (ulong)local_60[0];
    pvVar7 = operator_new__(uVar9);
    *(void **)this = pvVar7;
    iVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,pvVar7,uVar9);
    if (iVar6 == 0) {
      if (*(void **)this != (void *)0x0) {
        operator_delete__(*(void **)this);
      }
      bVar5 = false;
      *(undefined8 *)this = 0;
    }
    else {
      lVar1 = *(long *)(this + 0x18);
      *(ushort *)(this + 0x14) = local_60[0];
      *(float *)(this + 8) = local_64;
      *(float *)(this + 0xc) = 1.0 / local_64;
      *(float *)(this + 0x10) = ((float)(ulong)local_60[0] * 0.5) / local_64;
      lVar4 = *(long *)(this + 0x20);
      while (lVar4 != lVar1) {
        pvVar7 = *(void **)(lVar4 + -0x18);
        if (pvVar7 != (void *)0x0) {
          *(void **)(lVar4 + -0x10) = pvVar7;
          operator_delete(pvVar7);
        }
        pvVar7 = *(void **)(lVar4 + -0x30);
        if (pvVar7 != (void *)0x0) {
          *(void **)(lVar4 + -0x28) = pvVar7;
          operator_delete(pvVar7);
        }
        plVar8 = *(long **)(lVar4 + -0x50);
        lVar11 = lVar4 + -0x50;
        *(undefined8 *)(lVar4 + -0x50) = 0;
        lVar4 = lVar11;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      *(long *)(this + 0x20) = lVar1;
      iVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_5c,4);
      if (iVar6 == 4) {
        std::__ndk1::vector<RoadSegment,std::__ndk1::allocator<RoadSegment>>::resize
                  ((vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> *)(this + 0x18),
                   (ulong)local_5c);
        this_00 = *(RoadSegment **)(this + 0x18);
        pRVar2 = *(RoadSegment **)(this + 0x20);
        pRVar10 = this_00;
        while ((this_00 != pRVar2 &&
               (uVar9 = RoadSegment::deserialize(this_00,param_1), pRVar10 = this_00,
               (uVar9 & 1) != 0))) {
          this_00 = this_00 + 0x50;
          pRVar10 = pRVar2;
        }
        bVar5 = pRVar10 == pRVar2;
      }
      else {
        bVar5 = false;
      }
      createConnectivityGraph();
      createSpatialIndex();
    }
  }
  else {
    bVar5 = false;
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


