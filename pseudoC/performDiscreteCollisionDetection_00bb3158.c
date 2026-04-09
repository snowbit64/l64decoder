// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performDiscreteCollisionDetection
// Entry Point: 00bb3158
// Size: 112 bytes
// Signature: undefined performDiscreteCollisionDetection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2World::performDiscreteCollisionDetection() */

void Bt2World::performDiscreteCollisionDetection(void)

{
  uint uVar1;
  long in_x0;
  long lVar2;
  
  CProfileManager::Start_Profile("vehicleCollisionDetection");
  uVar1 = *(uint *)(in_x0 + 0x1cc);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
                    /* try { // try from 00bb319c to 00bb31a3 has its CatchHandler @ 00bb31cc */
      (**(code **)(**(long **)(*(long *)(in_x0 + 0x1d8) + lVar2) + 0x18))();
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 - lVar2 != 0);
  }
                    /* try { // try from 00bb31b0 to 00bb31b3 has its CatchHandler @ 00bb31c8 */
  CProfileManager::Stop_Profile();
  btCollisionWorld::performDiscreteCollisionDetection();
  return;
}


