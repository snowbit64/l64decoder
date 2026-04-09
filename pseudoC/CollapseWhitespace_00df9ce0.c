// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CollapseWhitespace
// Entry Point: 00df9ce0
// Size: 168 bytes
// Signature: undefined CollapseWhitespace(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::StrPair::CollapseWhitespace() */

void tinyxml2::StrPair::CollapseWhitespace(void)

{
  long in_x0;
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  
  pbVar1 = *(byte **)(in_x0 + 8);
  bVar4 = *pbVar1;
  while ((-1 < (char)bVar4 && ((bVar4 == 0x20 || (bVar4 - 9 < 5))))) {
    pbVar1 = pbVar1 + 1;
    bVar4 = *pbVar1;
  }
  *(byte **)(in_x0 + 8) = pbVar1;
  bVar4 = *pbVar1;
  pbVar3 = pbVar1;
  if (bVar4 != 0) {
    do {
      uVar5 = (uint)bVar4;
      pbVar2 = pbVar1;
      if ((-1 < (char)bVar4) && ((uVar5 == 0x20 || (uVar5 - 9 < 5)))) {
        do {
          if ((uVar5 != 0x20) && (4 < uVar5 - 9)) {
            if (uVar5 == 0) goto LAB_00df9d80;
            break;
          }
          pbVar3 = pbVar3 + 1;
          uVar5 = (uint)*pbVar3;
        } while (-1 < (char)*pbVar3);
        pbVar2 = pbVar1 + 1;
        *pbVar1 = 0x20;
        bVar4 = *pbVar3;
      }
      pbVar1 = pbVar2 + 1;
      *pbVar2 = bVar4;
      bVar4 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar4 != 0);
LAB_00df9d80:
    *pbVar1 = 0;
  }
  return;
}


