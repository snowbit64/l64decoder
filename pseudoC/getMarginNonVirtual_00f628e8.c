// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMarginNonVirtual
// Entry Point: 00f628e8
// Size: 72 bytes
// Signature: undefined getMarginNonVirtual(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btConvexShape::getMarginNonVirtual() const */

undefined  [16] btConvexShape::getMarginNonVirtual(void)

{
  long *in_x0;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined auVar1 [16];
  
  switch(*(undefined4 *)(in_x0 + 1)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 10:
  case 0xb:
  case 0xd:
    return ZEXT416(*(uint *)((long)in_x0 + 0x3c));
  default:
                    /* WARNING: Could not recover jumptable at 0x00f6291c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0 + 0x60))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  case 8:
    return ZEXT416((uint)(*(float *)((long)in_x0 + 0x1c) * *(float *)((long)in_x0 + 0x2c)));
  }
}


