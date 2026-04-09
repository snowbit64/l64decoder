// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAabbs
// Entry Point: 00bb2d94
// Size: 268 bytes
// Signature: undefined updateAabbs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2World::updateAabbs() */

void Bt2World::updateAabbs(void)

{
  uint uVar1;
  int iVar2;
  btCollisionWorld *in_x0;
  long lVar3;
  
  CProfileManager::Start_Profile("updateAabbs");
  uVar1 = *(uint *)(in_x0 + 0x144);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      iVar2 = *(int *)(*(btCollisionObject **)(*(long *)(in_x0 + 0x150) + lVar3) + 0xec);
      if (iVar2 != 2 && iVar2 != 5) {
                    /* try { // try from 00bb2df0 to 00bb2df7 has its CatchHandler @ 00bb2eac */
        btCollisionWorld::updateSingleAabb
                  (in_x0,*(btCollisionObject **)(*(long *)(in_x0 + 0x150) + lVar3));
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  uVar1 = *(uint *)(in_x0 + 0x20c);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      iVar2 = *(int *)(*(btCollisionObject **)(*(long *)(in_x0 + 0x218) + lVar3) + 0xec);
      if (iVar2 != 2 && iVar2 != 5) {
                    /* try { // try from 00bb2e38 to 00bb2e3f has its CatchHandler @ 00bb2ea8 */
        btCollisionWorld::updateSingleAabb
                  (in_x0,*(btCollisionObject **)(*(long *)(in_x0 + 0x218) + lVar3));
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  uVar1 = *(uint *)(in_x0 + 0x1ec);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      iVar2 = *(int *)(*(btCollisionObject **)(*(long *)(in_x0 + 0x1f8) + lVar3) + 0xec);
      if (iVar2 != 2 && iVar2 != 5) {
                    /* try { // try from 00bb2e80 to 00bb2e87 has its CatchHandler @ 00bb2ea4 */
        btCollisionWorld::updateSingleAabb
                  (in_x0,*(btCollisionObject **)(*(long *)(in_x0 + 0x1f8) + lVar3));
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
                    /* try { // try from 00bb2e8c to 00bb2e8f has its CatchHandler @ 00bb2ea0 */
  CProfileManager::Stop_Profile();
  return;
}


