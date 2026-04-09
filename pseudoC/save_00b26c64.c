// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: save
// Entry Point: 00b26c64
// Size: 48 bytes
// Signature: undefined save(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DomXMLFile::save() */

undefined8 DomXMLFile::save(void)

{
  ulong uVar1;
  bool bVar2;
  DomXMLFile *in_x0;
  undefined8 uVar3;
  DomXMLFile *pDVar4;
  
  bVar2 = ((byte)in_x0[0x10] & 1) != 0;
  uVar1 = (ulong)((byte)in_x0[0x10] >> 1);
  if (bVar2) {
    uVar1 = *(ulong *)(in_x0 + 0x18);
  }
  if (uVar1 != 0) {
    pDVar4 = *(DomXMLFile **)(in_x0 + 0x20);
    if (!bVar2) {
      pDVar4 = in_x0 + 0x11;
    }
    uVar3 = saveToFile(in_x0,(char *)pDVar4);
    return uVar3;
  }
  return 0;
}


