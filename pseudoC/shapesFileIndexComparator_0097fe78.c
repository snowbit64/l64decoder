// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shapesFileIndexComparator
// Entry Point: 0097fe78
// Size: 20 bytes
// Signature: undefined __cdecl shapesFileIndexComparator(MeshSplitShape * param_1, MeshSplitShape * param_2)


/* MeshSplitManager::SaveTempFileId::shapesFileIndexComparator(MeshSplitShape const*, MeshSplitShape
   const*) */

bool MeshSplitManager::SaveTempFileId::shapesFileIndexComparator
               (MeshSplitShape *param_1,MeshSplitShape *param_2)

{
  return *(uint *)(param_1 + 0x20c) < *(uint *)(param_2 + 0x20c);
}


