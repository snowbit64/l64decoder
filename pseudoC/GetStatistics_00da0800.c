// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetStatistics
// Entry Point: 00da0800
// Size: 36 bytes
// Signature: undefined GetStatistics(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::GetStatistics() */

void MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::GetStatistics(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(in_x0 + 0x38);
  uVar4 = *(undefined8 *)(in_x0 + 0x50);
  uVar3 = *(undefined8 *)(in_x0 + 0x48);
  uVar1 = *(undefined8 *)(in_x0 + 0x58);
  uVar6 = *(undefined8 *)(in_x0 + 0x30);
  uVar5 = *(undefined8 *)(in_x0 + 0x28);
  in_x8[5] = *(undefined8 *)(in_x0 + 0x40);
  in_x8[4] = uVar2;
  in_x8[7] = uVar4;
  in_x8[6] = uVar3;
  uVar3 = *(undefined8 *)(in_x0 + 0x20);
  uVar2 = *(undefined8 *)(in_x0 + 0x18);
  in_x8[8] = uVar1;
  in_x8[1] = uVar3;
  *in_x8 = uVar2;
  in_x8[3] = uVar6;
  in_x8[2] = uVar5;
  return;
}


