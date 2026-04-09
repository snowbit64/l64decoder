// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldJumps
// Entry Point: 00efb84c
// Size: 176 bytes
// Signature: undefined foldJumps(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::BytecodeBuilder::foldJumps() */

void Luau::BytecodeBuilder::foldJumps(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long in_x0;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(char *)(in_x0 + 0xb0) == '\0') {
    puVar6 = *(uint **)(in_x0 + 0x80);
    puVar2 = *(uint **)(in_x0 + 0x88);
    if (puVar6 != puVar2) {
      lVar7 = *(long *)(in_x0 + 0x20);
      lVar8 = *(long *)(in_x0 + 0x38);
      do {
        uVar3 = *puVar6;
        uVar11 = (ulong)uVar3;
        uVar4 = *(uint *)(lVar7 + uVar11 * 4);
        uVar10 = (ulong)(uVar3 + ((int)uVar4 >> 0x10) + 1);
        uVar5 = *(uint *)(lVar7 + uVar10 * 4);
        while (uVar9 = (uint)uVar10, (uVar5 & 0x800000ff) == 0x17) {
          uVar10 = (ulong)(uVar9 + (uVar5 >> 0x10) + 1);
          uVar5 = *(uint *)(lVar7 + uVar10 * 4);
        }
        if (((uVar4 & 0xff) == 0x17) && ((uVar5 & 0xff) == 0x16)) {
          *(uint *)(lVar7 + uVar11 * 4) = uVar5;
          *(undefined4 *)(lVar8 + uVar11 * 4) = *(undefined4 *)(lVar8 + uVar10 * 4);
        }
        else {
          iVar1 = uVar9 + ~uVar3;
          if (iVar1 == (short)iVar1) {
            *(uint *)(lVar7 + uVar11 * 4) = uVar4 & 0xffff | iVar1 * 0x10000;
          }
        }
        puVar6[1] = uVar9;
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar2);
    }
  }
  return;
}


