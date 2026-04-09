// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsConnectionWithinLimits
// Entry Point: 009833b0
// Size: 76 bytes
// Signature: undefined __thiscall getIsConnectionWithinLimits(MeshSplitManager * this, PLATFORM_ID param_1)


/* MeshSplitManager::getIsConnectionWithinLimits(SysUtilBase::PLATFORM_ID) */

bool __thiscall
MeshSplitManager::getIsConnectionWithinLimits(MeshSplitManager *this,PLATFORM_ID param_1)

{
  if (param_1 != 0) {
    return true;
  }
  if (*(int *)(this + 0x78) != 0) {
    return false;
  }
  return *(int *)(this + 0x7c) == 0;
}


