// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferMessagesTo2
// Entry Point: 00c7ac08
// Size: 392 bytes
// Signature: undefined __thiscall TransferMessagesTo2(BufferedTransformation * this, BufferedTransformation * param_1, uint * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::BufferedTransformation::TransferMessagesTo2(CryptoPP::BufferedTransformation&, unsigned
   int&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
CryptoPP::BufferedTransformation::TransferMessagesTo2
          (BufferedTransformation *this,BufferedTransformation *param_1,uint *param_2,
          basic_string *param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = (**(code **)(*(long *)this + 0x160))();
  while (lVar5 != 0) {
    this = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))(this);
    lVar5 = (**(code **)(*(long *)this + 0x160))();
  }
  uVar1 = *param_2;
  *param_2 = 0;
  if (uVar1 != 0) {
    do {
      uVar6 = (**(code **)(*(long *)this + 0xe0))(this);
      if ((uVar6 & 1) == 0) break;
      while (uVar6 = (**(code **)(*(long *)this + 0xa0))(this), (uVar6 & 1) != 0) {
        local_70 = 0xffffffffffffffff;
        lVar5 = (**(code **)(*(long *)this + 0x118))(this,param_1,&local_70,param_3,param_4);
        if (lVar5 != 0) goto LAB_00c7ad48;
      }
      iVar4 = (**(code **)(*(long *)this + 0x90))(this);
      iVar7 = -1;
      if (-1 < iVar4) {
        iVar7 = iVar4 + 1;
      }
      lVar5 = (**(code **)(*(long *)param_1 + 0x130))(param_1,param_3,0,0,iVar7,param_4);
      if (lVar5 != 0) {
        lVar5 = 1;
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return;
        }
        goto LAB_00c7ad8c;
      }
      (**(code **)(*(long *)this + 0xe8))(this);
      uVar2 = *param_2;
      *param_2 = uVar2 + 1;
    } while (uVar2 + 1 < uVar1);
  }
  lVar5 = 0;
LAB_00c7ad48:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00c7ad8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


