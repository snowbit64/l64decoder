// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b909c
// Entry Point: 007b909c
// Size: 56 bytes
// Signature: undefined FUN_007b909c(void)


NavigationMeshScenegraphNode * FUN_007b909c(char **param_1)

{
  NavigationMeshScenegraphNode *this;
  
  this = (NavigationMeshScenegraphNode *)operator_new(0x168);
                    /* try { // try from 007b90bc to 007b90c3 has its CatchHandler @ 007b90d4 */
  NavigationMeshScenegraphNode::NavigationMeshScenegraphNode(this,*param_1,(NavigationMesh *)0x0);
  return this;
}


