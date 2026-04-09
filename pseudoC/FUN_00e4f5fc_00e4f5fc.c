// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f5fc
// Entry Point: 00e4f5fc
// Size: 204 bytes
// Signature: undefined FUN_00e4f5fc(void)


void FUN_00e4f5fc(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  
  memset((void *)(param_1 + 0x30),0xff,0x800);
  cVar3 = *(char *)(param_1 + 0x1b);
  lVar5 = 4;
  if (cVar3 != '\0') {
    lVar5 = 0x840;
  }
  uVar1 = *(uint *)(param_1 + lVar5);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    if (0x7ffe < uVar1) {
      uVar1 = 0x7fff;
    }
    lVar5 = *(long *)(param_1 + 8);
    do {
      if (*(byte *)(lVar5 + uVar4) < 0xb) {
        if (cVar3 == '\0') {
          uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + uVar4 * 4);
        }
        else {
          uVar2 = *(uint *)(*(long *)(param_1 + 0x830) + uVar4 * 4);
          uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
          uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        }
        for (; uVar2 < 0x400; uVar2 = (1 << (ulong)(*(byte *)(lVar5 + uVar4) & 0x1f)) + uVar2) {
          *(short *)(param_1 + (ulong)uVar2 * 2 + 0x30) = (short)uVar4;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return;
}


