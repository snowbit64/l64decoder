// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Parse
// Entry Point: 00e01224
// Size: 180 bytes
// Signature: undefined Parse(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLDocument::Parse() */

void tinyxml2::XMLDocument::Parse(void)

{
  byte bVar1;
  long lVar2;
  XMLError in_w0;
  undefined4 in_register_00004004;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  lVar2 = CONCAT44(in_register_00004004,in_w0);
  *(int *)(lVar2 + 0xa0) = 1;
  pbVar3 = *(byte **)(lVar2 + 0x98);
  *(undefined4 *)(lVar2 + 0x30) = 1;
  bVar1 = *pbVar3;
  if (-1 < (char)bVar1) {
    iVar4 = 1;
    do {
      uVar5 = (uint)bVar1;
      if ((uVar5 != 0x20) && (4 < uVar5 - 9)) break;
      if (uVar5 == 10) {
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0xa0) = iVar4;
      }
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
    } while (-1 < (char)bVar1);
  }
  *(undefined *)(CONCAT44(in_register_00004004,in_w0) + 0x68) = 0;
  bVar1 = *pbVar3;
  if (bVar1 == 0xef) {
    if ((pbVar3[1] != 0xbb) || (pbVar3[2] != 0xbf)) goto LAB_00e012b8;
    *(undefined *)(CONCAT44(in_register_00004004,in_w0) + 0x68) = 1;
    pbVar3 = pbVar3 + 3;
    bVar1 = *pbVar3;
  }
  if (bVar1 == 0) {
    SetError(in_w0,0xd,(char *)0x0,0);
    return;
  }
LAB_00e012b8:
                    /* WARNING: Could not recover jumptable at 0x00e012c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)CONCAT44(in_register_00004004,in_w0) + 0x88))(in_w0,pbVar3,0);
  return;
}


