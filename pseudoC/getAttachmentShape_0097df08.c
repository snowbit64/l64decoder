// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttachmentShape
// Entry Point: 0097df08
// Size: 48 bytes
// Signature: undefined __cdecl getAttachmentShape(MeshSplitShape * param_1)


/* MeshSplitManager::getAttachmentShape(MeshSplitShape*) */

long MeshSplitManager::getAttachmentShape(MeshSplitShape *param_1)

{
  long lVar1;
  
  if ((((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(long **)(param_1 + 0x28)) >> 3) == 0) ||
      (lVar1 = **(long **)(param_1 + 0x28), (*(byte *)(lVar1 + 0x11) >> 3 & 1) == 0)) ||
     ((*(byte *)(*(long *)(lVar1 + 0x170) + 0x31) >> 1 & 1) == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}


