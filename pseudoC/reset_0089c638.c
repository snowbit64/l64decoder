// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 0089c638
// Size: 88 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SimulatedPedestrian::reset() */

void SimulatedPedestrian::reset(void)

{
  PedestrianTransitionValue *in_x0;
  
  in_x0[0x70] = (PedestrianTransitionValue)0x0;
  *(undefined4 *)(in_x0 + 0x60) = 0;
  *(undefined8 *)(in_x0 + 0x48) = 0;
  *(undefined8 *)(in_x0 + 0x40) = 0;
  *(undefined8 *)(in_x0 + 0x58) = 0;
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(undefined8 *)(in_x0 + 100) = 0x7f7fffff7f7fffff;
  PedestrianTransitionValue::initValue(in_x0,0.0);
  *(undefined8 *)(in_x0 + 0x34) = 0;
  *(undefined8 *)(in_x0 + 0x2c) = 0;
  *(undefined4 *)(in_x0 + 0x3c) = 0;
  *(undefined8 *)(in_x0 + 0x24) = 0x3f80000000000000;
  *(undefined8 *)(in_x0 + 0x1c) = 0;
  return;
}


