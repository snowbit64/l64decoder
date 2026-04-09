// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cdbea0
// Size: 548 bytes
// Signature: undefined __thiscall Put2(SignerFilter * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::SignerFilter::Put2(unsigned char const*, unsigned long, int, bool) */

ulong __thiscall
CryptoPP::SignerFilter::Put2
          (SignerFilter *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar7 = *(int *)(this + 0x28);
  if (iVar7 == 0) {
    *(undefined8 *)(this + 0x20) = 0;
    (**(code **)(**(long **)(this + 0x40) + 0x28))(*(long **)(this + 0x40),param_1,param_2);
    if (this[0x48] != (SignerFilter)0x0) goto LAB_00cdbf1c;
LAB_00cdbf6c:
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = (**(code **)(**(long **)(this + 0x38) + 0x10))();
    uVar6 = *(ulong *)(this + 0x60);
    pvVar2 = *(void **)(this + 0x68);
    if (uVar6 != uVar1) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)((long)pvVar2 + (uVar6 - 1)) = 0;
      }
      UnalignedDeallocate(pvVar2);
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)UnalignedAllocate(uVar1);
      }
    }
    *(void **)(this + 0x68) = pvVar2;
    uVar4 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
    *(ulong *)(this + 0x60) = uVar1;
    (**(code **)(**(long **)(this + 0x38) + 0x60))
              (*(long **)(this + 0x38),*(undefined8 *)(this + 0x30),uVar4);
    uVar4 = *(undefined8 *)(this + 0x60);
    uVar8 = *(undefined8 *)(this + 0x68);
    lVar5 = *(long *)this;
    iVar7 = param_3 + -1;
  }
  else {
    if (iVar7 == 1) {
LAB_00cdbf1c:
      plVar3 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      lVar5 = (**(code **)(*plVar3 + 0x130))(plVar3,&DEFAULT_CHANNEL,param_1,param_2,0,param_4);
      *(uint *)(this + 0x28) = (uint)(lVar5 != 0);
      if (lVar5 != 0) {
        uVar6 = param_2 - *(long *)(this + 0x20);
        goto LAB_00cdc060;
      }
      goto LAB_00cdbf6c;
    }
    if (iVar7 != 2) {
      return 0;
    }
    uVar4 = *(undefined8 *)(this + 0x60);
    uVar8 = *(undefined8 *)(this + 0x68);
    lVar5 = *(long *)this;
    iVar7 = 0;
    if (param_3 != 0) {
      iVar7 = param_3 + -1;
    }
  }
  plVar3 = (long *)(**(code **)(lVar5 + 0x160))(this);
  lVar5 = (**(code **)(*plVar3 + 0x130))(plVar3,&DEFAULT_CHANNEL,uVar8,uVar4,iVar7,param_4);
  *(uint *)(this + 0x28) = (uint)(lVar5 != 0) << 1;
  if (lVar5 == 0) {
    uVar4 = (**(code **)(**(long **)(this + 0x38) + 0x50))
                      (*(long **)(this + 0x38),*(undefined8 *)(this + 0x30));
    plVar3 = *(long **)(this + 0x40);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    *(undefined8 *)(this + 0x40) = uVar4;
    return 0;
  }
  uVar6 = *(long *)(this + 0x60) - *(long *)(this + 0x20);
LAB_00cdc060:
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  return uVar6;
}


