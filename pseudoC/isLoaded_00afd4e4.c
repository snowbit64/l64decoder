// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isLoaded
// Entry Point: 00afd4e4
// Size: 92 bytes
// Signature: undefined isLoaded(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsNotificationManager::isLoaded() */

bool GiantsNotificationManager::isLoaded(void)

{
  bool bVar1;
  char *in_x0;
  Thread *this;
  
  if (*in_x0 == '\0') {
    bVar1 = false;
  }
  else {
    this = *(Thread **)(in_x0 + 0xf0);
    if (this == (Thread *)0x0) {
      bVar1 = true;
    }
    else {
      Thread::~Thread(this);
      operator_delete(this);
      *(undefined8 *)(in_x0 + 0xf0) = 0;
      bVar1 = *in_x0 != '\0';
    }
  }
  return bVar1;
}


