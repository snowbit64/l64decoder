// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_ResumeParser
// Entry Point: 00d2ebf8
// Size: 276 bytes
// Signature: undefined XML_ResumeParser(void)


undefined8 XML_ResumeParser(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x388) != 3) {
    *(undefined4 *)(param_1 + 0x218) = 0x22;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x388) = 1;
  iVar1 = (**(code **)(param_1 + 0x210))
                    (param_1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x218) = iVar1;
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x220);
    *(code **)(param_1 + 0x210) = FUN_00d2e718;
    return 0;
  }
  if (*(uint *)(param_1 + 0x388) < 2) {
    if (*(char *)(param_1 + 0x38c) != '\0') {
      *(undefined4 *)(param_1 + 0x388) = 2;
      return 1;
    }
  }
  else if (*(uint *)(param_1 + 0x388) == 3) {
    uVar2 = 2;
    goto LAB_00d2ecdc;
  }
  uVar2 = 1;
LAB_00d2ecdc:
  (**(code **)(*(long *)(param_1 + 0x120) + 0x60))
            (*(long *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x230),
             *(undefined8 *)(param_1 + 0x30),param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x30);
  return uVar2;
}


