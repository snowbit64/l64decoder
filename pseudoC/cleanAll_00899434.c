// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanAll
// Entry Point: 00899434
// Size: 188 bytes
// Signature: undefined cleanAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianData::cleanAll() */

void PedestrianData::cleanAll(void)

{
  long in_x0;
  long *plVar1;
  
  I3DAssetPtr::unload();
  plVar1 = *(long **)(in_x0 + 0xa0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined8 *)(in_x0 + 0xc0) = 0;
  *(undefined8 *)(in_x0 + 0xa8) = 0;
  *(long **)(in_x0 + 0xa0) = (long *)0x0;
  *(undefined8 *)(in_x0 + 0xb8) = 0;
  *(undefined8 *)(in_x0 + 0xb0) = 0;
  if (*(long **)(in_x0 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x170) + 8))();
  }
  *(undefined8 *)(in_x0 + 400) = 0;
  *(undefined8 *)(in_x0 + 0x178) = 0;
  *(undefined8 *)(in_x0 + 0x170) = 0;
  *(undefined8 *)(in_x0 + 0x188) = 0;
  *(undefined8 *)(in_x0 + 0x180) = 0;
  if (*(long **)(in_x0 + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x240) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x260) = 0;
  *(undefined8 *)(in_x0 + 0x248) = 0;
  *(undefined8 *)(in_x0 + 0x240) = 0;
  *(undefined8 *)(in_x0 + 600) = 0;
  *(undefined8 *)(in_x0 + 0x250) = 0;
  if (*(long **)(in_x0 + 0x310) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x310) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x330) = 0;
  *(undefined8 *)(in_x0 + 0x318) = 0;
  *(undefined8 *)(in_x0 + 0x310) = 0;
  *(undefined8 *)(in_x0 + 0x328) = 0;
  *(undefined8 *)(in_x0 + 800) = 0;
  return;
}


