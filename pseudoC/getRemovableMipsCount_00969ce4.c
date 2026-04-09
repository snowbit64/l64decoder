// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRemovableMipsCount
// Entry Point: 00969ce4
// Size: 44 bytes
// Signature: undefined __cdecl getRemovableMipsCount(StreamingDesc * param_1, bool param_2)


/* TextureStreamingManager::getRemovableMipsCount(TextureStreamingManager::StreamingDesc const&,
   bool) */

int TextureStreamingManager::getRemovableMipsCount(StreamingDesc *param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 8;
  if (!param_2) {
    lVar2 = 4;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + lVar2 + 0x20) - 1U <= *(uint *)(param_1 + 0x98)) {
    iVar1 = *(uint *)(param_1 + 0x98) - (*(int *)(param_1 + lVar2 + 0x20) - 1U);
  }
  return iVar1;
}


