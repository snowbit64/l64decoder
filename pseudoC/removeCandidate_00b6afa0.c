// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCandidate
// Entry Point: 00b6afa0
// Size: 32 bytes
// Signature: undefined __thiscall removeCandidate(Brep * this, PriorityQueue * param_1, uint param_2)


/* Brep::removeCandidate(PriorityQueue<std::__ndk1::pair<float, unsigned int>, unsigned short,
   std::__ndk1::less<std::__ndk1::pair<float, unsigned int> >,
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>
   > > >&, unsigned int) */

void __thiscall Brep::removeCandidate(Brep *this,PriorityQueue *param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(long *)(this + 0x2f68) + (ulong)param_2 * 8 + 2);
  if (-1 < (short)uVar1) {
    PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
    ::remove((PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
              *)param_1,uVar1);
    return;
  }
  return;
}


