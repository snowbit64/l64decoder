// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeGoal
// Entry Point: 00737140
// Size: 80 bytes
// Signature: undefined initializeGoal(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::initializeGoal() */

void VehicleNavigationAgent::initializeGoal(void)

{
  long in_x0;
  undefined8 uVar1;
  
  uVar1 = VehicleNavigationGridAdapter::getCornerNode
                    (*(VehicleNavigationGridAdapter **)(in_x0 + 0x12a0),
                     (PlanarPose *)(in_x0 + 0x1360));
  *(int *)(in_x0 + 0x1376) = (int)uVar1;
  *(short *)(in_x0 + 0x137a) = (short)((ulong)uVar1 >> 0x20);
  memset(*(void **)(in_x0 + 0x1298),0xff,0x9600);
  return;
}


