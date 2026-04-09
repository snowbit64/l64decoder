// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMipRangeSize
// Entry Point: 00969d10
// Size: 240 bytes
// Signature: undefined __cdecl computeMipRangeSize(StreamingDesc * param_1, int param_2)


/* TextureStreamingManager::computeMipRangeSize(TextureStreamingManager::StreamingDesc const&, int)
    */

int TextureStreamingManager::computeMipRangeSize(StreamingDesc *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar2 = 6;
    if (*(int *)(param_1 + 0x54) != 1) {
      iVar2 = 1;
    }
    if (param_2 < 1) {
      iVar3 = 0;
      uVar4 = 0;
      do {
        iVar1 = ImageUtil::getMemorySize
                          ((*(uint *)(param_1 + 0x38) >>
                           (ulong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x98) & 0x1f)) >>
                           (ulong)(uVar4 & 0x1f),
                           (*(uint *)(param_1 + 0x3c) >>
                           (ulong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x98) & 0x1f)) >>
                           (ulong)(uVar4 & 0x1f),1,*(FORMAT *)(param_1 + 0x78),
                           *(TYPE *)(param_1 + 0x50));
        iVar3 = iVar3 + iVar1 * iVar2;
        uVar4 = uVar4 + 1;
      } while (-param_2 != uVar4);
    }
    else {
      iVar3 = 0;
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        iVar1 = ImageUtil::getMemorySize
                          ((*(uint *)(param_1 + 0x38) >>
                           (ulong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x98) & 0x1f)) <<
                           (ulong)(uVar4 & 0x1f),
                           (*(uint *)(param_1 + 0x3c) >>
                           (ulong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x98) & 0x1f)) <<
                           (ulong)(uVar4 & 0x1f),1,*(FORMAT *)(param_1 + 0x78),
                           *(TYPE *)(param_1 + 0x50));
        iVar3 = iVar3 + iVar1 * iVar2;
      } while (param_2 != uVar4);
    }
  }
  return iVar3;
}


