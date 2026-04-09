// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUvDensity
// Entry Point: 00979d10
// Size: 12 bytes
// Signature: undefined __thiscall getUvDensity(MeshSplitAttachmentGeometry * this, uint param_1, uint param_2)


/* MeshSplitAttachmentGeometry::getUvDensity(unsigned int, unsigned int) const */

undefined4 __thiscall
MeshSplitAttachmentGeometry::getUvDensity
          (MeshSplitAttachmentGeometry *this,uint param_1,uint param_2)

{
  return *(undefined4 *)(this + (ulong)param_2 * 4 + 0x80);
}


