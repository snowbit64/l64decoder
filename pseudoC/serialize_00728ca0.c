// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00728ca0
// Size: 320 bytes
// Signature: undefined __thiscall serialize(StoppingPath * this, File * param_1)


/* StoppingPath::serialize(File&) const */

void __thiscall StoppingPath::serialize(StoppingPath *this,File *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4c = (int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 3) * -0x55555555;
  iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_4c,4);
  if (iVar4 == 4) {
    lVar5 = *(long *)this;
    lVar1 = *(long *)(this + 8);
    if (lVar5 == lVar1) {
LAB_00728d44:
      if (lVar5 != lVar1) goto LAB_00728db0;
    }
    else {
      do {
        iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,lVar5,0x18);
        if (iVar4 != 0x18) goto LAB_00728d44;
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != lVar1);
    }
    iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x18,4);
    if ((iVar4 == 4) &&
       (iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1c,4), iVar4 == 4)) {
      iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x20,1);
      bVar3 = iVar4 == 1;
      goto LAB_00728db4;
    }
  }
LAB_00728db0:
  bVar3 = false;
LAB_00728db4:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


