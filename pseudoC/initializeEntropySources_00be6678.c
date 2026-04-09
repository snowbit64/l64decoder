// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeEntropySources
// Entry Point: 00be6678
// Size: 56 bytes
// Signature: undefined initializeEntropySources(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGeneratorManager::initializeEntropySources() */

undefined8 SecureRandomGeneratorManager::initializeEntropySources(void)

{
  undefined4 uVar1;
  long in_x0;
  
  uVar1 = __open_2("/dev/urandom",0);
  *(undefined4 *)(in_x0 + 0x50) = uVar1;
  return 1;
}


