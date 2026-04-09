// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyRangeTo2
// Entry Point: 00d1f510
// Size: 404 bytes
// Signature: undefined __thiscall CopyRangeTo2(Walker * this, BufferedTransformation * param_1, ulong * param_2, ulong param_3, basic_string * param_4, bool param_5)


/* CryptoPP::ByteQueue::Walker::CopyRangeTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) const */

void __thiscall
CryptoPP::ByteQueue::Walker::CopyRangeTo2
          (Walker *this,BufferedTransformation *param_1,ulong *param_2,ulong param_3,
          basic_string *param_4,bool param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined4 local_90;
  undefined8 local_88;
  long *plStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  ulong uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plStack_80 = *(long **)(this + 0x20);
  local_88 = *(undefined8 *)(this + 0x18);
  local_90 = *(undefined4 *)(this + 0x10);
  lStack_70 = *(long *)(this + 0x30);
  local_78 = *(long *)(this + 0x28);
  local_a0 = &PTR__BufferedTransformation_0100f4c8;
  ppuStack_98 = &PTR__Walker_0100f658;
  uStack_60 = *(ulong *)(this + 0x40);
  local_68 = *(undefined8 *)(this + 0x38);
  BufferedTransformation::Skip((BufferedTransformation *)&local_a0,*param_2);
  uVar4 = param_3 - *param_2;
  uVar5 = uVar4;
  if (plStack_80 == (long *)0x0) {
    if (uVar4 != 0) goto LAB_00d1f61c;
  }
  else {
    do {
      uVar3 = plStack_80[6] - (lStack_70 + plStack_80[5]);
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      lVar2 = (**(code **)(*(long *)param_1 + 0x130))
                        (param_1,param_4,plStack_80[4] + plStack_80[5] + lStack_70,uVar3,0,param_5);
      if (lVar2 != 0) goto LAB_00d1f664;
      uVar5 = uVar5 - uVar3;
      local_78 = local_78 + uVar3;
      if (uVar5 == 0) goto LAB_00d1f660;
      plStack_80 = (long *)*plStack_80;
      lStack_70 = 0;
    } while (plStack_80 != (long *)0x0);
LAB_00d1f61c:
    if (uStack_60 != 0) {
      uVar3 = uStack_60;
      if (uVar5 <= uStack_60) {
        uVar3 = uVar5;
      }
      lVar2 = (**(code **)(*(long *)param_1 + 0x130))(param_1,param_4,local_68,uVar3,0,param_5);
      if (lVar2 != 0) {
        uVar3 = 0;
      }
      uVar5 = uVar5 - uVar3;
      goto LAB_00d1f664;
    }
  }
LAB_00d1f660:
  lVar2 = 0;
LAB_00d1f664:
  *param_2 = (uVar4 - uVar5) + *param_2;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}


