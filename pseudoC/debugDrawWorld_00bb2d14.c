// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawWorld
// Entry Point: 00bb2d14
// Size: 128 bytes
// Signature: undefined debugDrawWorld(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2World::debugDrawWorld() */

void Bt2World::debugDrawWorld(void)

{
  long *in_x0;
  long lVar1;
  btSoftBody *pbVar2;
  
  btDiscreteDynamicsWorld::debugDrawWorld();
  lVar1 = (**(code **)(*in_x0 + 0x28))();
  if ((lVar1 != 0) && (0 < *(int *)((long)in_x0 + 0x20c))) {
    lVar1 = 0;
    do {
      pbVar2 = *(btSoftBody **)(in_x0[0x43] + lVar1 * 8);
      btSoftBodyHelpers::DrawFrame(pbVar2,(btIDebugDraw *)in_x0[0xd]);
      btSoftBodyHelpers::Draw(pbVar2,(btIDebugDraw *)in_x0[0xd],0x10ce);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)((long)in_x0 + 0x20c));
  }
  return;
}


