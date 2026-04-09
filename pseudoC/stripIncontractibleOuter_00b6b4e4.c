// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stripIncontractibleOuter
// Entry Point: 00b6b4e4
// Size: 404 bytes
// Signature: undefined stripIncontractibleOuter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::stripIncontractibleOuter() */

void Brep::stripIncontractibleOuter(void)

{
  int iVar1;
  uint uVar2;
  long in_x0;
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  ushort *puVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  
  lVar5 = *(long *)(in_x0 + 0x2f50);
  uVar4 = (*(long *)(in_x0 + 0x2f58) - lVar5 >> 2) * 0xaaab;
  puVar3 = *(ushort **)(in_x0 + 0x2f68);
  puVar6 = puVar3;
  if ((uVar4 & 0xffff) != 0) {
    uVar7 = 0;
    do {
      puVar9 = (uint *)(lVar5 + uVar7 * 0xc + 4);
      uVar2 = *puVar9;
      uVar10 = uVar2;
      do {
        if (-1 < (short)puVar3[(ulong)(uVar10 >> 2) * 0x10]) goto LAB_00b6b560;
        uVar8 = uVar10 + 2;
        if ((uVar10 - 1 & 3) != 0) {
          uVar8 = uVar10 - 1;
        }
        uVar10 = *(uint *)(puVar6 + (ulong)uVar8 * 4 + 2);
      } while (uVar10 != 0xffffffff && uVar10 != uVar2);
      uVar10 = 0xffffffff;
LAB_00b6b560:
      uVar7 = uVar7 + 1;
      *puVar9 = uVar10;
      if (uVar7 == (uVar4 & 0xffff)) goto LAB_00b6b578;
      puVar6 = *(ushort **)(in_x0 + 0x2f68);
    } while( true );
  }
LAB_00b6b584:
  uVar7 = *(long *)(in_x0 + 0x2f70) - (long)puVar6;
  if (((uint)uVar7 >> 5 & 0xffff) != 0) {
    uVar7 = uVar7 >> 5 & 0xffff;
    do {
      if ((short)*puVar3 < 0) {
        *puVar3 = *puVar3 | 0x4000;
        lVar5 = *(long *)(in_x0 + 0x2f68);
        if (*(uint *)(puVar3 + 6) != 0xffffffff) {
          *(undefined4 *)(lVar5 + (ulong)*(uint *)(puVar3 + 6) * 8 + 4) = 0xffffffff;
        }
        if (*(uint *)(puVar3 + 10) != 0xffffffff) {
          *(undefined4 *)(lVar5 + (ulong)*(uint *)(puVar3 + 10) * 8 + 4) = 0xffffffff;
        }
        if (*(uint *)(puVar3 + 0xe) != 0xffffffff) {
          *(undefined4 *)(lVar5 + (ulong)*(uint *)(puVar3 + 0xe) * 8 + 4) = 0xffffffff;
        }
      }
      puVar3 = puVar3 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar3 = *(ushort **)(in_x0 + 0x2f68);
  }
  if ((uVar4 & 0xffff) != 0) {
    uVar7 = 0;
    lVar5 = *(long *)(in_x0 + 0x2f50);
    do {
      puVar9 = (uint *)(lVar5 + uVar7 * 0xc + 4);
      uVar2 = *puVar9;
      uVar10 = uVar2;
      if (uVar2 != 0xffffffff) {
        do {
          iVar1 = *(int *)(puVar3 + (ulong)uVar10 * 4 + 2);
          uVar8 = uVar10;
          if (iVar1 == -1) break;
          uVar10 = iVar1 - 2;
          if ((iVar1 + 1U & 3) != 0) {
            uVar10 = iVar1 + 1;
          }
          uVar8 = uVar2;
        } while (uVar10 != uVar2);
        *puVar9 = uVar8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != (uVar4 & 0xffff));
  }
  purge();
  return;
LAB_00b6b578:
  puVar3 = *(ushort **)(in_x0 + 0x2f68);
  goto LAB_00b6b584;
}


