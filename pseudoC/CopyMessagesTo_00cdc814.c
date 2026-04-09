// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyMessagesTo
// Entry Point: 00cdc814
// Size: 232 bytes
// Signature: undefined __thiscall CopyMessagesTo(Store * this, BufferedTransformation * param_1, uint param_2, basic_string * param_3)


/* CryptoPP::Store::CopyMessagesTo(CryptoPP::BufferedTransformation&, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined4 __thiscall
CryptoPP::Store::CopyMessagesTo
          (Store *this,BufferedTransformation *param_1,uint param_2,basic_string *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar3 = 0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2 != 0) && (this[0x18] == (Store)0x0)) {
    local_50 = 0;
    uVar3 = 1;
    (**(code **)(*(long *)this + 0x120))(this,param_1,&local_50,0xffffffffffffffff,param_3,1);
    iVar2 = (**(code **)(*(long *)this + 0x90))(this);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(long *)this + 0x90))(this);
      if (iVar2 < 1) {
        iVar2 = -1;
      }
      uVar3 = 1;
      (**(code **)(*(long *)param_1 + 0x130))(param_1,param_3,0,0,iVar2,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


