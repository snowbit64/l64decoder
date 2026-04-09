// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetDbGains
// Entry Point: 008b8b74
// Size: 128 bytes
// Signature: undefined resetDbGains(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Equalizer::resetDbGains() */

void Equalizer::resetDbGains(void)

{
  long lVar1;
  long *in_x0;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = *in_x0;
  uVar5 = (in_x0[1] - lVar1 >> 3) * 0xb6db6db7;
  if (0 < (int)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
    if (uVar3 < 2) {
      lVar6 = 0;
    }
    else {
      lVar6 = uVar3 - (uVar5 & 1);
      puVar2 = (undefined4 *)(lVar1 + 0x68);
      lVar4 = lVar6;
      do {
        lVar4 = lVar4 + -2;
        puVar2[-0xe] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x1c;
      } while (lVar4 != 0);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    lVar4 = uVar3 - lVar6;
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
    do {
      lVar4 = lVar4 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 0xe;
    } while (lVar4 != 0);
  }
  return;
}


