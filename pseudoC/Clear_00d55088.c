// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00d55088
// Size: 60 bytes
// Signature: undefined Clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::TMMesh::Clear() */

void HACD::TMMesh::Clear(void)

{
  ulong uVar1;
  
  CircularList<HACD::TMMVertex>::Clear();
  CircularList<HACD::TMMEdge>::Clear();
  do {
    uVar1 = CircularList<HACD::TMMTriangle>::Delete();
  } while ((uVar1 & 1) != 0);
  return;
}


