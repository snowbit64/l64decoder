// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00d1e9b4
// Size: 320 bytes
// Signature: undefined __thiscall TransferTo2(Walker * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::ByteQueue::Walker::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

long __thiscall
CryptoPP::ByteQueue::Walker::TransferTo2
          (Walker *this,BufferedTransformation *param_1,ulong *param_2,basic_string *param_3,
          bool param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 0x20);
  uVar4 = *param_2;
  if (lVar2 == 0) {
    if (uVar4 != 0) goto LAB_00d1ea68;
  }
  else {
    lVar1 = *(long *)(this + 0x30);
    do {
      uVar3 = *(long *)(lVar2 + 0x30) - (*(long *)(lVar2 + 0x28) + lVar1);
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      lVar2 = (**(code **)(*(long *)param_1 + 0x130))
                        (param_1,param_3,*(long *)(lVar2 + 0x20) + *(long *)(lVar2 + 0x28) + lVar1,
                         uVar3,0,param_4);
      if (lVar2 != 0) goto LAB_00d1ead0;
      uVar4 = uVar4 - uVar3;
      *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + uVar3;
      if (uVar4 == 0) {
        lVar2 = 0;
        *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + uVar3;
        goto LAB_00d1ead0;
      }
      lVar1 = 0;
      *(undefined8 *)(this + 0x30) = 0;
      lVar2 = **(long **)(this + 0x20);
      *(long *)(this + 0x20) = lVar2;
    } while (lVar2 != 0);
LAB_00d1ea68:
    uVar3 = *(ulong *)(this + 0x40);
    if (uVar3 != 0) {
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      lVar2 = (**(code **)(*(long *)param_1 + 0x130))
                        (param_1,param_3,*(undefined8 *)(this + 0x38),uVar3,0,param_4);
      if (lVar2 == 0) {
        uVar4 = uVar4 - uVar3;
        *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + uVar3;
        *(ulong *)(this + 0x40) = *(long *)(this + 0x40) - uVar3;
      }
      goto LAB_00d1ead0;
    }
  }
  lVar2 = 0;
LAB_00d1ead0:
  *param_2 = *param_2 - uVar4;
  return lVar2;
}


