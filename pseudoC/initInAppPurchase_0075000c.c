// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initInAppPurchase
// Entry Point: 0075000c
// Size: 72 bytes
// Signature: undefined initInAppPurchase(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::initInAppPurchase() */

void EngineManager::initInAppPurchase(void)

{
  char *pcVar1;
  long in_x0;
  AndroidInAppPurchase *this;
  
  this = (AndroidInAppPurchase *)operator_new(0x68);
  pcVar1 = (char *)(in_x0 + 0x151);
  if ((*(byte *)(in_x0 + 0x150) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0x160);
  }
                    /* try { // try from 00750040 to 00750043 has its CatchHandler @ 00750054 */
  AndroidInAppPurchase::AndroidInAppPurchase(this,pcVar1,*(NetworkAvailability **)(in_x0 + 0x2d8));
  *(AndroidInAppPurchase **)(in_x0 + 0x2d0) = this;
  return;
}


