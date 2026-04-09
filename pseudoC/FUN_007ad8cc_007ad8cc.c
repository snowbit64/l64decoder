// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad8cc
// Entry Point: 007ad8cc
// Size: 480 bytes
// Signature: undefined FUN_007ad8cc(void)


NoteNode * FUN_007ad8cc(double *param_1)

{
  long lVar1;
  NoteNode *this;
  EntityRegistryManager *this_00;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (NoteNode *)operator_new(0x1d0);
                    /* try { // try from 007ad8fc to 007ad90b has its CatchHandler @ 007adaac */
  NoteNode::NoteNode(this,"Note",1);
  NoteNode::setCreatedFromScript(this,true);
  if (*(int *)(param_1 + 1) == 5) {
    this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    plVar2 = (long *)EntityRegistryManager::getEntityById(this_00,(int)*param_1);
    if ((plVar2 != (long *)0x0) && ((*(byte *)(plVar2 + 2) >> 5 & 1) != 0)) goto LAB_007ad94c;
  }
  EngineManager::getInstance();
  plVar2 = (long *)Renderer::getRootNode();
LAB_007ad94c:
  (**(code **)(*plVar2 + 0x18))(plVar2,this,0xffffffff);
  if (*(int *)(param_1 + 3) == 6) {
    NoteNode::setText((char *)this);
  }
  if (((*(int *)(param_1 + 5) == 5) && (*(int *)(param_1 + 7) == 5)) && (*(int *)(param_1 + 9) == 5)
     ) {
    NoteNode::setColor(this,(int)((float)param_1[4] * 255.0) & 0xff000000U |
                            (int)((float)param_1[4] * 255.0) & 0xffU |
                            ((int)((float)param_1[6] * 255.0) & 0xffU) << 8 |
                            ((int)((float)param_1[8] * 255.0) & 0xffU) << 0x10 | 0xff000000,1);
  }
  if (*(int *)(param_1 + 0xb) == 3) {
    NoteNode::setFixedSize(this,*(bool *)(param_1 + 10));
  }
  EngineManager::getInstance();
  lVar3 = Renderer::getCamera();
  if (lVar3 != 0) {
    RawTransformGroup::updateWorldTransformation();
    uVar4 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xc0),0,*(float *)(lVar3 + 0xd0) * 0.0);
    local_40 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0xe0),0xc0000000,uVar4);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * 0.0 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * 0.0 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * -2.0 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20),
                        (float)*(undefined8 *)(lVar3 + 200) * 0.0 +
                        (float)*(undefined8 *)(lVar3 + 0xb8) * 0.0 +
                        (float)*(undefined8 *)(lVar3 + 0xd8) * -2.0 +
                        (float)*(undefined8 *)(lVar3 + 0xe8));
    local_40 = local_40 + *(float *)(lVar3 + 0xf0);
    TransformGroup::setTranslation((TransformGroup *)this,(Vector3 *)&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


