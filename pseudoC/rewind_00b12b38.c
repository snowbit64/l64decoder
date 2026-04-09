// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rewind
// Entry Point: 00b12b38
// Size: 100 bytes
// Signature: undefined rewind(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioVoice::rewind() */

undefined8 SoftAudioVoice::rewind(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x210) != 0) {
    (**(code **)(**(long **)(in_x0 + 0x1f0) + 0x28))
              (*(long **)(in_x0 + 0x1f0),(undefined8 *)(in_x0 + 0x210));
    *(undefined8 *)(in_x0 + 0x210) = 0;
    *(undefined8 *)(in_x0 + 0x218) = 0;
    *(undefined4 *)(in_x0 + 0x220) = 0;
  }
  *(undefined4 *)(in_x0 + 0x228) = 0;
  (**(code **)(**(long **)(in_x0 + 0x1f0) + 0x30))();
  *(undefined8 *)(in_x0 + 0x58) = 0;
  *(undefined *)(in_x0 + 0x208) = 0;
  return 0;
}


