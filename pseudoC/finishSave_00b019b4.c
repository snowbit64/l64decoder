// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishSave
// Entry Point: 00b019b4
// Size: 80 bytes
// Signature: undefined finishSave(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SaveHelper::finishSave() */

void SaveHelper::finishSave(void)

{
  long in_x0;
  Thread *this;
  
  if (*(code **)(in_x0 + 0x38) != (code *)0x0) {
    (**(code **)(in_x0 + 0x38))(*(undefined8 *)(in_x0 + 0x40),*(char *)(in_x0 + 0x50) != '\0');
  }
  this = *(Thread **)(in_x0 + 0x48);
  if (this != (Thread *)0x0) {
    Thread::~Thread(this);
    operator_delete(this);
  }
  *(undefined8 *)(in_x0 + 0x48) = 0;
  return;
}


