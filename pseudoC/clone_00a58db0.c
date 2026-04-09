// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a58db0
// Size: 120 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NavigationMeshScenegraphNode::clone() */

undefined8 * NavigationMeshScenegraphNode::clone(void)

{
  TransformGroup *in_x0;
  undefined8 *this;
  NavigationMesh *pNVar1;
  
  this = (undefined8 *)operator_new(0x168);
  pNVar1 = *(NavigationMesh **)(in_x0 + 0x158);
                    /* try { // try from 00a58dd8 to 00a58ddb has its CatchHandler @ 00a58e38 */
  TransformGroup::TransformGroup((TransformGroup *)this,*(char **)(in_x0 + 8));
  this[0x2b] = 0;
  this[0x2c] = 0;
  *this = &PTR__NavigationMeshScenegraphNode_00fe3848;
  this[2] = this[2] | 0x10000;
                    /* try { // try from 00a58dfc to 00a58e07 has its CatchHandler @ 00a58e28 */
  setNavigationMesh((NavigationMeshScenegraphNode *)this,pNVar1);
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this,in_x0);
  return this;
}


