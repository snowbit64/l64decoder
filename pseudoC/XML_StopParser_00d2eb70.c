// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_StopParser
// Entry Point: 00d2eb70
// Size: 136 bytes
// Signature: undefined XML_StopParser(void)


undefined8 XML_StopParser(long param_1,char param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x388) != 2) {
    if (*(int *)(param_1 + 0x388) == 3) {
      if (param_2 != '\0') {
        *(undefined4 *)(param_1 + 0x218) = 0x21;
        return 0;
      }
    }
    else if (param_2 != '\0') {
      if (*(char *)(param_1 + 0x390) == '\0') {
        *(undefined4 *)(param_1 + 0x388) = 3;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x218) = 0x25;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x388) = 2;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x218) = 0x24;
  return 0;
}


