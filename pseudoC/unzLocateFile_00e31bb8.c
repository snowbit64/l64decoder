// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzLocateFile
// Entry Point: 00e31bb8
// Size: 668 bytes
// Signature: undefined unzLocateFile(void)


void unzLocateFile(long param_1,byte *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  byte local_16c [260];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((param_1 == 0) || (sVar10 = strlen((char *)param_2), 0xff < sVar10)) {
    uVar11 = 0xffffff9a;
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x90) != 0) {
      uVar19 = *(undefined8 *)(param_1 + 0x118);
      uVar15 = *(undefined8 *)(param_1 + 0x110);
      uVar25 = *(undefined8 *)(param_1 + 0x128);
      uVar23 = *(undefined8 *)(param_1 + 0x120);
      puVar1 = (undefined8 *)(param_1 + 0xb0);
      uVar29 = *(undefined8 *)(param_1 + 0xd8);
      uVar27 = *(undefined8 *)(param_1 + 0xd0);
      uVar32 = *(undefined8 *)(param_1 + 0xe8);
      uVar31 = *(undefined8 *)(param_1 + 0xe0);
      uVar26 = *(undefined8 *)(param_1 + 0xf8);
      uVar24 = *(undefined8 *)(param_1 + 0xf0);
      uVar20 = *(undefined8 *)(param_1 + 0x108);
      uVar16 = *(undefined8 *)(param_1 + 0x100);
      uVar21 = *(undefined8 *)(param_1 + 0xb8);
      uVar17 = *(undefined8 *)(param_1 + 0xb0);
      uVar30 = *(undefined8 *)(param_1 + 200);
      uVar28 = *(undefined8 *)(param_1 + 0xc0);
      uVar3 = *(undefined8 *)(param_1 + 0x130);
      uVar4 = *(undefined8 *)(param_1 + 0x138);
      uVar22 = *(undefined8 *)(param_1 + 0x88);
      uVar18 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
      uVar11 = FUN_00e30e5c(param_1,puVar1,param_1 + 0x138,0,0,0,0,0,0);
      iVar8 = (int)uVar11;
      *(ulong *)(param_1 + 0x90) = (ulong)(iVar8 == 0);
      do {
        if ((iVar8 != 0) ||
           (uVar11 = FUN_00e30e5c(param_1,0,0,local_16c,0x100,0,0,0,0), (int)uVar11 != 0))
        goto LAB_00e31ddc;
        if (param_3 < 2) {
          uVar9 = strcmp((char *)local_16c,(char *)param_2);
joined_r0x00e31dac:
          uVar11 = (ulong)uVar9;
          if (uVar9 == 0) goto LAB_00e31e0c;
        }
        else {
          pbVar12 = local_16c;
          pbVar13 = param_2;
          do {
            bVar5 = *pbVar12;
            bVar6 = *pbVar13;
            uVar9 = bVar5 - 0x20;
            if (0x19 < bVar5 - 0x61) {
              uVar9 = (uint)bVar5;
            }
            uVar14 = bVar6 - 0x20;
            if (0x19 < bVar6 - 0x61) {
              uVar14 = (uint)bVar6;
            }
            if ((uVar9 & 0xff) == 0) {
              uVar9 = -(uint)((uVar14 & 0xff) != 0);
              goto joined_r0x00e31dac;
            }
            if ((uVar14 & 0xff) == 0) break;
            if ((uVar9 & 0xff) < (uVar14 & 0xff)) break;
            pbVar13 = pbVar13 + 1;
            pbVar12 = pbVar12 + 1;
          } while ((uVar9 & 0xff) <= (uVar14 & 0xff));
        }
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_00e31dd4;
        lVar2 = *(long *)(param_1 + 0x80) + 1;
        if ((*(long *)(param_1 + 0x68) != 0xffff) && (lVar2 == *(long *)(param_1 + 0x68)))
        goto LAB_00e31dd4;
        *(long *)(param_1 + 0x80) = lVar2;
        *(long *)(param_1 + 0x88) =
             *(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) +
             *(long *)(param_1 + 0x88) + 0x2e;
        uVar11 = FUN_00e30e5c(param_1,puVar1,param_1 + 0x138,0,0,0,0,0,0);
        iVar8 = (int)uVar11;
        *(ulong *)(param_1 + 0x90) = (ulong)(iVar8 == 0);
      } while( true );
    }
    uVar11 = 0xffffff9c;
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
LAB_00e31c18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
LAB_00e31dd4:
  uVar11 = 0xffffff9c;
LAB_00e31ddc:
  *(undefined8 *)(param_1 + 0x88) = uVar22;
  *(undefined8 *)(param_1 + 0x80) = uVar18;
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  *(undefined8 *)(param_1 + 0x118) = uVar19;
  *(undefined8 *)(param_1 + 0x110) = uVar15;
  *(undefined8 *)(param_1 + 0x128) = uVar25;
  *(undefined8 *)(param_1 + 0x120) = uVar23;
  *(undefined8 *)(param_1 + 0xd8) = uVar29;
  *(undefined8 *)(param_1 + 0xd0) = uVar27;
  *(undefined8 *)(param_1 + 0xe8) = uVar32;
  *(undefined8 *)(param_1 + 0xe0) = uVar31;
  *(undefined8 *)(param_1 + 0xf8) = uVar26;
  *(undefined8 *)(param_1 + 0xf0) = uVar24;
  *(undefined8 *)(param_1 + 0x108) = uVar20;
  *(undefined8 *)(param_1 + 0x100) = uVar16;
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar21;
  *puVar1 = uVar17;
  *(undefined8 *)(param_1 + 200) = uVar30;
  *(undefined8 *)(param_1 + 0xc0) = uVar28;
LAB_00e31e0c:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
  goto LAB_00e31c18;
}


