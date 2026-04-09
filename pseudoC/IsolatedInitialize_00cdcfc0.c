// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cdcfc0
// Size: 128 bytes
// Signature: undefined __cdecl IsolatedInitialize(NameValuePairs * param_1)


/* CryptoPP::MeterFilter::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void CryptoPP::MeterFilter::IsolatedInitialize(NameValuePairs *param_1)

{
  void **ppvVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  ppvVar1 = *(void ***)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar3 = *(long *)(param_1 + 0x60) - (long)ppvVar1;
  while (0x10 < uVar3) {
    operator_delete(*ppvVar1);
    ppvVar1 = (void **)(*(long *)(param_1 + 0x58) + 8);
    *(void ***)(param_1 + 0x58) = ppvVar1;
    uVar3 = *(long *)(param_1 + 0x60) - (long)ppvVar1;
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
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  return;
}


