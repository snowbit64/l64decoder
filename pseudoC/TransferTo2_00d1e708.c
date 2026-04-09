// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00d1e708
// Size: 684 bytes
// Signature: undefined __thiscall TransferTo2(ByteQueue * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::ByteQueue::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

long __thiscall
CryptoPP::ByteQueue::TransferTo2
          (ByteQueue *this,BufferedTransformation *param_1,ulong *param_2,basic_string *param_3,
          bool param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined **local_a0;
  undefined **ppuStack_98;
  ByteQueue *local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long local_68;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_4) {
    uVar5 = *param_2;
    if (uVar5 != 0) {
      for (plVar6 = *(long **)(this + 0x20); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar2 = plVar6[6] - plVar6[5];
        uVar3 = uVar5;
        if (uVar2 <= uVar5) {
          uVar3 = uVar2;
        }
        (**(code **)(*(long *)param_1 + 0x138))(param_1,param_3,plVar6[4] + plVar6[5],uVar3,0,1);
        uVar5 = uVar5 - uVar3;
        plVar6[5] = plVar6[5] + uVar3;
        if (uVar5 == 0) break;
      }
    }
    CleanupUsedNodes();
    uVar3 = *(ulong *)(this + 0x38);
    if (uVar5 <= *(ulong *)(this + 0x38)) {
      uVar3 = uVar5;
    }
    if (uVar3 != 0) {
      lVar4 = 0x130;
      if (this[0x40] != (ByteQueue)0x0) {
        lVar4 = 0x138;
      }
      (**(code **)(*(long *)param_1 + lVar4))
                (param_1,param_3,*(undefined8 *)(this + 0x30),uVar3,0,1);
      uVar5 = uVar5 - uVar3;
      *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + uVar3;
      *(ulong *)(this + 0x38) = *(long *)(this + 0x38) - uVar3;
    }
    lVar4 = 0;
    *param_2 = *param_2 - uVar5;
    goto LAB_00d1e980;
  }
  Algorithm::Algorithm((Algorithm *)&local_a0,false);
  lStack_78 = 0;
  local_80 = (long *)0x0;
  local_68 = 0;
  local_70 = 0;
  local_a0 = &PTR__BufferedTransformation_0100f4c8;
  ppuStack_98 = &PTR__Walker_0100f658;
  local_60 = 0;
  local_88 = this;
  BufferedTransformation::Initialize((NameValuePairs *)&local_a0,0x211f5e0);
  uVar5 = *param_2;
  if (local_80 == (long *)0x0) {
    if (uVar5 != 0) goto LAB_00d1e8f0;
LAB_00d1e944:
    lVar4 = 0;
  }
  else {
    do {
      uVar3 = local_80[6] - (local_70 + local_80[5]);
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      lVar4 = (**(code **)(*(long *)param_1 + 0x130))
                        (param_1,param_3,local_80[4] + local_80[5] + local_70,uVar3,0,0);
      if (lVar4 != 0) goto LAB_00d1e964;
      uVar5 = uVar5 - uVar3;
      lStack_78 = lStack_78 + uVar3;
      if (uVar5 == 0) {
        lVar4 = 0;
        local_70 = local_70 + uVar3;
        goto LAB_00d1e964;
      }
      local_80 = (long *)*local_80;
      local_70 = 0;
    } while (local_80 != (long *)0x0);
LAB_00d1e8f0:
    if (local_60 == 0) goto LAB_00d1e944;
    uVar3 = local_60;
    if (uVar5 <= local_60) {
      uVar3 = uVar5;
    }
    lVar4 = (**(code **)(*(long *)param_1 + 0x130))(param_1,param_3,local_68,uVar3,0,0);
    if (lVar4 == 0) {
      uVar5 = uVar5 - uVar3;
      local_68 = local_68 + uVar3;
      local_60 = local_60 - uVar3;
    }
  }
LAB_00d1e964:
  *param_2 = *param_2 - uVar5;
  (**(code **)(*(long *)this + 200))(this);
LAB_00d1e980:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


