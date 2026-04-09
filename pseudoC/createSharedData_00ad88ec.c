// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSharedData
// Entry Point: 00ad88ec
// Size: 1616 bytes
// Signature: undefined __cdecl createSharedData(VertexDeclarationDesc * param_1, uint param_2, Shared * param_3)


/* VulkanVertexDeclaration::createSharedData(VertexDeclarationDesc const&, unsigned int,
   VulkanVertexDeclaration::Shared&) */

void VulkanVertexDeclaration::createSharedData
               (VertexDeclarationDesc *param_1,uint param_2,Shared *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong local_48;
  ulong local_40;
  uint local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  long local_18;
  
  lVar5 = tpidr_el0;
  lVar7 = 0;
  uVar6 = 0;
  local_18 = *(long *)(lVar5 + 0x28);
  *(uint *)param_3 = param_2;
  uVar19 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  uVar21 = *(undefined8 *)(param_1 + 8);
  uVar20 = *(undefined8 *)param_1;
  *(undefined8 *)(param_3 + 0x17c) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_3 + 0x174) = uVar19;
  *(undefined8 *)(param_3 + 0x18c) = uVar18;
  *(undefined8 *)(param_3 + 0x184) = uVar17;
  *(undefined8 *)(param_3 + 0x16c) = uVar21;
  *(undefined8 *)(param_3 + 0x164) = uVar20;
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  uVar19 = *(undefined8 *)(param_1 + 0x68);
  uVar18 = *(undefined8 *)(param_1 + 0x60);
  uVar23 = *(undefined8 *)(param_1 + 0x38);
  uVar22 = *(undefined8 *)(param_1 + 0x30);
  uVar21 = *(undefined8 *)(param_1 + 0x48);
  uVar20 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_3 + 0x1bc) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_3 + 0x1b4) = uVar17;
  *(undefined8 *)(param_3 + 0x1cc) = uVar19;
  *(undefined8 *)(param_3 + 0x1c4) = uVar18;
  *(undefined8 *)(param_3 + 0x19c) = uVar23;
  *(undefined8 *)(param_3 + 0x194) = uVar22;
  *(undefined8 *)(param_3 + 0x1ac) = uVar21;
  *(undefined8 *)(param_3 + 0x1a4) = uVar20;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  do {
    uVar11 = *(uint *)(param_1 + lVar7 * 4 + 0x18);
    if (uVar11 != 0) {
      uVar1 = *(uint *)(param_1 + lVar7 * 4 + 0x44);
      iVar2 = (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[uVar11];
      uVar3 = *(undefined4 *)(ATTRIBUTE_FORMATS + (long)(int)uVar11 * 4);
      lVar16 = (ulong)uVar1 * 4;
      *(int *)(param_3 + (ulong)uVar6 * 0x10 + 0x74) = (int)lVar7;
      *(uint *)(param_3 + (ulong)uVar6 * 0x10 + 0x78) = uVar1;
      iVar4 = *(int *)((long)&local_30 + lVar16);
      *(undefined4 *)(param_3 + (ulong)uVar6 * 0x10 + 0x7c) = uVar3;
      *(int *)(param_3 + (ulong)uVar6 * 0x10 + 0x80) = iVar4;
      *(int *)((long)&local_30 + lVar16) = iVar2 + iVar4;
      uVar6 = uVar6 + 1;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0xb);
  if (uVar6 == 0) {
    uVar11 = 0;
    puVar9 = (uint *)0x0;
    uVar10 = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined4 *)(param_3 + 8) = 0x13;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x28) = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    *(undefined4 *)(param_3 + 0x124) = 0;
    goto LAB_00ad8bb8;
  }
  uVar11 = *(uint *)param_1;
  uVar10 = (ulong)uVar11;
  if (uVar11 != 0) {
    uVar8 = 0;
    piVar12 = (int *)(param_3 + 0x40);
    do {
      iVar2 = *(int *)((long)&local_30 + uVar8 * 4);
      piVar12[-2] = (int)uVar8;
      piVar12[-1] = iVar2;
      iVar2 = *(int *)(param_1 + uVar8 * 4 + 4);
      if ((iVar2 == 0) || (iVar2 == 1)) {
        *piVar12 = iVar2;
      }
      uVar8 = uVar8 + 1;
      piVar12 = piVar12 + 3;
    } while (uVar10 != uVar8);
  }
  uVar8 = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 8) = 0x13;
  puVar9 = (uint *)(param_3 + 0x74);
  *(Shared **)(param_3 + 0x20) = param_3 + 0x38;
  uVar13 = (ulong)uVar6;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(uint *)(param_3 + 0x1c) = uVar11;
  *(uint *)(param_3 + 0x28) = uVar6;
  *(uint **)(param_3 + 0x30) = puVar9;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (uVar6 < 2) {
LAB_00ad8afc:
    puVar15 = (uint *)(param_3 + uVar8 * 0x10 + 0x78);
    do {
      if (*puVar15 < 5) {
        *(int *)((long)&local_48 + (ulong)*puVar15 * 4) = (int)uVar8;
      }
      uVar8 = uVar8 + 1;
      puVar15 = puVar15 + 4;
    } while (uVar13 != uVar8);
  }
  else {
    uVar14 = 0;
    uVar8 = uVar13 & 0xfffffffe;
    puVar15 = (uint *)(param_3 + 0x88);
    do {
      if (puVar15[-4] < 5) {
        *(int *)((long)&local_48 + (ulong)puVar15[-4] * 4) = (int)uVar14;
      }
      if (*puVar15 < 5) {
        *(int *)((long)&local_48 + (ulong)*puVar15 * 4) = (int)uVar14 + 1;
      }
      uVar14 = uVar14 + 2;
      puVar15 = puVar15 + 8;
    } while (uVar8 != uVar14);
    if (uVar8 != uVar13) goto LAB_00ad8afc;
  }
  *(undefined4 *)(param_3 + 0x124) = 0;
  uVar11 = uVar6;
  if (uVar10 != 0) {
    lVar7 = 0;
    switch(puVar9[(local_48 & 0xffffffff) * 4 + 2]) {
    case 0:
      break;
    default:
      lVar7 = 0x10;
      break;
    case 0x25:
      lVar7 = 10;
      break;
    case 0x29:
      lVar7 = 7;
      break;
    case 0x4e:
      lVar7 = 8;
      break;
    case 0x52:
      lVar7 = 5;
      break;
    case 0x5c:
      lVar7 = 9;
      break;
    case 0x60:
      lVar7 = 6;
      break;
    case 0x62:
      lVar7 = 0xf;
      break;
    case 99:
      lVar7 = 0xb;
      break;
    case 100:
      lVar7 = 1;
      break;
    case 0x66:
      lVar7 = 0xc;
      break;
    case 0x67:
      lVar7 = 2;
      break;
    case 0x69:
      lVar7 = 0xd;
      break;
    case 0x6a:
      lVar7 = 3;
      break;
    case 0x6c:
      lVar7 = 0xe;
      break;
    case 0x6d:
      lVar7 = 4;
    }
    *(uint *)(param_3 + 0x124) =
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[lVar7] +
         puVar9[(local_48 & 0xffffffff) * 4 + 3];
  }
LAB_00ad8bb8:
  *(undefined4 *)(param_3 + 0x128) = 0;
  if (1 < uVar10) {
    lVar7 = 0;
    switch(puVar9[(local_48 >> 0x20) * 4 + 2]) {
    case 0:
      break;
    default:
      lVar7 = 0x10;
      break;
    case 0x25:
      lVar7 = 10;
      break;
    case 0x29:
      lVar7 = 7;
      break;
    case 0x4e:
      lVar7 = 8;
      break;
    case 0x52:
      lVar7 = 5;
      break;
    case 0x5c:
      lVar7 = 9;
      break;
    case 0x60:
      lVar7 = 6;
      break;
    case 0x62:
      lVar7 = 0xf;
      break;
    case 99:
      lVar7 = 0xb;
      break;
    case 100:
      lVar7 = 1;
      break;
    case 0x66:
      lVar7 = 0xc;
      break;
    case 0x67:
      lVar7 = 2;
      break;
    case 0x69:
      lVar7 = 0xd;
      break;
    case 0x6a:
      lVar7 = 3;
      break;
    case 0x6c:
      lVar7 = 0xe;
      break;
    case 0x6d:
      lVar7 = 4;
    }
    *(uint *)(param_3 + 0x128) =
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[lVar7] +
         puVar9[(local_48 >> 0x20) * 4 + 3];
  }
  *(undefined4 *)(param_3 + 300) = 0;
  if (2 < uVar10) {
    lVar7 = 0;
    switch(puVar9[(local_40 & 0xffffffff) * 4 + 2]) {
    case 0:
      break;
    default:
      lVar7 = 0x10;
      break;
    case 0x25:
      lVar7 = 10;
      break;
    case 0x29:
      lVar7 = 7;
      break;
    case 0x4e:
      lVar7 = 8;
      break;
    case 0x52:
      lVar7 = 5;
      break;
    case 0x5c:
      lVar7 = 9;
      break;
    case 0x60:
      lVar7 = 6;
      break;
    case 0x62:
      lVar7 = 0xf;
      break;
    case 99:
      lVar7 = 0xb;
      break;
    case 100:
      lVar7 = 1;
      break;
    case 0x66:
      lVar7 = 0xc;
      break;
    case 0x67:
      lVar7 = 2;
      break;
    case 0x69:
      lVar7 = 0xd;
      break;
    case 0x6a:
      lVar7 = 3;
      break;
    case 0x6c:
      lVar7 = 0xe;
      break;
    case 0x6d:
      lVar7 = 4;
    }
    *(uint *)(param_3 + 300) =
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[lVar7] +
         puVar9[(local_40 & 0xffffffff) * 4 + 3];
  }
  *(undefined4 *)(param_3 + 0x130) = 0;
  if (3 < uVar10) {
    lVar7 = 0;
    switch(puVar9[(local_40 >> 0x20) * 4 + 2]) {
    case 0:
      break;
    default:
      lVar7 = 0x10;
      break;
    case 0x25:
      lVar7 = 10;
      break;
    case 0x29:
      lVar7 = 7;
      break;
    case 0x4e:
      lVar7 = 8;
      break;
    case 0x52:
      lVar7 = 5;
      break;
    case 0x5c:
      lVar7 = 9;
      break;
    case 0x60:
      lVar7 = 6;
      break;
    case 0x62:
      lVar7 = 0xf;
      break;
    case 99:
      lVar7 = 0xb;
      break;
    case 100:
      lVar7 = 1;
      break;
    case 0x66:
      lVar7 = 0xc;
      break;
    case 0x67:
      lVar7 = 2;
      break;
    case 0x69:
      lVar7 = 0xd;
      break;
    case 0x6a:
      lVar7 = 3;
      break;
    case 0x6c:
      lVar7 = 0xe;
      break;
    case 0x6d:
      lVar7 = 4;
    }
    *(uint *)(param_3 + 0x130) =
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[lVar7] +
         puVar9[(local_40 >> 0x20) * 4 + 3];
  }
  *(undefined4 *)(param_3 + 0x134) = 0;
  if (4 < uVar10) {
    lVar7 = 0;
    switch(puVar9[(ulong)local_38 * 4 + 2]) {
    case 0:
      break;
    default:
      lVar7 = 0x10;
      break;
    case 0x25:
      lVar7 = 10;
      break;
    case 0x29:
      lVar7 = 7;
      break;
    case 0x4e:
      lVar7 = 8;
      break;
    case 0x52:
      lVar7 = 5;
      break;
    case 0x5c:
      lVar7 = 9;
      break;
    case 0x60:
      lVar7 = 6;
      break;
    case 0x62:
      lVar7 = 0xf;
      break;
    case 99:
      lVar7 = 0xb;
      break;
    case 100:
      lVar7 = 1;
      break;
    case 0x66:
      lVar7 = 0xc;
      break;
    case 0x67:
      lVar7 = 2;
      break;
    case 0x69:
      lVar7 = 0xd;
      break;
    case 0x6a:
      lVar7 = 3;
      break;
    case 0x6c:
      lVar7 = 0xe;
      break;
    case 0x6d:
      lVar7 = 4;
    }
    *(uint *)(param_3 + 0x134) =
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[lVar7] +
         puVar9[(ulong)local_38 * 4 + 3];
  }
  *(undefined8 *)(param_3 + 0x15c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x154) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x138) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x150) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x148) = 0xffffffffffffffff;
  if (uVar6 != 0) {
    uVar10 = 0;
    do {
      *(int *)(param_3 + (ulong)*puVar9 * 4 + 0x138) = (int)uVar10;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 4;
    } while (uVar11 != uVar10);
  }
  if (*(long *)(lVar5 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


