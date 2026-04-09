// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsCollision
// Entry Point: 009be420
// Size: 40 bytes
// Signature: undefined __thiscall needsCollision(btKinematicClosestNotMeConvexResultCallback * this, btBroadphaseProxy * param_1)


/* btKinematicClosestNotMeConvexResultCallback::needsCollision(btBroadphaseProxy*) const */

bool __thiscall
btKinematicClosestNotMeConvexResultCallback::needsCollision
          (btKinematicClosestNotMeConvexResultCallback *this,btBroadphaseProxy *param_1)

{
  return (ushort)(*(ushort *)(this + 0xe) & *(ushort *)(param_1 + 10) |
                 *(ushort *)(this + 0xc) & *(ushort *)(param_1 + 8)) != 0;
}


