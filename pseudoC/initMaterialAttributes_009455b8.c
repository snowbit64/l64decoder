// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initMaterialAttributes
// Entry Point: 009455b8
// Size: 1000 bytes
// Signature: undefined initMaterialAttributes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsMaterial::initMaterialAttributes() */

void GsMaterial::initMaterialAttributes(void)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  long in_x0;
  RenderPathManager *this;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulong uVar28;
  undefined2 local_80;
  byte local_7e;
  int local_7c;
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_75;
  char local_74;
  uint local_70;
  long local_68;
  ulong uVar18;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  MaterialAttributes::MaterialAttributes((MaterialAttributes *)&local_80);
  lVar25 = *(long *)(in_x0 + 0x30);
  uVar18 = *(ulong *)(in_x0 + 0x38);
  local_7e = lVar25 != 0;
  if (uVar18 != 0) {
    if ((*(ushort *)(uVar18 + 0x48) >> 2 & 1) == 0) {
      uVar17 = 1;
      if (*(int *)(uVar18 + 0x4c) != 0xf) {
        uVar17 = 2;
      }
      uVar18 = (ulong)uVar17;
    }
    else {
      uVar18 = 3;
    }
  }
  local_7c = (int)uVar18;
  local_80 = 0;
  lVar16 = *(long *)(in_x0 + 0x48);
  local_75 = *(byte *)(in_x0 + 100);
  local_78 = *(long *)(in_x0 + 0x40) != 0;
  local_74 = *(char *)(in_x0 + 0x9d);
  local_77 = lVar16 != 0;
  local_76 = 0.0 < *(float *)(in_x0 + 0x50);
  if (lVar25 == 0) {
    if (lVar16 == 0) goto LAB_009456b0;
    uVar9 = *(ushort *)(lVar16 + 0x48);
  }
  else {
    uVar9 = *(ushort *)(lVar25 + 0x48);
  }
  if ((uVar9 >> 2 & 1) != 0) {
    if (*(char *)(in_x0 + 0x9c) == '\0') {
      local_80 = 0x100;
    }
    else {
      local_80 = 1;
    }
  }
LAB_009456b0:
  lVar25 = 0;
  puVar26 = (undefined8 *)(in_x0 + 0xb8);
  *(undefined8 *)(in_x0 + 0xc0) = 0;
  *puVar26 = 0;
  *(undefined8 *)(in_x0 + 0x158) = 0;
  *(undefined8 *)(in_x0 + 0x140) = 0;
  *(undefined8 *)(in_x0 + 0x138) = 0;
  *(undefined8 *)(in_x0 + 0x150) = 0;
  *(undefined8 *)(in_x0 + 0x148) = 0;
  *(undefined8 *)(in_x0 + 0x120) = 0;
  *(undefined8 *)(in_x0 + 0x118) = 0;
  *(undefined8 *)(in_x0 + 0x130) = 0;
  *(undefined8 *)(in_x0 + 0x128) = 0;
  *(undefined8 *)(in_x0 + 0x100) = 0;
  *(undefined8 *)(in_x0 + 0xf8) = 0;
  *(undefined8 *)(in_x0 + 0x110) = 0;
  *(undefined8 *)(in_x0 + 0x108) = 0;
  *(undefined8 *)(in_x0 + 0xe0) = 0;
  *(undefined8 *)(in_x0 + 0xd8) = 0;
  *(undefined8 *)(in_x0 + 0xf0) = 0;
  *(undefined8 *)(in_x0 + 0xe8) = 0;
  *(undefined8 *)(in_x0 + 0xd0) = 0;
  *(undefined8 *)(in_x0 + 200) = 0;
  do {
    this = (RenderPathManager *)RenderPathManager::getInstance();
    pbVar13 = (byte *)RenderPathManager::getRenderPassMaterialAttributes(this,(uint)lVar25);
    lVar16 = 0;
    uVar18 = 0;
    bVar3 = *(byte *)(in_x0 + 0x9c);
    bVar4 = *pbVar13;
    lVar22 = *(long *)(in_x0 + 0x80);
    bVar11 = pbVar13[3] != 0 && local_74 != '\0';
    uVar17 = *(uint *)(in_x0 + 0x88);
    bVar5 = pbVar13[2];
    cVar6 = *(char *)(in_x0 + 0x9e);
    bVar7 = pbVar13[5];
    do {
      if (lVar22 == 0) {
        uVar28 = (ulong)local_70;
        if (uVar18 != 0) break;
joined_r0x009458a0:
        uVar19 = (uint)local_80._1_1_;
        uVar20 = (uint)(byte)local_80;
joined_r0x009458a0:
        if (uVar20 == bVar5) {
LAB_009458a4:
          bVar8 = pbVar13[4];
          if ((cVar6 == '\0') || (bVar8 == 0)) {
            uVar20 = (uint)local_7e;
            uVar14 = (ulong)local_75;
            uVar27 = (uint)local_78;
            iVar24 = local_7c;
            uVar23 = (uint)local_76;
            if ((bVar7 == 0) || (bVar8 != 0)) {
              uVar15 = 0;
              bVar12 = false;
              if (lVar22 != 0) goto LAB_009457b0;
              uVar14 = 0;
              uVar20 = 0;
              if (uVar19 != 0) {
                uVar20 = (uint)local_7e;
              }
              uVar23 = 0;
              uVar27 = 0;
              iVar24 = 0;
              uVar21 = 0;
              if (uVar19 != 0 && local_7e == 0) {
                uVar20 = 0;
                uVar21 = (uint)local_77;
              }
            }
            else {
              uVar15 = (uint)bVar4;
              uVar21 = (uint)local_77;
              bVar12 = bVar11;
              if ((lVar22 == 0 && bVar4 == 0) && pbVar13[1] == 0) {
                uVar27 = 0;
                iVar24 = 0;
LAB_009457b0:
                uVar15 = 0;
                uVar21 = (uint)local_77;
              }
            }
            uVar2 = 0x200;
            if (!bVar12) {
              uVar2 = 0;
            }
            puVar26[uVar18] =
                 (ulong)(uVar23 << 7) & 0x80 | uVar14 << 8 | (ulong)(uVar21 << 6) & 0xc0 |
                 (ulong)(uVar27 << 5) & 0xe0 | (ulong)(iVar24 << 3 | 0x2000) |
                 (ulong)((uint)bVar5 | uVar19 << 1 | uVar20 << 2) & 0xff |
                 (uVar28 << 0x20 | (ulong)bVar8 << 0xb | uVar2) + (ulong)uVar15 * 0x400;
          }
        }
      }
      else {
        if ((uint)((int)((ulong)(*(long *)(lVar22 + 0x30) - *(long *)(lVar22 + 0x28)) >> 3) *
                  0x38e38e39) <= uVar18) break;
        lVar1 = *(long *)(lVar22 + 0x28) + lVar16;
        iVar24 = *(int *)(lVar1 + 0x10);
        uVar28 = (ulong)*(uint *)(*(long *)(lVar1 + 8) + (ulong)uVar17 * 4);
        if (iVar24 != 2) {
          uVar19 = bVar3 ^ 1;
          uVar20 = (uint)bVar3;
          if (iVar24 != 1) goto joined_r0x009458a0;
          goto joined_r0x009458a0;
        }
        uVar19 = 0;
        if (bVar5 == 0) goto LAB_009458a4;
      }
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 0x48;
    } while (uVar18 != 3);
    lVar25 = lVar25 + 1;
    puVar26 = puVar26 + 3;
    if (lVar25 == 7) {
      if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


