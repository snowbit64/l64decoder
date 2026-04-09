// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: popIRLValue
// Entry Point: 00c09cec
// Size: 44 bytes
// Signature: undefined popIRLValue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CreateIR::popIRLValue() */

void CreateIR::popIRLValue(void)

{
  long in_x0;
  undefined8 *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(in_x0 + 0x108);
  uVar3 = *(undefined8 *)(lVar1 + -0x38);
  uVar5 = *(undefined8 *)(lVar1 + -0x20);
  uVar4 = *(undefined8 *)(lVar1 + -0x28);
  uVar7 = *(undefined8 *)(lVar1 + -0x10);
  uVar6 = *(undefined8 *)(lVar1 + -0x18);
  uVar2 = *(undefined8 *)(lVar1 + -8);
  in_x8[1] = *(undefined8 *)(lVar1 + -0x30);
  *in_x8 = uVar3;
  in_x8[3] = uVar5;
  in_x8[2] = uVar4;
  in_x8[5] = uVar7;
  in_x8[4] = uVar6;
  in_x8[6] = uVar2;
  *(long *)(in_x0 + 0x108) = lVar1 + -0x38;
  return;
}


