// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NavigationMeshScenegraphNode
// Entry Point: 00a58b84
// Size: 80 bytes
// Signature: undefined __thiscall NavigationMeshScenegraphNode(NavigationMeshScenegraphNode * this, char * param_1, NavigationMesh * param_2)


/* NavigationMeshScenegraphNode::NavigationMeshScenegraphNode(char const*, NavigationMesh*) */

void __thiscall
NavigationMeshScenegraphNode::NavigationMeshScenegraphNode
          (NavigationMeshScenegraphNode *this,char *param_1,NavigationMesh *param_2)

{
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined ***)this = &PTR__NavigationMeshScenegraphNode_00fe3848;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x10000;
                    /* try { // try from 00a58bbc to 00a58bc7 has its CatchHandler @ 00a58bd4 */
  setNavigationMesh(this,param_2);
  return;
}


