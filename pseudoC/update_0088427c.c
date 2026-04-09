// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0088427c
// Size: 44 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTWait::update() */

undefined4 BTWait::update(void)

{
  long in_x0;
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = BehaviorContext::isTimerExpired
                    (*(BehaviorContext **)(in_x0 + 0x30),*(int *)(in_x0 + 0x28));
  uVar2 = 3;
  if ((uVar1 & 1) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


