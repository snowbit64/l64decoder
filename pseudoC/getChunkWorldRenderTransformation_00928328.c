// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkWorldRenderTransformation
// Entry Point: 00928328
// Size: 100 bytes
// Signature: undefined __thiscall getChunkWorldRenderTransformation(DestructionGeometry * this, uint param_1, Matrix4x4 * param_2)


/* DestructionGeometry::getChunkWorldRenderTransformation(unsigned int, Matrix4x4 const&) */

long __thiscall
DestructionGeometry::getChunkWorldRenderTransformation
          (DestructionGeometry *this,uint param_1,Matrix4x4 *param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(this + 0xd8);
  uVar4 = (ulong)param_1;
  pcVar2 = (char *)(lVar1 + (ulong)param_1 * 0x94 + 0x90);
  if (*pcVar2 == '\0') {
    lVar3 = *(long *)(this + 0xe0);
    *pcVar2 = '\x01';
    Matrix4x4::mult3x4((Matrix4x4 *)(lVar3 + uVar4 * 0x40),param_2,
                       (Matrix4x4 *)(lVar1 + uVar4 * 0x94 + 0x10));
  }
  return *(long *)(this + 0xe0) + uVar4 * 0x40;
}


