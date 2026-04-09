// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetNextMessage
// Entry Point: 00d0c71c
// Size: 264 bytes
// Signature: undefined GetNextMessage(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MessageQueue::GetNextMessage() */

undefined8 CryptoPP::MessageQueue::GetNextMessage(void)

{
  long *in_x0;
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*in_x0 + 0xd8))();
  if ((int)uVar1 != 0) {
    uVar2 = (**(code **)(*in_x0 + 0xa0))();
    if ((uVar2 & 1) == 0) {
      lVar3 = in_x0[0x10];
      in_x0[0x11] = in_x0[0x11] + -1;
      in_x0[0x10] = lVar3 + 1U;
      if (0x3ff < lVar3 + 1U) {
        operator_delete(*(void **)in_x0[0xd]);
        in_x0[0xd] = in_x0[0xd] + 8;
        in_x0[0x10] = in_x0[0x10] + -0x200;
      }
      uVar2 = in_x0[0x16];
      if ((*(int *)(*(long *)((long)(void **)in_x0[0x13] + (uVar2 >> 7 & 0x1fffffffffffff8)) +
                   (uVar2 & 0x3ff) * 4) == 0) && (1 < (ulong)in_x0[0x17])) {
        in_x0[0x16] = uVar2 + 1;
        in_x0[0x17] = in_x0[0x17] - 1;
        if (0x7ff < uVar2 + 1) {
          operator_delete(*(void **)in_x0[0x13]);
          in_x0[0x13] = in_x0[0x13] + 8;
          in_x0[0x16] = in_x0[0x16] + -0x400;
          return 1;
        }
      }
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


