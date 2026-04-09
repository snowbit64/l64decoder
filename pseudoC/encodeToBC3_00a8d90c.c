// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeToBC3
// Entry Point: 00a8d90c
// Size: 556 bytes
// Signature: undefined __cdecl encodeToBC3(ImageDesc * param_1, bool param_2, ImageDesc * param_3)


/* DXTUtil::encodeToBC3(ImageDesc const&, bool, ImageDesc&) */

void DXTUtil::encodeToBC3(ImageDesc *param_1,bool param_2,ImageDesc *param_3)

{
  uchar *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *__s;
  int iVar10;
  uint uVar11;
  long lVar12;
  uchar *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uchar local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar3 = *(uint *)param_1;
  if (((uVar3 & 3) == 0) && (uVar4 = *(uint *)(param_1 + 4), (uVar4 & 3) == 0)) {
    uVar6 = uVar3 >> 2;
    uVar7 = uVar4 >> 2;
    lVar16 = *(long *)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_3 + 0x40) = 9;
    uVar11 = uVar6 * uVar7 * 0x10;
    *(uint *)param_3 = uVar3;
    *(uint *)(param_3 + 4) = uVar4;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(int *)(param_3 + 0x14) = iVar5;
    *(undefined8 *)(param_3 + 0x18) = 1;
    *(uint *)(param_3 + 0x20) = uVar11;
    __s = (undefined8 *)operator_new__((ulong)uVar11);
    *(undefined8 **)(param_3 + 0x28) = __s;
    memset(__s,0,(ulong)uVar11);
    iVar10 = 0x24;
    if (!param_2) {
      iVar10 = 0x44;
    }
    if (3 < uVar4) {
      uVar4 = iVar5 * uVar3;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar11 = 0;
      uVar15 = 0;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      do {
        if (3 < uVar3) {
          uVar17 = 0;
          puVar14 = __s;
          do {
            puVar13 = (uchar *)(lVar16 + 7 + (ulong)uVar11 + (uVar17 & 0xfffffff) * 0x10);
            lVar12 = 0;
            do {
              lVar2 = lVar12 + 0x10;
              local_b8[lVar12] = puVar13[-7];
              local_b8[lVar12 + 1] = puVar13[-6];
              local_b8[lVar12 + 2] = puVar13[-5];
              local_b8[lVar12 + 3] = puVar13[-4];
              local_b8[lVar12 + 4] = puVar13[-3];
              local_b8[lVar12 + 5] = puVar13[-2];
              local_b8[lVar12 + 6] = puVar13[-1];
              local_b8[lVar12 + 7] = *puVar13;
              local_b8[lVar12 + 8] = puVar13[1];
              local_b8[lVar12 + 9] = puVar13[2];
              local_b8[lVar12 + 10] = puVar13[3];
              local_b8[lVar12 + 0xb] = puVar13[4];
              local_b8[lVar12 + 0xc] = puVar13[5];
              local_b8[lVar12 + 0xd] = puVar13[6];
              local_b8[lVar12 + 0xe] = puVar13[7];
              puVar1 = puVar13 + 8;
              puVar13 = puVar13 + uVar4;
              local_b8[lVar12 + 0xf] = *puVar1;
              lVar12 = lVar2;
            } while (lVar2 != 0x40);
            squish::Compress(local_b8,&local_78,iVar10);
            uVar17 = uVar17 + 1;
            __s = puVar14 + 2;
            puVar14[1] = uStack_70;
            *puVar14 = local_78;
            puVar14 = __s;
          } while (uVar17 != uVar6);
        }
        uVar15 = uVar15 + 1;
        uVar11 = uVar11 + uVar4 * 4;
      } while (uVar15 != uVar7);
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


