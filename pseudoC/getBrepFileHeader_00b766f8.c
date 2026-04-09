// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBrepFileHeader
// Entry Point: 00b766f8
// Size: 76 bytes
// Signature: undefined __cdecl getBrepFileHeader(Brep * param_1, BrepFileHeader * param_2)


/* BrepUtil::getBrepFileHeader(Brep const*, BrepUtil::BrepFileHeader&) */

void BrepUtil::getBrepFileHeader(Brep *param_1,BrepFileHeader *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x2fa0);
  iVar2 = *(int *)(param_1 + 0x2f98);
  lVar3 = *(long *)(param_1 + 0x2f70);
  lVar4 = *(long *)(param_1 + 0x2f68);
  *(short *)param_2 = (short)((uint)(*(int *)(param_1 + 0x2ef8) - *(int *)(param_1 + 0x2ef0)) >> 4);
  *(short *)(param_2 + 2) = (short)((uint)(iVar1 - iVar2) >> 3) * -0x5555;
  *(int *)(param_2 + 4) = (int)((ulong)(lVar3 - lVar4) >> 5);
  return;
}


