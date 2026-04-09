// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 008fa294
// Size: 416 bytes
// Signature: undefined __thiscall serialize(Decimator * this, File * param_1)


/* Decimator::serialize(File&) const */

void __thiscall Decimator::serialize(Decimator *this,File *param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x10,4);
  if (((iVar5 == 4) &&
      (iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x14,4), iVar5 == 4)) &&
     (iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x18,4), iVar5 == 4)) {
    uVar1 = *(int *)(this + 0x14) * *(int *)(this + 0x10) * *(int *)(this + 0x18);
    if (uVar1 == 0) {
      bVar3 = true;
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = *(long *)(this + 8);
        local_5c = (int)((ulong)(((long *)(lVar7 + lVar6))[1] - *(long *)(lVar7 + lVar6)) >> 2) *
                   -0x55555555;
        iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_5c,4);
        if ((iVar5 != 4) ||
           (iVar5 = (**(code **)(*(long *)param_1 + 0x30))
                              (param_1,*(undefined8 *)(lVar7 + lVar6),local_5c * 0xc),
           (long)iVar5 != (ulong)(uint)(local_5c * 3) * 4)) goto LAB_008fa3f8;
        iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,lVar7 + lVar6 + 0x18,8);
        bVar3 = iVar5 == 8;
      } while ((bVar3) &&
              (bVar4 = (ulong)uVar1 * 0x20 + -0x20 != lVar6, lVar6 = lVar6 + 0x20, bVar4));
    }
  }
  else {
LAB_008fa3f8:
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


