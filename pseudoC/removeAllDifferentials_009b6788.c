// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAllDifferentials
// Entry Point: 009b6788
// Size: 92 bytes
// Signature: undefined removeAllDifferentials(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2RaycastVehicle::removeAllDifferentials() */

void Bt2RaycastVehicle::removeAllDifferentials(void)

{
  long in_x0;
  
  if (0 < *(int *)(in_x0 + 0x5c)) {
    if ((*(void **)(in_x0 + 0x68) != (void *)0x0) && (*(char *)(in_x0 + 0x70) != '\0')) {
      btAlignedFreeInternal(*(void **)(in_x0 + 0x68));
    }
    *(undefined8 *)(in_x0 + 0x68) = 0;
    *(undefined4 *)(in_x0 + 0x5c) = 0;
    *(undefined4 *)(in_x0 + 0x60) = 0;
    *(undefined *)(in_x0 + 0x70) = 1;
    updateWheelsMotorSpeedContribution();
    return;
  }
  return;
}


