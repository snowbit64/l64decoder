// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeshSplitShape
// Entry Point: 00989e84
// Size: 104 bytes
// Signature: undefined __thiscall ~MeshSplitShape(MeshSplitShape * this)


/* MeshSplitShape::~MeshSplitShape() */

void __thiscall MeshSplitShape::~MeshSplitShape(MeshSplitShape *this)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x200);
  iVar1 = *(int *)((long)pvVar3 + 0x14);
  *(undefined ***)this = &PTR__MeshSplitShape_00fe0a50;
  iVar2 = iVar1 + -1;
  *(undefined ***)(this + 0x158) = &PTR__MeshSplitShape_00fe0ac0;
  *(undefined ***)(this + 0x160) = &PTR__MeshSplitShape_00fe0ae8;
  if (iVar1 == 0 || iVar2 == 0) {
    operator_delete(pvVar3);
  }
  else {
    *(int *)((long)pvVar3 + 0x14) = iVar2;
  }
                    /* try { // try from 00989ecc to 00989edb has its CatchHandler @ 00989eec */
  MeshSplitManager::removeShape
            ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,this);
  GsShape::~GsShape((GsShape *)this);
  return;
}


