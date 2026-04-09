// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6d80
// Entry Point: 007b6d80
// Size: 284 bytes
// Signature: undefined FUN_007b6d80(void)


void FUN_007b6d80(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = SoundPlayer::addAmbientSample
                    (param_1,(uint)*param_2,*(float *)(param_2 + 4),*(float *)param_2[6],
                     ((float *)param_2[6])[1],*(float *)param_2[8],((float *)param_2[8])[1],
                     *(float *)(param_2 + 10),*(uint *)(param_2 + 2),*(uint *)param_2[0xc],
                     *(float *)param_2[0xe],((float *)param_2[0xe])[1],*(float *)param_2[0x10],
                     ((float *)param_2[0x10])[1],*(float *)param_2[0x12],((float *)param_2[0x12])[1]
                     ,*(float *)param_2[0x14],((float *)param_2[0x14])[1],*(float *)param_2[0x16],
                     ((float *)param_2[0x16])[1],((uint *)param_2[0xc])[1],*(uint *)(param_2 + 0x18)
                    );
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)(param_2 + 0x21) = 1;
  if ((void *)param_2[6] != (void *)0x0) {
    operator_delete__((void *)param_2[6]);
  }
  if ((void *)param_2[8] != (void *)0x0) {
    operator_delete__((void *)param_2[8]);
  }
  if ((void *)param_2[0xc] != (void *)0x0) {
    operator_delete__((void *)param_2[0xc]);
  }
  if ((void *)param_2[0xe] != (void *)0x0) {
    operator_delete__((void *)param_2[0xe]);
  }
  if ((void *)param_2[0x10] != (void *)0x0) {
    operator_delete__((void *)param_2[0x10]);
  }
  if ((void *)param_2[0x12] != (void *)0x0) {
    operator_delete__((void *)param_2[0x12]);
  }
  if ((void *)param_2[0x14] != (void *)0x0) {
    operator_delete__((void *)param_2[0x14]);
  }
  if ((void *)param_2[0x16] != (void *)0x0) {
    operator_delete__((void *)param_2[0x16]);
    return;
  }
  return;
}


