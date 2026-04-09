// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toggleActive
// Entry Point: 006d4bc4
// Size: 64 bytes
// Signature: undefined toggleActive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::toggleActive() */

void Console::toggleActive(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0xb8) == '\0') {
    *(undefined4 *)(in_x0 + 0xbc) = 0;
    *(undefined2 *)(in_x0 + 0xb8) = 1;
    *(undefined *)(in_x0 + 0xba) = 1;
    return;
  }
  if (*(char *)(in_x0 + 0xb9) != '\0') {
    *(undefined2 *)(in_x0 + 0xb8) = 0;
    *(undefined *)(in_x0 + 0xba) = 1;
    return;
  }
  *(undefined *)(in_x0 + 0xb9) = 1;
  return;
}


