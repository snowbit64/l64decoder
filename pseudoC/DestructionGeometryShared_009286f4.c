// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DestructionGeometryShared
// Entry Point: 009286f4
// Size: 416 bytes
// Signature: undefined __thiscall DestructionGeometryShared(DestructionGeometryShared * this, IndexedTriangleSet * param_1, uint param_2, uint param_3, DestructionChunk * * param_4)


/* DestructionGeometryShared::DestructionGeometryShared(IndexedTriangleSet*, unsigned int, unsigned
   int, DestructionChunk**) */

void __thiscall
DestructionGeometryShared::DestructionGeometryShared
          (DestructionGeometryShared *this,IndexedTriangleSet *param_1,uint param_2,uint param_3,
          DestructionChunk **param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar6 = (ulong)param_3;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
                    /* try { // try from 0092873c to 00928743 has its CatchHandler @ 009288a0 */
  Streamable::Streamable((Streamable *)(this + 0x10));
  *(uint *)(this + 0x60) = param_3;
  *(undefined ***)this = &PTR__DestructionGeometryShared_00fdffb0;
  *(undefined ***)(this + 0x10) = &PTR__DestructionGeometryShared_00fdffe8;
                    /* try { // try from 00928768 to 0092876f has its CatchHandler @ 0092889c */
  __dest = operator_new__(uVar6 << 3);
  *(void **)(this + 0x58) = __dest;
  memcpy(__dest,param_4,uVar6 << 3);
                    /* try { // try from 00928788 to 0092878f has its CatchHandler @ 00928898 */
  iVar1 = DestructionChunk::getNumChildren();
  uVar2 = 0;
  while (iVar1 != 0) {
                    /* try { // try from 00928798 to 009287af has its CatchHandler @ 009288b0 */
    DestructionChunk::getFirstChildIndex();
    iVar1 = DestructionChunk::getNumChildren();
    uVar2 = uVar2 + 1;
  }
  if (param_2 <= uVar2) {
    uVar2 = param_2;
  }
  uVar8 = 0;
  *(uint *)(this + 0x40) = uVar2;
  uVar7 = uVar6;
  if (param_3 != 0) {
    do {
                    /* try { // try from 009287d8 to 009287db has its CatchHandler @ 009288ac */
      iVar1 = DestructionChunk::getNumIndices();
      uVar8 = iVar1 + uVar8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
                    /* try { // try from 009287ec to 009287f7 has its CatchHandler @ 00928894 */
  IndexedTriangleSet::setNumIndices(param_1,uVar8);
  if (param_3 != 0) {
    uVar7 = 0;
    iVar1 = 0;
    do {
      uVar9 = 0;
      while( true ) {
                    /* try { // try from 00928824 to 00928847 has its CatchHandler @ 009288b4 */
        uVar4 = DestructionChunk::getNumIndices();
        if ((uVar4 & 0xffffffff) <= uVar9) break;
        lVar5 = DestructionChunk::getIndices();
        IndexedTriangleSet::setIndex
                  (param_1,(uint)*(ushort *)(lVar5 + uVar9 * 2),iVar1 + (int)uVar9);
        uVar9 = uVar9 + 1;
      }
      uVar7 = uVar7 + 1;
      iVar1 = iVar1 + (int)uVar9;
    } while (uVar7 != uVar6);
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(IndexedTriangleSet **)(this + 0x70) = param_1;
                    /* try { // try from 00928860 to 0092886b has its CatchHandler @ 009288a8 */
  uVar2 = TriangleSet::getAttributes();
  uVar3 = IndexedTriangleSetGeometryUtil::getVertexDeclarationAttributes(uVar2);
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0x3f80000000000000;
  return;
}


