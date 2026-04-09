// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reuseCurrentUserBuffer
// Entry Point: 00b3580c
// Size: 100 bytes
// Signature: undefined reuseCurrentUserBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadedFileReader::reuseCurrentUserBuffer() */

void ThreadedFileReader::reuseCurrentUserBuffer(void)

{
  long in_x0;
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(in_x0 + 0x88);
  do {
    lVar3 = *(long *)(in_x0 + 0x28);
    *plVar2 = lVar3;
    lVar1 = FUN_00f275d0(lVar3,plVar2);
  } while (lVar3 != lVar1);
  FUN_00f27700(1,in_x0 + 0x30);
  Semaphore::post();
  *(undefined8 *)(in_x0 + 0x88) = 0;
  *(undefined4 *)(in_x0 + 0x90) = 0;
  return;
}


