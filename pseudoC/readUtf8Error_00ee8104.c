// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readUtf8Error
// Entry Point: 00ee8104
// Size: 480 bytes
// Signature: undefined readUtf8Error(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::readUtf8Error() */

void Luau::Lexer::readUtf8Error(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  long *in_x0;
  ulong uVar8;
  undefined4 *in_x8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar1 = *(uint *)(in_x0 + 2);
  iVar2 = *(int *)((long)in_x0 + 0x14);
  lVar3 = *in_x0;
  uVar10 = in_x0[1];
  uVar4 = *(uint *)(in_x0 + 3);
  bVar5 = *(byte *)(lVar3 + (ulong)uVar1);
  uVar15 = (uint)bVar5;
  iVar11 = iVar2;
  uVar9 = uVar4;
  if (uVar1 < uVar10) {
    uVar13 = uVar15;
    if (-1 < (char)bVar5) goto joined_r0x00ee8140;
    if ((uVar15 & 0xe0) != 0xc0) {
      if ((uVar15 & 0xf0) == 0xe0) {
        bVar7 = true;
        uVar13 = 0xf;
        *(uint *)(in_x0 + 2) = uVar1 + 1;
      }
      else {
        if ((uVar15 & 0xf8) != 0xf0) {
          uVar10 = 0;
          *(uint *)(in_x0 + 2) = uVar1 + 1;
          uVar12 = CONCAT44((uVar1 + 1) - uVar4,iVar2);
          goto LAB_00ee82ac;
        }
        bVar7 = false;
        uVar13 = 7;
        *(uint *)(in_x0 + 2) = uVar1 + 1;
      }
      uVar8 = (ulong)(uVar1 + 1);
      bVar6 = false;
      uVar14 = uVar1 + 1;
      if (uVar8 < uVar10) goto LAB_00ee81e0;
LAB_00ee82d0:
      uVar10 = 0;
      uVar12 = CONCAT44(uVar14 - uVar4,iVar2);
      goto LAB_00ee82ac;
    }
    bVar7 = false;
    bVar6 = true;
    uVar13 = 0x1f;
    uVar14 = uVar1 + 1;
    uVar8 = (ulong)uVar14;
    *(uint *)(in_x0 + 2) = uVar14;
    if (uVar10 <= uVar8) goto LAB_00ee82d0;
LAB_00ee81e0:
    uVar14 = uVar1 + 1;
    if ((*(byte *)(lVar3 + uVar8) & 0xc0) != 0x80) goto LAB_00ee82d0;
    uVar14 = uVar1 + 2;
    uVar13 = *(byte *)(lVar3 + uVar8) & 0x3f | (uVar15 & uVar13) << 6;
    *(uint *)(in_x0 + 2) = uVar14;
    if (!bVar6) {
      if ((uVar10 <= uVar14) ||
         (uVar15 = (uint)*(byte *)(lVar3 + (ulong)uVar14), (uVar15 & 0xc0) != 0x80))
      goto LAB_00ee82d0;
      uVar14 = uVar1 + 3;
      uVar13 = uVar15 & 0x3f | uVar13 << 6;
      *(uint *)(in_x0 + 2) = uVar14;
      if (bVar7) goto LAB_00ee829c;
      if ((uVar10 <= uVar14) ||
         (uVar15 = (uint)*(byte *)(lVar3 + (ulong)uVar14), (uVar15 & 0xc0) != 0x80))
      goto LAB_00ee82d0;
      uVar14 = uVar1 + 4;
      uVar13 = uVar15 & 0x3f | uVar13 << 6;
      goto LAB_00ee8298;
    }
  }
  else {
    uVar13 = 0;
joined_r0x00ee8140:
    uVar14 = uVar1 + 1;
    if (uVar15 == 10) {
      uVar14 = uVar1 + 1;
      *(int *)((long)in_x0 + 0x14) = iVar2 + 1;
      *(uint *)(in_x0 + 3) = uVar14;
      iVar11 = iVar2 + 1;
      uVar9 = uVar14;
    }
LAB_00ee8298:
    *(uint *)(in_x0 + 2) = uVar14;
  }
LAB_00ee829c:
  uVar12 = CONCAT44(uVar14 - uVar9,iVar11);
  uVar10 = (ulong)uVar13;
LAB_00ee82ac:
  *(undefined8 *)(in_x8 + 3) = uVar12;
  in_x8[5] = 0;
  *in_x8 = 0x11c;
  *(ulong *)(in_x8 + 6) = uVar10;
  *(ulong *)(in_x8 + 1) = CONCAT44(uVar1 - uVar4,iVar2);
  return;
}


