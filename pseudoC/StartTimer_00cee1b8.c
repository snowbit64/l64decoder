// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StartTimer
// Entry Point: 00cee1b8
// Size: 52 bytes
// Signature: undefined StartTimer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TimerBase::StartTimer() */

void CryptoPP::TimerBase::StartTimer(void)

{
  undefined8 *in_x0;
  undefined8 uVar1;
  
  uVar1 = (**(code **)*in_x0)();
  in_x0[2] = uVar1;
  in_x0[3] = uVar1;
  *(undefined *)((long)in_x0 + 0xd) = 1;
  return;
}


