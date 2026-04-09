// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cda40c
// Size: 616 bytes
// Signature: undefined __thiscall Put2(HashFilter * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::HashFilter::Put2(unsigned char const*, unsigned long, int, bool) */

void __thiscall
CryptoPP::HashFilter::Put2(HashFilter *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  ulong local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar8 = *(int *)(this + 0x28);
  if (iVar8 == 0) {
    *(undefined8 *)(this + 0x20) = 0;
    if (this[0x60] != (HashFilter)0x0) goto LAB_00cda4a8;
LAB_00cda4f8:
    if ((param_1 != (uchar *)0x0) && (param_2 != 0)) {
      (**(code **)(**(long **)(this + 0x58) + 0x28))(*(long **)(this + 0x58),param_1,param_2);
    }
    if (param_3 == 0) {
LAB_00cda578:
      uVar6 = 0;
      goto LAB_00cda644;
    }
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar6 = (ulong)*(uint *)(this + 100);
    local_60 = uVar6;
    if (*(ulong *)(this + 0x48) < uVar6) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x128))(plVar4,this + 0x88,&local_60);
      if (local_60 < uVar6) {
        uVar1 = *(ulong *)(this + 0x48);
        pvVar5 = *(void **)(this + 0x50);
        if (uVar1 != uVar6) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined *)((long)pvVar5 + (uVar1 - 1)) = 0;
          }
          UnalignedDeallocate(pvVar5);
          pvVar5 = (void *)UnalignedAllocate(uVar6);
          *(void **)(this + 0x50) = pvVar5;
        }
        *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
        *(ulong *)(this + 0x48) = uVar6;
      }
    }
    else {
      pvVar5 = *(void **)(this + 0x50);
    }
    *(void **)(this + 0x68) = pvVar5;
    (**(code **)(**(long **)(this + 0x58) + 0x80))
              (*(long **)(this + 0x58),pvVar5,*(undefined4 *)(this + 100));
    uVar9 = *(undefined8 *)(this + 0x68);
    iVar8 = param_3 + -1;
    uVar2 = *(undefined4 *)(this + 100);
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    lVar7 = *plVar4;
LAB_00cda60c:
    uVar6 = (**(code **)(lVar7 + 0x130))(plVar4,this + 0x88,uVar9,uVar2,iVar8,param_4);
    *(uint *)(this + 0x28) = (uint)(uVar6 != 0) << 1;
    if (uVar6 == 0) goto LAB_00cda644;
    uVar6 = (ulong)*(uint *)(this + 100) - *(long *)(this + 0x20);
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 2) goto LAB_00cda578;
      uVar9 = *(undefined8 *)(this + 0x68);
      uVar2 = *(undefined4 *)(this + 100);
      iVar8 = 0;
      if (param_3 != 0) {
        iVar8 = param_3 + -1;
      }
      plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      lVar7 = *plVar4;
      goto LAB_00cda60c;
    }
LAB_00cda4a8:
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    lVar7 = (**(code **)(*plVar4 + 0x130))(plVar4,this + 0x70,param_1,param_2,0,param_4);
    *(uint *)(this + 0x28) = (uint)(lVar7 != 0);
    if (lVar7 == 0) goto LAB_00cda4f8;
    uVar6 = param_2 - *(long *)(this + 0x20);
  }
  if (uVar6 < 2) {
    uVar6 = 1;
  }
LAB_00cda644:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


