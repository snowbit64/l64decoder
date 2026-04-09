// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDebugDrawer
// Entry Point: 00bb2ec0
// Size: 8 bytes
// Signature: undefined __thiscall setDebugDrawer(btCollisionWorld * this, btIDebugDraw * param_1)


/* btCollisionWorld::setDebugDrawer(btIDebugDraw*) */

void __thiscall btCollisionWorld::setDebugDrawer(btCollisionWorld *this,btIDebugDraw *param_1)

{
  *(btIDebugDraw **)(this + 0x68) = param_1;
  return;
}


