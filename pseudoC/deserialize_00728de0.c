// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00728de0
// Size: 352 bytes
// Signature: undefined __thiscall deserialize(StoppingPath * this, File * param_1)


/* StoppingPath::deserialize(File&) */

void __thiscall StoppingPath::deserialize(StoppingPath *this,File *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_4c,4);
  if (iVar3 == 4) {
    lVar7 = *(long *)this;
    lVar8 = *(long *)(this + 8);
    lVar5 = lVar8 - lVar7 >> 3;
    uVar4 = (ulong)local_4c;
    uVar6 = lVar5 * -0x5555555555555555;
    if (uVar4 <= uVar6) {
      if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
        lVar8 = lVar7 + uVar4 * 0x18;
        *(long *)(this + 8) = lVar8;
      }
    }
    else {
      std::__ndk1::vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>::
      __append((vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>> *)this
               ,uVar4 + lVar5 * 0x5555555555555555);
      lVar7 = *(long *)this;
      lVar8 = *(long *)(this + 8);
    }
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x18) {
      iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar7,0x18);
      if (iVar3 != 0x18) {
        if (lVar7 != lVar8) goto LAB_00728f10;
        break;
      }
    }
    iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 0x18,4);
    if ((iVar3 == 4) &&
       (iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 0x1c,4), iVar3 == 4)) {
      iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this + 0x20,1);
      bVar2 = iVar3 == 1;
      goto LAB_00728f14;
    }
  }
LAB_00728f10:
  bVar2 = false;
LAB_00728f14:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


