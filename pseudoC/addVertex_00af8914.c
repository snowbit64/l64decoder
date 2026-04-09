// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVertex
// Entry Point: 00af8914
// Size: 56 bytes
// Signature: undefined __thiscall addVertex(NavigationMesh * this, float param_1, float param_2, float param_3)


/* NavigationMesh::addVertex(float, float, float) */

void __thiscall
NavigationMesh::addVertex(NavigationMesh *this,float param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(this + 0x18);
  if (uVar1 < *(uint *)(this + 0xc)) {
    uVar2 = uVar1 * 3;
    lVar3 = *(long *)(this + 0x28);
    *(uint *)(this + 0x18) = uVar1 + 1;
    *(float *)(lVar3 + (ulong)uVar2 * 4) = param_1;
    *(float *)(lVar3 + (ulong)(uVar2 + 1) * 4) = param_2;
    *(float *)(lVar3 + (ulong)(uVar2 + 2) * 4) = param_3;
  }
  return;
}


