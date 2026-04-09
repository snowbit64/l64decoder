// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NavigationMeshScenegraphNode
// Entry Point: 00a58c98
// Size: 116 bytes
// Signature: undefined __thiscall ~NavigationMeshScenegraphNode(NavigationMeshScenegraphNode * this)


/* NavigationMeshScenegraphNode::~NavigationMeshScenegraphNode() */

void __thiscall
NavigationMeshScenegraphNode::~NavigationMeshScenegraphNode(NavigationMeshScenegraphNode *this)

{
  int iVar1;
  DetourNavigationMeshQuery *this_00;
  long *plVar2;
  
  this_00 = *(DetourNavigationMeshQuery **)(this + 0x160);
  *(undefined ***)this = &PTR__NavigationMeshScenegraphNode_00fe3848;
  if (this_00 != (DetourNavigationMeshQuery *)0x0) {
    DetourNavigationMeshQuery::~DetourNavigationMeshQuery(this_00);
    operator_delete(this_00);
  }
  plVar2 = *(long **)(this + 0x158);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00f27700(0xffffffff,plVar2 + 1), iVar1 < 2)) {
                    /* try { // try from 00a58cf4 to 00a58cfb has its CatchHandler @ 00a58d0c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  TransformGroup::~TransformGroup((TransformGroup *)this);
  return;
}


