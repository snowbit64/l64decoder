// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openNativeFile
// Entry Point: 00b36f50
// Size: 112 bytes
// Signature: undefined openNativeFile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ZIPFileArchive::openNativeFile() */

undefined8 ZIPFileArchive::openNativeFile(void)

{
  ACCESS_MODE AVar1;
  long in_x0;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(in_x0 + 0x10);
  if (plVar4 != (long *)(in_x0 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00b36f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar2;
  }
  if (*(long *)(in_x0 + 0x20) == 0) {
    AVar1 = (int)in_x0 + 0x41;
    if ((*(byte *)(in_x0 + 0x40) & 1) != 0) {
      AVar1 = (ACCESS_MODE)*(undefined8 *)(in_x0 + 0x50);
    }
    uVar3 = NativeFile::open((char *)(long *)(in_x0 + 0x18),AVar1,false);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


