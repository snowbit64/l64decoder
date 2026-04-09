// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NoteNode
// Entry Point: 00a59834
// Size: 296 bytes
// Signature: undefined __thiscall NoteNode(NoteNode * this, char * param_1, STREAM_QUEUE param_2)


/* NoteNode::NoteNode(char const*, StreamManager::STREAM_QUEUE) */

void __thiscall NoteNode::NoteNode(NoteNode *this,char *param_1,STREAM_QUEUE param_2)

{
  long lVar1;
  long lVar2;
  MaterialManager *this_00;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x170) = 0x3f80000000ffffff;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined ***)this = &PTR__NoteNode_00fe38f0;
                    /* try { // try from 00a5988c to 00a59893 has its CatchHandler @ 00a5995c */
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined2 *)(this + 0x1cc) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x800000000000000;
                    /* try { // try from 00a598a8 to 00a59927 has its CatchHandler @ 00a59964 */
  lVar2 = EngineManager::getInstance();
  *(undefined8 *)(this + 0x180) = *(undefined8 *)(lVar2 + 0xb8);
  lVar2 = EngineManager::getInstance();
  *(undefined8 *)(this + 0x188) = *(undefined8 *)(lVar2 + 0xf8);
  lVar2 = EngineManager::getInstance();
  *(undefined8 *)(this + 400) = *(undefined8 *)(lVar2 + 0x100);
  lVar2 = EngineManager::getInstance();
  if (*(char *)(lVar2 + 0x338) == '\0') {
    ScenegraphNode::setVisibility((ScenegraphNode *)this,false);
  }
  else {
    SimpleCullingStructure::addEntity
              ((SimpleCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xc0),
               (TransformGroup *)this);
    auVar4 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x170) = 0xffffff;
    uStack_48 = auVar4._8_8_;
    local_50 = auVar4._0_8_;
    this_00 = (MaterialManager *)MaterialManager::getInstance();
    uVar3 = MaterialManager::getSingleColorTexture(this_00,(float *)&local_50,0,param_2);
    *(undefined8 *)(this + 0x178) = uVar3;
  }
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x1000;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


