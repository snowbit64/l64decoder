// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ClearBuffer
// Entry Point: 00d9fd48
// Size: 104 bytes
// Signature: undefined ClearBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::ClearBuffer() */

void MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::ClearBuffer(void)

{
  long lVar1;
  undefined8 *puVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  
  if (0 < *(int *)(in_x0 + 0x130) * *(int *)(in_x0 + 300)) {
    lVar3 = 0;
    auVar5 = NEON_fmov(0xbf800000,4);
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
      lVar1 = *(long *)(in_x0 + 0x138) + lVar3;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined8 *)(*(long *)(in_x0 + 0x138) + lVar3);
      puVar2[1] = auVar5._8_8_;
      *puVar2 = auVar5._0_8_;
      lVar1 = *(long *)(in_x0 + 0x138) + lVar3;
      lVar3 = lVar3 + 0x30;
      *(undefined8 *)(lVar1 + 0x18) = 0x7f7fffff7f7fffff;
      *(undefined8 *)(lVar1 + 0x10) = 0x7f7fffff7f7fffff;
    } while (lVar4 < (long)*(int *)(in_x0 + 0x130) * (long)*(int *)(in_x0 + 300));
  }
  return;
}


