// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 008fcca0
// Size: 120 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DAssetPtr::unload() */

void I3DAssetPtr::unload(void)

{
  char *in_x0;
  I3DManager *this;
  I3DStreamingManager *this_00;
  
  if (*(int *)(in_x0 + 4) != 0) {
    if (*in_x0 == '\0') {
      this_00 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
      I3DStreamingManager::cancelI3DLoadTask(this_00,*(uint *)(in_x0 + 4),true);
    }
    else {
      this = (I3DManager *)I3DManager::getInstance();
      I3DManager::releaseSharedI3D(this,*(uint *)(in_x0 + 4),false);
    }
  }
  *in_x0 = '\0';
  *(undefined4 *)(in_x0 + 4) = 0;
  if (*(long **)(in_x0 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 8) + 8))();
  }
  *(undefined8 *)(in_x0 + 8) = 0;
  *(undefined4 *)(in_x0 + 0x10) = 0;
  *(undefined8 *)(in_x0 + 0x18) = 0;
  return;
}


