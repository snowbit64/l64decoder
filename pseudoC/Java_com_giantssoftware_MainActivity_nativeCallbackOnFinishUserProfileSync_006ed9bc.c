// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_MainActivity_nativeCallbackOnFinishUserProfileSync
// Entry Point: 006ed9bc
// Size: 12 bytes
// Signature: undefined Java_com_giantssoftware_MainActivity_nativeCallbackOnFinishUserProfileSync(void)


void Java_com_giantssoftware_MainActivity_nativeCallbackOnFinishUserProfileSync
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  AndroidSysUtil::queueUserSyncFinishEvent(param_3 != '\0');
  return;
}


