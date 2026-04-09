// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapBoxSingle
// Entry Point: 009aabe0
// Size: 120 bytes
// Signature: undefined __thiscall overlapBoxSingle(Bt2ScenegraphPhysicsContext * this, Matrix4x4 * param_1, Vector3 * param_2, btCollisionObject * param_3, bool param_4)


/* Bt2ScenegraphPhysicsContext::overlapBoxSingle(Matrix4x4 const&, Vector3 const&, btCollisionObject
   const*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::overlapBoxSingle
          (Bt2ScenegraphPhysicsContext *this,Matrix4x4 *param_1,Vector3 *param_2,
          btCollisionObject *param_3,bool param_4)

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
  Bt2SceneQueryUtil::overlapBoxSingle
            (*(Bt2World **)(this + 0x30),*ppbVar1,param_1,param_2,param_3,param_4);
  return;
}


