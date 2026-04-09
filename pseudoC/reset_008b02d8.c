// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008b02d8
// Size: 308 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopRuntimeSettings::reset() */

void SteadyLoopRuntimeSettings::reset(void)

{
  byte **in_x0;
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = *in_x0;
  pbVar2 = in_x0[1];
  if (in_x0[1] != pbVar4) {
    uVar5 = 0;
    do {
      if (*(void **)(pbVar4 + uVar5 * 0x48 + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(pbVar4 + uVar5 * 0x48 + 0x28));
        pbVar4 = *in_x0;
        *(undefined8 *)(pbVar4 + uVar5 * 0x48 + 0x28) = 0;
      }
      if (*(void **)(pbVar4 + uVar5 * 0x48 + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(pbVar4 + uVar5 * 0x48 + 0x30));
        pbVar4 = *in_x0;
        *(undefined8 *)(pbVar4 + uVar5 * 0x48 + 0x30) = 0;
      }
      pbVar3 = pbVar4 + uVar5 * 0x48;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)pbVar3);
      *(undefined8 *)(pbVar3 + 0x38) = 0;
      uVar5 = (ulong)((int)uVar5 + 1);
      pbVar4 = *in_x0;
      pbVar2 = in_x0[1];
      *(undefined4 *)(pbVar3 + 0x40) = 0;
      *(undefined8 *)(pbVar3 + 0x20) = 0x3f80000000000000;
      *(undefined8 *)(pbVar3 + 0x18) = 0;
      uVar1 = ((long)pbVar2 - (long)pbVar4 >> 3) * -0x71c71c71c71c71c7;
    } while (uVar5 <= uVar1 && uVar1 - uVar5 != 0);
    while (pbVar3 = pbVar2, pbVar2 = pbVar4, pbVar3 != pbVar4) {
      pbVar2 = pbVar3 + -0x48;
      if ((*pbVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -0x38));
      }
    }
  }
  in_x0[1] = pbVar2;
  return;
}


