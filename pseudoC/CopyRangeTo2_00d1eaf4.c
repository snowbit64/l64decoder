// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyRangeTo2
// Entry Point: 00d1eaf4
// Size: 428 bytes
// Signature: undefined __thiscall CopyRangeTo2(ByteQueue * this, BufferedTransformation * param_1, ulong * param_2, ulong param_3, basic_string * param_4, bool param_5)


/* CryptoPP::ByteQueue::CopyRangeTo2(CryptoPP::BufferedTransformation&, unsigned long&, unsigned
   long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) const */

void __thiscall
CryptoPP::ByteQueue::CopyRangeTo2
          (ByteQueue *this,BufferedTransformation *param_1,ulong *param_2,ulong param_3,
          basic_string *param_4,bool param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **local_a0;
  undefined **ppuStack_98;
  ByteQueue *local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
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
  BufferedTransformation::Skip((BufferedTransformation *)&local_a0,*param_2);
  uVar4 = param_3 - *param_2;
  uVar5 = uVar4;
  if (local_80 == (long *)0x0) {
    if (uVar4 != 0) goto LAB_00d1ec18;
  }
  else {
    do {
      uVar3 = local_80[6] - (local_70 + local_80[5]);
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      lVar2 = (**(code **)(*(long *)param_1 + 0x130))
                        (param_1,param_4,local_80[4] + local_80[5] + local_70,uVar3,0,param_5);
      if (lVar2 != 0) goto LAB_00d1ec60;
      uVar5 = uVar5 - uVar3;
      lStack_78 = lStack_78 + uVar3;
      if (uVar5 == 0) goto LAB_00d1ec5c;
      local_80 = (long *)*local_80;
      local_70 = 0;
    } while (local_80 != (long *)0x0);
LAB_00d1ec18:
    if (local_60 != 0) {
      uVar3 = local_60;
      if (uVar5 <= local_60) {
        uVar3 = uVar5;
      }
      lVar2 = (**(code **)(*(long *)param_1 + 0x130))(param_1,param_4,local_68,uVar3,0,param_5);
      if (lVar2 != 0) {
        uVar3 = 0;
      }
      uVar5 = uVar5 - uVar3;
      goto LAB_00d1ec60;
    }
  }
LAB_00d1ec5c:
  lVar2 = 0;
LAB_00d1ec60:
  *param_2 = (uVar4 - uVar5) + *param_2;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}


