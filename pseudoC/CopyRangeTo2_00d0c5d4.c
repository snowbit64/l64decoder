// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyRangeTo2
// Entry Point: 00d0c5d4
// Size: 172 bytes
// Signature: undefined __thiscall CopyRangeTo2(MessageQueue * this, BufferedTransformation * param_1, ulong * param_2, ulong param_3, basic_string * param_4, bool param_5)


/* CryptoPP::MessageQueue::CopyRangeTo2(CryptoPP::BufferedTransformation&, unsigned long&, unsigned
   long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) const */

undefined8 __thiscall
CryptoPP::MessageQueue::CopyRangeTo2
          (MessageQueue *this,BufferedTransformation *param_1,ulong *param_2,ulong param_3,
          basic_string *param_4,bool param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  uVar1 = (**(code **)(*(long *)this + 0x98))();
  if (uVar3 < uVar1) {
    uVar1 = (**(code **)(*(long *)this + 0x98))(this);
    if (uVar1 <= param_3) {
      param_3 = uVar1;
    }
    uVar2 = ByteQueue::CopyRangeTo2
                      ((ByteQueue *)(this + 0x18),param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}


