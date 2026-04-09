// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneScenegraphNode
// Entry Point: 0074aa64
// Size: 84 bytes
// Signature: undefined __cdecl cloneScenegraphNode(ScenegraphNode * param_1, bool param_2, bool param_3, MeshSplitFileState * param_4)


/* CloneUtil::cloneScenegraphNode(ScenegraphNode*, bool, bool, MeshSplitFileState const*) */

TransformGroup *
CloneUtil::cloneScenegraphNode
          (ScenegraphNode *param_1,bool param_2,bool param_3,MeshSplitFileState *param_4)

{
  Bt2ScenegraphPhysicsContext *this;
  TransformGroup *pTVar1;
  
  if (((byte)param_1[0x10] >> 5 & 1) == 0) {
    pTVar1 = (TransformGroup *)0x0;
  }
  else {
    pTVar1 = (TransformGroup *)cloneTransformGroup((TransformGroup *)param_1,param_3,param_4);
    if (param_2) {
      ScenegraphPhysicsContextManager::getInstance();
      this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this,pTVar1);
    }
  }
  return pTVar1;
}


