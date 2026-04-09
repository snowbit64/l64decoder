// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitForData
// Entry Point: 00b35b20
// Size: 112 bytes
// Signature: undefined waitForData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadedFileReader::waitForData() */

void ThreadedFileReader::waitForData(void)

{
  int iVar1;
  long *in_x0;
  ulong uVar2;
  
  if ((in_x0[0x11] == 0) && (uVar2 = (**(code **)(*in_x0 + 0x50))(), (uVar2 & 1) == 0)) {
    iVar1 = *(int *)(in_x0 + 0x22);
    while (iVar1 != 0) {
      Semaphore::wait();
      iVar1 = *(int *)(in_x0 + 0x22) + -1;
      *(int *)(in_x0 + 0x22) = iVar1;
    }
    Semaphore::wait();
    Semaphore::post();
    return;
  }
  return;
}


