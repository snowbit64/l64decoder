// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ResetMeter
// Entry Point: 00cd6e50
// Size: 128 bytes
// Signature: undefined ResetMeter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MeterFilter::ResetMeter() */

void CryptoPP::MeterFilter::ResetMeter(void)

{
  void **ppvVar1;
  long in_x0;
  undefined8 uVar2;
  ulong uVar3;
  
  ppvVar1 = *(void ***)(in_x0 + 0x58);
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  *(undefined4 *)(in_x0 + 0x48) = 0;
  *(undefined8 *)(in_x0 + 0x40) = 0;
  *(undefined8 *)(in_x0 + 0x78) = 0;
  uVar3 = *(long *)(in_x0 + 0x60) - (long)ppvVar1;
  while (0x10 < uVar3) {
    operator_delete(*ppvVar1);
    ppvVar1 = (void **)(*(long *)(in_x0 + 0x58) + 8);
    *(void ***)(in_x0 + 0x58) = ppvVar1;
    uVar3 = *(long *)(in_x0 + 0x60) - (long)ppvVar1;
  }
  if (uVar3 >> 3 == 1) {
    uVar2 = 0x55;
  }
  else {
    if (uVar3 >> 3 != 2) {
      return;
    }
    uVar2 = 0xaa;
  }
  *(undefined8 *)(in_x0 + 0x70) = uVar2;
  return;
}


