// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStartLevelChunks
// Entry Point: 00929148
// Size: 24 bytes
// Signature: undefined __thiscall getStartLevelChunks(DestructionGeometryShared * this, vector * param_1)


/* DestructionGeometryShared::getStartLevelChunks(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

void __thiscall
DestructionGeometryShared::getStartLevelChunks(DestructionGeometryShared *this,vector *param_1)

{
  getLevelChunks(this,*(uint *)(this + 0x40),0,param_1,0);
  return;
}


