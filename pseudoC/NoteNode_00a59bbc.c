// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NoteNode
// Entry Point: 00a59bbc
// Size: 92 bytes
// Signature: undefined __thiscall ~NoteNode(NoteNode * this)


/* NoteNode::~NoteNode() */

void __thiscall NoteNode::~NoteNode(NoteNode *this)

{
  *(undefined ***)this = &PTR__NoteNode_00fe38f0;
                    /* try { // try from 00a59bdc to 00a59bef has its CatchHandler @ 00a59c18 */
  SimpleCullingStructure::removeEntity
            ((SimpleCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xc0),
             (TransformGroup *)this);
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x1a8));
  if (((byte)this[0x158] & 1) != 0) {
    operator_delete(*(void **)(this + 0x168));
  }
  TransformGroup::~TransformGroup((TransformGroup *)this);
  return;
}


