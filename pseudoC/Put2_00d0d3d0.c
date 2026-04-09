// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00d0d3d0
// Size: 264 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::MessageQueue::Put2(unsigned char const*, unsigned long, int, bool) */

undefined8 CryptoPP::MessageQueue::Put2(uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  (**(code **)(*(long *)(param_1 + 0x18) + 0x38))(param_1 + 0x18,param_2,(ulong)(uint)param_3,0,1);
  uVar3 = (*(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x80)) - 1;
  lVar2 = *(long *)(param_1 + 0x68);
  lVar4 = (uVar3 & 0x1ff) * 8;
  lVar6 = *(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8));
  *(ulong *)(lVar6 + lVar4) = *(long *)(lVar6 + lVar4) + (ulong)(uint)param_3;
  if (param_4) {
    uVar3 = 0;
    if (*(long *)(param_1 + 0x70) - lVar2 != 0) {
      uVar3 = (*(long *)(param_1 + 0x70) - lVar2) * 0x40 - 1;
    }
    uVar5 = *(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x80);
    if (uVar3 == uVar5) {
      std::__ndk1::deque<unsigned_long,std::__ndk1::allocator<unsigned_long>>::__add_back_capacity()
      ;
      lVar2 = *(long *)(param_1 + 0x68);
      uVar5 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88);
    }
    lVar4 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(*(long *)(lVar2 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8) = 0;
    uVar3 = (*(long *)(param_1 + 0xb8) + *(long *)(param_1 + 0xb0)) - 1;
    lVar2 = (uVar3 & 0x3ff) * 4;
    lVar4 = *(long *)(lVar4 + (uVar3 >> 7 & 0x1fffffffffffff8));
    iVar1 = *(int *)(lVar4 + lVar2);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
    *(int *)(lVar4 + lVar2) = iVar1 + 1;
  }
  return 0;
}


