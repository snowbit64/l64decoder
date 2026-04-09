// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeToBC1
// Entry Point: 00a8de50
// Size: 628 bytes
// Signature: undefined __cdecl encodeToBC1(bool param_1, uchar * param_2, uint param_3, uint param_4, uint param_5, uchar * param_6, uint param_7)


/* DXTUtil::encodeToBC1(bool, unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned char*, unsigned int) */

void DXTUtil::encodeToBC1
               (bool param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,uchar *param_6,
               uint param_7)

{
  undefined3 *puVar1;
  undefined3 *puVar2;
  undefined3 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
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
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar4 = (param_4 | param_3) & 3;
  if (uVar4 == 0) {
    memset(param_6,0,(ulong)param_7);
    iVar15 = 0x21;
    if (!param_1) {
      iVar15 = 0x41;
    }
    uStack_88 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    local_80 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    local_b0 = 0xffffffffffffffff;
    local_98 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    if (3 < param_4) {
      uVar5 = param_3 >> 2;
      uVar17 = (ulong)(param_5 * param_3);
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      uVar19 = 0;
      do {
        if (3 < param_3) {
          uVar18 = 0;
          puVar16 = (undefined8 *)param_6;
          do {
            uVar14 = local_78;
            uVar13 = local_80;
            uVar12 = uStack_88;
            uVar11 = local_90;
            uVar10 = local_98;
            uVar9 = local_a0;
            uVar8 = uStack_a8;
            uVar7 = local_b0;
            puVar1 = (undefined3 *)
                     (param_2 + (uVar18 & 0xfffffffc) + (ulong)(param_5 * param_3 * 4 * (int)uVar19)
                     );
            puVar2 = (undefined3 *)((long)puVar1 + uVar17);
            puVar3 = (undefined3 *)((long)puVar2 + uVar17);
            local_b0 = CONCAT53(local_b0._3_5_,*puVar1);
            uStack_a8 = CONCAT53(uStack_a8._3_5_,*(undefined3 *)((long)puVar1 + 6));
            local_a0 = CONCAT53(local_a0._3_5_,*puVar2);
            local_98 = CONCAT53(local_98._3_5_,*(undefined3 *)((long)puVar2 + 6));
            puVar1 = (undefined3 *)((long)puVar3 + uVar17);
            local_90 = CONCAT53(local_90._3_5_,*puVar3);
            uStack_88 = CONCAT53(uStack_88._3_5_,*(undefined3 *)((long)puVar3 + 6));
            local_80 = CONCAT53(local_80._3_5_,*puVar1);
            local_78 = CONCAT53(local_78._3_5_,*(undefined3 *)((long)puVar1 + 6));
            squish::Compress((uchar *)&local_b0,&local_b8,iVar15);
            uVar18 = uVar18 + 0xc;
            param_6 = (uchar *)(puVar16 + 1);
            *puVar16 = local_b8;
            puVar16 = (undefined8 *)param_6;
          } while ((ulong)uVar5 * 0xc - uVar18 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != param_4 >> 2);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4 == 0);
  }
  return;
}


