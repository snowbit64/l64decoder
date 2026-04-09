// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00b6afc0
// Size: 192 bytes
// Signature: undefined __thiscall remove(PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>> * this, ushort param_1)


/* PriorityQueue<std::__ndk1::pair<float, unsigned int>, unsigned short,
   std::__ndk1::less<std::__ndk1::pair<float, unsigned int> >,
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>
   > > >::remove(unsigned short) */

void __thiscall
PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
::remove(PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
         *this,ushort param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  undefined4 uVar10;
  
  lVar7 = *(long *)this;
  uVar3 = (uint)param_1;
  **(undefined2 **)(lVar7 + (ulong)param_1 * 0x10 + 8) = 0xffff;
  while (uVar3 != 0) {
    uVar5 = (ushort)uVar3;
    puVar1 = (undefined4 *)(lVar7 + (ulong)uVar5 * 0x10);
    uVar3 = uVar3 - 1 >> 1 & 0xffff;
    puVar2 = (undefined4 *)(lVar7 + (ulong)uVar3 * 0x10);
    puVar9 = *(ushort **)(puVar2 + 2);
    uVar10 = *puVar2;
    uVar4 = puVar2[1];
    *puVar9 = uVar5;
    *puVar1 = uVar10;
    puVar1[1] = uVar4;
    *(ushort **)(puVar1 + 2) = puVar9;
  }
  lVar8 = *(long *)(this + 8);
  if (0x10 < (ulong)(lVar8 - lVar7)) {
    uVar6 = (short)((ulong)(lVar8 - lVar7) >> 4) - 1;
    uVar5 = adjustDown(this,uVar6);
    lVar8 = *(long *)(this + 8);
    puVar1 = (undefined4 *)(*(long *)this + (ulong)uVar6 * 0x10);
    puVar2 = (undefined4 *)(*(long *)this + (ulong)uVar5 * 0x10);
    uVar4 = puVar1[1];
    puVar9 = *(ushort **)(puVar1 + 2);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    *(ushort **)(puVar2 + 2) = puVar9;
    *puVar9 = uVar5;
  }
  *(long *)(this + 8) = lVar8 + -0x10;
  return;
}


