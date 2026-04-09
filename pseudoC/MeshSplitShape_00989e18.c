// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MeshSplitShape
// Entry Point: 00989e18
// Size: 108 bytes
// Signature: undefined __thiscall MeshSplitShape(MeshSplitShape * this, char * param_1, MeshSplitGeometry * param_2, MeshSplitShapeSharedData * param_3)


/* MeshSplitShape::MeshSplitShape(char const*, MeshSplitGeometry*, MeshSplitShapeSharedData*) */

void __thiscall
MeshSplitShape::MeshSplitShape
          (MeshSplitShape *this,char *param_1,MeshSplitGeometry *param_2,
          MeshSplitShapeSharedData *param_3)

{
  int iVar1;
  
  GsShape::GsShape((GsShape *)this,param_1,(Geometry *)param_2);
  *(MeshSplitShapeSharedData **)(this + 0x200) = param_3;
  iVar1 = *(int *)(param_3 + 0x14);
  *(undefined ***)this = &PTR__MeshSplitShape_00fe0a50;
  *(undefined ***)(this + 0x158) = &PTR__MeshSplitShape_00fe0ac0;
  *(undefined ***)(this + 0x160) = &PTR__MeshSplitShape_00fe0ae8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x40000;
  *(int *)(param_3 + 0x14) = iVar1 + 1;
  *(undefined8 *)(this + 0x210) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x208) = 0xffffffffffffffff;
  return;
}


