// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: purge
// Entry Point: 00b6f090
// Size: 560 bytes
// Signature: undefined purge(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::purge() */

void Brep::purge(void)

{
  Brep *in_x0;
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)(in_x0 + 0x2fa0);
  lVar2 = *(long *)(in_x0 + 0x2f98);
  if (lVar4 != lVar2) {
    uVar6 = 0;
    uVar1 = 0;
    do {
      if (*(short *)(lVar2 + uVar6 * 0x18 + 0x14) == 0) {
        uVar5 = (ulong)(((uint)((int)lVar4 - (int)lVar2) >> 3) * -0x5555 - 1) & 0xffff;
        if (*(short *)(lVar2 + uVar5 * 0x18 + 0x14) != 0) {
          puVar8 = (undefined8 *)(lVar2 + uVar5 * 0x18);
          puVar3 = (undefined8 *)(lVar2 + uVar6 * 0x18);
          uVar11 = puVar8[1];
          uVar10 = *puVar8;
          *(undefined8 *)((long)puVar3 + 0xe) = *(undefined8 *)((long)puVar8 + 0xe);
          puVar3[1] = uVar11;
          *puVar3 = uVar10;
          uVar6 = (ulong)(*(long *)(in_x0 + 0x2f70) - *(long *)(in_x0 + 0x2f68)) >> 3;
          if ((uVar6 & 0xfffffffc) != 0) {
            uVar7 = 0;
            lVar2 = 2;
            do {
              if (((uVar7 & 3) != 0) &&
                 ((uint)*(ushort *)(*(long *)(in_x0 + 0x2f68) + lVar2) == (uint)uVar5)) {
                *(ushort *)(*(long *)(in_x0 + 0x2f68) + lVar2) = uVar1;
              }
              uVar7 = uVar7 + 1;
              lVar2 = lVar2 + 8;
            } while (((uint)uVar6 & 0xfffffffc) != uVar7);
          }
        }
        lVar4 = *(long *)(in_x0 + 0x2fa0) + -0x18;
        lVar2 = *(long *)(in_x0 + 0x2f98);
        *(long *)(in_x0 + 0x2fa0) = lVar4;
      }
      else {
        uVar1 = uVar1 + 1;
      }
      uVar6 = (ulong)uVar1;
    } while ((lVar4 - lVar2 >> 3) * -0x5555555555555555 - uVar6 != 0);
  }
  lVar2 = *(long *)(in_x0 + 0x2f58);
  lVar4 = *(long *)(in_x0 + 0x2f50);
  if (lVar2 != lVar4) {
    uVar6 = 0;
    uVar1 = 0;
    do {
      if (*(int *)(lVar4 + uVar6 * 0xc + 4) == -1) {
        deleteCone(in_x0,uVar1);
        lVar2 = *(long *)(in_x0 + 0x2f58);
        lVar4 = *(long *)(in_x0 + 0x2f50);
      }
      else {
        uVar1 = uVar1 + 1;
      }
      uVar6 = (ulong)uVar1;
    } while ((lVar2 - lVar4 >> 2) * -0x5555555555555555 - uVar6 != 0);
  }
  lVar2 = *(long *)(in_x0 + 0x2ef8);
  lVar4 = *(long *)(in_x0 + 0x2ef0);
  if (lVar2 != lVar4) {
    uVar6 = 0;
    uVar1 = 0;
    do {
      if (*(short *)(lVar4 + uVar6 * 0x10 + 0xc) == -1) {
        deleteVertex(in_x0,uVar1);
        lVar2 = *(long *)(in_x0 + 0x2ef8);
        lVar4 = *(long *)(in_x0 + 0x2ef0);
      }
      else {
        uVar1 = uVar1 + 1;
      }
      uVar6 = (ulong)uVar1;
    } while (uVar6 != lVar2 - lVar4 >> 4);
  }
  lVar2 = *(long *)(in_x0 + 0x2f70);
  lVar4 = *(long *)(in_x0 + 0x2f68);
  if (lVar2 != lVar4) {
    uVar6 = 0;
    uVar9 = 0;
    do {
      if ((*(ushort *)(lVar4 + uVar6 * 0x20) >> 0xe & 1) == 0) {
        uVar9 = uVar9 + 1;
      }
      else {
        deleteFace(in_x0,uVar9);
        lVar2 = *(long *)(in_x0 + 0x2f70);
        lVar4 = *(long *)(in_x0 + 0x2f68);
      }
      uVar6 = (ulong)uVar9;
    } while (uVar6 != lVar2 - lVar4 >> 5);
  }
  return;
}


