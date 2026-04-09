// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FirstPut
// Entry Point: 00cd9558
// Size: 64 bytes
// Signature: undefined __cdecl FirstPut(uchar * param_1)


/* CryptoPP::StreamTransformationFilter::FirstPut(unsigned char const*) */

void CryptoPP::StreamTransformationFilter::FirstPut(uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = 0x1000 / uVar1;
  }
  uVar4 = NEON_cnt((ulong)uVar1,1);
  uVar3 = NEON_uaddlv(uVar4,1);
  uVar2 = uVar2 * uVar1;
  if ((int)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3) == 1) {
    uVar2 = -uVar1 & 0x1000;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 200) = uVar2;
  return;
}


