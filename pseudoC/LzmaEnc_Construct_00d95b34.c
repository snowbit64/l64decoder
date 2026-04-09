// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_Construct
// Entry Point: 00d95b34
// Size: 472 bytes
// Signature: undefined LzmaEnc_Construct(void)


void LzmaEnc_Construct(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x3d320) = 0;
  *(undefined8 *)(param_1 + 0x3d318) = 0;
  MatchFinder_Construct(param_1 + 0x38);
  local_60 = 0xffffffffffffffff;
  uStack_58 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  local_40 = 0;
  uStack_3c = 0xffffffff;
  local_68 = 5;
  local_48 = 0xffffffff;
  uStack_44 = 0;
  LzmaEnc_SetProps(param_1,&local_68);
  LzmaEnc_FastPosInit(param_1 + 0x304dc);
  uVar6 = 8;
  do {
    uVar8 = uVar6 * uVar6;
    if (uVar8 < 0x10000) {
      uVar11 = (int)uVar8 * (int)uVar8;
      iVar9 = 0;
      iVar7 = 0;
      if (0xffff < uVar11) goto LAB_00d95c4c;
LAB_00d95c74:
      uVar11 = uVar11 * uVar11;
      iVar7 = iVar7 << 1;
      if (0xffff < uVar11) goto LAB_00d95c88;
LAB_00d95cb0:
      uVar10 = uVar11 * uVar11;
      iVar7 = iVar7 << 1;
    }
    else {
      iVar9 = 0;
      uVar8 = uVar8 & 0xffffffff;
      do {
        uVar3 = uVar8 >> 1;
        uVar4 = uVar8 >> 0x11;
        iVar9 = iVar9 + 1;
        uVar8 = uVar3;
      } while (uVar4 != 0);
      iVar7 = (int)uVar3;
      uVar11 = iVar7 * iVar7;
      iVar9 = iVar9 * 2;
      iVar7 = iVar9;
      if (uVar11 < 0x10000) goto LAB_00d95c74;
LAB_00d95c4c:
      do {
        uVar10 = uVar11 >> 1;
        uVar1 = uVar11 >> 0x11;
        iVar9 = iVar9 + 1;
        uVar11 = uVar10;
      } while (uVar1 != 0);
      uVar11 = uVar10 * uVar10;
      iVar7 = iVar9 * 2;
      if (uVar11 < 0x10000) goto LAB_00d95cb0;
LAB_00d95c88:
      do {
        uVar10 = uVar11 >> 1;
        uVar1 = uVar11 >> 0x11;
        iVar7 = iVar7 + 1;
        uVar11 = uVar10;
      } while (uVar1 != 0);
      uVar10 = uVar10 * uVar10;
      iVar7 = iVar7 * 2;
    }
    if (0xffff < uVar10) {
      do {
        uVar11 = uVar10 >> 0x11;
        iVar7 = iVar7 + 1;
        uVar10 = uVar10 >> 1;
      } while (uVar11 != 0);
    }
    bVar5 = 0x7ef < uVar6;
    *(int *)(param_1 + (uVar6 >> 2 & 0x3ffffffffffffffc) + 0x324dc) = 0xa1 - iVar7;
    uVar6 = uVar6 + 0x10;
    if (bVar5) {
      *(undefined8 *)(param_1 + 0x33be8) = 0;
      *(undefined8 *)(param_1 + 0x3d368) = 0;
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


