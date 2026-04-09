// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008cc788
// Entry Point: 008cc788
// Size: 272 bytes
// Signature: undefined FUN_008cc788(void)


bool FUN_008cc788(Brep **param_1,uint param_2)

{
  uint uVar1;
  Brep *pBVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  pBVar2 = *param_1;
  uVar1 = param_2 + 2;
  if ((param_2 - 1 & 3) != 0) {
    uVar1 = param_2 - 1;
  }
  uVar3 = (ulong)*(ushort *)(*(long *)(pBVar2 + 0x2f68) + (ulong)param_2 * 8);
  lVar4 = *(long *)(pBVar2 + 0x2f50);
  if (*(float *)(*(long *)(pBVar2 + 0x2ef0) + (ulong)*(ushort *)(lVar4 + uVar3 * 0xc) * 0x10 + 4) -
      *(float *)(*(long *)(pBVar2 + 0x2ef0) +
                 (ulong)*(ushort *)
                         (lVar4 + (ulong)*(ushort *)(*(long *)(pBVar2 + 0x2f68) + (ulong)uVar1 * 8)
                                  * 0xc) * 0x10 + 4) < -0.01) {
    if (*(short *)(lVar4 + uVar3 * 0xc + 8) != -1) {
      return true;
    }
    if ((*(char *)(*(long *)param_1[1] + (ulong)(((param_2 & 3) + (param_2 >> 2) * 3) - 1) * 0xc) ==
         '\0') && (fVar5 = (float)FillPlaneGeometry::cosAngleAtEdge(pBVar2,param_2), fVar5 < 0.966))
    {
      fVar5 = (float)FillPlaneGeometry::distanceSqErrorOfIgnoredEdge(*param_1,param_2);
      return *(float *)(param_1 + 2) <= fVar5;
    }
  }
  return false;
}


