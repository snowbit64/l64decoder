// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapPointCloudSingle
// Entry Point: 009ab0a0
// Size: 136 bytes
// Signature: undefined __thiscall overlapPointCloudSingle(Bt2ScenegraphPhysicsContext * this, Matrix4x4 * param_1, Vector3 * param_2, uint param_3, btCollisionObject * param_4, bool param_5)


/* Bt2ScenegraphPhysicsContext::overlapPointCloudSingle(Matrix4x4 const&, Vector3 const*, unsigned
   int, btCollisionObject const*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::overlapPointCloudSingle
          (Bt2ScenegraphPhysicsContext *this,Matrix4x4 *param_1,Vector3 *param_2,uint param_3,
          btCollisionObject *param_4,bool param_5)

{
  btDispatcher **ppbVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = ThreadUtil::getCurrentThreadId();
  lVar3 = Thread::getThreadId();
  ppbVar1 = (btDispatcher **)(*(Bt2World **)(this + 0x30) + 0x28);
  if (lVar2 != lVar3) {
    ppbVar1 = (btDispatcher **)(this + 0x50);
  }
  Bt2SceneQueryUtil::overlapPointCloudSingle
            (*(Bt2World **)(this + 0x30),*ppbVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}


