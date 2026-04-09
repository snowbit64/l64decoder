// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 008842a8
// Size: 68 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTWait::onInitialize() */

undefined8 BTWait::onInitialize(void)

{
  undefined4 uVar1;
  long in_x0;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x2c);
  if (fVar2 < 0.0) {
    fVar2 = *(float *)(*(BehaviorContext **)(in_x0 + 0x30) + 0xc0);
    *(float *)(in_x0 + 0x2c) = fVar2;
  }
  uVar1 = BehaviorContext::addTimer(*(BehaviorContext **)(in_x0 + 0x30),fVar2);
  *(undefined4 *)(in_x0 + 0x28) = uVar1;
  return 1;
}


