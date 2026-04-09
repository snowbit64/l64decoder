// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00d0c680
// Size: 156 bytes
// Signature: undefined __thiscall TransferTo2(MessageQueue * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::MessageQueue::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

void __thiscall
CryptoPP::MessageQueue::TransferTo2
          (MessageQueue *this,BufferedTransformation *param_1,ulong *param_2,basic_string *param_3,
          bool param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (**(code **)(*(long *)this + 0x98))();
  uVar1 = *param_2;
  if (uVar2 <= *param_2) {
    uVar1 = uVar2;
  }
  *param_2 = uVar1;
  ByteQueue::TransferTo2((ByteQueue *)(this + 0x18),param_1,param_2,param_3,param_4);
  lVar3 = (*(ulong *)(this + 0x80) & 0x1ff) * 8;
  lVar4 = *(long *)(*(long *)(this + 0x68) + (*(ulong *)(this + 0x80) >> 6 & 0x3fffffffffffff8));
  *(ulong *)(lVar4 + lVar3) = *(long *)(lVar4 + lVar3) - *param_2;
  return;
}


