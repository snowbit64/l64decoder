// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007adb04
// Entry Point: 007adb04
// Size: 64 bytes
// Signature: undefined FUN_007adb04(void)


void FUN_007adb04(NoteNode *param_1,float *param_2)

{
  NoteNode::setColor(param_1,(int)(*param_2 * 255.0) & 0xff000000U |
                             (int)(*param_2 * 255.0) & 0xffU |
                             ((int)(param_2[4] * 255.0) & 0xffU) << 8 |
                             ((int)(param_2[8] * 255.0) & 0xffU) << 0x10 | 0xff000000,1);
  return;
}


