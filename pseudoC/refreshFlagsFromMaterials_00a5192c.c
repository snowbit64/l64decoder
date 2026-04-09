// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshFlagsFromMaterials
// Entry Point: 00a5192c
// Size: 248 bytes
// Signature: undefined refreshFlagsFromMaterials(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::refreshFlagsFromMaterials() */

void GsShape::refreshFlagsFromMaterials(void)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long in_x0;
  long lVar6;
  ulong uVar7;
  
  if (*(short *)(in_x0 + 0x196) == 0) {
    uVar5 = *(uint *)(in_x0 + 0x40) & 0xfffcffff;
  }
  else {
    if (*(short *)(in_x0 + 0x196) == 1) {
      cVar2 = *(char *)(*(long *)(in_x0 + 0x178) + 100);
      bVar1 = 0.0 < *(float *)(*(long *)(in_x0 + 0x178) + 0x50);
      uVar4 = GsMaterial::getIsAlphaTested();
      if (cVar2 != '\0') goto LAB_00a51974;
LAB_00a519ec:
      uVar5 = *(uint *)(in_x0 + 0x40) & 0xfffeffff;
      if (!bVar1) goto LAB_00a519f8;
LAB_00a51980:
      uVar5 = uVar5 | 0x20000;
    }
    else {
      uVar7 = 0;
      bVar3 = false;
      bVar1 = false;
      uVar4 = 0;
      do {
        lVar6 = *(long *)(*(long *)(in_x0 + 0x178) + uVar7 * 8);
        bVar3 = (bool)(*(char *)(lVar6 + 100) != '\0' | bVar3);
        bVar1 = (bool)(0.0 < *(float *)(lVar6 + 0x50) | bVar1);
        uVar5 = GsMaterial::getIsAlphaTested();
        uVar4 = uVar5 | uVar4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(in_x0 + 0x196));
      if (!bVar3) goto LAB_00a519ec;
LAB_00a51974:
      uVar5 = *(uint *)(in_x0 + 0x40) | 0x10000;
      if (bVar1) goto LAB_00a51980;
LAB_00a519f8:
      uVar5 = uVar5 & 0xfffdffff;
    }
    if ((uVar4 & 1) != 0) {
      uVar5 = uVar5 | 0x40000;
      goto LAB_00a51a0c;
    }
  }
  uVar5 = uVar5 & 0xfffbffff;
LAB_00a51a0c:
  *(uint *)(in_x0 + 0x40) = uVar5;
  return;
}


