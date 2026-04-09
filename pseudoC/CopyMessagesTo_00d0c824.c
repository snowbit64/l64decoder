// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyMessagesTo
// Entry Point: 00d0c824
// Size: 484 bytes
// Signature: undefined __thiscall CopyMessagesTo(MessageQueue * this, BufferedTransformation * param_1, uint param_2, basic_string * param_3)


/* CryptoPP::MessageQueue::CopyMessagesTo(CryptoPP::BufferedTransformation&, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

uint __thiscall
CryptoPP::MessageQueue::CopyMessagesTo
          (MessageQueue *this,BufferedTransformation *param_1,uint param_2,basic_string *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 local_a8;
  undefined **local_a0;
  undefined **ppuStack_98;
  MessageQueue *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_a0,false);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_a0 = &PTR__BufferedTransformation_0100f4c8;
  ppuStack_98 = &PTR__Walker_0100f658;
  local_60 = 0;
  local_88 = this + 0x18;
  BufferedTransformation::Initialize((NameValuePairs *)&local_a0,0x211f5e0);
  uVar6 = *(ulong *)(this + 0x80);
  lVar4 = *(long *)(this + 0x68);
  lVar7 = *(long *)(this + 0x70);
  plVar9 = (long *)(lVar4 + (uVar6 >> 6 & 0x3fffffffffffff8));
  if (lVar7 == lVar4) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(*plVar9 + (uVar6 & 0x1ff) * 8);
  }
  if (param_2 != 0) {
    uVar11 = 1;
    while( true ) {
      plVar1 = (long *)(lVar4 + (uVar6 + *(long *)(this + 0x88) >> 6 & 0x3fffffffffffff8));
      lVar8 = *plVar1;
      lVar5 = 0;
      if (lVar7 != lVar4) {
        lVar5 = lVar8 + (uVar6 + *(long *)(this + 0x88) & 0x1ff) * 8;
      }
      if (lVar8 == lVar5) {
        lVar5 = plVar1[-1] + 0x1000;
      }
      if (puVar10 == (undefined8 *)(lVar5 + -8)) break;
      local_a8 = *puVar10;
      (*(code *)local_a0[0x23])(&local_a0,param_1,&local_a8,param_3,1);
      iVar3 = (**(code **)(*(long *)this + 0x90))(this);
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*(long *)this + 0x90))(this);
        if (iVar3 < 1) {
          iVar3 = -1;
        }
        (**(code **)(*(long *)param_1 + 0x130))(param_1,param_3,0,0,iVar3,1);
      }
      puVar10 = puVar10 + 1;
      if ((long)puVar10 - *plVar9 == 0x1000) {
        plVar9 = plVar9 + 1;
        puVar10 = (undefined8 *)*plVar9;
      }
      if (param_2 == uVar11) goto LAB_00d0c9d4;
      lVar4 = *(long *)(this + 0x68);
      lVar7 = *(long *)(this + 0x70);
      uVar11 = uVar11 + 1;
      uVar6 = *(ulong *)(this + 0x80);
    }
    param_2 = uVar11 - 1;
  }
LAB_00d0c9d4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


