// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeshSplitShape
// Entry Point: 00989f00
// Size: 108 bytes
// Signature: undefined __thiscall ~MeshSplitShape(MeshSplitShape * this)


/* non-virtual thunk to MeshSplitShape::~MeshSplitShape() */

void __thiscall MeshSplitShape::~MeshSplitShape(MeshSplitShape *this)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + -0x158);
  pvVar3 = *(void **)(this + 0xa8);
  iVar1 = *(int *)((long)pvVar3 + 0x14);
  *this_00 = &PTR__MeshSplitShape_00fe0a50;
  iVar2 = iVar1 + -1;
  *(undefined ***)this = &PTR__MeshSplitShape_00fe0ac0;
  *(undefined ***)(this + 8) = &PTR__MeshSplitShape_00fe0ae8;
  if (iVar1 == 0 || iVar2 == 0) {
    operator_delete(pvVar3);
  }
  else {
    *(int *)((long)pvVar3 + 0x14) = iVar2;
  }
                    /* try { // try from 00989f4c to 00989f5b has its CatchHandler @ 00989f6c */
  MeshSplitManager::removeShape
            ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,
             (MeshSplitShape *)this_00);
  GsShape::~GsShape((GsShape *)this_00);
  return;
}


