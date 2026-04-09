// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ForceNextPut
// Entry Point: 00cd7c24
// Size: 216 bytes
// Signature: undefined ForceNextPut(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::FilterWithBufferedInput::ForceNextPut() */

void CryptoPP::FilterWithBufferedInput::ForceNextPut(void)

{
  long lVar1;
  long lVar2;
  long *in_x0;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(char *)(in_x0 + 9) != '\0') {
    uVar3 = in_x0[7];
    if (uVar3 < 2) {
      while (uVar3 = in_x0[0x10], uVar3 != 0) {
        lVar1 = in_x0[0xd] + in_x0[0xc];
        uVar5 = lVar1 - in_x0[0x11];
        uVar4 = uVar3;
        if (uVar5 <= uVar3) {
          uVar4 = uVar5;
        }
        lVar2 = in_x0[0x11] + uVar4;
        in_x0[0x10] = uVar3 - uVar4;
        in_x0[0x11] = lVar2;
        if (uVar3 - uVar4 == 0 || lVar2 == lVar1) {
          in_x0[0x11] = in_x0[0xd];
        }
        (**(code **)(*in_x0 + 0x1e0))();
      }
    }
    else {
      uVar4 = in_x0[0x10];
      while (uVar3 <= uVar4) {
        uVar3 = in_x0[0xe];
        if (uVar3 <= uVar4) {
          lVar1 = in_x0[0xd];
          if (in_x0[0x11] + uVar3 != in_x0[0xd] + in_x0[0xc]) {
            lVar1 = in_x0[0x11] + uVar3;
          }
          in_x0[0x10] = uVar4 - uVar3;
          in_x0[0x11] = lVar1;
        }
        (**(code **)(*in_x0 + 0x1e0))();
        uVar4 = in_x0[0x10];
        uVar3 = in_x0[7];
      }
    }
  }
  return;
}


