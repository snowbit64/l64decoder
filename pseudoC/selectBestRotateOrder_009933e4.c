// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: selectBestRotateOrder
// Entry Point: 009933e4
// Size: 124 bytes
// Signature: undefined selectBestRotateOrder(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2D6Joint::selectBestRotateOrder() */

void Bt2D6Joint::selectBestRotateOrder(void)

{
  long in_x0;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(in_x0 + 0x1c4) - *(float *)(in_x0 + 0x1c0);
  fVar2 = *(float *)(in_x0 + 0x208) - *(float *)(in_x0 + 0x204);
  fVar3 = *(float *)(in_x0 + 0x24c) - *(float *)(in_x0 + 0x248);
  if (fVar4 <= fVar2) {
    if (fVar3 < fVar4) {
      *(undefined4 *)(in_x0 + 0x28c) = 4;
      return;
    }
    *(uint *)(in_x0 + 0x28c) = (uint)(fVar3 < fVar2);
    return;
  }
  if (fVar3 < fVar4) {
    uVar1 = 5;
    if (fVar2 <= fVar3) {
      uVar1 = 3;
    }
    *(undefined4 *)(in_x0 + 0x28c) = uVar1;
    return;
  }
  *(undefined4 *)(in_x0 + 0x28c) = 2;
  return;
}


