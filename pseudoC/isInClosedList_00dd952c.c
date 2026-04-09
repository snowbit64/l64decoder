// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isInClosedList
// Entry Point: 00dd952c
// Size: 40 bytes
// Signature: undefined __thiscall isInClosedList(dtNavMeshQuery * this, uint param_1)


/* dtNavMeshQuery::isInClosedList(unsigned int) const */

dtNodePool * __thiscall dtNavMeshQuery::isInClosedList(dtNavMeshQuery *this,uint param_1)

{
  dtNodePool *this_00;
  
  this_00 = *(dtNodePool **)(this + 0x50);
  if ((this_00 != (dtNodePool *)0x0) &&
     (this_00 = (dtNodePool *)dtNodePool::findNode(this_00,param_1), this_00 != (dtNodePool *)0x0))
  {
    this_00 = (dtNodePool *)(ulong)(*(uint *)(this_00 + 0x14) >> 0x1f);
  }
  return this_00;
}


