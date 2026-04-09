// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a5438
// Entry Point: 007a5438
// Size: 228 bytes
// Signature: undefined FUN_007a5438(void)


void FUN_007a5438(long param_1,char **param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  param_2[0x20] = (char *)0x0;
  *(undefined4 *)(param_2 + 0x21) = 0;
  lVar3 = UserAttributes::getAttribute((UserAttributes *)(param_1 + 0x60),*param_2);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = UserAttribute::getType();
  switch(uVar2) {
  case 0:
    bVar1 = UserAttribute::getBool();
    *(undefined4 *)(param_2 + 0x21) = 3;
    *(byte *)(param_2 + 0x20) = bVar1 & 1;
    return;
  case 1:
    uVar2 = UserAttribute::getInt();
    break;
  case 2:
    uVar2 = UserAttribute::getFloat();
    uVar5 = 4;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    goto LAB_007a550c;
  case 3:
    pcVar4 = (char *)UserAttribute::getString();
    goto LAB_007a54dc;
  case 4:
    pcVar4 = (char *)UserAttribute::getScriptCallbackFunction();
LAB_007a54dc:
    param_2[0x20] = pcVar4;
    *(undefined4 *)(param_2 + 0x21) = 6;
    *(ushort *)((long)param_2 + 0x10c) = *(ushort *)((long)param_2 + 0x10c) & 0xfffe;
    return;
  case 5:
    uVar2 = UserAttribute::getNodeId();
    break;
  default:
    return;
  }
  uVar5 = 1;
  *(undefined4 *)(param_2 + 0x20) = uVar2;
LAB_007a550c:
  *(undefined4 *)(param_2 + 0x21) = uVar5;
  return;
}


