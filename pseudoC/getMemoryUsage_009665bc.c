// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemoryUsage
// Entry Point: 009665bc
// Size: 44 bytes
// Signature: undefined __thiscall getMemoryUsage(TextureStreamingManager * this, bool param_1, bool param_2)


/* TextureStreamingManager::getMemoryUsage(bool, bool) const */

long __thiscall
TextureStreamingManager::getMemoryUsage(TextureStreamingManager *this,bool param_1,bool param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)*(uint *)(this + 0x5a8);
  if (param_2) {
    lVar2 = (long)*(int *)(this + 0x828);
  }
  else {
    lVar2 = 0;
  }
  if (!param_1) {
    uVar1 = 0;
  }
  return (uVar1 + *(long *)(this + 0x220)) - lVar2;
}


