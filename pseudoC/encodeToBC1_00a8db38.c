// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeToBC1
// Entry Point: 00a8db38
// Size: 792 bytes
// Signature: undefined __cdecl encodeToBC1(ImageDesc * param_1, bool param_2, ImageDesc * param_3)


/* DXTUtil::encodeToBC1(ImageDesc const&, bool, ImageDesc&) */

void DXTUtil::encodeToBC1(ImageDesc *param_1,bool param_2,ImageDesc *param_3)

{
  undefined3 *puVar1;
  undefined3 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *__s;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar3 = *(uint *)param_1;
  if (((uVar3 & 3) == 0) && (uVar4 = *(uint *)(param_1 + 4), (uVar4 & 3) == 0)) {
    lVar19 = *(long *)(param_1 + 0x28);
    uVar7 = uVar3 >> 2;
    uVar8 = uVar4 >> 2;
    iVar5 = *(int *)(param_1 + 0x14);
    *(uint *)param_3 = uVar3;
    *(uint *)(param_3 + 4) = uVar4;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(int *)(param_3 + 0x14) = iVar5;
    *(undefined4 *)(param_3 + 0x40) = 7;
    uVar6 = uVar7 * uVar8 * 8;
    *(undefined8 *)(param_3 + 0x18) = 1;
    *(uint *)(param_3 + 0x20) = uVar6;
    __s = (undefined8 *)operator_new__((ulong)uVar6);
    *(undefined8 **)(param_3 + 0x28) = __s;
    memset(__s,0,(ulong)uVar6);
    iVar18 = 0x21;
    if (!param_2) {
      iVar18 = 0x41;
    }
    uStack_88 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    local_80 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    local_b0 = 0xffffffffffffffff;
    local_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    if (3 < uVar4) {
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uVar4 = iVar5 * uVar3;
      uVar22 = (ulong)uVar4;
      uVar21 = 0;
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      do {
        if (3 < uVar3) {
          uVar23 = 0;
          puVar20 = __s;
          do {
            uVar16 = local_78;
            uVar15 = local_80;
            uVar14 = uStack_88;
            uVar13 = local_90;
            uVar12 = local_98;
            uVar11 = local_a0;
            uVar10 = uStack_a8;
            uVar17 = local_b0;
            puVar1 = (undefined3 *)
                     (lVar19 + (ulong)(uVar4 * 4 * (int)uVar21) + (uVar23 & 0xfffffffc));
            local_b0 = CONCAT53(local_b0._3_5_,*puVar1);
            uStack_a8 = CONCAT53(uStack_a8._3_5_,*(undefined3 *)((long)puVar1 + 6));
            puVar2 = (undefined3 *)((long)puVar1 + uVar22);
            local_a0 = CONCAT53(local_a0._3_5_,*puVar2);
            local_98 = CONCAT53(local_98._3_5_,*(undefined3 *)((long)puVar2 + 6));
            puVar1 = (undefined3 *)((long)puVar2 + uVar22);
            local_90 = CONCAT53(local_90._3_5_,*puVar1);
            uStack_88 = CONCAT53(uStack_88._3_5_,*(undefined3 *)((long)puVar1 + 6));
            puVar2 = (undefined3 *)((long)puVar1 + uVar22);
            local_80 = CONCAT53(local_80._3_5_,*puVar2);
            local_78 = CONCAT53(local_78._3_5_,*(undefined3 *)((long)puVar2 + 6));
            squish::Compress((uchar *)&local_b0,&local_b8,iVar18);
            uVar23 = uVar23 + 0xc;
            __s = puVar20 + 1;
            *puVar20 = local_b8;
            puVar20 = __s;
          } while ((ulong)uVar7 * 0xc - uVar23 != 0);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar8);
    }
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar17);
  }
  return;
}


