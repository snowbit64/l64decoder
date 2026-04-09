// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedMessageSeriesEnd
// Entry Point: 00d0d554
// Size: 116 bytes
// Signature: undefined __cdecl IsolatedMessageSeriesEnd(bool param_1)


/* CryptoPP::MessageQueue::IsolatedMessageSeriesEnd(bool) */

undefined8 CryptoPP::MessageQueue::IsolatedMessageSeriesEnd(bool param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = (ulong)param_1;
  lVar4 = *(long *)(uVar3 + 0x98);
  lVar2 = *(long *)(uVar3 + 0xa0) - lVar4;
  lVar5 = *(long *)(uVar3 + 0xb8);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = lVar2 * 0x80 - 1;
  }
  uVar6 = lVar5 + *(long *)(uVar3 + 0xb0);
  if (uVar1 == uVar6) {
    std::__ndk1::deque<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__add_back_capacity();
    lVar5 = *(long *)(uVar3 + 0xb8);
    lVar4 = *(long *)(uVar3 + 0x98);
    uVar6 = *(long *)(uVar3 + 0xb0) + lVar5;
  }
  *(long *)(uVar3 + 0xb8) = lVar5 + 1;
  *(undefined4 *)(*(long *)(lVar4 + (uVar6 >> 7 & 0x1fffffffffffff8)) + (uVar6 & 0x3ff) * 4) = 0;
  return 0;
}


